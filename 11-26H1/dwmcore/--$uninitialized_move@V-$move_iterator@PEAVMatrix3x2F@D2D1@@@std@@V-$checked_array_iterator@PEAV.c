/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@0@0V12@@Z @ 0x180205EF4
 * Callers:
 *     ?reserve_region@?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUPrimitiveSubRect@CDrawListEntryBuilder@@_K0@Z @ 0x18001191C (-reserve_region@-$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V-$buffer_impl@UPrimiti.c)
 *     ??$emplace_back@UD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N@?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N@Z @ 0x180012750 (--$emplace_back@UD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N@-$vector_facade@UPrimitiveSubRect@CDrawListEn.c)
 *     ?Clear@CMatrixStack2D@@QEAAXXZ @ 0x1800409FC (-Clear@CMatrixStack2D@@QEAAXXZ.c)
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180040BC0 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 * Callees:
 *     ??$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@QEAPEAPEAV1@0@Z @ 0x18000A7C4 (--$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAV.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@_J@Z @ 0x1800D8320 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@_J@std@@YA-A_TAEA.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
        __int64 a1,
        void *a2,
        __int64 a3,
        _QWORD *a4)
{
  void *v8; // rax
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v8 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<D2D1::Matrix3x2F *> &,__int64>(
                 a4,
                 0xAAAAAAAAAAAAAAABuLL * ((a3 - (__int64)a2) >> 3));
  a4[2] = 0xAAAAAAAAAAAAAAABuLL
        * ((std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(a2, a3, v8) - *a4) >> 3);
  result = a1;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
