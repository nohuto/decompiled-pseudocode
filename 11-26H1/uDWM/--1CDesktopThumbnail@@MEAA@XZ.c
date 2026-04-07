/*
 * XREFs of ??1CDesktopThumbnail@@MEAA@XZ @ 0x1800AD528
 * Callers:
 *     ??_ECDesktopThumbnail@@MEAAPEAXI@Z @ 0x1800AD620 (--_ECDesktopThumbnail@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 */

void __fastcall CDesktopThumbnail::~CDesktopThumbnail(void **this)
{
  *this = &CDesktopThumbnail::`vftable';
  CDesktopThumbnail::s_pThumbnailNoRef = 0LL;
  CBitmapSourceArray::~CBitmapSourceArray(this + 28);
  CDesktopThumbnailBase::~CDesktopThumbnailBase(this);
}
