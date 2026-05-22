/*
 * XREFs of ??$?4AEBUtagINPUT_TRANSFORM@@$0A@@?$optional@UtagINPUT_TRANSFORM@@@std@@QEAAAEAV01@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1800608A4
 * Callers:
 *     ?OnInputSiteTransformChanged@VirtualTouchpadControllerProxy@@MEAAJAEBUtagINPUT_TRANSFORM@@@Z @ 0x1801387D0 (-OnInputSiteTransformChanged@VirtualTouchpadControllerProxy@@MEAAJAEBUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::optional<tagINPUT_TRANSFORM>::operator=<tagINPUT_TRANSFORM const &,0>(__int64 a1, _OWORD *a2)
{
  bool v2; // zf

  v2 = *(_BYTE *)(a1 + 64) == 0;
  *(_OWORD *)a1 = *a2;
  *(_OWORD *)(a1 + 16) = a2[1];
  *(_OWORD *)(a1 + 32) = a2[2];
  *(_OWORD *)(a1 + 48) = a2[3];
  if ( v2 )
    *(_BYTE *)(a1 + 64) = 1;
  return a1;
}
