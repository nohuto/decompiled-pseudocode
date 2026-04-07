/*
 * XREFs of ?OnGDISurfaceChange@CTopLevelWindow@@QEAAX_N@Z @ 0x18001915C
 * Callers:
 *     ?OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001912C (-OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0BG@$00@@YA?AVDirtyFlags@@XZ @ 0x180015E78 (--$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0BG@$00@@YA-AVDirtyFlags.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 */

void __fastcall CTopLevelWindow::OnGDISurfaceChange(CTopLevelWindow *this)
{
  int *v1; // rax
  CVisual *v2; // r8
  char v3; // dl
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = ___ConvertDirtyEnumToFlag__MW4ToplevelWindowDirtyFlags_CTopLevelWindow__0BG__00__YA_AVDirtyFlags__XZ(&v4);
  if ( v3 )
    CVisual::SetDirtyFlags(v2, *v1);
  else
    *((_DWORD *)v2 + 8) &= ~*v1;
}
