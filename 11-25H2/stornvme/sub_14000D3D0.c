/*
 * XREFs of sub_14000D3D0 @ 0x14000D3D0
 * Callers:
 *     sub_14001EBFC @ 0x14001EBFC (sub_14001EBFC.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14000D3D0(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdx

  v3 = a1 % a2;
  if ( v3 )
    return a2 - v3 + a1;
  else
    return a1;
}
