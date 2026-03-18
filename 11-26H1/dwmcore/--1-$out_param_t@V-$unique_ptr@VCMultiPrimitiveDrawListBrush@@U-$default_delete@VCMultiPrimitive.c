/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@VCMultiPrimitiveDrawListBrush@@U?$default_delete@VCMultiPrimitiveDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18021F570
 * Callers:
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@PEAVCDrawListEntryBuilder@@@Z @ 0x180236200 (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 * Callees:
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x1801870B0 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 */

CMultiPrimitiveDrawListBrush *__fastcall wil::details::out_param_t<std::unique_ptr<CMultiPrimitiveDrawListBrush>>::~out_param_t<std::unique_ptr<CMultiPrimitiveDrawListBrush>>(
        __int64 a1)
{
  CMultiPrimitiveDrawListBrush *result; // rax
  CMultiPrimitiveDrawListBrush *v2; // r8

  if ( *(_BYTE *)(a1 + 16) )
  {
    result = *(CMultiPrimitiveDrawListBrush **)(a1 + 8);
    v2 = **(CMultiPrimitiveDrawListBrush ***)a1;
    **(_QWORD **)a1 = result;
    if ( v2 )
      return CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v2, 1);
  }
  return result;
}
