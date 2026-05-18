/*
 * XREFs of sub_180052904 @ 0x180052904
 * Callers:
 *     sub_1800534C8 @ 0x1800534C8 (sub_1800534C8.c)
 *     sub_180053894 @ 0x180053894 (sub_180053894.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 */

void **__fastcall sub_180052904(void **a1, void **a2)
{
  void *v2; // rax
  void *v4; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    sub_18000C444(v4);
  return a1;
}
