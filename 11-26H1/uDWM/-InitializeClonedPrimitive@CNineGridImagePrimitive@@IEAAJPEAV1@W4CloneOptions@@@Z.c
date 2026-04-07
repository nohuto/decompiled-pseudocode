/*
 * XREFs of ?InitializeClonedPrimitive@CNineGridImagePrimitive@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800BD6D0
 * Callers:
 *     ?ClonePrimitive@CNineGridImagePrimitive@@UEAAJPEAPEAVCPrimitive@@W4CloneOptions@@@Z @ 0x1800BCB70 (-ClonePrimitive@CNineGridImagePrimitive@@UEAAJPEAPEAVCPrimitive@@W4CloneOptions@@@Z.c)
 *     ?InitializeClonedPrimitive@CThemePartPrimitive@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800BD794 (-InitializeClonedPrimitive@CThemePartPrimitive@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?SetBitmapSource@CNineGridImagePrimitive@@QEAAXPEAVCBitmapSource@@@Z @ 0x180072CA8 (-SetBitmapSource@CNineGridImagePrimitive@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetHiddenMargins@CNineGridImagePrimitive@@QEAAXU?$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@@@@@Z @ 0x18008DD88 (-SetHiddenMargins@CNineGridImagePrimitive@@QEAAXU-$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@.c)
 *     ?InitializeClonedPrimitive@CPrimitive@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800BD74C (-InitializeClonedPrimitive@CPrimitive@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?InternalSetOpacity@CNineGridImagePrimitive@@IEAAXM@Z @ 0x1800BD7F0 (-InternalSetOpacity@CNineGridImagePrimitive@@IEAAXM@Z.c)
 */

__int64 __fastcall CNineGridImagePrimitive::InitializeClonedPrimitive(__int64 a1, CPrimitive *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CPrimitive::InitializeClonedPrimitive();
  v5 = v4;
  if ( v4 >= 0 )
  {
    CNineGridImagePrimitive::SetHiddenMargins(a2, *(_DWORD *)(a1 + 64));
    CNineGridImagePrimitive::InternalSetOpacity(a2, *(float *)(a1 + 68));
    CNineGridImagePrimitive::SetBitmapSource(a2, *(struct CBitmapSource **)(a1 + 56));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAF,
      (int)"clientcore\\windows\\dwm\\udwm\\primitive.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
