/*
 * XREFs of sub_140077388 @ 0x140077388
 * Callers:
 *     sub_140077BE4 @ 0x140077BE4 (sub_140077BE4.c)
 * Callees:
 *     sub_14001BE38 @ 0x14001BE38 (sub_14001BE38.c)
 */

__int64 __fastcall sub_140077388(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = off_1400BDDE8;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = -1;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 64) = 1;
  *(_QWORD *)(a1 + 72) = 0LL;
  sub_14001BE38((_QWORD *)(a1 + 80));
  *(_QWORD *)a1 = off_1400BDA30;
  *(_QWORD *)(a1 + 80) = &off_1400B8C68;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_DWORD *)(a1 + 136) = 0;
  InitOnceExecuteOnce(&stru_1400E8968, sub_140078DC0, 0LL, 0LL);
  return a1;
}
