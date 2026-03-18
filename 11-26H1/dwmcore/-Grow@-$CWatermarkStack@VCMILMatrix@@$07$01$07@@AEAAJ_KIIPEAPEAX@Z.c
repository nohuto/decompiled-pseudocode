/*
 * XREFs of ?Grow@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z @ 0x18007ECC0
 * Callers:
 *     ?ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180064790 (-ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E360 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180089340 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ProcessVisualsWorldTransformAndClip@CPreComputeContext@@AEAAJPEAVCVisual@@0PEAVCPreComputeSubTreeContext@@PEAVCMILMatrix@@@Z @ 0x1800CB9B0 (-ProcessVisualsWorldTransformAndClip@CPreComputeContext@@AEAAJPEAVCVisual@@0PEAVCPreComputeSubTr.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x1800D4BB0 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CMILMatrix,8,2,8>::Grow(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const void **a5)
{
  unsigned __int64 v6; // rax
  unsigned int v7; // edi
  unsigned __int64 v8; // r14
  HANDLE ProcessHeap; // rax
  void *v10; // rax
  const void *v11; // rsi
  void *v12; // r14
  __int64 result; // rax
  unsigned int v14; // ebx
  HANDLE v15; // rax
  int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = 2LL * *(unsigned int *)(a1 + 12);
  if ( v6 > 0xFFFFFFFF )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)0x80070216LL,
      v16);
    return 2147942934LL;
  }
  v7 = 8;
  if ( (unsigned int)v6 > 8 )
    v7 = 2 * *(_DWORD *)(a1 + 12);
  v8 = 68LL * *(unsigned int *)(a1 + 8);
  if ( v8 > 0xFFFFFFFF )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)0x80070216LL,
      v16);
    return 2147942934LL;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v7 <= 0x44 )
  {
    v14 = -2147024809;
    goto LABEL_13;
  }
  ProcessHeap = GetProcessHeap();
  v10 = HeapAlloc(ProcessHeap, 0, 68LL * v7);
  v11 = v10;
  if ( !v10 )
  {
    v14 = -2147024882;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x68,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)v14,
      v16);
    return v14;
  }
  memcpy_0(v10, *a5, (unsigned int)v8);
  v12 = (void *)*a5;
  if ( *a5 )
  {
    v15 = GetProcessHeap();
    HeapFree(v15, 0, v12);
  }
  *a5 = v11;
  result = 0LL;
  *(_DWORD *)(a1 + 12) = v7;
  return result;
}
