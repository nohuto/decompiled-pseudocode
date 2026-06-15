/*
 * XREFs of sub_14004CA9C @ 0x14004CA9C
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004CBD8 @ 0x14004CBD8 (sub_14004CBD8.c)
 *     sub_14004F88C @ 0x14004F88C (sub_14004F88C.c)
 */

__int64 __fastcall sub_14004CA9C(__int64 a1, __int64 a2)
{
  sub_14004CBD8();
  *(_QWORD *)a1 = off_1400BB698;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 40);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 56);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 72);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 88);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a2 + 104);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a2 + 120);
  *(_OWORD *)(a1 + 136) = *(_OWORD *)(a2 + 136);
  *(_OWORD *)(a1 + 152) = *(_OWORD *)(a2 + 152);
  *(_QWORD *)(a1 + 168) = *(_QWORD *)(a2 + 168);
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  sub_14004F88C(a1 + 176, *(_QWORD *)(a2 + 176), *(_QWORD *)(a2 + 184));
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  sub_14004F88C(a1 + 192, *(_QWORD *)(a2 + 192), *(_QWORD *)(a2 + 200));
  return a1;
}
