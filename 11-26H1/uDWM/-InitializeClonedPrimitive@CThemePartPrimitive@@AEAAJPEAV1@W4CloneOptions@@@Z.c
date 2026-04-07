/*
 * XREFs of ?InitializeClonedPrimitive@CThemePartPrimitive@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800BD794
 * Callers:
 *     ?ClonePrimitive@CThemePartPrimitive@@UEAAJPEAPEAVCPrimitive@@W4CloneOptions@@@Z @ 0x1800BCC10 (-ClonePrimitive@CThemePartPrimitive@@UEAAJPEAPEAVCPrimitive@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeClonedPrimitive@CNineGridImagePrimitive@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800BD6D0 (-InitializeClonedPrimitive@CNineGridImagePrimitive@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 */

__int64 __fastcall CThemePartPrimitive::InitializeClonedPrimitive(__int64 a1, CPrimitive *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CNineGridImagePrimitive::InitializeClonedPrimitive(a1, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *((_DWORD *)a2 + 18) = *(_DWORD *)(a1 + 72);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F9,
      (int)"clientcore\\windows\\dwm\\udwm\\primitive.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
