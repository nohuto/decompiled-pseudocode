/*
 * XREFs of ?Grow@?$CWatermarkStack@VCCornerRects@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z @ 0x180237300
 * Callers:
 *     ?Push@?$CWatermarkStack@VCCornerRects@@$07$01$07@@QEAAJAEBVCCornerRects@@@Z @ 0x1800DEF3C (-Push@-$CWatermarkStack@VCCornerRects@@$07$01$07@@QEAAJAEBVCCornerRects@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800E1EE0 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CCornerRects,8,2,8>::Grow(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        const void **a5)
{
  unsigned __int64 v6; // rax
  unsigned int v7; // esi
  unsigned __int64 v8; // rdi
  int v9; // ebx
  __int64 v10; // rdx
  void *v11; // rbx
  size_t v12; // r8
  void **v13; // rdi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v16; // [rsp+38h] [rbp+10h] BYREF

  v16 = a2;
  v6 = 2LL * *(unsigned int *)(a1 + 12);
  if ( v6 > 0xFFFFFFFF )
  {
    v10 = 98LL;
    goto LABEL_10;
  }
  v7 = 8;
  if ( (unsigned int)v6 > 8 )
    v7 = 2 * *(_DWORD *)(a1 + 12);
  v8 = 68LL * *(unsigned int *)(a1 + 8);
  if ( v8 > 0xFFFFFFFF )
  {
    v10 = 101LL;
LABEL_10:
    v9 = -2147024362;
    goto LABEL_11;
  }
  v16 = 0LL;
  v9 = HrMalloc(0x44uLL, v7, &v16);
  if ( v9 >= 0 )
  {
    v11 = v16;
    v12 = (unsigned int)v8;
    v13 = (void **)a5;
    memcpy_0(v16, *a5, v12);
    operator delete(*v13);
    *v13 = v11;
    result = 0LL;
    *(_DWORD *)(a1 + 12) = v7;
    return result;
  }
  v10 = 104LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
    (const char *)(unsigned int)v9);
  return (unsigned int)v9;
}
