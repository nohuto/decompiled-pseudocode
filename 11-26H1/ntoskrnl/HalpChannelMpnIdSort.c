/*
 * XREFs of HalpChannelMpnIdSort @ 0x140CBB090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpChannelMpnIdSort(_WORD *a1, _WORD *a2)
{
  unsigned __int16 v2; // r8
  unsigned __int16 v3; // dx

  v2 = a2[4];
  v3 = a1[4];
  if ( v3 >= v2 )
    return v3 > v2;
  else
    return 0xFFFFFFFFLL;
}
