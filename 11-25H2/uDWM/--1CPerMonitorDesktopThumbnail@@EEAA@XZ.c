/*
 * XREFs of ??1CPerMonitorDesktopThumbnail@@EEAA@XZ @ 0x1800ADE68
 * Callers:
 *     ??_GCPerMonitorDesktopThumbnail@@EEAAPEAXI@Z @ 0x1800ADF90 (--_GCPerMonitorDesktopThumbnail@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnMonitorThumbnailDestroyed@CDesktopThumbnail@@QEAAXPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x1800AE7B0 (-OnMonitorThumbnailDestroyed@CDesktopThumbnail@@QEAAXPEAVCPerMonitorDesktopThumbnail@@@Z.c)
 */

void __fastcall CPerMonitorDesktopThumbnail::~CPerMonitorDesktopThumbnail(CDesktopThumbnail **this)
{
  CBaseObject *v2; // rcx

  *this = (CDesktopThumbnail *)&CPerMonitorDesktopThumbnail::`vftable';
  CDesktopThumbnail::OnMonitorThumbnailDestroyed(this[8], (struct CPerMonitorDesktopThumbnail *)this);
  v2 = this[8];
  if ( v2 )
    CBaseObject::Release(v2);
  CDesktopThumbnailCVI::~CDesktopThumbnailCVI((CDesktopThumbnailCVI *)this);
}
