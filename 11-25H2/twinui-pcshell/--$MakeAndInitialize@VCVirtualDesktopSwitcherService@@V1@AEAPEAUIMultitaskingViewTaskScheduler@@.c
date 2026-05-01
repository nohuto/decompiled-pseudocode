/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopSwitcherService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopSwitcherService@@AEAPEAUIMultitaskingViewTaskScheduler@@@Z @ 0x1800FA484
 * Callers:
 *     ?CVirtualDesktopSwitcherService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x1800FA398 (-CVirtualDesktopSwitcherService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActivation@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006AD80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActiv.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CVirtualDesktopSwitcherService@@QEAA@XZ @ 0x1804871C0 (--0CVirtualDesktopSwitcherService@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopSwitcherService,CVirtualDesktopSwitcherService,IMultitaskingViewTaskScheduler * &>(
        CVirtualDesktopSwitcherService **a1,
        __int64 *a2)
{
  void *v4; // rax
  volatile int *v6; // rdx
  CVirtualDesktopSwitcherService *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rsi
  volatile int *v10; // rdx
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v4;
  if ( !v4 )
    return 2147942414LL;
  v7 = CVirtualDesktopSwitcherService::CVirtualDesktopSwitcherService((CVirtualDesktopSwitcherService *)v4);
  v11 = 0LL;
  v8 = *a2;
  v9 = *((_QWORD *)v7 + 6);
  *((_QWORD *)v7 + 6) = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v7 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((CVirtualDesktopSwitcherService *)((char *)v7 + 44), v6);
    *a1 = v7;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDelayedAppActivation,Microsoft::WRL::FtmBase>::Release(
      (__int64)v7,
      v10);
  }
  else
  {
    *a1 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v11);
  return 0LL;
}
