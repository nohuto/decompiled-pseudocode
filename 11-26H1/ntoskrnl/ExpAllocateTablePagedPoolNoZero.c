/*
 * XREFs of ExpAllocateTablePagedPoolNoZero @ 0x140972798
 * Callers:
 *     ExpAllocateTablePagedPool @ 0x14092AF6C (ExpAllocateTablePagedPool.c)
 *     ExpAllocateLowLevelTable @ 0x140972760 (ExpAllocateLowLevelTable.c)
 * Callees:
 *     PsChargeProcessPagedPoolQuota @ 0x140972810 (PsChargeProcessPagedPoolQuota.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void *__fastcall ExpAllocateTablePagedPoolNoZero(__int64 a1, __int64 a2)
{
  void *Pool2; // rbx

  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( Pool2 && a1 && (int)PsChargeProcessPagedPoolQuota(a1, a2) < 0 )
  {
    ExFreePoolWithTag(Pool2, 0x6274624Fu);
    return 0LL;
  }
  return Pool2;
}
