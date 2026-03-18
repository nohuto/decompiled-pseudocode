/*
 * XREFs of KiVerifyXcptFilter @ 0x140CCC720
 * Callers:
 *     KiVerifyXcpt0 @ 0x140CCC050 (KiVerifyXcpt0.c)
 *     KiVerifyXcpt1 @ 0x140CCC0B0 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt10 @ 0x140CCC100 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt11 @ 0x140CCC270 (KiVerifyXcpt11.c)
 *     KiVerifyXcpt12 @ 0x140CCC2E0 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140CCC370 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140CCC3C0 (KiVerifyXcpt14.c)
 *     KiVerifyXcpt2 @ 0x140CCC420 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt3 @ 0x140CCC480 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140CCC4E0 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140CCC540 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140CCC5A0 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140CCC600 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140CCC660 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140CCC6C0 (KiVerifyXcpt9.c)
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
