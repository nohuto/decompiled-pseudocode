/*
 * XREFs of ?AreAnimationsEnabled@CUndockedSearchAppExperienceManagerConfig@@UEAA_NXZ @ 0x1803B0060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CUndockedSearchAppExperienceManagerConfig::AreAnimationsEnabled(
        CUndockedSearchAppExperienceManagerConfig *this)
{
  return winrt::impl::consume_Windows_Internal_Shell_IRemoteSessionWindowManager<winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::IsAnyProviderActive((__int64 *)this + 2);
}
