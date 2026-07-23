/*
 * XREFs of HvpViewMapAcquireChargesAndLockViewPages @ 0x1408BE42C
 * Callers:
 *     HvpViewMapMakeViewRangeValid @ 0x1408BFC18 (HvpViewMapMakeViewRangeValid.c)
 * Callees:
 *     CmSiAcquireProcessLockedPagesCharge @ 0x1403C6098 (CmSiAcquireProcessLockedPagesCharge.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1403C619C (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiLockViewOfSection @ 0x1404CAE58 (CmSiLockViewOfSection.c)
 */

__int64 __fastcall HvpViewMapAcquireChargesAndLockViewPages(__int64 a1, void **a2, void *a3, ULONG_PTR a4)
{
  ULONG_PTR v7; // rcx
  int locked; // ebx

  locked = CmSiAcquireProcessLockedPagesCharge((__int64)a2, a4);
  if ( locked >= 0 )
  {
    locked = CmSiLockViewOfSection(v7, a2, a3, a4);
    if ( locked < 0 )
      CmSiReleaseProcessLockedPagesCharge((__int64)a2, a4);
    else
      return 0;
  }
  return (unsigned int)locked;
}
