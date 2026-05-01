/*
 * XREFs of ?BlockImmediateReshow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAXXZ @ 0x1803C1BC4
 * Callers:
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x1803C6000 (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x180380B6C (-Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ.c)
 *     ??$MakeAndInitialize@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@V123@PEAV23@@Details@WRL@Microsoft@@YAJPEAPEAVNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@$$QEAPEAV45@@Z @ 0x1803C0CC8 (--$MakeAndInitialize@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@V123@PEAV.c)
 */

void __fastcall CBaseTrayFlyoutExperienceManager::DebounceDetection::BlockImmediateReshow(
        CBaseTrayFlyoutExperienceManager::DebounceDetection *this)
{
  CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *v2; // rcx
  struct CBaseTrayFlyoutExperienceManager::DebounceDetection *v3; // [rsp+38h] [rbp+10h] BYREF

  if ( GetAsyncKeyState(1) < 0 )
  {
    v3 = this;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 1);
    Microsoft::WRL::Details::MakeAndInitialize<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification,CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification,CBaseTrayFlyoutExperienceManager::DebounceDetection *>(
      (__int64 *)this + 1,
      &v3);
    if ( GetAsyncKeyState(1) < 0 )
      return;
    v2 = (CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *)*((_QWORD *)this + 1);
    *(_QWORD *)this = 0LL;
    if ( v2 )
    {
      CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::Disconnect(v2);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 1);
    }
  }
  *(_QWORD *)this = GetTickCount64();
}
