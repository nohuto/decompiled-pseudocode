/*
 * XREFs of sub_1400A5A40 @ 0x1400A5A40
 * Callers:
 *     sub_1400A5B80 @ 0x1400A5B80 (sub_1400A5B80.c)
 * Callees:
 *     sub_1400A5828 @ 0x1400A5828 (sub_1400A5828.c)
 */

__int64 __fastcall sub_1400A5A40(__int64 a1)
{
  sub_1400A5828(a1);
  *(_QWORD *)a1 = off_1400C0F58;
  *(_QWORD *)(a1 + 8) = off_1400C0308;
  *(_QWORD *)(a1 + 16) = off_1400C0EE0;
  *(_QWORD *)(a1 + 24) = off_1400C0748;
  *(_QWORD *)(a1 + 1376) = off_1400C0710;
  *(_QWORD *)(a1 + 1384) = off_1400C03E0;
  *(_QWORD *)(a1 + 1392) = off_1400C0890;
  *(_BYTE *)(a1 + 1400) = 0;
  *(_QWORD *)(a1 + 1408) = 0LL;
  *(_QWORD *)(a1 + 1416) = 0LL;
  *(_QWORD *)(a1 + 1424) = 0LL;
  *(_QWORD *)(a1 + 1432) = 0LL;
  *(_QWORD *)(a1 + 1440) = 0LL;
  *(_OWORD *)(a1 + 1448) = 0LL;
  *(_DWORD *)(a1 + 1464) = 0;
  *(_QWORD *)(a1 + 1472) = 0LL;
  *(_QWORD *)(a1 + 1480) = 0LL;
  *(_DWORD *)(a1 + 1488) = 0;
  return a1;
}
