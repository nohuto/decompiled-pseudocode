/*
 * XREFs of ?HandleXusbDeviceConnectionEvent@GamingOverlayExperienceManager@@AEAAXW4_CM_NOTIFY_ACTION@@@Z @ 0x18034B39C
 * Callers:
 *     ?CMEventCallback@GamingOverlayExperienceManager@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x180345880 (-CMEventCallback@GamingOverlayExperienceManager@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTI.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?StartGameInputWatcher@GamingOverlayExperienceManager@@AEAAJUwrite_lock_required@wil@@@Z @ 0x18035429C (-StartGameInputWatcher@GamingOverlayExperienceManager@@AEAAJUwrite_lock_required@wil@@@Z.c)
 *     ?StartXInputWatcher@GamingOverlayExperienceManager@@AEAAJUwrite_lock_required@wil@@@Z @ 0x18035483C (-StartXInputWatcher@GamingOverlayExperienceManager@@AEAAJUwrite_lock_required@wil@@@Z.c)
 *     ?UnregisterFromXusbConnectionEventsOnBackground@GamingOverlayExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x180355D68 (-UnregisterFromXusbConnectionEventsOnBackground@GamingOverlayExperienceManager@@AEAA-AUfire_and_.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@details@wil@@QEAA_NXZ @ 0x180358B40 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprove_ea_180358B40.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GamingOverlayExperienceManager::HandleXusbDeviceConnectionEvent(RTL_SRWLOCK *a1, int a2)
{
  _BYTE v4[8]; // [rsp+20h] [rbp-28h] BYREF
  RTL_SRWLOCK *v5; // [rsp+28h] [rbp-20h] BYREF

  v5 = 0LL;
  wil::AcquireSRWLockExclusive(&v5, a1 + 28);
  if ( !a2 )
  {
    GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground(a1, v4);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetImpl'::`2'::impl) )
      GamingOverlayExperienceManager::StartXInputWatcher(a1);
    else
      GamingOverlayExperienceManager::StartGameInputWatcher(a1);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
}
