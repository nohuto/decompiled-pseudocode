/*
 * XREFs of RtlFcpCompareFeatureIdToFeature @ 0x140A7EBE0
 * Callers:
 *     RtlpFcIsGovernedFeatureTableUpdateNeeded @ 0x140809FE8 (RtlpFcIsGovernedFeatureTableUpdateNeeded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFcpCompareFeatureIdToFeature(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 <= *a2 )
    return (unsigned int)-(*a1 < *a2);
  else
    return 1LL;
}
