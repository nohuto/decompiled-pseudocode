/*
 * XREFs of ?OnTransparencyPolicyUpdated@CAcrylicSheet@@QEAAJXZ @ 0x1800959E8
 * Callers:
 *     ?OnTransparencyPolicyChanged@CWindowList@@AEAAJ_N@Z @ 0x180075208 (-OnTransparencyPolicyChanged@CWindowList@@AEAAJ_N@Z.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAXXZ @ 0x1800853F0 (-RenderRecursive@CContainerVisual@@UEAAXXZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall CAcrylicSheet::OnTransparencyPolicyUpdated(CAcrylicSheet *this)
{
  int *v2; // rax
  int v4; // [rsp+20h] [rbp-18h] BYREF

  v2 = ___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v4);
  CVisual::SetDirtyFlags(this, *v2);
  *(_OWORD *)((char *)this + 184) = 0LL;
  CContainerVisual::RenderRecursive(this);
  return 0LL;
}
