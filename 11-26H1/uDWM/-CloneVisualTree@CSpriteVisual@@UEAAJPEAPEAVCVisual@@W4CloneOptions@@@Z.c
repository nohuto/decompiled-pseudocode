/*
 * XREFs of ?CloneVisualTree@CSpriteVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800BFB40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x180016C4C (-InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Create@CSpriteVisual@@SAJPEAPEAV1@@Z @ 0x180078528 (-Create@CSpriteVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSpriteVisual::CloneVisualTree(__int64 a1, CBaseObject **a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned int v9; // r8d
  CBaseObject *v10; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v13; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  v6 = CSpriteVisual::Create(&v13);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = a3;
    v10 = v13;
    v6 = CContainerVisual::InitializeVisualTreeClone(a1, v13, v9);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v13 = 0LL;
      *a2 = v10;
      v7 = 0;
      goto LABEL_7;
    }
    v8 = 24LL;
  }
  else
  {
    v8 = 22LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"clientcore\\windows\\dwm\\udwm\\spritevisual.cpp",
    (const char *)(unsigned int)v6);
LABEL_7:
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v13);
  return v7;
}
