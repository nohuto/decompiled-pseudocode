/*
 * XREFs of ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x180182FD0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  unsigned int v6; // eax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  unsigned int v10; // ebp
  unsigned int v11; // r15d
  void *v12; // rax
  void *v13; // r14
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
          v12 = MIDL_user_allocate(16LL * v10);
          v13 = v12;
          if ( v12 )
          {
            memcpy_0(v12, *(const void **)a1, v11);
            operator delete(*(void **)a1);
            *(_QWORD *)a1 = v13;
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
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v9);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v9);
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
