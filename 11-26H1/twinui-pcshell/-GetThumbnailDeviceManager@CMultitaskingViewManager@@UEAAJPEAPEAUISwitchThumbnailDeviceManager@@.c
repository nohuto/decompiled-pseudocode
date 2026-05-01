/*
 * XREFs of ?GetThumbnailDeviceManager@CMultitaskingViewManager@@UEAAJPEAPEAUISwitchThumbnailDeviceManager@@@Z @ 0x1804A0AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CMultitaskingViewManager::GetThumbnailDeviceManager(
        CMultitaskingViewManager *this,
        struct ISwitchThumbnailDeviceManager **a2)
{
  struct ISwitchThumbnailDeviceManager **v2; // rbx

  v2 = (struct ISwitchThumbnailDeviceManager **)((char *)this + 320);
  *a2 = 0LL;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 40);
  *a2 = *v2;
  return 0LL;
}
