/*
 * XREFs of ??1DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAA@XZ @ 0x180378484
 * Callers:
 *     ??1CPeopleBarFlyoutExperienceManager@@UEAA@XZ @ 0x1803783B8 (--1CPeopleBarFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x1803B7B18 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x180378CB8 (-Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ.c)
 */

void __fastcall CPeopleBarFlyoutExperienceManager::DebounceDetection::~DebounceDetection(
        CPeopleBarFlyoutExperienceManager::DebounceDetection *this)
{
  __int64 *v1; // rbx
  CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *v2; // rcx

  *(_QWORD *)this = 0LL;
  v1 = (__int64 *)((char *)this + 8);
  v2 = (CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::Disconnect(v2);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v1);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v1);
}
