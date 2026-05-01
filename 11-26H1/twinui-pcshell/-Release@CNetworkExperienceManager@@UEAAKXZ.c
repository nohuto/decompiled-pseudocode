/*
 * XREFs of ?Release@CNetworkExperienceManager@@UEAAKXZ @ 0x1802BBA40
 * Callers:
 *     ?Release@CNetworkExperienceManager@@W7EAAKXZ @ 0x1803BE5A0 (-Release@CNetworkExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CNetworkExperienceManager@@WBA@EAAKXZ @ 0x1803BE5B0 (-Release@CNetworkExperienceManager@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CNetworkExperienceManager::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::INetworkFlyoutExperienceManager,Windows::Foundation::IClosable>::Release(this);
}
