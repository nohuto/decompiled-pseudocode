/*
 * XREFs of KiVerifyXcptFilter @ 0x140CD2880
 * Callers:
 *     KiVerifyXcpt0 @ 0x140CD21B0 (KiVerifyXcpt0.c)
 *     KiVerifyXcpt1 @ 0x140CD2210 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt10 @ 0x140CD2260 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt11 @ 0x140CD23D0 (KiVerifyXcpt11.c)
 *     KiVerifyXcpt12 @ 0x140CD2440 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140CD24D0 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140CD2520 (KiVerifyXcpt14.c)
 *     KiVerifyXcpt2 @ 0x140CD2580 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt3 @ 0x140CD25E0 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140CD2640 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140CD26A0 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140CD2700 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140CD2760 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140CD27C0 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140CD2820 (KiVerifyXcpt9.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiVerifyXcptFilter(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 16) )
  {
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 12) = -1437226411;
    ++**(_DWORD **)a1;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 1;
  }
  return 1LL;
}
