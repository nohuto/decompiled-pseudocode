/*
 * XREFs of sub_1400A597C @ 0x1400A597C
 * Callers:
 *     sub_1400A5B04 @ 0x1400A5B04 (sub_1400A5B04.c)
 * Callees:
 *     sub_1400A56D4 @ 0x1400A56D4 (sub_1400A56D4.c)
 */

__int64 __fastcall sub_1400A597C(__int64 a1)
{
  sub_1400A56D4(a1);
  *(_QWORD *)a1 = off_1400C1038;
  *(_QWORD *)(a1 + 8) = off_1400C0308;
  *(_QWORD *)(a1 + 16) = off_1400C0FC0;
  *(_QWORD *)(a1 + 24) = off_1400C0488;
  *(_QWORD *)(a1 + 1344) = off_1400C0450;
  *(_QWORD *)(a1 + 1352) = off_1400C0430;
  *(_QWORD *)(a1 + 1360) = off_1400C0890;
  *(_BYTE *)(a1 + 1368) = 0;
  *(_QWORD *)(a1 + 1376) = 0LL;
  *(_QWORD *)(a1 + 1384) = 0LL;
  *(_QWORD *)(a1 + 1392) = 0LL;
  *(_QWORD *)(a1 + 1400) = 0LL;
  *(_QWORD *)(a1 + 1408) = 0LL;
  *(_OWORD *)(a1 + 1416) = 0LL;
  *(_DWORD *)(a1 + 1432) = 0;
  *(_QWORD *)(a1 + 1440) = 0LL;
  *(_QWORD *)(a1 + 1448) = 0LL;
  *(_DWORD *)(a1 + 1456) = 0;
  return a1;
}
