/*
 * XREFs of ?Grow@?$CWatermarkStack@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z @ 0x1800CA200
 * Callers:
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x1800C61E0 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800C70F0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800C9860 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?ProcessVisualsWorldTransformAndClip@CPreComputeContext@@AEAAJPEAVCVisual@@0PEAVCPreComputeSubTreeContext@@PEAVCMILMatrix@@@Z @ 0x1800CB9B0 (-ProcessVisualsWorldTransformAndClip@CPreComputeContext@@AEAAJPEAVCVisual@@0PEAVCPreComputeSubTr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,8,2,8>::Grow(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const void **a5)
{
  unsigned __int64 v6; // rax
  unsigned int v7; // ebx
  unsigned __int64 v8; // rbp
  HANDLE ProcessHeap; // rax
  void *v10; // rax
  const void *v11; // rsi
  unsigned int v12; // ebx
  __int64 result; // rax
  void *v14; // rbp
  HANDLE v15; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = 2LL * *(unsigned int *)(a1 + 12);
  if ( v6 > 0xFFFFFFFF )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)0x80070216LL);
    return 2147942934LL;
  }
  else
  {
    v7 = 8;
    if ( (unsigned int)v6 > 8 )
      v7 = 2 * *(_DWORD *)(a1 + 12);
    v8 = 16LL * *(unsigned int *)(a1 + 8);
    if ( v8 > 0xFFFFFFFF )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x65,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)0x80070216LL);
      return 2147942934LL;
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v7 <= 0x10 )
      {
        v12 = -2147024809;
        goto LABEL_8;
      }
      ProcessHeap = GetProcessHeap();
      v10 = HeapAlloc(ProcessHeap, 0, 16LL * v7);
      v11 = v10;
      if ( !v10 )
      {
        v12 = -2147024882;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x68,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v12);
        return v12;
      }
      memcpy_0(v10, *a5, (unsigned int)v8);
      v14 = (void *)*a5;
      if ( *a5 )
      {
        v15 = GetProcessHeap();
        HeapFree(v15, 0, v14);
      }
      *a5 = v11;
      result = 0LL;
      *(_DWORD *)(a1 + 12) = v7;
    }
  }
  return result;
}
