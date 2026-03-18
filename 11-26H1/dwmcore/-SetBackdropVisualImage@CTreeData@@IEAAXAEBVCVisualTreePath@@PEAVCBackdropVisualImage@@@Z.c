/*
 * XREFs of ?SetBackdropVisualImage@CTreeData@@IEAAXAEBVCVisualTreePath@@PEAVCBackdropVisualImage@@@Z @ 0x1801B25AC
 * Callers:
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x18002A8C0 (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18002C3C0 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x1800925E0 (-UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?CleanUpStaleBackdropVisualImages@CTreeData@@IEAAXXZ @ 0x1801B266C (-CleanUpStaleBackdropVisualImages@CTreeData@@IEAAXXZ.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x1801B2734 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@.c)
 *     ??4?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBackdropVisualImage@@@Z @ 0x1801CF580 (--4-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBackdrop.c)
 */

void __fastcall CTreeData::SetBackdropVisualImage(
        CTreeData *this,
        const struct CVisualTreePath *a2,
        struct CBackdropVisualImage *a3)
{
  __int64 i; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9

  for ( i = *((_QWORD *)this + 18); ; i += 8LL )
  {
    if ( i == *((_QWORD *)this + 19) )
    {
      if ( a3 )
        CMILRefCountImpl::AddReference((struct CBackdropVisualImage *)((char *)a3 + 8));
      *(_QWORD *)detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::reserve_region(
                   (char *)this + 144,
                   (__int64)(*((_QWORD *)this + 19) - *((_QWORD *)this + 18)) >> 3) = a3;
      *((_QWORD *)a3 + 222) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + 24LL) + 880LL);
      CTreeData::CleanUpStaleBackdropVisualImages(this);
      return;
    }
    v6 = *(_QWORD **)(*(_QWORD *)i + 1616LL);
    v7 = *(_QWORD *)(*(_QWORD *)i + 1624LL) - (_QWORD)v6;
    if ( v7 == *((_QWORD *)a2 + 1) - *(_QWORD *)a2 )
      break;
LABEL_12:
    ;
  }
  v8 = *(_QWORD *)a2 - (_QWORD)v6;
  while ( v6 != *(_QWORD **)(*(_QWORD *)i + 1624LL) )
  {
    if ( *v6 != *(_QWORD *)((char *)v6 + v8) || v6[1] != *(_QWORD *)((char *)v6 + v8 + 8) )
      goto LABEL_12;
    v6 += 2;
  }
  wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>::operator=(i, a3, v7, v8);
  *(_QWORD *)(*(_QWORD *)i + 1776LL) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + 24LL) + 880LL);
}
