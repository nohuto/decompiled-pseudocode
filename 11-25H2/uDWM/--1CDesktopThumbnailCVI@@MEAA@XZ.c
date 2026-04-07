/*
 * XREFs of ??1CDesktopThumbnailCVI@@MEAA@XZ @ 0x1800ADE24
 * Callers:
 *     ??1CPerMonitorDesktopThumbnail@@EEAA@XZ @ 0x1800ADE68 (--1CPerMonitorDesktopThumbnail@@EEAA@XZ.c)
 *     ??_GCDesktopThumbnailCVI@@MEAAPEAXI@Z @ 0x1800ADF50 (--_GCDesktopThumbnailCVI@@MEAAPEAXI@Z.c)
 *     ??_GCDCompDesktopThumbnailCVI@@UEAAPEAXI@Z @ 0x1800E1960 (--_GCDCompDesktopThumbnailCVI@@UEAAPEAXI@Z.c)
 *     ??_ECVirtualDesktopThumbnailCVI@@UEAAPEAXI@Z @ 0x1800E19B0 (--_ECVirtualDesktopThumbnailCVI@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CDesktopThumbnailCVI::~CDesktopThumbnailCVI(CDesktopThumbnailCVI *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *(_QWORD *)this = &CDesktopThumbnailCVI::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v3 )
    CBaseObject::Release(v3);
  CBaseObject::~CBaseObject(this);
}
