/*
 * XREFs of VfUtilGetDriverFullName @ 0x140B732B0
 * Callers:
 *     CarEtwWriteBugCheckEvent @ 0x140609B98 (CarEtwWriteBugCheckEvent.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140B97E9C (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfUtilGetDriverFullName(__int64 a1)
{
  __int64 result; // rax

  result = VfTargetDriversGetVerifierData(a1);
  if ( result )
    return *(_QWORD *)(*(_QWORD *)result + 32LL);
  return result;
}
