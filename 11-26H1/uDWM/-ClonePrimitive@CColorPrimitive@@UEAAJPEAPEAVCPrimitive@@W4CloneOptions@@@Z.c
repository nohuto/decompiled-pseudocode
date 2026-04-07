/*
 * XREFs of ?ClonePrimitive@CColorPrimitive@@UEAAJPEAPEAVCPrimitive@@W4CloneOptions@@@Z @ 0x1800BCAD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CColorPrimitive@@SAJPEAPEAV1@@Z @ 0x1800BCCC0 (-Create@CColorPrimitive@@SAJPEAPEAV1@@Z.c)
 *     ?InitializeClonedPrimitive@CColorPrimitive@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800BD66C (-InitializeClonedPrimitive@CColorPrimitive@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CColorPrimitive::ClonePrimitive(__int64 a1, CBaseObject **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  CBaseObject *v7; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  v4 = CColorPrimitive::Create(&v10);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = v10;
    v4 = CColorPrimitive::InitializeClonedPrimitive(a1, v10);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v10 = 0LL;
      *a2 = v7;
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 81LL;
  }
  else
  {
    v6 = 80LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"clientcore\\windows\\dwm\\udwm\\primitive.cpp",
    (const char *)(unsigned int)v4);
LABEL_7:
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v10);
  return v5;
}
