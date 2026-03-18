/*
 * XREFs of ?AddBoundsToDirtyRegion@CCursorVisual@@UEAAJAEAVCPreComputeSubTreeContext@@@Z @ 0x1802651D0
 * Callers:
 *     <none>
 * Callees:
 *     ?size@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x180018330 (-size@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCach.c)
 *     ?AddBoundsToDirtyRegion@CVisual@@UEAAJAEAVCPreComputeSubTreeContext@@@Z @ 0x180059AC0 (-AddBoundsToDirtyRegion@CVisual@@UEAAJAEAVCPreComputeSubTreeContext@@@Z.c)
 *     ?AddRectToDirtyRegion@CPreComputeSubTreeContext@@QEAAJAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x180059D08 (-AddRectToDirtyRegion@CPreComputeSubTreeContext@@QEAAJAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCursorVisual::AddBoundsToDirtyRegion(CCursorVisual *this, struct CPreComputeSubTreeContext *a2)
{
  __int64 v4; // rdi
  int v5; // ebx
  __int64 v6; // rdx
  float *v8; // rdi
  float *v9; // r14
  int v10; // eax
  unsigned int v11; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)a2 + 41);
  if ( *((_QWORD *)this + 89) == *((_QWORD *)this + 90)
    || (unsigned int)detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::size((__int64 *)this + 10) )
  {
    v5 = CVisual::AddBoundsToDirtyRegion(this, a2);
    if ( v5 < 0 )
    {
      v6 = 74LL;
      goto LABEL_6;
    }
  }
  else if ( this == *(CCursorVisual **)(v4 + 72) )
  {
    v5 = CPreComputeSubTreeContext::AddRectToDirtyRegion((__int64)a2, (float *)(v4 + 80), (__int64)this);
    if ( v5 < 0 )
    {
      v6 = 67LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\cursorvisual.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
  }
  else
  {
    v8 = (float *)*((_QWORD *)this + 89);
    v9 = (float *)*((_QWORD *)this + 90);
    while ( v8 != v9 )
    {
      v10 = CPreComputeSubTreeContext::AddRectToDirtyRegion((__int64)a2, v8, (__int64)this);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3C,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\cursorvisual.cpp",
          (const char *)(unsigned int)v10);
        return v11;
      }
      v8 += 6;
    }
  }
  return 0LL;
}
