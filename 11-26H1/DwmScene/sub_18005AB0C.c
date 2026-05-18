/*
 * XREFs of sub_18005AB0C @ 0x18005AB0C
 * Callers:
 *     sub_1800199F0 @ 0x1800199F0 (sub_1800199F0.c)
 *     sub_1800553F4 @ 0x1800553F4 (sub_1800553F4.c)
 * Callees:
 *     sub_18005A910 @ 0x18005A910 (sub_18005A910.c)
 */

void __fastcall sub_18005AB0C(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  if ( (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*(unsigned __int64 *)(a1 + 344), (__m128)a2)) & 3) != 3
    || (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*(unsigned __int64 *)(a1 + 352), (__m128)a3)) & 3) != 3
    || a4 != *(_DWORD *)(a1 + 360) )
  {
    *(_QWORD *)(a1 + 344) = a2;
    *(_QWORD *)(a1 + 352) = a3;
    *(_DWORD *)(a1 + 360) = a4;
    sub_18005A910(a1, 4);
  }
}
