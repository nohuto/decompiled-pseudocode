/*
 * XREFs of ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?DwmUnregisterThumbnail@@YAJ0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1803C0820
 * Callers:
 *     ??1StartExperienceWallpaperBackground@@UEAA@XZ @ 0x1803C04F0 (--1StartExperienceWallpaperBackground@@UEAA@XZ.c)
 *     ?InsertThumbnailVisual@StartExperienceWallpaperBackground@@AEAAJAEBUtagRECT@@@Z @ 0x1803C0560 (-InsertThumbnailVisual@StartExperienceWallpaperBackground@@AEAAJAEBUtagRECT@@@Z.c)
 *     ?RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDevice@@@Z @ 0x1803C06BC (-RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDe.c)
 * Callees:
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801CD2B0 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1801D4C2C (--0last_error_context@wil@@QEAA@XZ.c)
 */

void __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long DwmUnregisterThumbnail(void *)>>::reset(
        void **a1,
        void *a2)
{
  void *v2; // rbx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 && v2 != (void *)-1LL )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v5);
    DwmUnregisterThumbnail(v2);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v5);
  }
  *a1 = a2;
}
