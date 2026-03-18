/*
 * XREFs of ?Push@?$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMode@@@Z @ 0x180189EB0
 * Callers:
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18007FB10 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1800D2B38 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v4; // ecx
  unsigned __int64 v6; // rdx
  __int64 v7; // rbp
  unsigned __int64 v8; // r14
  __int64 v9; // rdx
  unsigned int v10; // eax
  unsigned int v12; // ebx
  void *v13; // rax
  void *v14; // r15
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(_DWORD *)(a1 + 12);
  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 == v2 )
  {
    v6 = 2LL * v2;
    if ( v6 > 0xFFFFFFFF )
    {
      v9 = 98LL;
      goto LABEL_12;
    }
    v7 = 64LL;
    if ( (unsigned int)v6 > 0x40 )
      v7 = (unsigned int)v6;
    v8 = 4LL * v4;
    if ( v8 > 0xFFFFFFFF )
    {
      v9 = 101LL;
LABEL_12:
      v12 = -2147024362;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)v12);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)v12);
      return v12;
    }
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v7 <= 4 )
    {
      v12 = -2147024809;
      goto LABEL_17;
    }
    v13 = MIDL_user_allocate(4 * v7);
    v14 = v13;
    if ( !v13 )
    {
      v12 = -2147024882;
LABEL_17:
      v9 = 104LL;
      goto LABEL_13;
    }
    memcpy_0(v13, *(const void **)a1, (unsigned int)v8);
    operator delete(*(void **)a1);
    *(_QWORD *)a1 = v14;
    *(_DWORD *)(a1 + 12) = v7;
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4LL * (unsigned int)(*(_DWORD *)(a1 + 8))++) = *a2;
  v10 = *(_DWORD *)(a1 + 20);
  if ( v10 <= *(_DWORD *)(a1 + 8) )
    v10 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 20) = v10;
  return 0LL;
}
