/*
 * XREFs of ??_GCDesktopThumbnailCVI@@MEAAPEAXI@Z @ 0x1800ADF50
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CDesktopThumbnailCVI@@MEAA@XZ @ 0x1800ADE24 (--1CDesktopThumbnailCVI@@MEAA@XZ.c)
 */

CDesktopThumbnailCVI *__fastcall CDesktopThumbnailCVI::`scalar deleting destructor'(
        CDesktopThumbnailCVI *this,
        char a2)
{
  const struct std::nothrow_t *v4; // rdx

  CDesktopThumbnailCVI::~CDesktopThumbnailCVI(this);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  return this;
}
