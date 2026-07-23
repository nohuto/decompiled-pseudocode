/*
 * XREFs of IopReplaceSeperatorWithPound @ 0x140AC51B4
 * Callers:
 *     PiDevCfgConfigureDeviceLocation @ 0x140B3B5D0 (PiDevCfgConfigureDeviceLocation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopReplaceSeperatorWithPound(__int64 a1, __int64 a2)
{
  __int16 v3; // ax
  __int16 *v4; // r10
  __int16 *i; // r9
  __int16 v6; // cx

  if ( *(_WORD *)a2 > *(_WORD *)(a1 + 2) )
    return 3221225507LL;
  v3 = *(_WORD *)a2 >> 1;
  v4 = *(__int16 **)(a2 + 8);
  for ( i = *(__int16 **)(a1 + 8); v3; ++i )
  {
    --v3;
    v6 = *v4;
    if ( *v4 == 92 || v6 == 47 )
      v6 = 35;
    *i = v6;
    ++v4;
  }
  *(_WORD *)a1 = *(_WORD *)a2;
  return 0LL;
}
