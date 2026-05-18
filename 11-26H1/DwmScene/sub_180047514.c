/*
 * XREFs of sub_180047514 @ 0x180047514
 * Callers:
 *     sub_180047120 @ 0x180047120 (sub_180047120.c)
 * Callees:
 *     sub_18004609C @ 0x18004609C (sub_18004609C.c)
 */

_QWORD *__fastcall sub_180047514(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 160);
  if ( v3 )
  {
    sub_18004609C(v3, a2, a3);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}
