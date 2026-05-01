/*
 * XREFs of ??$make@VTouchGestureComponent@@$$V@winrt@@YA?A_PXZ @ 0x18058B450
 * Callers:
 *     ?CreateInstance@TouchGestureComponentClassFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18058B790 (-CreateInstance@TouchGestureComponentClassFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??0?$heap_implements@VTouchGestureComponent@@@impl@winrt@@QEAA@XZ @ 0x18058B4F0 (--0-$heap_implements@VTouchGestureComponent@@@impl@winrt@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::make<TouchGestureComponent,>(__int64 *a1)
{
  __int64 v2; // rax
  void *v4; // [rsp+40h] [rbp+8h]

  v4 = operator new(0x1A0uLL);
  memset_0(v4, 0, 0x1A0uLL);
  v2 = winrt::impl::heap_implements<TouchGestureComponent>::heap_implements<TouchGestureComponent>(v4);
  *a1 = (v2 + 16) & -(__int64)(v2 != 0);
  return a1;
}
