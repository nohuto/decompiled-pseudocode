/*
 * XREFs of SeMaximumAuditMaskFromGlobalSacl @ 0x140AB75F8
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14090B0A0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140A6173C (SeSecurityDescriptorChangedAuditAlarm.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     SepRmAcquireGlobalSaclReadLock @ 0x1403107C4 (SepRmAcquireGlobalSaclReadLock.c)
 *     SeMaximumAuditMask @ 0x14049F4D4 (SeMaximumAuditMask.c)
 *     RtlCompareUnicodeStrings @ 0x140943110 (RtlCompareUnicodeStrings.c)
 */

void __stdcall SeMaximumAuditMaskFromGlobalSacl(
        PUNICODE_STRING ObjectTypeName,
        ACCESS_MASK GrantedAccess,
        PACCESS_TOKEN Token,
        PACCESS_MASK AuditMask)
{
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // [rsp+50h] [rbp+8h] BYREF

  if ( ObjectTypeName && ObjectTypeName->Buffer )
  {
    SepRmAcquireGlobalSaclReadLock();
    v8 = SepRmGlobalSaclHead;
    if ( SepRmGlobalSaclHead )
    {
      while ( v8 )
      {
        if ( !RtlCompareUnicodeStrings(
                ObjectTypeName->Buffer,
                (unsigned __int64)ObjectTypeName->Length >> 1,
                *(PCWCH *)(v8 + 16),
                (unsigned __int64)*(unsigned __int16 *)(v8 + 8) >> 1,
                0) )
        {
          v9 = *(_QWORD *)(v8 + 24);
          v10 = 0;
          SeMaximumAuditMask(v9, GrantedAccess, (__int64)Token, &v10);
          *AuditMask |= v10;
          break;
        }
        v8 = *(_QWORD *)v8;
      }
    }
    ExReleaseResourceLite((PERESOURCE)&RtlpBootStatHandleLock.KernelWaitTime);
    KeLeaveCriticalRegion();
  }
}
