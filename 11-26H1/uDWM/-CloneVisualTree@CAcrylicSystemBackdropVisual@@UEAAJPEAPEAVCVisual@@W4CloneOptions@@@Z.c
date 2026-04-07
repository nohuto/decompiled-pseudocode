/*
 * XREFs of ?CloneVisualTree@CAcrylicSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180084D90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CSystemBackdropVisual@@SAJW4SYSTEMBACKDROP_TYPE@@PEAPEAV1@@Z @ 0x180027194 (-Create@CSystemBackdropVisual@@SAJW4SYSTEMBACKDROP_TYPE@@PEAPEAV1@@Z.c)
 *     ?InitializeVisualTreeClone@CSystemBackdropVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180027914 (-InitializeVisualTreeClone@CSystemBackdropVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAcrylicSystemBackdropVisual::CloneVisualTree(__int64 a1, CBaseObject **a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // r8d
  CBaseObject *v9; // rdi
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v13; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  v6 = CSystemBackdropVisual::Create(3, &v13);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = a3;
    v9 = v13;
    v10 = CSystemBackdropVisual::InitializeVisualTreeClone(a1, v13, v8);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v13 = 0LL;
      *a2 = v9;
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF,
        (int)"clientcore\\windows\\dwm\\udwm\\acrylicsystembackdropvisual.cpp",
        (const char *)(unsigned int)v10);
    }
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v13);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD,
      (int)"clientcore\\windows\\dwm\\udwm\\acrylicsystembackdropvisual.cpp",
      (const char *)(unsigned int)v6);
    if ( v13 )
      CBaseObject::Release(v13);
  }
  return v7;
}
