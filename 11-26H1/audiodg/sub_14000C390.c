/*
 * XREFs of sub_14000C390 @ 0x14000C390
 * Callers:
 *     sub_140012538 @ 0x140012538 (sub_140012538.c)
 *     sub_140012604 @ 0x140012604 (sub_140012604.c)
 *     sub_140012AD4 @ 0x140012AD4 (sub_140012AD4.c)
 *     sub_140036F58 @ 0x140036F58 (sub_140036F58.c)
 *     sub_14005BF10 @ 0x14005BF10 (sub_14005BF10.c)
 *     sub_14005C2EC @ 0x14005C2EC (sub_14005C2EC.c)
 *     sub_140061228 @ 0x140061228 (sub_140061228.c)
 *     sub_140062720 @ 0x140062720 (sub_140062720.c)
 * Callees:
 *     sub_14000DEF8 @ 0x14000DEF8 (sub_14000DEF8.c)
 */

__int64 __fastcall sub_14000C390(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 64) = 0LL;
  if ( *(_QWORD *)(a1 + 56) )
  {
    result = sub_14000DEF8();
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
