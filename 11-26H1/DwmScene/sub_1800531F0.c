/*
 * XREFs of sub_1800531F0 @ 0x1800531F0
 * Callers:
 *     sub_18005325C @ 0x18005325C (sub_18005325C.c)
 *     sub_180053314 @ 0x180053314 (sub_180053314.c)
 *     sub_1800534C8 @ 0x1800534C8 (sub_1800534C8.c)
 *     sub_180053894 @ 0x180053894 (sub_180053894.c)
 *     sub_1800C25BC @ 0x1800C25BC (sub_1800C25BC.c)
 *     sub_1800C26E0 @ 0x1800C26E0 (sub_1800C26E0.c)
 *     sub_1800C37E0 @ 0x1800C37E0 (sub_1800C37E0.c)
 *     sub_1800E4CB3 @ 0x1800E4CB3 (sub_1800E4CB3.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 */

__int64 __fastcall sub_1800531F0(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18000C444(v1);
  return result;
}
