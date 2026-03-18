/*
 * XREFs of VfUtilGetDriverName @ 0x140C21800
 * Callers:
 *     <none>
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140C46B58 (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfUtilGetDriverName(__int64 a1)
{
  __int64 result; // rax

  result = VfTargetDriversGetVerifierData(a1);
  if ( result )
    return *(_QWORD *)(*(_QWORD *)result + 48LL);
  return result;
}
