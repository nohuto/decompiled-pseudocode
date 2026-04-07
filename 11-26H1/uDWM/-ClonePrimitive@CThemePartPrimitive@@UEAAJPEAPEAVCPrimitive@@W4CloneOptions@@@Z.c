/*
 * XREFs of ?ClonePrimitive@CThemePartPrimitive@@UEAAJPEAPEAVCPrimitive@@W4CloneOptions@@@Z @ 0x1800BCC10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Create@CThemePartPrimitive@@SAJPEAPEAV1@@Z @ 0x1800738BC (-Create@CThemePartPrimitive@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeClonedPrimitive@CThemePartPrimitive@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800BD794 (-InitializeClonedPrimitive@CThemePartPrimitive@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?ShouldClone@CThemePartPrimitive@@AEBA_NW4CloneOptions@@@Z @ 0x1800BD8E0 (-ShouldClone@CThemePartPrimitive@@AEBA_NW4CloneOptions@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CThemePartPrimitive::ClonePrimitive(__int64 a1, struct CThemePartPrimitive **a2, unsigned int a3)
{
  struct CThemePartPrimitive *v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CThemePartPrimitive *v11; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  if ( !(unsigned __int8)CThemePartPrimitive::ShouldClone(a1, a3) )
    goto LABEL_7;
  v11 = 0LL;
  v6 = CThemePartPrimitive::Create(&v11);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v5 = v11;
    v6 = CThemePartPrimitive::InitializeClonedPrimitive(a1, v11);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 494LL;
      goto LABEL_6;
    }
LABEL_7:
    v11 = 0LL;
    *a2 = v5;
    v7 = 0;
    goto LABEL_8;
  }
  v8 = 493LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"clientcore\\windows\\dwm\\udwm\\primitive.cpp",
    (const char *)(unsigned int)v6);
LABEL_8:
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v11);
  return v7;
}
