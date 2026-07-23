/*
 * XREFs of PfVolumeSupportedForPrefetch @ 0x1404F74D0
 * Callers:
 *     PfpVolumeOpenAndVerify @ 0x1409809C8 (PfpVolumeOpenAndVerify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfVolumeSupportedForPrefetch(_DWORD *a1)
{
  unsigned int v2; // eax

  if ( *a1 != 7 && *a1 != 8 )
    return 1LL;
  v2 = a1[1];
  if ( (v2 & 0x10) != 0 )
    return 2LL;
  if ( (v2 & 1) != 0 )
    return 3LL;
  return ~(unsigned __int8)(v2 >> 3) & 4;
}
