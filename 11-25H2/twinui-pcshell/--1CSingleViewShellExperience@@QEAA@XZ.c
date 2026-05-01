/*
 * XREFs of ??1CSingleViewShellExperience@@QEAA@XZ @ 0x18001D758
 * Callers:
 *     ??1CVirtualTouchpadExperienceManager@@UEAA@XZ @ 0x18021A67C (--1CVirtualTouchpadExperienceManager@@UEAA@XZ.c)
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x18021C94C (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1CScreenClippingExperienceManager@@EEAA@XZ @ 0x18029A1E4 (--1CScreenClippingExperienceManager@@EEAA@XZ.c)
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x18035D0EC (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CControlCenterExperienceManager@@UEAA@XZ @ 0x180363E50 (--1CControlCenterExperienceManager@@UEAA@XZ.c)
 *     ??1ShellExperienceView@Cortana@TwinUI@@UEAA@XZ @ 0x18036AB58 (--1ShellExperienceView@Cortana@TwinUI@@UEAA@XZ.c)
 *     ??1ImeNotificationExperienceManager@@UEAA@XZ @ 0x180371E34 (--1ImeNotificationExperienceManager@@UEAA@XZ.c)
 *     ??1CTaskContinuityActivitiesExperienceManager@@UEAA@XZ @ 0x1803729D0 (--1CTaskContinuityActivitiesExperienceManager@@UEAA@XZ.c)
 *     ??1CToastCenterExperienceManager@@UEAA@XZ @ 0x180373CE8 (--1CToastCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CPeopleBarFlyoutExperienceManager@@UEAA@XZ @ 0x1803783B8 (--1CPeopleBarFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??1CPeopleBarJumpViewExperienceManager@@UEAA@XZ @ 0x18037B310 (--1CPeopleBarJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1CShoulderTapExperienceManager@@UEAA@XZ @ 0x18037CB14 (--1CShoulderTapExperienceManager@@UEAA@XZ.c)
 *     ??1CStartExperienceManager@@UEAA@XZ @ 0x18037F5F4 (--1CStartExperienceManager@@UEAA@XZ.c)
 *     ??1CQuickConnectExperienceManager@@UEAA@XZ @ 0x180389330 (--1CQuickConnectExperienceManager@@UEAA@XZ.c)
 *     ??1CInsightsExperienceManager@@EEAA@XZ @ 0x180396A50 (--1CInsightsExperienceManager@@EEAA@XZ.c)
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x1803B7B18 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??1MeetNowExperienceManager@@UEAA@XZ @ 0x1803B7BC8 (--1MeetNowExperienceManager@@UEAA@XZ.c)
 *     _CVirtualTouchpadExperienceManager::CVirtualTouchpadExperienceManager_::_1_::dtor$1 @ 0x1806AC29F (_CVirtualTouchpadExperienceManager--CVirtualTouchpadExperienceManager_--_1_--dtor$1.c)
 *     _CControlCenterExperienceManager::CControlCenterExperienceManager_::_1_::dtor$2 @ 0x1806B4735 (_CControlCenterExperienceManager--CControlCenterExperienceManager_--_1_--dtor$2.c)
 *     _CActionCenterExperienceManager::CActionCenterExperienceManager_::_1_::dtor$2 @ 0x1806BE1B5 (_CActionCenterExperienceManager--CActionCenterExperienceManager_--_1_--dtor$2.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$12 @ 0x1806BEF06 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$12.c)
 *     _MeetNowExperienceManager::MeetNowExperienceManager_::_1_::dtor$9 @ 0x1806C0764 (_MeetNowExperienceManager--MeetNowExperienceManager_--_1_--dtor$9.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x180015980 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x18001D8D4 (-CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSingleViewShellExperience::~CSingleViewShellExperience(CSingleViewShellExperience *this)
{
  __int64 *v2; // rdi
  __int64 *v3; // rsi
  struct _TP_TIMER *v4; // rcx
  void (__fastcall ***v5)(_QWORD, __int64); // rcx

  v2 = (__int64 *)((char *)this + 104);
  if ( *((_QWORD *)this + 14) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 56LL))(*v2);
  CSingleViewShellExperience::CancelWaitForWindowReadyForPresentation(this);
  if ( *((_QWORD *)this + 22) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 56LL))(*v2);
  v3 = v2;
  if ( *((_QWORD *)this + 24) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 56LL))(*v2);
    v3 = (__int64 *)((char *)this + 104);
  }
  WindowsDeleteString(*((HSTRING *)this + 23));
  *((_QWORD *)this + 23) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 21));
  *((_QWORD *)this + 21) = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 19);
  v4 = (struct _TP_TIMER *)*((_QWORD *)this + 18);
  if ( v4 )
  {
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v4);
    v2 = v3;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 12);
  v5 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = 0LL;
  if ( v5 )
    (**v5)(v5, 1LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
  WindowsDeleteString(*((HSTRING *)this + 2));
  *((_QWORD *)this + 2) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 1));
  *((_QWORD *)this + 1) = 0LL;
  WindowsDeleteString(*(HSTRING *)this);
  *(_QWORD *)this = 0LL;
}
