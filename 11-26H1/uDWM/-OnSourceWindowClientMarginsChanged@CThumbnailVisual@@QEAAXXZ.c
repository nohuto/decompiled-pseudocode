/*
 * XREFs of ?OnSourceWindowClientMarginsChanged@CThumbnailVisual@@QEAAXXZ @ 0x18008D96C
 * Callers:
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180010474 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0M@$00@@YA?AVDirtyFlags@@XZ @ 0x180015E00 (--$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0M@$00@@YA-AVDirtyFlags@.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@MEAAXVDirtyFlags@@@Z @ 0x180059550 (-SetDirtyFlags@CThumbnailVisual@@MEAAXVDirtyFlags@@@Z.c)
 */

void __fastcall CThumbnailVisual::OnSourceWindowClientMarginsChanged(CThumbnailVisual *this)
{
  __int64 v1; // rax
  int *v2; // rax
  CVisual *v3; // r8
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 44);
  if ( v1 )
  {
    if ( *(_DWORD *)(v1 + 77) )
    {
      v2 = ___ConvertDirtyEnumToFlag__MW4ToplevelWindowDirtyFlags_CTopLevelWindow__0M__00__YA_AVDirtyFlags__XZ(&v4);
      CThumbnailVisual::SetDirtyFlags(v3, *v2);
    }
  }
}
