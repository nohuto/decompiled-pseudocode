/*
 * XREFs of sub_1400BD6D8 @ 0x1400BD6D8
 * Callers:
 *     sub_1400BC9C0 @ 0x1400BC9C0 (sub_1400BC9C0.c)
 *     sub_1400ECCD0 @ 0x1400ECCD0 (sub_1400ECCD0.c)
 *     sub_140123DD0 @ 0x140123DD0 (sub_140123DD0.c)
 *     sub_1401251CC @ 0x1401251CC (sub_1401251CC.c)
 *     sub_140125CA0 @ 0x140125CA0 (sub_140125CA0.c)
 * Callees:
 *     sub_1400BDD84 @ 0x1400BDD84 (sub_1400BDD84.c)
 */

char __fastcall sub_1400BD6D8(__int64 a1)
{
  char v1; // dl
  __int64 v2; // r10

  if ( *(_QWORD *)(a1 + 592) && (unsigned __int8)sub_1400BDD84(a1, 1LL) )
    return v1 & (*(_DWORD *)(v2 + 96) >> 9);
  else
    return 0;
}
