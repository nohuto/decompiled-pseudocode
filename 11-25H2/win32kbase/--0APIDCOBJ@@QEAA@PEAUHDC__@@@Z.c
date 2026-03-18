/*
 * XREFs of ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400436F8
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
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
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
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14001BA50 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??0XDCOBJ@@QEAA@XZ @ 0x1400BB3C0 (--0XDCOBJ@@QEAA@XZ.c)
 *     ?vUnlock@XDCOBJ@@QEAAXXZ @ 0x1400C03B4 (-vUnlock@XDCOBJ@@QEAAXXZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ @ 0x1401C6524 (--0-$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1401C6564 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 */

APIDCOBJ *__fastcall APIDCOBJ::APIDCOBJ(APIDCOBJ *this, HDC a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax

  XDCOBJ::XDCOBJ(this);
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>((char *)this + 40);
  XDCOBJ::vLock(this, a2);
  UnexpectedThreadTerminationHandler<APIDCOBJ>::UnexpectedThreadTerminationHandler<APIDCOBJ>((char *)this + 72);
  v7 = *(_QWORD *)this;
  *((_BYTE *)this + 104) = 1;
  if ( v7 )
  {
    if ( *(_WORD *)(v7 + 12) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
    if ( *(_WORD *)(*(_QWORD *)this + 12LL) != 1 )
      XDCOBJ::vUnlock(this);
  }
  return this;
}
