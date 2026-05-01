/*
 * XREFs of ?SyncTabProxyWindows@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x180063AF8
 * Callers:
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x1800620F4 (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005FC84 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x180063D14 (-HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z.c)
 *     ?at@?$unordered_map@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@5@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@@std@@QEAAAEAU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEBUguid@4@@Z @ 0x1800A37E8 (-at@-$unordered_map@Uguid@winrt@@U-$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Window.c)
 *     ?at@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAAEAUguid@winrt@@_K@Z @ 0x1801E4688 (-at@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAAAEAUguid@winrt@@_K@Z.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::SyncTabProxyWindows(
        _QWORD *a1,
        int a2,
        unsigned __int64 a3,
        __int64 a4)
{
  int v6; // edx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  __int64 **v9; // rsi
  __int64 v10; // rax
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow **v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  _QWORD *v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rax
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow **v22; // rax
  int v23; // edx
  int pExceptionObject; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl,
      1u,
      a3,
      a4);
    v7 = a1[23];
LABEL_4:
    if ( a3 < v7 )
      v7 = a3;
    goto LABEL_6;
  }
  v6 = a2 - 1;
  if ( !v6 || (v23 = v6 - 1) == 0 )
  {
    v7 = a1[23];
    goto LABEL_4;
  }
  if ( v23 != 1 )
  {
    pExceptionObject = -2147467263;
    throw (long *)&pExceptionObject;
  }
  v7 = 0LL;
LABEL_6:
  if ( a1[5] )
  {
    v22 = (winrt::Windows::Internal::Shell::implementation::TabProxyWindow **)std::unordered_map<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>::at(
                                                                                a1 + 3,
                                                                                *(_QWORD *)(a1[20]
                                                                                          + 8
                                                                                          * (a1[22] & (a1[21] - 1LL))));
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::HideFromAltTab(*v22, 1);
  }
  v8 = 1LL;
  v9 = (__int64 **)(a1 + 19);
  if ( v7 > 1 )
  {
    do
    {
      v10 = std::deque<winrt::guid>::at(a1 + 19, v8);
      v11 = (winrt::Windows::Internal::Shell::implementation::TabProxyWindow **)std::unordered_map<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>::at(
                                                                                  a1 + 3,
                                                                                  v10);
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::HideFromAltTab(*v11, 0);
      ++v8;
    }
    while ( v8 < v7 );
    v9 = (__int64 **)(a1 + 19);
  }
  while ( v7 < a1[23] )
  {
    if ( (unsigned __int64)v9[4] <= v7 )
      goto LABEL_34;
    if ( *v9 )
      v12 = **v9;
    else
      v12 = 0LL;
    v13 = 0LL;
    v14 = *(_QWORD **)(*(_QWORD *)(v12 + 8) + 8 * (((unsigned __int64)v9[3] + v7) & (*(_QWORD *)(v12 + 16) - 1LL)));
    v15 = 0xCBF29CE484222325uLL;
    do
    {
      v16 = *((unsigned __int8 *)v14 + v13++);
      v15 = 0x100000001B3LL * (v16 ^ v15);
    }
    while ( v13 < 0x10 );
    v17 = a1[6];
    v18 = 2 * (v15 & a1[9]);
    v19 = *(_QWORD *)(v17 + 16 * (v15 & a1[9]) + 8);
    if ( v19 == a1[4] )
      goto LABEL_33;
    v20 = *(_QWORD *)(v17 + 8 * v18);
    while ( 1 )
    {
      v21 = *v14 - *(_QWORD *)(v19 + 16);
      if ( *v14 == *(_QWORD *)(v19 + 16) )
        v21 = v14[1] - *(_QWORD *)(v19 + 24);
      if ( !v21 )
        break;
      if ( v19 == v20 )
        goto LABEL_33;
      v19 = *(_QWORD *)(v19 + 8);
    }
    if ( !v19 )
    {
LABEL_33:
      std::_Xout_of_range("invalid unordered_map<K, T> key");
      __debugbreak();
LABEL_34:
      std::_Xout_of_range("invalid deque<T> subscript");
      __debugbreak();
      JUMPOUT(0x180063D0DLL);
    }
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::HideFromAltTab(
      *(winrt::Windows::Internal::Shell::implementation::TabProxyWindow **)(v19 + 32),
      1);
    ++v7;
  }
}
