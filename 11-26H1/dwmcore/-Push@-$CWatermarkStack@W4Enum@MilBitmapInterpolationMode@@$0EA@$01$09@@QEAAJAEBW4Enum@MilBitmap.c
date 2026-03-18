/*
 * XREFs of ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18007F520
 * Callers:
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18007FB10 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1800D2B38 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ebx
  void *v10; // r14
  unsigned int v11; // eax
  __int64 v12; // rbp
  unsigned int v13; // r14d
  HANDLE ProcessHeap; // rax
  void *v15; // rax
  void *v16; // rdi
  HANDLE v17; // rax
  int v18; // [rsp+20h] [rbp-18h]
  int v19; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(unsigned int *)(a1 + 12);
  v4 = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)v4 == (_DWORD)v2 )
  {
    v6 = 2 * v2;
    if ( v6 > 0xFFFFFFFF )
    {
      v7 = 98LL;
LABEL_4:
      v8 = -2147024362;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)v8,
        v18);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)v8,
        v19);
      return v8;
    }
    v12 = 64LL;
    if ( (unsigned int)v6 > 0x40 )
      v12 = (unsigned int)v6;
    v13 = 4 * v4;
    if ( (unsigned __int64)(4 * v4) > 0xFFFFFFFF )
    {
      v7 = 101LL;
      goto LABEL_4;
    }
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v12 <= 4 )
    {
      v8 = -2147024809;
      goto LABEL_19;
    }
    ProcessHeap = GetProcessHeap();
    v15 = HeapAlloc(ProcessHeap, 0, 4 * v12);
    v16 = v15;
    if ( !v15 )
    {
      v8 = -2147024882;
LABEL_19:
      v7 = 104LL;
      goto LABEL_5;
    }
    memcpy_0(v15, *(const void **)a1, v13);
    v10 = *(void **)a1;
    if ( *(_QWORD *)a1 )
    {
      v17 = GetProcessHeap();
      HeapFree(v17, 0, v10);
    }
    *(_QWORD *)a1 = v16;
    *(_DWORD *)(a1 + 12) = v12;
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4LL * (unsigned int)(*(_DWORD *)(a1 + 8))++) = *a2;
  v11 = *(_DWORD *)(a1 + 20);
  if ( v11 <= *(_DWORD *)(a1 + 8) )
    v11 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 20) = v11;
  return 0LL;
}
