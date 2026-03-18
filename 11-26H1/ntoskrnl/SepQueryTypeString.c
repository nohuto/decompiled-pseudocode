/*
 * XREFs of SepQueryTypeString @ 0x1409F95CC
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14092F570 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409F8930 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1409F8EF4 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1409F966C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x140B4FC88 (SepAdtObjectReferenceAuditAlarm.c)
 * Callees:
 *     ObQueryTypeName @ 0x1409F8E50 (ObQueryTypeName.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepQueryTypeString(__int64 a1, PVOID *a2)
{
  __int64 result; // rax
  __int64 Pool2; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v7; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v7 = 0;
  v6 = 0LL;
  result = ObQueryTypeName(a1, (__int64)&v6, 0, &v7);
  if ( (_DWORD)result == -1073741820 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    *a2 = (PVOID)Pool2;
    if ( Pool2 )
    {
      result = ObQueryTypeName(a1, Pool2, v7, &v7);
      if ( (int)result < 0 )
      {
        ExFreePoolWithTag(*a2, 0);
        result = 0LL;
        *a2 = 0LL;
      }
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
