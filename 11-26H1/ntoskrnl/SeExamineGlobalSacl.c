/*
 * XREFs of SeExamineGlobalSacl @ 0x140A61298
 * Callers:
 *     CmpExamineSaclForAuditEvent @ 0x14086135C (CmpExamineSaclForAuditEvent.c)
 *     ObpCheckObjectReference @ 0x1408F4DF4 (ObpCheckObjectReference.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x140A61470 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x140B0BB70 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140B67B6C (SeAdtRegistryValueChangedAuditAlarm.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     RtlCompareUnicodeStrings @ 0x140943110 (RtlCompareUnicodeStrings.c)
 *     SeExamineSacl @ 0x140A60F70 (SeExamineSacl.c)
 */

void __stdcall SeExamineGlobalSacl(
        PUNICODE_STRING ObjectType,
        PACL ResourceSacl,
        PACCESS_TOKEN Token,
        ACCESS_MASK DesiredAccess,
        BOOLEAN AccessGranted,
        PBOOLEAN GenerateAudit,
        PBOOLEAN GenerateAlarm)
{
  PBOOLEAN v7; // rsi
  BOOLEAN v8; // bl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rdi
  ACL *v15; // rcx
  char v16; // al
  BOOLEAN v17[16]; // [rsp+40h] [rbp-28h] BYREF

  v7 = GenerateAudit;
  v8 = 0;
  if ( GenerateAudit && !*GenerateAudit )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)&RtlpBootStatHandleLock.KernelWaitTime, 1u);
    v14 = SepRmGlobalSaclHead;
    if ( SepRmGlobalSaclHead )
    {
      while ( v14 )
      {
        if ( !RtlCompareUnicodeStrings(
                ObjectType->Buffer,
                (unsigned __int64)ObjectType->Length >> 1,
                *(PCWCH *)(v14 + 16),
                (unsigned __int64)*(unsigned __int16 *)(v14 + 8) >> 1,
                0) )
        {
          v15 = *(ACL **)(v14 + 24);
          if ( v15 )
          {
            LOBYTE(GenerateAudit) = 0;
            v17[0] = 0;
            SeExamineSacl(v15, ResourceSacl, Token, DesiredAccess, AccessGranted, (PBOOLEAN)&GenerateAudit, v17);
            if ( *v7 || (v16 = 0, (_BYTE)GenerateAudit) )
              v16 = 1;
            *v7 = v16;
            if ( GenerateAlarm )
            {
              if ( *GenerateAlarm || v17[0] )
                v8 = 1;
              *GenerateAlarm = v8;
            }
          }
          break;
        }
        v14 = *(_QWORD *)v14;
      }
    }
    ExReleaseResourceLite((PERESOURCE)&RtlpBootStatHandleLock.KernelWaitTime);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
}
