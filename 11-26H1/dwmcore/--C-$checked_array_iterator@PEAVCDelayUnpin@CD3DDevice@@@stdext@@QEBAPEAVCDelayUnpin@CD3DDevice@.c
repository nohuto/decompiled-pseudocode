/*
 * XREFs of ??C?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@QEBAPEAVCDelayUnpin@CD3DDevice@@XZ @ 0x18021FD70
 * Callers:
 *     ?reserve_region@?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUPrimitiveSubRect@CDrawListEntryBuilder@@_K0@Z @ 0x18001191C (-reserve_region@-$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V-$buffer_impl@UPrimiti.c)
 *     ??$emplace_back@UD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N@?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N@Z @ 0x180012750 (--$emplace_back@UD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N@-$vector_facade@UPrimitiveSubRect@CDrawListEn.c)
 *     ?Clear@CMatrixStack2D@@QEAAXXZ @ 0x1800409FC (-Clear@CMatrixStack2D@@QEAAXXZ.c)
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180040BC0 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@VCDelayUnpin@CD3DDevice@@@detail@@V?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@@detail@@YAXV?$basic_iterator@VCDelayUnpin@CD3DDevice@@@0@0V?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@@Z @ 0x1800D81A4 (--$move_backward_uninitialized@V-$basic_iterator@VCDelayUnpin@CD3DDevice@@@detail@@V-$checked_ar.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall stdext::checked_array_iterator<CD3DDevice::CDelayUnpin *>::operator->(_QWORD *a1)
{
  unsigned __int64 v1; // rax

  if ( !*a1 || (v1 = a1[2], v1 >= a1[1]) )
    _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
  return *a1 + 24 * v1;
}
