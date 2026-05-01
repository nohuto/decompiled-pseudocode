/*
 * XREFs of ??0AppUsageTracker@@QEAA@PEAUIServiceProvider@@PEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@W4ViewTrackingOption@3456@@Z @ 0x18015732C
 * Callers:
 *     ??$Make@VAppUsageTracker@@AEAPEAUIServiceProvider@@AEAPEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@AEAW4ViewTrackingOption@4567@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAppUsageTracker@@@12@AEAPEAUIServiceProvider@@AEAPEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@AEAW4ViewTrackingOption@6789@@Z @ 0x180157278 (--$Make@VAppUsageTracker@@AEAPEAUIServiceProvider@@AEAPEAUIAppStateChangeNotification@AppLimits@.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800F646C (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ??4?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801574A8 (--4-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$MakeOrThrow@VUwpAppStateManager@@$$V@wil@@YA?AV?$ComPtr@VUwpAppStateManager@@@WRL@Microsoft@@XZ @ 0x1801576FC (--$MakeOrThrow@VUwpAppStateManager@@$$V@wil@@YA-AV-$ComPtr@VUwpAppStateManager@@@WRL@Microsoft@@.c)
 *     ??$MakeOrThrow@VWin32AppStateManager@@$$V@wil@@YA?AV?$ComPtr@VWin32AppStateManager@@@WRL@Microsoft@@XZ @ 0x1801578B4 (--$MakeOrThrow@VWin32AppStateManager@@$$V@wil@@YA-AV-$ComPtr@VWin32AppStateManager@@@WRL@Microso.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAppUsageTracker@AppLimits@FamilySafety@Internal@Windows@@UIApplicationViewChangeListener@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1802C2FB4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAppUsageTracker@AppLimits@FamilySafe.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802C9D30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppStateManager.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall AppUsageTracker::AppUsageTracker(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 (__fastcall *v8)(__int64, GUID *, GUID *, __int64); // rbx
  int v9; // eax
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 *v12; // rax
  __int64 v13; // rdx
  int v15; // [rsp+20h] [rbp-20h]
  _QWORD v16[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v18; // [rsp+88h] [rbp+48h] BYREF

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::FamilySafety::AppLimits::IAppUsageTracker,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::FamilySafety::AppLimits::IAppUsageTracker,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>();
  *(_QWORD *)a1 = &AppUsageTracker::`vftable';
  *(_QWORD *)(a1 + 8) = &AppUsageTracker::`vftable'{for `IApplicationViewChangeListener'};
  *(_QWORD *)(a1 + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::FamilySafety::AppLimits::IAppUsageTracker,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
    (_QWORD *)(a1 + 96),
    a3);
  *(_DWORD *)(a1 + 104) = a4;
  v8 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64))(*(_QWORD *)a2 + 24LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)(a1 + 72));
  v9 = v8(a2, &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5, &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5, a1 + 72);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x39,
      (int)"pcshell\\twinui\\familyappusagemanager\\lib\\appusagetracker.cpp",
      (const char *)(unsigned int)v9,
      v15);
  v10 = (__int64 *)wil::MakeOrThrow<UwpAppStateManager,>(&v18);
  v11 = *v10;
  *v10 = 0LL;
  v16[0] = v11;
  if ( v18 )
  {
    v18 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::FamilySafety::AppLimits::IAppStateManager,Microsoft::WRL::FtmBase>::Release();
  }
  wil::com_ptr_t<IAgileReference,wil::err_exception_policy>::operator=(a1 + 80, v16);
  if ( v16[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16[0] + 16LL))(v16[0]);
  v12 = (__int64 *)wil::MakeOrThrow<Win32AppStateManager,>(&v18);
  v13 = *v12;
  *v12 = 0LL;
  v16[0] = v13;
  if ( v18 )
  {
    v18 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::FamilySafety::AppLimits::IAppStateManager,Microsoft::WRL::FtmBase>::Release();
  }
  wil::com_ptr_t<IAgileReference,wil::err_exception_policy>::operator=(a1 + 88, v16);
  if ( v16[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16[0] + 16LL))(v16[0]);
  return a1;
}
