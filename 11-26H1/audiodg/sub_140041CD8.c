/*
 * XREFs of sub_140041CD8 @ 0x140041CD8
 * Callers:
 *     sub_1400B48E0 @ 0x1400B48E0 (sub_1400B48E0.c)
 * Callees:
 *     sub_140045560 @ 0x140045560 (sub_140045560.c)
 *     sub_1400471D8 @ 0x1400471D8 (sub_1400471D8.c)
 *     sub_140048238 @ 0x140048238 (sub_140048238.c)
 *     sub_14004DB08 @ 0x14004DB08 (sub_14004DB08.c)
 */

__int64 __fastcall sub_140041CD8(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_DWORD *)a1 = 0;
  sub_1400471D8(a1 + 16, 0LL);
  sub_140045560(a1);
  sub_140048238(a1 + 104);
  sub_140048238(a1 + 96);
  v2 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 88) = 0LL;
  if ( v2 )
    sub_14004DB08();
  v3 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = 0LL;
  if ( v3 )
    sub_14004DB08();
  return sub_1400481F8(a1 + 16);
}
