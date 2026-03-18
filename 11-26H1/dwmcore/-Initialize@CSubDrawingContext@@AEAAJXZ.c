/*
 * XREFs of ?Initialize@CSubDrawingContext@@AEAAJXZ @ 0x1800AE3B4
 * Callers:
 *     ?DrawVisualTree@CSubDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEBVCOcclusionContext@@@Z @ 0x1800AE0A0 (-DrawVisualTree@CSubDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_R.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateContextOwner@CD2DContext@@QEAAJPEBVID2DContextOwner@@@Z @ 0x1800AE194 (-UpdateContextOwner@CD2DContext@@QEAAJPEBVID2DContextOwner@@@Z.c)
 *     ?HasGpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x1800AE4B0 (-HasGpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?Create@CDrawingContext@@SAXPEAPEAV1@@Z @ 0x180110538 (-Create@CDrawingContext@@SAXPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSubDrawingContext::Initialize(CSubDrawingContext *this)
{
  struct CDrawingContext *v2; // rbx
  int updated; // eax
  unsigned int v4; // esi
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CDrawingContext *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( CScopedClipStack::HasGpuClipsInScope((CScopedClipStack *)(*(_QWORD *)this + 736LL)) )
  {
    v8 = 0LL;
    CDrawingContext::Create(&v8);
    v2 = v8;
    updated = CD2DContext::UpdateContextOwner(
                (CD2DContext *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 16LL),
                (const struct ID2DContextOwner *)(((unsigned __int64)v8 + 16) & -(__int64)(v8 != 0LL)));
    v4 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x46,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\subdrawingcontext.cpp",
        (const char *)(unsigned int)updated);
      if ( v2 )
        (*(void (__fastcall **)(struct CDrawingContext *))(*(_QWORD *)v2 + 16LL))(v2);
      return v4;
    }
    else
    {
      *((_QWORD *)v2 + 25) = *(_QWORD *)this;
      v5 = *((_QWORD *)this + 1);
      *((_QWORD *)this + 1) = v2;
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\subdrawingcontext.cpp",
      (const char *)0x88982F04LL);
    return 2291674884LL;
  }
}
