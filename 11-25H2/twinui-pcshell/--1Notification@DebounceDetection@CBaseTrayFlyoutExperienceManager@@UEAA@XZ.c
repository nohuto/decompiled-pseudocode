/*
 * XREFs of ??1Notification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x1803784E8
 * Callers:
 *     ??_ENotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@UEAAPEAXI@Z @ 0x180378A00 (--_ENotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification::~Notification(
        CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>((__int64)this);
}
