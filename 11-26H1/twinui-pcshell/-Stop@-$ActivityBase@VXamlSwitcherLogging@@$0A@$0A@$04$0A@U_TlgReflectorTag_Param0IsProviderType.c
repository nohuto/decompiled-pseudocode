/*
 * XREFs of ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18009E218
 * Callers:
 *     ?GetHostWindow@XamlAltTabViewHost@@AEAA?AUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PEAUIImmersiveMonitor@@@Z @ 0x18009AF64 (-GetHostWindow@XamlAltTabViewHost@@AEAA-AUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal.c)
 *     ?SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ @ 0x18009CCD0 (-SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ.c)
 *     ?CreateAltTabControl@XamlAltTabViewHost@@AEAAPE$AAVAltTab@Switcher@Experiences@ComposableShell@WindowsInternal@@XZ @ 0x18009D65C (-CreateAltTabControl@XamlAltTabViewHost@@AEAAPE$AAVAltTab@Switcher@Experiences@ComposableShell@W.c)
 *     ?OnAltKeyUp@XamlAltTabViewController@@QE$AAAXPE$AAVObject@Platform@@PE$AAVKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z @ 0x1801D6670 (-OnAltKeyUp@XamlAltTabViewController@@QE$AAAXPE$AAVObject@Platform@@PE$AAVKeyRoutedEventArgs@Inp.c)
 *     ?Navigate@XamlAltTabViewHost@@UEAAJI@Z @ 0x1802033B0 (-Navigate@XamlAltTabViewHost@@UEAAJI@Z.c)
 *     ??0CachedDataSource@@QEAA@_N0PEAUIAppViewDataSourceAdapter@@AEBUIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBUIVirtualDesktopDataSource@34567@@Z @ 0x1802B8394 (--0CachedDataSource@@QEAA@_N0PEAUIAppViewDataSourceAdapter@@AEBUIVirtualDesktopController@Multit.c)
 *     ?CreateGamingTaskViewControl@XamlGamingTaskViewHost@@AEAAPE$AAVGamingTaskView@Switcher@Experiences@ComposableShell@WindowsInternal@@XZ @ 0x1806A106C (-CreateGamingTaskViewControl@XamlGamingTaskViewHost@@AEAAPE$AAVGamingTaskView@Switcher@Experienc.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800186C4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?Provider@XamlSwitcherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18009E4F4 (-Provider@XamlSwitcherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18028C95C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
        _QWORD *a1,
        DWORD a2)
{
  RTL_SRWLOCK *v3; // rbx
  __int64 v4; // rax
  int v5; // esi
  const struct wil::FailureInfo *v6; // rdx
  int v7; // esi
  const struct _tlgProvider_t *v8; // rbx
  _BYTE v9[176]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v10; // [rsp+100h] [rbp+67h] BYREF
  DWORD CurrentThreadId; // [rsp+108h] [rbp+6Fh] BYREF
  PSRWLOCK SRWLock; // [rsp+110h] [rbp+77h] BYREF

  CurrentThreadId = a2;
  v3 = (RTL_SRWLOCK *)a1[35];
  if ( v3 )
  {
    v3 += 33;
    AcquireSRWLockExclusive(v3);
    v10 = 0LL;
  }
  else
  {
    SRWLock = 0LL;
  }
  v4 = a1[34];
  v5 = *(_DWORD *)(v4 + 248);
  if ( v5 < 1 )
  {
    memset_0(v9, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v9, v6);
  }
  if ( *(int *)(v4 + 72) >= 0 )
    *(_DWORD *)(v4 + 72) = 0;
  v7 = v5 - 1;
  *(_DWORD *)(v4 + 248) = v7;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  if ( v7 )
  {
    v8 = XamlSwitcherLogging::Provider();
    if ( *(_DWORD *)v8 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      LODWORD(v10) = 0;
      SRWLock = (PSRWLOCK)0x1000000;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v8,
        byte_180833CB8,
        (const GUID *)(a1[34] + 8LL),
        0LL,
        (__int64)&SRWLock,
        (__int64)&v10,
        (__int64)&CurrentThreadId);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)a1);
}
