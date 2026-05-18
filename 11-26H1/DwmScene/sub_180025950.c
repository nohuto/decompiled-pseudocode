/*
 * XREFs of sub_180025950 @ 0x180025950
 * Callers:
 *     sub_1800259D4 @ 0x1800259D4 (sub_1800259D4.c)
 *     sub_1800315AC @ 0x1800315AC (sub_1800315AC.c)
 *     sub_18004D238 @ 0x18004D238 (sub_18004D238.c)
 *     sub_18004D268 @ 0x18004D268 (sub_18004D268.c)
 *     sub_18005BFE4 @ 0x18005BFE4 (sub_18005BFE4.c)
 *     sub_1800D8F05 @ 0x1800D8F05 (sub_1800D8F05.c)
 *     sub_1800D965B @ 0x1800D965B (sub_1800D965B.c)
 *     sub_1800DC0AE @ 0x1800DC0AE (sub_1800DC0AE.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_180025950(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_18000E26C(v1, 0x40uLL);
  return result;
}
