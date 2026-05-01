/*
 * XREFs of ??_GHideWallpaperIconsObject@@UEAAPEAXI@Z @ 0x1806837E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 *     ??1HideWallpaperIconsObject@@UEAA@XZ @ 0x180683788 (--1HideWallpaperIconsObject@@UEAA@XZ.c)
 */

HideWallpaperIconsObject *__fastcall HideWallpaperIconsObject::`scalar deleting destructor'(
        HideWallpaperIconsObject *this,
        char a2)
{
  HideWallpaperIconsObject::~HideWallpaperIconsObject(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
