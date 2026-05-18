/*
 * XREFs of sub_18002AE20 @ 0x18002AE20
 * Callers:
 *     sub_18002C03C @ 0x18002C03C (sub_18002C03C.c)
 *     sub_180030A38 @ 0x180030A38 (sub_180030A38.c)
 *     sub_180030CF0 @ 0x180030CF0 (sub_180030CF0.c)
 *     sub_180036258 @ 0x180036258 (sub_180036258.c)
 *     sub_18004CEF4 @ 0x18004CEF4 (sub_18004CEF4.c)
 *     sub_18005C9D8 @ 0x18005C9D8 (sub_18005C9D8.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 */

__int64 *__fastcall sub_18002AE20(__int64 *a1)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = sub_180011790(0x48uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *a1 = v2;
  return a1;
}
