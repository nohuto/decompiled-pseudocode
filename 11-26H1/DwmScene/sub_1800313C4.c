/*
 * XREFs of sub_1800313C4 @ 0x1800313C4
 * Callers:
 *     sub_18002F640 @ 0x18002F640 (sub_18002F640.c)
 *     sub_18005BF04 @ 0x18005BF04 (sub_18005BF04.c)
 *     sub_18005CD48 @ 0x18005CD48 (sub_18005CD48.c)
 *     sub_180060C84 @ 0x180060C84 (sub_180060C84.c)
 *     sub_1800BEF90 @ 0x1800BEF90 (sub_1800BEF90.c)
 *     sub_1800CFB6C @ 0x1800CFB6C (sub_1800CFB6C.c)
 *     sub_1800D9649 @ 0x1800D9649 (sub_1800D9649.c)
 *     sub_1800DC078 @ 0x1800DC078 (sub_1800DC078.c)
 *     sub_1800DC08A @ 0x1800DC08A (sub_1800DC08A.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_1800313C4(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_18000E26C(v1, 0x30uLL);
  return result;
}
