/*
 * XREFs of ?GetPerFrameDataId@CSynchronousSuperWetInk@@AEBAIXZ @ 0x18012675C
 * Callers:
 *     ?CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x180122DC0 (-CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@.c)
 *     ?Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180125DA0 (-Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall CSynchronousSuperWetInk::GetPerFrameDataId(
        CSynchronousSuperWetInk *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v4; // edx
  int v5; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_DWORD *)this + 43);
  if ( !v4 )
    return CCompositionSurfaceBitmap::GetLastPresentCount(*((CCompositionSurfaceBitmap **)this + 23));
  v5 = v4 - 1;
  if ( !v5 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 23) + 96LL) + 344LL))(*(_QWORD *)(*((_QWORD *)this + 23) + 96LL));
  if ( v5 != 1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x23A,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\synchronoussuperwetink.cpp",
      a4);
  return *((unsigned int *)this + 44);
}
