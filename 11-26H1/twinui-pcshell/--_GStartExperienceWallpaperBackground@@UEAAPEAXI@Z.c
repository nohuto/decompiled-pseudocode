/*
 * XREFs of ??_GStartExperienceWallpaperBackground@@UEAAPEAXI@Z @ 0x180387BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1StartExperienceWallpaperBackground@@UEAA@XZ @ 0x1803C04F0 (--1StartExperienceWallpaperBackground@@UEAA@XZ.c)
 */

StartExperienceWallpaperBackground *__fastcall StartExperienceWallpaperBackground::`scalar deleting destructor'(
        StartExperienceWallpaperBackground *this,
        char a2)
{
  StartExperienceWallpaperBackground::~StartExperienceWallpaperBackground(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
