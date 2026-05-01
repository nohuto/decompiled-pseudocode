/*
 * XREFs of ?GetForWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUSnapLayoutManagerExtension@PlatformExtensions@4567@AEBURect@Foundation@67@@Z @ 0x18020DF0C
 * Callers:
 *     ?GetForWorkArea@?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtensionStatics@PlatformExtensions@4567@@impl@winrt@@UEAAHURect@Foundation@Windows@3@PEAPEAX@Z @ 0x18020DED0 (-GetForWorkArea@-$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@I.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?GetOrCreateForWorkArea@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA?AUDesktopSnapLayoutManager@34567@AEBURect@Foundation@67@@Z @ 0x1800A179C (-GetOrCreateForWorkArea@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18013D314 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetInstance@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SAAEAV1234567@XZ @ 0x1801F24C0 (-GetInstance@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SAAEAV123.c)
 *     ??$create_instance@UIServiceProvider@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x180208D68 (--$create_instance@UIServiceProvider@@@winrt@@YA-A_PAEBUguid@0@IPEAX@Z.c)
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18027EEF4 (-complete_without_lock@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x180283040 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$capture@UISnapLayoutManagerExtensionStatics@PlatformExtensions@Shell@Internal@Windows@winrt@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBUguid@6@@winrt@@YA?AUISnapLayoutManagerExtensionStatics@PlatformExtensions@Shell@Internal@Windows@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIServiceProvider@@AEBUguid@0@@Z @ 0x1805B897C (--$capture@UISnapLayoutManagerExtensionStatics@PlatformExtensions@Shell@Internal@Windows@winrt@@.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1805B906C (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805B9A80 (--1-$test_data_control@V-$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest@@U1@@details@t.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805B9AB8 (--1-$test_watcher@V-$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest@@U1@@details@tip2@@.c)
 *     ?DesktopSnapLayoutManagerOutOfProc@CSnapComponentTelemetry@@SAXXZ @ 0x1805B9F4C (-DesktopSnapLayoutManagerOutOfProc@CSnapComponentTelemetry@@SAXXZ.c)
 *     ?GetForWorkArea@?$consume_Windows_Internal_Shell_PlatformExtensions_ISnapLayoutManagerExtensionStatics@UISnapLayoutManagerExtensionStatics@PlatformExtensions@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1805BA038 (-GetForWorkArea@-$consume_Windows_Internal_Shell_PlatformExtensions_ISnapLayoutManagerExtensionS.c)
 *     ?TryGetProcessImageName@SnapTipTestHelpers@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@Z @ 0x1805BB794 (-TryGetProcessImageName@SnapTipTestHelpers@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::GetForWorkArea(
        __int64 *a1,
        __int64 a2)
{
  HWND ShellWindow; // rax
  HANDLE CurrentProcess; // rax
  __int64 v6; // rbx
  __int64 v7; // r8
  float v8; // xmm6_4
  int v9; // esi
  int v10; // r15d
  int v11; // r12d
  _DWORD *v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rax
  struct winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache *Instance; // rax
  void (__fastcall ***v18)(_QWORD, __int64 *, _QWORD **); // rcx
  _QWORD *v20; // [rsp+28h] [rbp-69h] BYREF
  __int64 v21; // [rsp+30h] [rbp-61h] BYREF
  IUnknown *pUnk; // [rsp+38h] [rbp-59h] BYREF
  DWORD dwProcessId; // [rsp+40h] [rbp-51h] BYREF
  _BYTE v24[48]; // [rsp+48h] [rbp-49h] BYREF
  __int64 v25; // [rsp+78h] [rbp-19h]
  GUID v26; // [rsp+80h] [rbp-11h] BYREF
  _QWORD v27[4]; // [rsp+90h] [rbp-1h] BYREF

  v20 = a1;
  dwProcessId = 0;
  ShellWindow = GetShellWindow();
  GetWindowThreadProcessId(ShellWindow, &dwProcessId);
  if ( dwProcessId == GetCurrentProcessId() )
  {
    Instance = winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache::GetInstance();
    v18 = (void (__fastcall ***)(_QWORD, __int64 *, _QWORD **))*winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache::GetOrCreateForWorkArea(
                                                                  (__int64)Instance,
                                                                  (__int64 *)&pUnk,
                                                                  (struct winrt::Windows::Foundation::Rect *)a2);
    if ( v18 )
    {
      v20 = 0LL;
      (**v18)(
        v18,
        &winrt::impl::guid_v<winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension>,
        &v20);
      *a1 = (__int64)v20;
    }
    else
    {
      *a1 = 0LL;
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&pUnk);
  }
  else
  {
    CSnapComponentTelemetry::DesktopSnapLayoutManagerOutOfProc();
    tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>>>((struct wil::details::IFailureCallback *)v24);
    CurrentProcess = GetCurrentProcess();
    SnapTipTestHelpers::TryGetProcessImageName(v27, CurrentProcess);
    if ( v27[2] )
    {
      v6 = v25;
      v20 = (_QWORD *)v25;
      if ( v25 )
        _InterlockedIncrement((volatile signed __int32 *)(v25 + 328));
      tip2::details::shared_data<0,0,1>::begin_update(v6 + 8);
      std::wstring::operator=((char *)(v6 + 272), (char *)v27, v7);
      tip2::test_data_control<tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>>::~test_data_control<tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>>(&v20);
    }
    v8 = *(float *)(a2 + 4);
    v9 = (int)(float)(v8 + *(float *)(a2 + 12));
    v10 = (int)(float)(*(float *)a2 + *(float *)(a2 + 8));
    v11 = (int)*(float *)a2;
    v12 = (_DWORD *)v25;
    v20 = (_QWORD *)v25;
    if ( v25 )
      _InterlockedIncrement((volatile signed __int32 *)(v25 + 328));
    tip2::details::shared_data<0,0,1>::begin_update(v12 + 2);
    v12[77] = v11;
    v12[78] = (int)v8;
    v12[79] = v10;
    v12[80] = v9;
    tip2::test_data_control<tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>>::~test_data_control<tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>>(&v20);
    v26 = CLSID_ImmersiveShell;
    winrt::create_instance<IServiceProvider>((__int64)&v20, (int)&v26);
    v13 = v25;
    pUnk = (IUnknown *)v25;
    if ( v25 )
      _InterlockedIncrement((volatile signed __int32 *)(v25 + 328));
    tip2::details::shared_data<0,0,1>::begin_update(v13 + 8);
    *(_BYTE *)(v13 + 304) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>>::~test_data_control<tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>>(&pUnk);
    v14 = (__int64)v20;
    v21 = (__int64)v20;
    winrt::capture<winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider *,winrt::guid const &>(
      &pUnk,
      IUnknown_QueryService,
      &v21,
      &winrt::impl::guid_v<winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>);
    v15 = v25;
    v21 = v25;
    if ( v25 )
      _InterlockedIncrement((volatile signed __int32 *)(v25 + 328));
    tip2::details::shared_data<0,0,1>::begin_update(v15 + 8);
    *(_BYTE *)(v15 + 305) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>>::~test_data_control<tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>>(&v21);
    CoAllowSetForegroundWindow(pUnk, 0LL);
    winrt::impl::consume_Windows_Internal_Shell_PlatformExtensions_ISnapLayoutManagerExtensionStatics<winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>::GetForWorkArea(
      &pUnk,
      &v21,
      a2);
    tip2::details::shared_data<0,0,0>::complete_without_lock(v25 + 8);
    v16 = v21;
    v21 = 0LL;
    *a1 = v16;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&pUnk);
    if ( v14 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v20);
    std::wstring::_Tidy_deallocate(v27);
    tip2::test_watcher<tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>>::~test_watcher<tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>>(v24);
  }
  return a1;
}
