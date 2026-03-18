/*
 * XREFs of ??1DCOBJ@@QEAA@XZ @ 0x140082B20
 * Callers:
 *     GreGetTextAlign @ 0x14003F490 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x14003F4D8 (GreSetTextAlign.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x140082B04 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x140086C60 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     GreGetTextExtentW @ 0x1400C0134 (GreGetTextExtentW.c)
 *     GreGetTextMetricsW @ 0x1400C0230 (GreGetTextMetricsW.c)
 *     NtGdiResizePalette @ 0x140142990 (NtGdiResizePalette.c)
 *     UntrapAppContainerRenderingWrap @ 0x140143FC0 (UntrapAppContainerRenderingWrap.c)
 *     GreGetCharSet @ 0x140195348 (GreGetCharSet.c)
 *     NtGdiFontIsLinked @ 0x1401DF320 (NtGdiFontIsLinked.c)
 *     NtGdiQueryFontAssocInfo @ 0x1401E8510 (NtGdiQueryFontAssocInfo.c)
 *     ?bSaveRegion@@YAHAEAVXDCOBJ@@J@Z @ 0x140262F80 (-bSaveRegion@@YAHAEAVXDCOBJ@@J@Z.c)
 *     NtGdiMakeObjectUnXferable @ 0x1402633B0 (NtGdiMakeObjectUnXferable.c)
 *     GreRealizePalette @ 0x140268A30 (GreRealizePalette.c)
 *     ?bEndDocInternal@@YAHAEAVXDCOBJ@@K@Z @ 0x14026A7D8 (-bEndDocInternal@@YAHAEAVXDCOBJ@@K@Z.c)
 *     GreGetAspectRatioFilter @ 0x140304FF0 (GreGetAspectRatioFilter.c)
 *     GreGetTextCharsetInfo @ 0x1403050AC (GreGetTextCharsetInfo.c)
 *     GreGetTextCharacterExtra @ 0x140311E10 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x140311E58 (GreSetTextCharacterExtra.c)
 *     NtGdiSetTextJustification @ 0x140311EC0 (NtGdiSetTextJustification.c)
 *     ??1XFERDCOBJ@@QEAA@XZ @ 0x140327094 (--1XFERDCOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x14008AFD0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DCOBJ::~DCOBJ(DCOBJ *this)
{
  if ( *(_QWORD *)this )
    XDCOBJ::vUnlockFast(this);
  PopThreadGuardedObject((char *)this + 40);
}
