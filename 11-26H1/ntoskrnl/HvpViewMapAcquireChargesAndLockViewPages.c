/*
 * XREFs of HvpViewMapAcquireChargesAndLockViewPages @ 0x1408B7E5C
 * Callers:
 *     HvpViewMapMakeViewRangeValid @ 0x1408B9648 (HvpViewMapMakeViewRangeValid.c)
 * Callees:
 *     CmSiAcquireProcessLockedPagesCharge @ 0x1403BC228 (CmSiAcquireProcessLockedPagesCharge.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1403BC32C (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiLockViewOfSection @ 0x1404D1428 (CmSiLockViewOfSection.c)
 */

__int64 __fastcall HvpViewMapAcquireChargesAndLockViewPages(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rcx
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
