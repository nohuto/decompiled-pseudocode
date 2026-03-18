/*
 * XREFs of ??1APIDCOBJ@@QEAA@XZ @ 0x140043E9C
 * Callers:
 *     ?GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z @ 0x140041660 (-GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z.c)
 *     GreSelectBitmap @ 0x140042CE0 (GreSelectBitmap.c)
 *     GreGetDeviceCaps @ 0x140043070 (GreGetDeviceCaps.c)
 *     GreIntersectClipRect @ 0x140043770 (GreIntersectClipRect.c)
 *     NtGdiGetDeviceCaps @ 0x140043D20 (NtGdiGetDeviceCaps.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1400867D0 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     ?GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z @ 0x14008A5F0 (-GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z.c)
 *     GreGetClipBox @ 0x14008E7A0 (GreGetClipBox.c)
 *     GreGetNearestColor @ 0x14008EEF0 (GreGetNearestColor.c)
 *     GreSelectPalette @ 0x1400D79C0 (GreSelectPalette.c)
 *     NtGdiGetDeviceCapsAll @ 0x1400E76C0 (NtGdiGetDeviceCapsAll.c)
 *     GreSetLayout @ 0x1400FA610 (GreSetLayout.c)
 *     GreCleanDC @ 0x1401083E0 (GreCleanDC.c)
 *     GreRestoreDC @ 0x140124580 (GreRestoreDC.c)
 *     NtGdiCreateMetafileDC @ 0x1401352D0 (NtGdiCreateMetafileDC.c)
 *     GreSelectBrush @ 0x1401373C0 (GreSelectBrush.c)
 *     GreSetMagicColors @ 0x14014DDBC (GreSetMagicColors.c)
 *     GreSelectPen @ 0x140156820 (GreSelectPen.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1401C90C0 (GreCleanDCAndSetOwnerEx.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1401CB96C (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x14000E350 (PopThreadGuardedObject.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x14001CE4C (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1400C03DC (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall APIDCOBJ::~APIDCOBJ(APIDCOBJ *this)
{
  if ( *((_BYTE *)this + 104) && *(_QWORD *)this )
    XDCOBJ::vUnlockFast(this);
  *(_QWORD *)this = 0LL;
  PopThreadGuardedObject((_QWORD *)this + 9);
  DCOBJ::~DCOBJ(this);
}
