/*
 * XREFs of VfIrpAllocateCallDriverData @ 0x140C32580
 * Callers:
 *     IovCallDriver @ 0x1404ECCDC (IovCallDriver.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14030C430 (ExAllocateFromNPagedLookasideList.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IovpCheckIrpForCriticalTracking @ 0x140C31B4C (IovpCheckIrpForCriticalTracking.c)
 */

__int64 __fastcall VfIrpAllocateCallDriverData(__int64 a1, _QWORD *a2)
{
  PVOID v4; // rax
  unsigned int v5; // ebx

  v4 = ExAllocateFromNPagedLookasideList(&ViIrpCallDriverDataList);
  *a2 = v4;
  v5 = 0;
  if ( v4 )
  {
    memset_0(v4, 0, 0xD8uLL);
    return 1LL;
  }
  else
  {
    LOBYTE(v5) = (unsigned int)IovpCheckIrpForCriticalTracking(a1) == 0;
    return v5;
  }
}
