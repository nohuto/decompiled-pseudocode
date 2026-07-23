/*
 * XREFs of XmGetRegisterAddress @ 0x1404A1E5C
 * Callers:
 *     XmMoveRegImmediate @ 0x1404A18E0 (XmMoveRegImmediate.c)
 *     XmMoveGeneral @ 0x1404A1BB0 (XmMoveGeneral.c)
 *     XmGroup1General @ 0x1404A1C20 (XmGroup1General.c)
 *     XmEvaluateAddressSpecifier @ 0x1404A1CE8 (XmEvaluateAddressSpecifier.c)
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
