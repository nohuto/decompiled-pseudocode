/*
 * XREFs of ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x18007EFA0
 * Callers:
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18007FB10 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1800D2B38 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<bool,64,2,10>::Push(__int64 a1, _BYTE *a2)
{
  size_t v3; // rbp
  unsigned int *v5; // r8
  unsigned int v6; // eax
  unsigned __int64 v8; // r14
  unsigned int v9; // ebx
  __int64 v10; // rdx
  HANDLE ProcessHeap; // rax
  void *v12; // rax
  void *v13; // r15
  void *v14; // rbp
  HANDLE v15; // rax
  int v16; // [rsp+20h] [rbp-18h]
  int v17; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)v3 == *(_DWORD *)(a1 + 12) )
  {
    v8 = 2LL * *(unsigned int *)(a1 + 12);
    if ( v8 <= 0xFFFFFFFF )
    {
      if ( (unsigned int)v8 <= 0x40 )
        LODWORD(v8) = 64;
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v8 <= 1 )
      {
        v9 = -2147024809;
      }
      else
      {
        ProcessHeap = GetProcessHeap();
        v12 = HeapAlloc(ProcessHeap, 0, (unsigned int)v8);
        v13 = v12;
        if ( v12 )
        {
          memcpy_0(v12, *(const void **)a1, v3);
          v14 = *(void **)a1;
          if ( *(_QWORD *)a1 )
          {
            v15 = GetProcessHeap();
            HeapFree(v15, 0, v14);
          }
          *(_QWORD *)a1 = v13;
          v5 = (unsigned int *)(a1 + 8);
          *(_DWORD *)(a1 + 12) = v8;
          goto LABEL_3;
        }
        v9 = -2147024882;
      }
      v10 = 104LL;
    }
    else
    {
      v9 = -2147024362;
      v10 = 98LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)v9,
      v16);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)v9,
      v17);
    return v9;
  }
  v5 = (unsigned int *)(a1 + 8);
LABEL_3:
  *(_BYTE *)(*(unsigned int *)(a1 + 8) + *(_QWORD *)a1) = *a2;
  ++*v5;
  v6 = *(_DWORD *)(a1 + 20);
  if ( v6 <= *v5 )
    v6 = *v5;
  *(_DWORD *)(a1 + 20) = v6;
  return 0LL;
}
