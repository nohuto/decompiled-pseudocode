/*
 * XREFs of ?CloneVisualTree@CNineGridVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800BBA80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800421D8 (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?InitializeVisualTreeClone@CNineGridVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18004F058 (-InitializeVisualTreeClone@CNineGridVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Create@CNineGridVisual@@SAJPEAPEAV1@@Z @ 0x18006F188 (-Create@CNineGridVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CNineGridVisual::CloneVisualTree(__int64 a1, struct CNineGridVisual **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  struct CNineGridVisual *v7; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CNineGridVisual *v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(&v10);
  v4 = CNineGridVisual::Create(&v10);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = v10;
    v4 = CNineGridVisual::InitializeVisualTreeClone(a1, (__int64)v10);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v10 = 0LL;
      *a2 = v7;
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 13LL;
  }
  else
  {
    v6 = 12LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"clientcore\\windows\\dwm\\udwm\\ninegridvisual.cpp",
    (const char *)(unsigned int)v4);
LABEL_7:
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v10);
  return v5;
}
