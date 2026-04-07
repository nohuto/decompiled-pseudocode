/*
 * XREFs of ??1CDesktopThumbnailCVI@@MEAA@XZ @ 0x1800AD568
 * Callers:
 *     ??1CPerMonitorDesktopThumbnail@@EEAA@XZ @ 0x1800AD59C (--1CPerMonitorDesktopThumbnail@@EEAA@XZ.c)
 *     ??_GCDCompDesktopThumbnailCVI@@UEAAPEAXI@Z @ 0x1800DE870 (--_GCDCompDesktopThumbnailCVI@@UEAAPEAXI@Z.c)
 *     ??_ECVirtualDesktopThumbnailCVI@@UEAAPEAXI@Z @ 0x1800DE8C0 (--_ECVirtualDesktopThumbnailCVI@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1CVisualBrush@@QEAA@XZ @ 0x180082324 (--1CVisualBrush@@QEAA@XZ.c)
 */

void __fastcall CDesktopThumbnailCVI::~CDesktopThumbnailCVI(CDesktopThumbnailCVI *this)
{
  CBaseObject *v2; // rcx

  v2 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v2 )
    CBaseObject::Release(v2);
  CVisualBrush::~CVisualBrush((CDesktopThumbnailCVI *)((char *)this + 24));
  CBaseObject::~CBaseObject(this);
}
