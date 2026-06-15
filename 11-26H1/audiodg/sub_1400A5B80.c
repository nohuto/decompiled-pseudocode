/*
 * XREFs of sub_1400A5B80 @ 0x1400A5B80
 * Callers:
 *     sub_1400A54B8 @ 0x1400A54B8 (sub_1400A54B8.c)
 *     sub_1400A5610 @ 0x1400A5610 (sub_1400A5610.c)
 * Callees:
 *     sub_1400A5A40 @ 0x1400A5A40 (sub_1400A5A40.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400A5B80(__int64 a1)
{
  *(_DWORD *)(a1 + 1504) = 0;
  *(_OWORD *)(a1 + 1512) = 0LL;
  *(_OWORD *)(a1 + 1528) = 0LL;
  *(_QWORD *)(a1 + 1544) = 0LL;
  *(_BYTE *)(a1 + 1552) = 0;
  sub_1400A5A40(a1);
  *(_QWORD *)(a1 + 1560) = 0LL;
  *(_WORD *)(a1 + 1568) = 0;
  *(_DWORD *)(a1 + 1572) = -2147418113;
  *(_DWORD *)(a1 + 1576) = 0;
  *(_QWORD *)(a1 + 1584) = a1;
  return a1;
}
