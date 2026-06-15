/*
 * XREFs of sub_140011CD4 @ 0x140011CD4
 * Callers:
 *     sub_140011C48 @ 0x140011C48 (sub_140011C48.c)
 * Callees:
 *     sub_140011E48 @ 0x140011E48 (sub_140011E48.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_140011CD4(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // esi
  __int64 v9; // rdx

  v5 = a3;
  if ( !*(_QWORD *)a1 )
  {
    LOBYTE(a3) = 1;
    if ( !(unsigned __int8)sub_140011E48(a1, *(unsigned int *)(a1 + 16), a3) )
      sub_14004639C(2147942414LL, v9);
  }
  return sub_140011D40(a1, a2, v5, a4);
}
