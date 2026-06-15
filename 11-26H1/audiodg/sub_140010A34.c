/*
 * XREFs of sub_140010A34 @ 0x140010A34
 * Callers:
 *     sub_1400105C8 @ 0x1400105C8 (sub_1400105C8.c)
 * Callees:
 *     sub_14001191C @ 0x14001191C (sub_14001191C.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_140010A34(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // esi
  __int64 v9; // rdx

  v5 = a3;
  if ( !*(_QWORD *)a1 )
  {
    LOBYTE(a3) = 1;
    if ( !(unsigned __int8)sub_14001191C(a1, *(unsigned int *)(a1 + 16), a3) )
      sub_14004639C(2147942414LL, v9);
  }
  return sub_140010AA0(a1, a2, v5, a4);
}
