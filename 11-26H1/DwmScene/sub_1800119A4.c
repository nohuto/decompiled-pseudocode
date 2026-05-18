/*
 * XREFs of sub_1800119A4 @ 0x1800119A4
 * Callers:
 *     sub_1800116C8 @ 0x1800116C8 (sub_1800116C8.c)
 *     sub_180016A10 @ 0x180016A10 (sub_180016A10.c)
 *     sub_180016D44 @ 0x180016D44 (sub_180016D44.c)
 *     sub_180016E30 @ 0x180016E30 (sub_180016E30.c)
 *     sub_180016F1C @ 0x180016F1C (sub_180016F1C.c)
 *     sub_1800248CC @ 0x1800248CC (sub_1800248CC.c)
 *     sub_180024B24 @ 0x180024B24 (sub_180024B24.c)
 *     sub_180026F30 @ 0x180026F30 (sub_180026F30.c)
 *     sub_180032574 @ 0x180032574 (sub_180032574.c)
 *     sub_180042378 @ 0x180042378 (sub_180042378.c)
 *     sub_180045EBC @ 0x180045EBC (sub_180045EBC.c)
 *     sub_180045FCC @ 0x180045FCC (sub_180045FCC.c)
 *     sub_18004B7F4 @ 0x18004B7F4 (sub_18004B7F4.c)
 *     sub_18004B8C0 @ 0x18004B8C0 (sub_18004B8C0.c)
 *     sub_18004B98C @ 0x18004B98C (sub_18004B98C.c)
 *     sub_18004BA58 @ 0x18004BA58 (sub_18004BA58.c)
 *     sub_18004BB24 @ 0x18004BB24 (sub_18004BB24.c)
 *     sub_180055064 @ 0x180055064 (sub_180055064.c)
 *     sub_18005BE04 @ 0x18005BE04 (sub_18005BE04.c)
 *     sub_18005D540 @ 0x18005D540 (sub_18005D540.c)
 *     sub_18007D290 @ 0x18007D290 (sub_18007D290.c)
 *     sub_18007F854 @ 0x18007F854 (sub_18007F854.c)
 *     sub_18008BB60 @ 0x18008BB60 (sub_18008BB60.c)
 *     sub_1800B97F8 @ 0x1800B97F8 (sub_1800B97F8.c)
 *     sub_1800B99A4 @ 0x1800B99A4 (sub_1800B99A4.c)
 *     sub_1800B9B50 @ 0x1800B9B50 (sub_1800B9B50.c)
 *     sub_1800B9CFC @ 0x1800B9CFC (sub_1800B9CFC.c)
 *     sub_1800B9EA8 @ 0x1800B9EA8 (sub_1800B9EA8.c)
 * Callees:
 *     sub_180011930 @ 0x180011930 (sub_180011930.c)
 */

__int64 __fastcall sub_1800119A4(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r9
  __int64 result; // rax

  sub_180011930(*(_QWORD **)(a1 + 8), a2);
  result = *(_QWORD *)(v2 + 8);
  *(_QWORD *)(v2 + 8) = result + 16;
  return result;
}
