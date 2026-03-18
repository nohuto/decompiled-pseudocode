/*
 * XREFs of ?UpdateVisualTree@CCachedVisualImage@@MEAAJXZ @ 0x18014CBF0
 * Callers:
 *     ?Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180262ED8 (-Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180218218 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 */

__int64 __fastcall CCachedVisualImage::UpdateVisualTree(CCachedVisualImage *this)
{
  __int64 *v1; // rdi
  __int64 v2; // rdx
  CVisual **v3; // rbx
  CVisual *v4; // rbx
  int VisualTree; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (__int64 *)((char *)this + 160);
  v2 = *((_QWORD *)this + 20);
  v3 = (CVisual **)((char *)this + 120);
  if ( v2 && *(CVisual **)(v2 + 72) != *v3 )
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 20);
  if ( *v1 )
    return 0LL;
  v4 = *v3;
  if ( !v4 )
    return 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
  VisualTree = CVisual::GetVisualTree(v4, (struct CVisualTree **)v1, 1);
  v6 = VisualTree;
  if ( VisualTree >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x20E,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\cachedvisualimage.cpp",
    (const char *)(unsigned int)VisualTree);
  return v6;
}
