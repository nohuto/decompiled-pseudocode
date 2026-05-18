/*
 * XREFs of sub_18003C8A4 @ 0x18003C8A4
 * Callers:
 *     sub_18003A5B8 @ 0x18003A5B8 (sub_18003A5B8.c)
 *     sub_180041DF0 @ 0x180041DF0 (sub_180041DF0.c)
 *     sub_180048938 @ 0x180048938 (sub_180048938.c)
 *     sub_1800494AC @ 0x1800494AC (sub_1800494AC.c)
 *     sub_18004ABA0 @ 0x18004ABA0 (sub_18004ABA0.c)
 *     sub_180063230 @ 0x180063230 (sub_180063230.c)
 *     sub_1800648C4 @ 0x1800648C4 (sub_1800648C4.c)
 * Callees:
 *     sub_18003D758 @ 0x18003D758 (sub_18003D758.c)
 */

__int64 __fastcall sub_18003C8A4(__int64 a1, char a2, char a3)
{
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rdx

  sub_18003D758();
  v6 = *(_QWORD *)(a1 + 448);
  result = 1LL << a2;
  if ( a3 )
  {
    v8 = result | v6;
  }
  else
  {
    result = ~result;
    v8 = result & v6;
  }
  *(_QWORD *)(a1 + 448) = v8;
  return result;
}
