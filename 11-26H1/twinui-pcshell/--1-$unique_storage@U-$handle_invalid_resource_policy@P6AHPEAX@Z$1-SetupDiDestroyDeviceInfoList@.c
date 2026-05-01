/*
 * XREFs of ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?SetupDiDestroyDeviceInfoList@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180342348
 * Callers:
 *     ?GetDedicatedVideoMemoryCap@GamingOverlayExperienceManager@@AEAA_KXZ @ 0x180349014 (-GetDedicatedVideoMemoryCap@GamingOverlayExperienceManager@@AEAA_KXZ.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int SetupDiDestroyDeviceInfoList(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int SetupDiDestroyDeviceInfoList(void *)>>(
        void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 != (void *)-1LL )
  {
    if ( v1 )
      return SetupDiDestroyDeviceInfoList(v1);
  }
  return result;
}
