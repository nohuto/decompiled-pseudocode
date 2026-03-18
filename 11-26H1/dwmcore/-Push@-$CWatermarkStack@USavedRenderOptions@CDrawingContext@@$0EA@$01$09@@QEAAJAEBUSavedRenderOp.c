/*
 * XREFs of ?Push@?$CWatermarkStack@USavedRenderOptions@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSavedRenderOptions@CDrawingContext@@@Z @ 0x18007F100
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1801BCE20 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CDrawingContext::SavedRenderOptions,64,2,10>::Push(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  __int64 v6; // xmm1_8
  __int64 v7; // rcx
  _QWORD *v8; // rax
  unsigned int v9; // eax
  unsigned int v11; // edx
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // rbp
  unsigned int v15; // r14d
  void *v16; // rax
  void *v17; // r15
  int v18; // [rsp+20h] [rbp-18h]
  int v19; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(unsigned int *)(a1 + 12);
  v4 = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)v4 == (_DWORD)v2 )
  {
    v11 = 2 * v2;
    if ( (unsigned __int64)(2 * v2) <= 0xFFFFFFFF )
    {
      v14 = 64LL;
      if ( v11 > 0x40 )
        v14 = v11;
      v15 = 24 * v4;
      if ( (unsigned __int64)(24 * v4) <= 0xFFFFFFFF )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v14 <= 0x18 )
        {
          v13 = -2147024809;
        }
        else
        {
          v16 = MIDL_user_allocate(24 * v14);
          v17 = v16;
          if ( v16 )
          {
            memcpy_0(v16, *(const void **)a1, v15);
            operator delete(*(void **)a1);
            *(_QWORD *)a1 = v17;
            *(_DWORD *)(a1 + 12) = v14;
            goto LABEL_2;
          }
          v13 = -2147024882;
        }
        v12 = 104LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v13,
          v18);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v13,
          v19);
        return v13;
      }
      v12 = 101LL;
    }
    else
    {
      v12 = 98LL;
    }
    v13 = -2147024362;
    goto LABEL_8;
  }
LABEL_2:
  v6 = *(_QWORD *)(a2 + 16);
  v7 = 3LL * *(unsigned int *)(a1 + 8);
  v8 = *(_QWORD **)a1;
  *(_OWORD *)&v8[v7] = *(_OWORD *)a2;
  v8[v7 + 2] = v6;
  ++*(_DWORD *)(a1 + 8);
  v9 = *(_DWORD *)(a1 + 20);
  if ( v9 <= *(_DWORD *)(a1 + 8) )
    v9 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 20) = v9;
  return 0LL;
}
