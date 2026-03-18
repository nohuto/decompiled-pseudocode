/*
 * XREFs of VfIrpAllocateCallDriverData @ 0x140B7DEC0
 * Callers:
 *     IovCallDriver @ 0x140B97D60 (IovCallDriver.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1403746E0 (ExAllocateFromNPagedLookasideList.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     IovpCheckIrpForCriticalTracking @ 0x140B7D554 (IovpCheckIrpForCriticalTracking.c)
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
    memset_0(v4, 0, 0xC0uLL);
    return 1LL;
  }
  else
  {
    LOBYTE(v5) = (unsigned int)IovpCheckIrpForCriticalTracking(a1) == 0;
    return v5;
  }
}
