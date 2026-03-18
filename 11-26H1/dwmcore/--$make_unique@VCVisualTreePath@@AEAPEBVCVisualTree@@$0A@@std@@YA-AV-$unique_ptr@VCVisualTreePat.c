/*
 * XREFs of ??$make_unique@VCVisualTreePath@@AEAPEBVCVisualTree@@$0A@@std@@YA?AV?$unique_ptr@VCVisualTreePath@@U?$default_delete@VCVisualTreePath@@@std@@@0@AEAPEBVCVisualTree@@@Z @ 0x18018F280
 * Callers:
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x180171000 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@MPEAVCVisual@@@Z @ 0x180200410 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall std::make_unique<CVisualTreePath,CVisualTree const * &,0>(_QWORD *a1, __int64 *a2)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  _OWORD *v8; // rbx
  unsigned int v9; // r8d
  _QWORD *result; // rax
  __int128 v11; // [rsp+20h] [rbp-58h]
  __int128 v12; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+40h] [rbp-38h]
  __int128 v14; // [rsp+50h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp-18h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x38uLL);
  v6 = v5;
  if ( !v5 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v7 = *a2;
  v8 = v5 + 3;
  *((_QWORD *)&v11 + 1) = v7;
  *v5 = v5 + 3;
  v5[1] = v5 + 3;
  *(_QWORD *)&v11 = 0LL;
  v5[2] = v5 + 7;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v14, (__int64)(v5 + 3), 1LL);
  v12 = v14;
  v13 = v15;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v12, v9);
  v6[1] += 16LL;
  result = a1;
  *v8 = v11;
  *a1 = v6;
  return result;
}
