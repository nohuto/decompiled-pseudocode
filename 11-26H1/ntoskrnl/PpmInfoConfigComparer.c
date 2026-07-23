/*
 * XREFs of PpmInfoConfigComparer @ 0x140CD8E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmInfoConfigComparer(_BYTE *a1, _BYTE *a2)
{
  unsigned __int8 v2; // r8
  unsigned __int8 v3; // dl

  v2 = a2[36];
  v3 = a1[36];
  if ( v3 >= v2 )
    return v3 > v2;
  else
    return 0xFFFFFFFFLL;
}
