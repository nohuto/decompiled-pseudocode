/*
 * XREFs of sub_18002B2F8 @ 0x18002B2F8
 * Callers:
 *     sub_18002A334 @ 0x18002A334 (sub_18002A334.c)
 *     sub_180056128 @ 0x180056128 (sub_180056128.c)
 *     sub_180056FDC @ 0x180056FDC (sub_180056FDC.c)
 *     sub_18005700C @ 0x18005700C (sub_18005700C.c)
 *     sub_180099F44 @ 0x180099F44 (sub_180099F44.c)
 *     sub_1800D92F8 @ 0x1800D92F8 (sub_1800D92F8.c)
 *     sub_1800DBD99 @ 0x1800DBD99 (sub_1800DBD99.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_18002B2F8(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_18000E26C(v1, 0x58uLL);
  return result;
}
