/*
 * XREFs of ?SetVisual@CPerMonitorDesktopThumbnail@@QEAAXPEAVCDesktopThumbnail@@@Z @ 0x1800ADF54
 * Callers:
 *     ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x1800ADC00 (-GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbn.c)
 * Callees:
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?SetVisual@CDesktopThumbnailCVI@@QEAAXPEAVCDesktopThumbnailBase@@@Z @ 0x18008DEC0 (-SetVisual@CDesktopThumbnailCVI@@QEAAXPEAVCDesktopThumbnailBase@@@Z.c)
 */

void __fastcall CPerMonitorDesktopThumbnail::SetVisual(CPerMonitorDesktopThumbnail *this, struct CDesktopThumbnail *a2)
{
  CBaseObject *v2; // rdx
  __int64 v3; // r8

  CDesktopThumbnailCVI::SetVisual(this, a2);
  *(_QWORD *)(v3 + 64) = v2;
  if ( v2 )
    CBaseObject::AddRef(v2);
}
