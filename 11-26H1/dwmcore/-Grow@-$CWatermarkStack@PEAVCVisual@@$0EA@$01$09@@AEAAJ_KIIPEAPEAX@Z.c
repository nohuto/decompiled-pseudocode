/*
 * XREFs of ?Grow@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x18018FFFC
 * Callers:
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x1800D1FC8 (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CVisual *,64,2,10>::Grow(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const void **a5)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 result; // rax
  unsigned int v10; // edi
  unsigned __int64 v11; // rsi
  HANDLE ProcessHeap; // rax
  void *v13; // rax
  const void *v14; // rbp
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = 2LL * *(unsigned int *)(a1 + 12);
  if ( v6 > 0xFFFFFFFF )
  {
    v7 = 98LL;
LABEL_3:
    v8 = -2147024362;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)v8);
    return v8;
  }
  v10 = 64;
  if ( (unsigned int)v6 > 0x40 )
    v10 = 2 * *(_DWORD *)(a1 + 12);
  v11 = 8LL * *(unsigned int *)(a1 + 8);
  if ( v11 > 0xFFFFFFFF )
  {
    v7 = 101LL;
    goto LABEL_3;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v10 <= 8 )
  {
    v8 = -2147024809;
    goto LABEL_12;
  }
  ProcessHeap = GetProcessHeap();
  v13 = HeapAlloc(ProcessHeap, 0, 8LL * v10);
  v14 = v13;
  if ( !v13 )
  {
    v8 = -2147024882;
LABEL_12:
    v7 = 104LL;
    goto LABEL_4;
  }
  memcpy_0(v13, *a5, (unsigned int)v11);
  operator delete((void *)*a5);
  *a5 = v14;
  result = 0LL;
  *(_DWORD *)(a1 + 12) = v10;
  return result;
}
