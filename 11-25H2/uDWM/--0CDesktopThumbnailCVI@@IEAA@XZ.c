/*
 * XREFs of ??0CDesktopThumbnailCVI@@IEAA@XZ @ 0x18006F818
 * Callers:
 *     ?Create@CVirtualDesktopThumbnailCVI@@SAJPEAPEAV1@@Z @ 0x18006EFC4 (-Create@CVirtualDesktopThumbnailCVI@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CPerMonitorDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800AE154 (-Create@CPerMonitorDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDCompDesktopThumbnailCVI@@SAJPEAPEAV1@@Z @ 0x1800E1AE0 (-Create@CDCompDesktopThumbnailCVI@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x1800088E4 (--0CBaseObject@@QEAA@XZ.c)
 */

CDesktopThumbnailCVI *__fastcall CDesktopThumbnailCVI::CDesktopThumbnailCVI(CDesktopThumbnailCVI *this)
{
  CDesktopThumbnailCVI *v1; // rcx

  CBaseObject::CBaseObject(this);
  *((_QWORD *)v1 + 3) = 0LL;
  *(_QWORD *)v1 = &CDesktopThumbnailCVI::`vftable';
  return v1;
}
