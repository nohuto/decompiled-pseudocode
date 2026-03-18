/*
 * XREFs of XmGetRegisterAddress @ 0x1404A87CC
 * Callers:
 *     XmMoveRegImmediate @ 0x1404A8250 (XmMoveRegImmediate.c)
 *     XmMoveGeneral @ 0x1404A8520 (XmMoveGeneral.c)
 *     XmGroup1General @ 0x1404A8590 (XmGroup1General.c)
 *     XmEvaluateAddressSpecifier @ 0x1404A8658 (XmEvaluateAddressSpecifier.c)
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
