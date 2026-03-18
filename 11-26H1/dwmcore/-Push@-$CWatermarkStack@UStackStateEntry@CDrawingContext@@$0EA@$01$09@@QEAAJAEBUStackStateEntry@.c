/*
 * XREFs of ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x18007F250
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800C70F0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ?PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z @ 0x1800FA610 (-PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1801BCE20 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  unsigned int v6; // eax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  unsigned int v10; // ebp
  unsigned int v11; // r14d
  HANDLE ProcessHeap; // rax
  void *v13; // rax
  void *v14; // r15
  int v15; // [rsp+20h] [rbp-18h]
  int v16; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(unsigned int *)(a1 + 12);
  v4 = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)v4 == (_DWORD)v2 )
  {
    if ( (unsigned __int64)(2 * v2) <= 0xFFFFFFFF )
    {
      v10 = 64;
      if ( (unsigned int)(2 * v2) > 0x40 )
        v10 = 2 * v2;
      v11 = 16 * v4;
      if ( (unsigned __int64)(16 * v4) <= 0xFFFFFFFF )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v10 <= 0x10 )
        {
          v9 = -2147024809;
        }
        else
        {
          ProcessHeap = GetProcessHeap();
          v13 = HeapAlloc(ProcessHeap, 0, 16LL * v10);
          v14 = v13;
          if ( v13 )
          {
            memcpy_0(v13, *(const void **)a1, v11);
            operator delete(*(void **)a1);
            *(_QWORD *)a1 = v14;
            *(_DWORD *)(a1 + 12) = v10;
            goto LABEL_2;
          }
          v9 = -2147024882;
        }
        v8 = 104LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v9,
          v15);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v9,
          v16);
        return v9;
      }
      v8 = 101LL;
    }
    else
    {
      v8 = 98LL;
    }
    v9 = -2147024362;
    goto LABEL_8;
  }
LABEL_2:
  *(_OWORD *)(*(_QWORD *)a1 + 16LL * (unsigned int)(*(_DWORD *)(a1 + 8))++) = *a2;
  v6 = *(_DWORD *)(a1 + 20);
  if ( v6 <= *(_DWORD *)(a1 + 8) )
    v6 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 20) = v6;
  return 0LL;
}
