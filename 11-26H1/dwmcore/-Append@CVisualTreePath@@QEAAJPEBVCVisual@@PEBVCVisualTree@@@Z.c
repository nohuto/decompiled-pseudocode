/*
 * XREFs of ?Append@CVisualTreePath@@QEAAJPEBVCVisual@@PEBVCVisualTree@@@Z @ 0x180190350
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@MPEAVCVisual@@@Z @ 0x180200410 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reserve_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVisualTreePathUnit@CVisualTreePath@@_K0@Z @ 0x180090460 (-reserve_region@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreeP.c)
 */

__int64 __fastcall CVisualTreePath::Append(
        CVisualTreePath *this,
        const struct CVisual *a2,
        const struct CVisualTree *a3)
{
  const struct CVisual **v3; // r9
  const struct CVisual **v5; // rax
  __int64 v6; // rcx
  const struct CVisual *v7; // r8
  const struct CVisual *v8; // rax
  int v10[4]; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (const struct CVisual **)*((_QWORD *)this + 1);
  v5 = *(const struct CVisual ***)this;
  *(_QWORD *)v10 = a2;
  *(_QWORD *)&v10[2] = a3;
  while ( v5 != v3 )
  {
    if ( *v5 == a2 && v5[1] == a3 )
      goto LABEL_16;
    v5 += 2;
  }
  v6 = (__int64)v3 - *(_QWORD *)this;
  if ( a2 )
  {
    if ( v6 )
    {
      v7 = a2;
      while ( a2 )
      {
        if ( a2 == *((const struct CVisual **)*(v3 - 1) + 9) )
          goto LABEL_17;
        if ( v7 )
        {
          v8 = (const struct CVisual *)*((_QWORD *)v7 + 11);
          v7 = v8;
          if ( v8 )
          {
            if ( a2 == v8 )
              break;
            v7 = (const struct CVisual *)*((_QWORD *)v8 + 11);
            if ( a2 == v7 )
              break;
          }
        }
        a2 = (const struct CVisual *)*((_QWORD *)a2 + 11);
      }
    }
    goto LABEL_16;
  }
  if ( v6 )
  {
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\visualtreepath.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
LABEL_17:
  *(_OWORD *)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
               this,
               v6 >> 4,
               1uLL) = *(_OWORD *)v10;
  return 0LL;
}
