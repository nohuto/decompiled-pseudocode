/*
 * XREFs of ?InitializeVisualTreeClone@CPrimitiveGroupVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180083114
 * Callers:
 *     ?CloneVisualTree@CPrimitiveGroupVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180027660 (-CloneVisualTree@CPrimitiveGroupVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x180016C4C (-InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?SetClipMargins@CPrimitiveGroupVisual@@QEAAXPEBU_MARGINS@@@Z @ 0x18006A4F4 (-SetClipMargins@CPrimitiveGroupVisual@@QEAAXPEBU_MARGINS@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AppendPrimitive@CPrimitiveGroupVisual@@QEAAXPEAVCPrimitive@@@Z @ 0x1800BDB34 (-AppendPrimitive@CPrimitiveGroupVisual@@QEAAXPEAVCPrimitive@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPrimitiveGroupVisual::InitializeVisualTreeClone(__int64 a1, CContainerVisual *a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // edi
  __int64 **v9; // rdi
  __int64 **v10; // rbp
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CPrimitive *v17; // [rsp+58h] [rbp+20h] BYREF

  v6 = CContainerVisual::InitializeVisualTreeClone(a1, a2, a3);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( *(_BYTE *)(a1 + 256) )
      CPrimitiveGroupVisual::SetClipMargins(a2, (const struct _MARGINS *)(a1 + 240));
    v9 = *(__int64 ***)(a1 + 208);
    v10 = *(__int64 ***)(a1 + 216);
    while ( v9 != v10 )
    {
      v17 = 0LL;
      v11 = *v9;
      v12 = **v9;
      v17 = 0LL;
      v13 = (*(__int64 (__fastcall **)(__int64 *, struct CPrimitive **, _QWORD))(v12 + 8))(v11, &v17, a3);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x45,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\primitivegroupvisual.cpp",
          (const char *)(unsigned int)v13,
          v15);
        wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v17);
        return v14;
      }
      if ( v17 )
        CPrimitiveGroupVisual::AppendPrimitive(a2, v17);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v17);
      ++v9;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\primitivegroupvisual.cpp",
      (const char *)(unsigned int)v6,
      v15);
    return v7;
  }
}
