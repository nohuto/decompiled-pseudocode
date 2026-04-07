/*
 * XREFs of ?InitializeClonedPrimitive@CColorPrimitive@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800BD66C
 * Callers:
 *     ?ClonePrimitive@CColorPrimitive@@UEAAJPEAPEAVCPrimitive@@W4CloneOptions@@@Z @ 0x1800BCAD0 (-ClonePrimitive@CColorPrimitive@@UEAAJPEAPEAVCPrimitive@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeClonedPrimitive@CPrimitive@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800BD74C (-InitializeClonedPrimitive@CPrimitive@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?SetColor@CColorPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x1800BD87C (-SetColor@CColorPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CColorPrimitive::InitializeClonedPrimitive(__int64 a1, CColorPrimitive *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CPrimitive::InitializeClonedPrimitive();
  v5 = v4;
  if ( v4 >= 0 )
  {
    CColorPrimitive::SetColor(a2, (const struct _D3DCOLORVALUE *)(a1 + 56));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5B,
      (int)"clientcore\\windows\\dwm\\udwm\\primitive.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
