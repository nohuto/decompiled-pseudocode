/*
 * XREFs of ?MarkCurrentState@CDrawingContext@@QEAAJXZ @ 0x180158F04
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180040050 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_F@@AEBU4@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801594E8 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1800C90E8 (-Grow@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 */

__int64 __fastcall CDrawingContext::MarkCurrentState(CDrawingContext *this, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // rbx
  unsigned int v5; // eax
  unsigned int v6; // edi
  int v8; // eax
  __int128 v9; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (char *)this + 256;
  *(_QWORD *)&v9 = 12LL;
  *((_QWORD *)&v9 + 1) = -1LL;
  if ( *((_DWORD *)this + 66) == *((_DWORD *)this + 67)
    && (v8 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Grow(
               (__int64)this + 256,
               a2,
               a3,
               a4,
               (const void **)v4),
        v6 = v8,
        v8 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)(unsigned int)v8);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x102Au, 0LL);
  }
  else
  {
    *(_OWORD *)(*(_QWORD *)v4 + 16LL * (unsigned int)(*((_DWORD *)v4 + 2))++) = v9;
    v5 = *((_DWORD *)v4 + 5);
    if ( v5 <= *((_DWORD *)v4 + 2) )
      v5 = *((_DWORD *)v4 + 2);
    v6 = 0;
    *((_DWORD *)v4 + 5) = v5;
  }
  return v6;
}
