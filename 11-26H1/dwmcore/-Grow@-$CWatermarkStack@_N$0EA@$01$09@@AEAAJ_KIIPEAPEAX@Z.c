/*
 * XREFs of ?Grow@?$CWatermarkStack@_N$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x18007EE50
 * Callers:
 *     ?ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180064790 (-ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushTransformForNode@CDrawingContext@@AEAAJPEBVCVisual@@PEBVCMILMatrix@@_N@Z @ 0x18013FF80 (-PushTransformForNode@CDrawingContext@@AEAAJPEBVCVisual@@PEBVCMILMatrix@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<bool,64,2,10>::Grow(__int64 a1, __int64 a2, __int64 a3, __int64 a4, const void **a5)
{
  unsigned __int64 v6; // rax
  unsigned int v7; // edi
  size_t v8; // r14
  HANDLE ProcessHeap; // rax
  void *v10; // rax
  const void *v11; // rbp
  unsigned int v12; // ebx
  __int64 result; // rax
  void *v14; // r14
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
  else
  {
    v7 = 64;
    v8 = *(unsigned int *)(a1 + 8);
    if ( (unsigned int)v6 > 0x40 )
      v7 = 2 * *(_DWORD *)(a1 + 12);
    if ( 0xFFFFFFFFFFFFFFFFuLL / v7 <= 1 )
    {
      v12 = -2147024809;
      goto LABEL_7;
    }
    ProcessHeap = GetProcessHeap();
    v10 = HeapAlloc(ProcessHeap, 0, v7);
    v11 = v10;
    if ( !v10 )
    {
      v12 = -2147024882;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x68,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)v12,
        v16);
      return v12;
    }
    memcpy_0(v10, *a5, v8);
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
  return result;
}
