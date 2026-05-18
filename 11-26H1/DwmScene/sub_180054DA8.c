/*
 * XREFs of sub_180054DA8 @ 0x180054DA8
 * Callers:
 *     sub_1800199F0 @ 0x1800199F0 (sub_1800199F0.c)
 *     sub_180032AD4 @ 0x180032AD4 (sub_180032AD4.c)
 * Callees:
 *     sub_180054E00 @ 0x180054E00 (sub_180054E00.c)
 */

__int64 __fastcall sub_180054DA8(int a1, __int64 a2)
{
  return sub_180054E00(
           a1,
           a2,
           _mm_unpacklo_ps(
             (__m128)*(unsigned int *)(*(_QWORD *)a2 + 344LL),
             (__m128)*(unsigned int *)(*(_QWORD *)a2 + 348LL)).m128_u32[0],
           _mm_unpacklo_ps(
             (__m128)*(unsigned int *)(*(_QWORD *)a2 + 352LL),
             (__m128)*(unsigned int *)(*(_QWORD *)a2 + 356LL)).m128_u32[0],
           *(_DWORD *)(*(_QWORD *)a2 + 360LL));
}
