/*
 * XREFs of sub_18002AE68 @ 0x18002AE68
 * Callers:
 *     sub_18002B1EC @ 0x18002B1EC (sub_18002B1EC.c)
 * Callees:
 *     sub_18002A23C @ 0x18002A23C (sub_18002A23C.c)
 *     sub_18002A2B0 @ 0x18002A2B0 (sub_18002A2B0.c)
 *     sub_18002B374 @ 0x18002B374 (sub_18002B374.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18002AE68(__int64 *a1, _QWORD *a2)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v5[0] = a1;
  *a1 = sub_18002A23C();
  sub_18002A2B0(a1, a2);
  v5[1] = 0LL;
  sub_18002B374(v5);
  return a1;
}
