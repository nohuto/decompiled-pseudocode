/*
 * XREFs of ?Create@CCursorVisual@@SAJPEAVCCompositor@@_KPEAPEAV1@@Z @ 0x1800A9634
 * Callers:
 *     ?CreateCursorVisual@CWindowList@@QEAAJXZ @ 0x1800E00A8 (-CreateCursorVisual@CWindowList@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ??0CVisual@@IEAA@XZ @ 0x1800212F0 (--0CVisual@@IEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 *     ?CreateCursorVisualProxy@CCompositor@@QEAAJPEAPEAVCCursorVisualProxy@@@Z @ 0x1800A7F7C (-CreateCursorVisualProxy@CCompositor@@QEAAJPEAPEAVCCursorVisualProxy@@@Z.c)
 *     ?SetCursorId@CCursorVisualProxy@@QEAAJ_K@Z @ 0x1800A9780 (-SetCursorId@CCursorVisualProxy@@QEAAJ_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCursorVisual::Create(struct IDwmChannel **a1, unsigned __int64 a2, struct CCursorVisual **a3)
{
  int CursorVisualProxy; // eax
  unsigned int v6; // ebx
  unsigned __int64 v7; // rdx
  CCursorVisualProxy *v8; // rdi
  CBaseObject *v9; // rax
  CVisual *v10; // rbx
  CCursorVisualProxy *v12[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CBaseObject *v14; // [rsp+58h] [rbp+20h] BYREF

  v12[0] = 0LL;
  CursorVisualProxy = CCompositor::CreateCursorVisualProxy(a1, v12);
  v6 = CursorVisualProxy;
  if ( CursorVisualProxy >= 0 )
  {
    v7 = a2;
    v8 = v12[0];
    CCursorVisualProxy::SetCursorId(v12[0], v7);
    v9 = (CBaseObject *)DefaultHeap::AllocClear(0x88uLL);
    v10 = v9;
    v14 = v9;
    if ( v9 )
    {
      memset_0(v9, 0, 0x88uLL);
      CVisual::CVisual(v10);
      *(_QWORD *)v10 = &CCursorVisual::`vftable';
      v12[0] = 0LL;
      *((_QWORD *)v10 + 2) = v8;
      v14 = 0LL;
      *a3 = v10;
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v14);
      v6 = 0;
    }
    else
    {
      v14 = 0LL;
      v6 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D,
        (int)"clientcore\\windows\\dwm\\udwm\\cursorvisual.cpp",
        (const char *)0x8007000ELL);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v14);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17,
      (int)"clientcore\\windows\\dwm\\udwm\\cursorvisual.cpp",
      (const char *)(unsigned int)CursorVisualProxy);
  }
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(v12);
  return v6;
}
