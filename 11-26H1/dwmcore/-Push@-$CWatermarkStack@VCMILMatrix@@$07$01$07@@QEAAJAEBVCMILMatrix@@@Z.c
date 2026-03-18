/*
 * XREFs of ?Push@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z @ 0x18007E1B0
 * Callers:
 *     ?ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180064790 (-ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CMILMatrix,8,2,8>::Push(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  __int64 v6; // rdx
  unsigned int v7; // eax
  __int64 v9; // rdx
  unsigned int v10; // ebx
  unsigned int v11; // r14d
  unsigned int v12; // r15d
  HANDLE ProcessHeap; // rax
  void *v14; // rax
  void *v15; // rdi
  void *v16; // r15
  HANDLE v17; // rax
  int v18; // [rsp+20h] [rbp-18h]
  int v19; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(unsigned int *)(a1 + 12);
  v4 = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)v4 == (_DWORD)v2 )
  {
    if ( (unsigned __int64)(2 * v2) <= 0xFFFFFFFF )
    {
      v11 = 8;
      if ( (unsigned int)(2 * v2) > 8 )
        v11 = 2 * v2;
      v12 = 68 * v4;
      if ( (unsigned __int64)(68 * v4) <= 0xFFFFFFFF )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v11 <= 0x44 )
        {
          v10 = -2147024809;
        }
        else
        {
          ProcessHeap = GetProcessHeap();
          v14 = HeapAlloc(ProcessHeap, 0, 68LL * v11);
          v15 = v14;
          if ( v14 )
          {
            memcpy_0(v14, *(const void **)a1, v12);
            v16 = *(void **)a1;
            if ( *(_QWORD *)a1 )
            {
              v17 = GetProcessHeap();
              HeapFree(v17, 0, v16);
            }
            *(_QWORD *)a1 = v15;
            *(_DWORD *)(a1 + 12) = v11;
            goto LABEL_2;
          }
          v10 = -2147024882;
        }
        v9 = 104LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v10,
          v18);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v10,
          v19);
        return v10;
      }
      v9 = 101LL;
    }
    else
    {
      v9 = 98LL;
    }
    v10 = -2147024362;
    goto LABEL_8;
  }
LABEL_2:
  v6 = *(_QWORD *)a1 + 68LL * *(unsigned int *)(a1 + 8);
  *(_OWORD *)v6 = *(_OWORD *)a2;
  *(_OWORD *)(v6 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(v6 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v6 + 48) = *(_OWORD *)(a2 + 48);
  *(_DWORD *)(v6 + 64) = *(_DWORD *)(a2 + 64);
  ++*(_DWORD *)(a1 + 8);
  v7 = *(_DWORD *)(a1 + 20);
  if ( v7 <= *(_DWORD *)(a1 + 8) )
    v7 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 20) = v7;
  return 0LL;
}
