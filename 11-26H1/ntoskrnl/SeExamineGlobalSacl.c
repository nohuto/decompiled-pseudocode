/*
 * XREFs of SeExamineGlobalSacl @ 0x1409F8758
 * Callers:
 *     CmpExamineSaclForAuditEvent @ 0x14085B068 (CmpExamineSaclForAuditEvent.c)
 *     ObpCheckObjectReference @ 0x1408EE834 (ObpCheckObjectReference.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409F8930 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x140B09DB0 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140B64ACC (SeAdtRegistryValueChangedAuditAlarm.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     RtlCompareUnicodeStrings @ 0x140981100 (RtlCompareUnicodeStrings.c)
 *     SeExamineSacl @ 0x1409F8430 (SeExamineSacl.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  ACL *v17; // rcx
  char v18; // al
  BOOLEAN v19[16]; // [rsp+40h] [rbp-28h] BYREF

  v7 = GenerateAudit;
  v8 = 0;
  if ( GenerateAudit && !*GenerateAudit )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&SepRmGlobalSaclLock, 1u);
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
          v17 = *(ACL **)(v14 + 24);
          if ( v17 )
          {
            LOBYTE(GenerateAudit) = 0;
            v19[0] = 0;
            SeExamineSacl(v17, ResourceSacl, Token, DesiredAccess, AccessGranted, (PBOOLEAN)&GenerateAudit, v19);
            if ( *v7 || (v18 = 0, (_BYTE)GenerateAudit) )
              v18 = 1;
            *v7 = v18;
            if ( GenerateAlarm )
            {
              if ( *GenerateAlarm || v19[0] )
                v8 = 1;
              *GenerateAlarm = v8;
            }
          }
          break;
        }
        v14 = *(_QWORD *)v14;
      }
    }
    ExReleaseResourceLite(&SepRmGlobalSaclLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v15, v16);
  }
}
