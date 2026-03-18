/*
 * XREFs of ?GetDrawListCache@CWindowNode@@AEBAJPEAVCDrawingContext@@IPEAPEAVCDrawListCache@@@Z @ 0x18020284C
 * Callers:
 *     ?RenderSpriteContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180202650 (-RenderSpriteContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?RenderFlipExBorders@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2AEBVCMILMatrix@@AEBVCShapePtr@@@Z @ 0x1802687D8 (-RenderFlipExBorders@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBV-$TMi.c)
 *     ?RenderFlipExContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180268C7C (-RenderFlipExContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 * Callees:
 *     ?InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z @ 0x18001E070 (-InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001ECD0 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x18002C040 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?GetDrawListCache@CVisual@@QEBAJIIPEBVCVisualTree@@PEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x18007A150 (-GetDrawListCache@CVisual@@QEBAJIIPEBVCVisualTree@@PEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsDirty@CDrawListCache@@QEBA_NPEBVCDrawingContext@@@Z @ 0x18025A258 (-IsDirty@CDrawListCache@@QEBA_NPEBVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CWindowNode::GetDrawListCache(
        CWindowNode *this,
        struct CDrawingContext *a2,
        __int64 a3,
        struct CDrawListCache **a4)
{
  bool v4; // zf
  int DrawListCache; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  struct CDrawListCache *v10; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CDrawListCache *v13; // [rsp+48h] [rbp+10h] BYREF

  v4 = *((_BYTE *)a2 + 8067) == 0;
  v13 = 0LL;
  if ( v4 )
  {
    DrawListCache = CDrawListCache::InternalCreate(1, &v13);
    v8 = DrawListCache;
    if ( DrawListCache < 0 )
    {
      v9 = 1939LL;
      goto LABEL_8;
    }
    v10 = v13;
LABEL_10:
    *a4 = v10;
    v8 = 0;
    v13 = 0LL;
    goto LABEL_11;
  }
  DrawListCache = CVisual::GetDrawListCache(
                    this,
                    a3,
                    a3,
                    *((const struct CVisualTree **)a2 + 993),
                    *((const struct IDeviceTarget **)a2 + 3),
                    &v13);
  v8 = DrawListCache;
  if ( DrawListCache >= 0 )
  {
    v10 = v13;
    if ( CDrawListCache::IsDirty(v13, a2) )
      CDrawListCache::Invalidate(v10);
    goto LABEL_10;
  }
  v9 = 1930LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
    (const char *)(unsigned int)DrawListCache);
LABEL_11:
  wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)&v13);
  return v8;
}
