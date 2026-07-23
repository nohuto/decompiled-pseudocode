/*
 * XREFs of RtlpFcCompareFeatureToUpdate @ 0x140B1BE00
 * Callers:
 *     RtlpFcUpdateFeatureConfiguration @ 0x140B1BA58 (RtlpFcUpdateFeatureConfiguration.c)
 *     RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x140B1BCBC (RtlpFcCalculateRequiredSizeForNewFeatureTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcCompareFeatureToUpdate(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // edx
  unsigned int v3; // eax

  if ( *a1 < *a2 )
    return 0xFFFFFFFFLL;
  if ( *a1 > *a2 )
    return 1LL;
  v2 = a2[1];
  v3 = a1[1] & 0xF;
  if ( v2 > v3 )
    return 1LL;
  return (unsigned int)-(v2 < v3);
}
