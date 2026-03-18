/*
 * XREFs of ?BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z @ 0x1800D1420
 * Callers:
 *     ?DrawVisualTree@CSubDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEBVCOcclusionContext@@@Z @ 0x1800AE0A0 (-DrawVisualTree@CSubDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_R.c)
 * Callees:
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x18000F9E0 (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DuplicateScopeToClipStack@CScopedClipStack@@QEBAXPEAV1@AEBVCMILMatrix@@@Z @ 0x1800D1600 (-DuplicateScopeToClipStack@CScopedClipStack@@QEBAXPEAV1@AEBVCMILMatrix@@@Z.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x1800D1830 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?GetCpuClippingData@CVisual@@QEBAPEAVCCpuClippingData@@PEBVCVisualTree@@@Z @ 0x1800D1CD0 (-GetCpuClippingData@CVisual@@QEBAPEAVCCpuClippingData@@PEBVCVisualTree@@@Z.c)
 *     ?TransformToDifferentScope@CCpuClippingData@@QEBA_NPEAV1@AEBVCMILMatrix@@1@Z @ 0x1800D1D84 (-TransformToDifferentScope@CCpuClippingData@@QEBA_NPEAV1@AEBVCMILMatrix@@1@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x1800F0E50 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 */

__int64 __fastcall CSubDrawingContext::BeginFrame(CSubDrawingContext *this, const struct CMILMatrix *a2)
{
  __int64 v4; // rsi
  int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rbx
  __int64 v10; // rbx
  CVisual *CurrentVisual; // rax
  __int64 v12; // rcx
  CCpuClippingData *CpuClippingData; // rax
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v16; // [rsp+50h] [rbp+8h] BYREF

  CScopedClipStack::DuplicateScopeToClipStack(
    (CScopedClipStack *)(*(_QWORD *)this + 736LL),
    (struct CScopedClipStack *)(*((_QWORD *)this + 1) + 736LL),
    a2);
  v4 = 0LL;
  v5 = CDrawingContext::BeginFrame(*((_QWORD *)this + 1), *(_QWORD *)(*(_QWORD *)this + 24LL), a2, 0LL, 0, 0LL);
  if ( v5 < 0 )
  {
    v14 = 87LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\subdrawingcontext.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v6 = *(_QWORD *)this;
  *((_BYTE *)this + 88) = 1;
  v16 = 1065353216;
  v7 = *(_DWORD *)(v6 + 3160);
  if ( v7 )
    v16 = *(_DWORD *)(*(_QWORD *)(v6 + 3152) + 4LL * (unsigned int)(v7 - 1));
  v5 = CWatermarkStack<float,64,2,10>::Push(*((_QWORD *)this + 1) + 3152LL, &v16);
  if ( v5 < 0 )
  {
    v14 = 93LL;
    goto LABEL_12;
  }
  v8 = *((_QWORD *)this + 1);
  if ( CScopedClipStack::HasCpuClipsInScope((CScopedClipStack *)(v8 + 736)) )
  {
    v10 = *(_QWORD *)(v8 + 744);
    CurrentVisual = CDrawingContext::GetCurrentVisual(*(CDrawingContext **)this);
    CpuClippingData = CVisual::GetCpuClippingData(CurrentVisual, *(const struct CVisualTree **)(v12 + 7944));
    if ( CCpuClippingData::TransformToDifferentScope(
           CpuClippingData,
           (CSubDrawingContext *)((char *)this + 16),
           (const struct CMILMatrix *)(v10 - 84),
           a2) )
    {
      *(_QWORD *)(*((_QWORD *)this + 1) + 208LL) = (char *)this + 16;
    }
  }
  *(_QWORD *)(*((_QWORD *)this + 1) + 192LL) = *(_QWORD *)(*(_QWORD *)this + 192LL);
  *(_DWORD *)(*((_QWORD *)this + 1) + 232LL) = *(_DWORD *)(*(_QWORD *)this + 232LL);
  *(_DWORD *)(*((_QWORD *)this + 1) + 236LL) = *(_DWORD *)(*(_QWORD *)this + 236LL);
  *(_DWORD *)(*((_QWORD *)this + 1) + 240LL) = *(_DWORD *)(*(_QWORD *)this + 240LL);
  *(_DWORD *)(*((_QWORD *)this + 1) + 244LL) = *(_DWORD *)(*(_QWORD *)this + 244LL);
  *(_DWORD *)(*((_QWORD *)this + 1) + 248LL) = *(_DWORD *)(*(_QWORD *)this + 248LL);
  do
  {
    *(_BYTE *)(*((_QWORD *)this + 1) + v4 + 8065) = *(_BYTE *)(v4 + *(_QWORD *)this + 8065);
    ++v4;
  }
  while ( v4 < 2 );
  return 0LL;
}
