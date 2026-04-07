/*
 * XREFs of ?OnSourceWindowClientMarginsChanged@CThumbnailVisual@@QEAAXXZ @ 0x180044E84
 * Callers:
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800443C4 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180013380 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 */

void __fastcall CThumbnailVisual::OnSourceWindowClientMarginsChanged(CThumbnailVisual *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 41);
  if ( v1 )
  {
    if ( *(_DWORD *)(v1 + 77) )
      CThumbnailVisual::SetDirtyFlags(this, 0x4000u);
  }
}
