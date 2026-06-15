/*
 * XREFs of sub_140075398 @ 0x140075398
 * Callers:
 *     sub_140075450 @ 0x140075450 (sub_140075450.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140075398(_DWORD *a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v3; // r9

  v3 = a3 * (unsigned __int64)a2;
  if ( v3 > 0xFFFFFFFF )
    return 2147942487LL;
  *a1 = v3;
  return 0LL;
}
