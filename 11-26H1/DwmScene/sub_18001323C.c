/*
 * XREFs of sub_18001323C @ 0x18001323C
 * Callers:
 *     sub_180012F84 @ 0x180012F84 (sub_180012F84.c)
 *     sub_180012FA4 @ 0x180012FA4 (sub_180012FA4.c)
 *     sub_180012FD0 @ 0x180012FD0 (sub_180012FD0.c)
 *     sub_18001E17C @ 0x18001E17C (sub_18001E17C.c)
 *     sub_180085530 @ 0x180085530 (sub_180085530.c)
 * Callees:
 *     sub_180012970 @ 0x180012970 (sub_180012970.c)
 */

__int64 __fastcall sub_18001323C(unsigned __int64 a1)
{
  if ( a1 > 0x7FFFFFFFFFFFFFFFLL )
    sub_180012970();
  return 2 * a1;
}
