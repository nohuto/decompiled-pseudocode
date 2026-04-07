/*
 * XREFs of ?OnDestinationClientRectChanged@CThumbnailVisual@@QEAAXXZ @ 0x18000FDD8
 * Callers:
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180010474 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x1800115C8 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@MEAAXVDirtyFlags@@@Z @ 0x180059550 (-SetDirtyFlags@CThumbnailVisual@@MEAAXVDirtyFlags@@@Z.c)
 */

void __fastcall CThumbnailVisual::OnDestinationClientRectChanged(CThumbnailVisual *this)
{
  _DWORD *v1; // rax
  __int64 v2; // r8
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = ___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v3);
  CThumbnailVisual::SetDirtyFlags(v2, (unsigned int)*v1);
}
