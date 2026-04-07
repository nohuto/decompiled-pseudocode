/*
 * XREFs of ?OnForceActiveWindowAppearanceUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800CBA08
 * Callers:
 *     ?ForceActiveWindowAppearanceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180079CF0 (-ForceActiveWindowAppearanceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0M@$00@@YA?AVDirtyFlags@@XZ @ 0x180015E00 (--$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0M@$00@@YA-AVDirtyFlags@.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0BB@$00@@YA?AVDirtyFlags@@XZ @ 0x180015E64 (--$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0BB@$00@@YA-AVDirtyFlags.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@00$00@@YA?AVDirtyFlags@@XZ @ 0x180016454 (--$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@00$00@@YA-AVDirtyFla.c)
 */

void __fastcall CTopLevelWindow::OnForceActiveWindowAppearanceUpdated(CTopLevelWindow *this)
{
  _DWORD *v1; // rax
  int v2; // edx
  CVisual *v3; // r8
  int v4; // [rsp+38h] [rbp+10h] BYREF
  int v5; // [rsp+40h] [rbp+18h] BYREF
  int v6; // [rsp+48h] [rbp+20h] BYREF

  ___ConvertDirtyEnumToFlag__MW4ToplevelWindowDirtyFlags_CTopLevelWindow__0BB__00__YA_AVDirtyFlags__XZ(&v4);
  ___ConvertDirtyEnumToFlag__MW4ToplevelWindowDirtyFlags_CTopLevelWindow__0M__00__YA_AVDirtyFlags__XZ(&v5);
  v1 = ___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__00_00__YA_AVDirtyFlags__XZ(&v6);
  CVisual::SetDirtyFlags(v3, *v1 | v2);
}
