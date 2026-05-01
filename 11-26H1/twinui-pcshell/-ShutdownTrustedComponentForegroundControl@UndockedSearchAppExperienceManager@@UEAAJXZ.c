/*
 * XREFs of ?ShutdownTrustedComponentForegroundControl@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x1803B91C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::ShutdownTrustedComponentForegroundControl(
        UndockedSearchAppExperienceManager *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  return 0LL;
}
