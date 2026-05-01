/*
 * XREFs of ?SyncTabProxyWindows@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x1800CC514
 * Callers:
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x180029C64 (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B9B04 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?front@?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAAEAUInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@XZ @ 0x1800CC188 (-front@-$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V-$allocat.c)
 *     ?HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x1800CC6D0 (-HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z.c)
 *     ?at@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAAEAUguid@winrt@@_K@Z @ 0x1800CC7FC (-at@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAAAEAUguid@winrt@@_K@Z.c)
 *     ?at@?$unordered_map@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@5@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@@std@@QEAAAEAU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEBUguid@4@@Z @ 0x1800CC898 (-at@-$unordered_map@Uguid@winrt@@U-$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Window.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::SyncTabProxyWindows(
        _QWORD *a1,
        int a2,
        unsigned __int64 a3)
{
  int v5; // edx
  unsigned __int64 v6; // rbx
  _QWORD *v7; // r14
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow **v10; // rax
  _QWORD *v11; // r9
  __int64 v12; // rdx
  unsigned __int64 i; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow **v21; // rax
  int v22; // edx
  int pExceptionObject; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v22 = v5 - 1;
      if ( v22 )
      {
        if ( v22 != 1 )
        {
          pExceptionObject = -2147467263;
          throw (long *)&pExceptionObject;
        }
        v6 = 0LL;
        goto LABEL_6;
      }
    }
    v6 = a1[23];
  }
  else
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl,
      1u,
      a3);
    v6 = a1[23];
  }
  if ( a3 < v6 )
    v6 = a3;
LABEL_6:
  v7 = a1 + 19;
  if ( a1[5] )
  {
LABEL_23:
    v20 = std::deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>::front(v7);
    v21 = (winrt::Windows::Internal::Shell::implementation::TabProxyWindow **)std::unordered_map<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>::at(
                                                                                a1 + 3,
                                                                                v20);
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::HideFromAltTab(*v21, 1);
  }
  v8 = 1LL;
  if ( v6 > 1 )
  {
    do
    {
      v9 = std::deque<winrt::guid>::at(v7, v8);
      v10 = (winrt::Windows::Internal::Shell::implementation::TabProxyWindow **)std::unordered_map<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>::at(
                                                                                  a1 + 3,
                                                                                  v9);
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::HideFromAltTab(*v10, 0);
      ++v8;
    }
    while ( v8 < v6 );
    v7 = a1 + 19;
  }
  while ( v6 < a1[23] )
  {
    v11 = (_QWORD *)std::deque<winrt::guid>::at(v7, v6);
    v12 = 0xCBF29CE484222325uLL;
    for ( i = 0LL; i < 0x10; ++i )
    {
      v14 = *((unsigned __int8 *)v11 + i);
      v12 = 0x100000001B3LL * (v14 ^ v12);
    }
    v15 = a1[6];
    v16 = 2 * (a1[9] & v12);
    v17 = *(_QWORD *)(v15 + 8 * v16 + 8);
    if ( v17 == a1[4] )
      goto LABEL_22;
    v18 = *(_QWORD *)(v15 + 8 * v16);
    while ( 1 )
    {
      v19 = *v11 - *(_QWORD *)(v17 + 16);
      if ( *v11 == *(_QWORD *)(v17 + 16) )
        v19 = v11[1] - *(_QWORD *)(v17 + 24);
      if ( !v19 )
        break;
      if ( v17 == v18 )
        goto LABEL_22;
      v17 = *(_QWORD *)(v17 + 8);
    }
    if ( !v17 )
    {
LABEL_22:
      std::_Xout_of_range("invalid unordered_map<K, T> key");
      __debugbreak();
      goto LABEL_23;
    }
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::HideFromAltTab(
      *(winrt::Windows::Internal::Shell::implementation::TabProxyWindow **)(v17 + 32),
      1);
    ++v6;
  }
}
