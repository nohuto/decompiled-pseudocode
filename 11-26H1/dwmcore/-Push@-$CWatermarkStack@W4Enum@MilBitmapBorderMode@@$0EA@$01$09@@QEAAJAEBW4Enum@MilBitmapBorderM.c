/*
 * XREFs of ?Push@?$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapBorderMode@@@Z @ 0x18007F6A0
 * Callers:
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18007FB10 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1800D2B38 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Push(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  unsigned int v6; // eax
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // rbp
  unsigned int v12; // r14d
  HANDLE ProcessHeap; // rax
  void *v14; // rax
  void *v15; // rdi
  void *v16; // r14
  HANDLE v17; // rax
  int v18; // [rsp+20h] [rbp-18h]
  int v19; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(unsigned int *)(a1 + 12);
  v4 = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)v4 == (_DWORD)v2 )
  {
    v8 = 2 * v2;
    if ( v8 <= 0xFFFFFFFF )
    {
      v11 = 64LL;
      if ( (unsigned int)v8 > 0x40 )
        v11 = (unsigned int)v8;
      v12 = 4 * v4;
      if ( (unsigned __int64)(4 * v4) <= 0xFFFFFFFF )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v11 <= 4 )
        {
          v10 = -2147024809;
        }
        else
        {
          ProcessHeap = GetProcessHeap();
          v14 = HeapAlloc(ProcessHeap, 0, 4 * v11);
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
  *(_DWORD *)(*(_QWORD *)a1 + 4LL * (unsigned int)(*(_DWORD *)(a1 + 8))++) = *a2;
  v6 = *(_DWORD *)(a1 + 20);
  if ( v6 <= *(_DWORD *)(a1 + 8) )
    v6 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 20) = v6;
  return 0LL;
}
