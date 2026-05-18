/*
 * XREFs of sub_1800540E4 @ 0x1800540E4
 * Callers:
 *     sub_180053C4C @ 0x180053C4C (sub_180053C4C.c)
 *     sub_180054120 @ 0x180054120 (sub_180054120.c)
 *     sub_1800C3100 @ 0x1800C3100 (sub_1800C3100.c)
 *     sub_1800C31E8 @ 0x1800C31E8 (sub_1800C31E8.c)
 *     sub_1800C4AB0 @ 0x1800C4AB0 (sub_1800C4AB0.c)
 * Callees:
 *     sub_18004744C @ 0x18004744C (sub_18004744C.c)
 */

__int64 __fastcall sub_1800540E4(int a1)
{
  int v1; // eax
  int v2; // r10d
  int v4; // eax
  int v5; // r10d

  if ( a1 == 23 || a1 == 24 )
  {
    v4 = sub_18004744C(a1);
    return ((v5 + 1) & 0xFFFFFFFE) * v4;
  }
  else
  {
    v1 = sub_18004744C(a1);
    return (unsigned int)(v2 * v1);
  }
}
