/*
 * XREFs of ?OnContentBoundsUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800175E4
 * Callers:
 *     ?OnContentBoundsChange@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x1800175C0 (-OnContentBoundsChange@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0BH@$00@@YA?AVDirtyFlags@@XZ @ 0x180015E3C (--$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0BH@$00@@YA-AVDirtyFlags.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 */

void __fastcall CTopLevelWindow::OnContentBoundsUpdated(CTopLevelWindow *this)
{
  int *v1; // rax
  CVisual *v2; // r8
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = ___ConvertDirtyEnumToFlag__MW4ToplevelWindowDirtyFlags_CTopLevelWindow__0BH__00__YA_AVDirtyFlags__XZ(&v3);
  CVisual::SetDirtyFlags(v2, *v1);
}
