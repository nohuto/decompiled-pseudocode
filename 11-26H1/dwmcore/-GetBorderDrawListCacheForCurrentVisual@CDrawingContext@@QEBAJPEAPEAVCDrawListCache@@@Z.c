/*
 * XREFs of ?GetBorderDrawListCacheForCurrentVisual@CDrawingContext@@QEBAJPEAPEAVCDrawListCache@@@Z @ 0x180205E10
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801FDB90 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180283220 (-Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z @ 0x18001E070 (-InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001ECD0 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x18002C040 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?GetDrawListCache@CVisual@@QEBAJIIPEBVCVisualTree@@PEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x18007A150 (-GetDrawListCache@CVisual@@QEBAJIIPEBVCVisualTree@@PEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsDirty@CDrawListCache@@QEBA_NPEBVCDrawingContext@@@Z @ 0x18025A258 (-IsDirty@CDrawListCache@@QEBA_NPEBVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CDrawingContext::GetBorderDrawListCacheForCurrentVisual(
        CDrawingContext *this,
        struct CDrawListCache **a2)
{
  bool v2; // zf
  CVisual *CurrentVisual; // rax
  int DrawListCache; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  struct CDrawListCache *v9; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CDrawListCache *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_BYTE *)this + 8067) == 0;
  v12 = 0LL;
  if ( v2 )
  {
    DrawListCache = CDrawListCache::InternalCreate(1, &v12);
    v7 = DrawListCache;
    if ( DrawListCache < 0 )
    {
      v8 = 5353LL;
      goto LABEL_8;
    }
    v9 = v12;
LABEL_10:
    *a2 = v9;
    v7 = 0;
    v12 = 0LL;
    goto LABEL_11;
  }
  CurrentVisual = CDrawingContext::GetCurrentVisual(this);
  DrawListCache = CVisual::GetDrawListCache(
                    CurrentVisual,
                    3,
                    *((_QWORD *)this + 3),
                    *((const struct CVisualTree **)this + 993),
                    *((const struct IDeviceTarget **)this + 3),
                    &v12);
  v7 = DrawListCache;
  if ( DrawListCache >= 0 )
  {
    v9 = v12;
    if ( CDrawListCache::IsDirty(v12, this) )
      CDrawListCache::Invalidate(v9);
    goto LABEL_10;
  }
  v8 = 5344LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
    (const char *)(unsigned int)DrawListCache);
LABEL_11:
  wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)&v12);
  return v7;
}
