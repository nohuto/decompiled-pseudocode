/*
 * XREFs of XmGetRegisterAddress @ 0x14046AD28
 * Callers:
 *     XmMoveRegImmediate @ 0x14046A5B0 (XmMoveRegImmediate.c)
 *     XmMoveGeneral @ 0x14046A6A0 (XmMoveGeneral.c)
 *     XmGroup1General @ 0x14046A710 (XmGroup1General.c)
 *     XmEvaluateAddressSpecifier @ 0x14046A7D4 (XmEvaluateAddressSpecifier.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XmGetRegisterAddress(__int64 a1, unsigned int a2)
{
  if ( *(_DWORD *)(a1 + 120) || a2 < 4 )
    return a1 + 4 * (a2 + 6LL);
  else
    return a1 + 25 + 4LL * (a2 - 4);
}
