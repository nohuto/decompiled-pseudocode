/*
 * XREFs of ??1?$unique_ptr@VCMultiPrimitiveDrawListBrush@@U?$default_delete@VCMultiPrimitiveDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1801A9408
 * Callers:
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@PEAVCDrawListEntryBuilder@@@Z @ 0x180236200 (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 * Callees:
 *     <none>
 */

CMultiPrimitiveDrawListBrush *__fastcall std::unique_ptr<CMultiPrimitiveDrawListBrush>::~unique_ptr<CMultiPrimitiveDrawListBrush>(
        CMultiPrimitiveDrawListBrush **a1)
{
  CMultiPrimitiveDrawListBrush *v1; // rcx
  CMultiPrimitiveDrawListBrush *result; // rax

  v1 = *a1;
  if ( v1 )
    return CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v1, 1);
  return result;
}
