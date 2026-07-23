/*
 * XREFs of RtlpFcCompareUpdates @ 0x140B278D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcCompareUpdates(_DWORD *a1, _DWORD *a2)
{
  int v2; // edx
  int v3; // ecx

  if ( *a1 > *a2 )
    return 1LL;
  if ( *a1 < *a2 )
    return 0xFFFFFFFFLL;
  v2 = a2[1];
  v3 = a1[1];
  if ( v3 < v2 )
    return 1LL;
  return (unsigned int)(v3 <= v2) - 1;
}
