/*
 * XREFs of sub_14000EF98 @ 0x14000EF98
 * Callers:
 *     sub_14000EF40 @ 0x14000EF40 (sub_14000EF40.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14000EF98(__int64 a1)
{
  __int64 v2; // rcx

  *(_QWORD *)a1 = off_1400F5620;
  *(_QWORD *)(a1 + 8) = off_1400F5558;
  *(_QWORD *)(a1 + 16) = off_1400F5420;
  *(_QWORD *)(a1 + 24) = off_1400F54E8;
  *(_QWORD *)(a1 + 32) = off_1400F53D8;
  *(_QWORD *)(a1 + 40) = off_1400F5468;
  *(_QWORD *)(a1 + 48) = off_1400F54B8;
  *(_QWORD *)(a1 + 56) = off_1400F5498;
  *(_QWORD *)(a1 + 64) = off_1400F5408;
  *(_QWORD *)(a1 + 72) = off_1400F53A0;
  *(_QWORD *)(a1 + 80) = off_1400F5440;
  *(_QWORD *)(a1 + 88) = off_1400F5380;
  *(_QWORD *)(a1 + 96) = off_1400F5510;
  *(_QWORD *)(a1 + 104) = off_1400F55A8;
  *(_QWORD *)(a1 + 128) = off_1400F5540;
  v2 = *(_QWORD *)(a1 + 136);
  if ( v2 )
  {
    sub_1400B6010(v2);
    *(_QWORD *)(a1 + 136) = 0LL;
  }
  CoTaskMemFree(*(LPVOID *)(a1 + 160));
  *(_QWORD *)(a1 + 160) = 0LL;
  return sub_14000F0A0(a1);
}
