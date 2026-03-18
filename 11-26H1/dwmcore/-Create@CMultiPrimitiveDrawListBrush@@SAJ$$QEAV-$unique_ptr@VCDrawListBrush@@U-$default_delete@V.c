/*
 * XREFs of ?Create@CMultiPrimitiveDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@PEAPEAV1@@Z @ 0x180187388
 * Callers:
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@PEAVCDrawListEntryBuilder@@@Z @ 0x180236200 (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCMultiPrimitiveDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x180187438 (-Alloc@-$CThreadLocalObjectCache@VCMultiPrimitiveDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CMultiPrimitiveDrawListBrush::Create(__int64 *a1, _OWORD *a2, __int64 *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rax

  v6 = 0;
  v7 = CThreadLocalObjectCache<CMultiPrimitiveDrawListBrush,CMultiPrimitiveDrawListBrush>::Alloc();
  v8 = v7;
  if ( v7 )
  {
    *(_QWORD *)(v7 + 8) = 1065353216LL;
    *(_DWORD *)(v7 + 16) = 0;
    *(_QWORD *)(v7 + 20) = 1065353216LL;
    *(_DWORD *)(v7 + 28) = 0;
    *(_BYTE *)(v7 + 52) = 0;
    *(_BYTE *)(v7 + 64) = 0;
    *(_QWORD *)v7 = &CMultiPrimitiveDrawListBrush::`vftable';
    v9 = *a1;
    *a1 = 0LL;
    *(_QWORD *)(v8 + 72) = v9;
    *(_OWORD *)(v8 + 80) = *a2;
    *a3 = v8;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1Fu, 0LL);
  }
  return v6;
}
