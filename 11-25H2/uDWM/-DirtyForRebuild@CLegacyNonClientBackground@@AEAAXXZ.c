/*
 * XREFs of ?DirtyForRebuild@CLegacyNonClientBackground@@AEAAXXZ @ 0x18006AEE4
 * Callers:
 *     ?ClearBorder@CLegacyNonClientBackground@@QEAAXXZ @ 0x18001108C (-ClearBorder@CLegacyNonClientBackground@@QEAAXXZ.c)
 *     ?SetBorderColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800112BC (-SetBorderColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?SetCaptionRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z @ 0x180011960 (-SetCaptionRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z.c)
 *     ?ClearAll@CLegacyNonClientBackground@@QEAAXXZ @ 0x18002207C (-ClearAll@CLegacyNonClientBackground@@QEAAXXZ.c)
 *     ?SetBorderRegion@CLegacyNonClientBackground@@QEAAJAEBUtagRECT@@@Z @ 0x18006A454 (-SetBorderRegion@CLegacyNonClientBackground@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?SetCaptionColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18006AC9C (-SetCaptionColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?SetBorderRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z @ 0x1800B9D90 (-SetBorderRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18000723C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 */

void __fastcall CLegacyNonClientBackground::DirtyForRebuild(CLegacyNonClientBackground *this)
{
  CRenderDataVisual::ClearInstructions(this);
  (*(void (__fastcall **)(CLegacyNonClientBackground *, __int64))(*(_QWORD *)this + 24LL))(this, 4LL);
}
