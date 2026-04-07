/*
 * XREFs of ??1CDCompVirtualDesktopThumbnailData@@UEAA@XZ @ 0x18008C4A0
 * Callers:
 *     ??_GCDCompVirtualDesktopThumbnailData@@UEAAPEAXI@Z @ 0x1800783F0 (--_GCDCompVirtualDesktopThumbnailData@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CDCompVirtualDesktopThumbnailData::~CDCompVirtualDesktopThumbnailData(
        CDCompVirtualDesktopThumbnailData *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CDCompVirtualDesktopThumbnailData::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 16);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 16) = 0LL;
  }
  CBitmapSourceArray::~CBitmapSourceArray((void **)this + 21);
  CBitmapSourceArray::~CBitmapSourceArray((void **)this + 17);
}
