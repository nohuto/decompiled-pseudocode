/*
 * XREFs of RtlpDynamicLookasideBucketCompare @ 0x140478770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpDynamicLookasideBucketCompare(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ecx

  v2 = a1[1];
  v3 = a2[1];
  if ( v3 < v2 )
    return 0xFFFFFFFFLL;
  else
    return v2 < v3;
}
