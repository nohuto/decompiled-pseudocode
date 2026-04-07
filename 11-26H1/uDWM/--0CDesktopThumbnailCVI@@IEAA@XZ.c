/*
 * XREFs of ??0CDesktopThumbnailCVI@@IEAA@XZ @ 0x18008AFC8
 * Callers:
 *     ?Create@CVirtualDesktopThumbnailCVI@@SAJPEAPEAV1@@Z @ 0x1800669B0 (-Create@CVirtualDesktopThumbnailCVI@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CPerMonitorDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800AD858 (-Create@CPerMonitorDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDCompDesktopThumbnailCVI@@SAJPEAPEAV1@@Z @ 0x1800DE9F0 (-Create@CDCompDesktopThumbnailCVI@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x180021380 (--0CBaseObject@@QEAA@XZ.c)
 */

CDesktopThumbnailCVI *__fastcall CDesktopThumbnailCVI::CDesktopThumbnailCVI(CDesktopThumbnailCVI *this)
{
  CDesktopThumbnailCVI *v1; // rcx
  CDesktopThumbnailCVI *result; // rax

  CBaseObject::CBaseObject(this);
  result = v1;
  *((_QWORD *)v1 + 2) = 0LL;
  *((_QWORD *)v1 + 3) = 0LL;
  *((_QWORD *)v1 + 4) = 0LL;
  *((_QWORD *)v1 + 5) = 0LL;
  *((_QWORD *)v1 + 6) = 0LL;
  return result;
}
