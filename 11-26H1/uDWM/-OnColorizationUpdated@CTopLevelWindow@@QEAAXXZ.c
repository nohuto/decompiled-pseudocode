/*
 * XREFs of ?OnColorizationUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18004E8DC
 * Callers:
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x1800183A8 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x18004E89C (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18008AD08 (-OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0BB@$00@@YA?AVDirtyFlags@@XZ @ 0x180015E64 (--$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0BB@$00@@YA-AVDirtyFlags.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 */

void __fastcall CTopLevelWindow::OnColorizationUpdated(CTopLevelWindow *this)
{
  int *v1; // rax
  CVisual *v2; // r8
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = ___ConvertDirtyEnumToFlag__MW4ToplevelWindowDirtyFlags_CTopLevelWindow__0BB__00__YA_AVDirtyFlags__XZ(&v3);
  CVisual::SetDirtyFlags(v2, *v1);
}
