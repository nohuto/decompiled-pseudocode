/*
 * XREFs of sub_180031890 @ 0x180031890
 * Callers:
 *     sub_180054CC8 @ 0x180054CC8 (sub_180054CC8.c)
 *     sub_180054CD4 @ 0x180054CD4 (sub_180054CD4.c)
 *     sub_1800D9952 @ 0x1800D9952 (sub_1800D9952.c)
 *     sub_1800D9A65 @ 0x1800D9A65 (sub_1800D9A65.c)
 *     sub_1800D9A7E @ 0x1800D9A7E (sub_1800D9A7E.c)
 *     sub_1800D9C23 @ 0x1800D9C23 (sub_1800D9C23.c)
 *     sub_1800D9D36 @ 0x1800D9D36 (sub_1800D9D36.c)
 *     sub_1800D9D4F @ 0x1800D9D4F (sub_1800D9D4F.c)
 *     sub_1800DA1A7 @ 0x1800DA1A7 (sub_1800DA1A7.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180011964 @ 0x180011964 (sub_180011964.c)
 */

__int64 __fastcall sub_180031890(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_180011964((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_18000E26C(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
