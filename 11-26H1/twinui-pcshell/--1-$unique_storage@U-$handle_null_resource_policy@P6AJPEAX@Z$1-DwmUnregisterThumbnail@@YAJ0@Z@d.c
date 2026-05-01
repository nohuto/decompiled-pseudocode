/*
 * XREFs of ??1?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?DwmUnregisterThumbnail@@YAJ0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1803876C4
 * Callers:
 *     ??1StartExperienceWallpaperBackground@@UEAA@XZ @ 0x1803C04F0 (--1StartExperienceWallpaperBackground@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long DwmUnregisterThumbnail(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long DwmUnregisterThumbnail(void *)>>(
        void **a1)
{
  void *v1; // rcx
  HRESULT result; // eax

  v1 = *a1;
  if ( v1 )
  {
    if ( v1 != (void *)-1LL )
      return DwmUnregisterThumbnail(v1);
  }
  return result;
}
