/*
 * XREFs of ?Close@ImeNotificationExperienceManager@@UEAAJXZ @ 0x180379900
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall ImeNotificationExperienceManager::Close(ImeNotificationExperienceManager *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 30);
  return 0LL;
}
