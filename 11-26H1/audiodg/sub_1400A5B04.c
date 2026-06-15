/*
 * XREFs of sub_1400A5B04 @ 0x1400A5B04
 * Callers:
 *     sub_1400A5424 @ 0x1400A5424 (sub_1400A5424.c)
 *     sub_1400A554C @ 0x1400A554C (sub_1400A554C.c)
 * Callees:
 *     sub_1400A597C @ 0x1400A597C (sub_1400A597C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400A5B04(__int64 a1)
{
  *(_DWORD *)(a1 + 1472) = 0;
  *(_OWORD *)(a1 + 1480) = 0LL;
  *(_OWORD *)(a1 + 1496) = 0LL;
  *(_QWORD *)(a1 + 1512) = 0LL;
  *(_BYTE *)(a1 + 1520) = 0;
  sub_1400A597C(a1);
  *(_QWORD *)(a1 + 1528) = 0LL;
  *(_WORD *)(a1 + 1536) = 0;
  *(_DWORD *)(a1 + 1540) = -2147418113;
  *(_DWORD *)(a1 + 1544) = 0;
  *(_QWORD *)(a1 + 1552) = a1;
  return a1;
}
