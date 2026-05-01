/*
 * XREFs of _CopilotHotkeyManager::GetTargetAppExtensionDetails_::_1_::dtor$55 @ 0x1806D9F7F
 * Callers:
 *     <none>
 * Callees:
 *     ??1_parameters_@?4??cancel_asynchronously@?$await_adapter@U?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@CA?AUfire_and_forget@4@U?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@4@@Z@QEAA@XZ @ 0x1802333A0 (--1_parameters_@-4--cancel_asynchronously@-$await_adapter@U-$IAsyncOperation@W4GamingPostureSyst.c)
 */

void __fastcall CopilotHotkeyManager::GetTargetAppExtensionDetails_::_1_::dtor_55(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 0x10) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~0x10u;
    `winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>,1>::cancel_asynchronously'::`5'::_parameters_::~_parameters_((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a2 + 40));
  }
}
