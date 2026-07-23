/*
 * XREFs of VfUtilGetDriverFullName @ 0x140C27770
 * Callers:
 *     CarEtwWriteBugCheckEvent @ 0x14064C808 (CarEtwWriteBugCheckEvent.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140C4CB68 (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfUtilGetDriverFullName(__int64 a1)
{
  __int64 result; // rax

  result = VfTargetDriversGetVerifierData(a1);
  if ( result )
    return *(_QWORD *)(*(_QWORD *)result + 32LL);
  return result;
}
