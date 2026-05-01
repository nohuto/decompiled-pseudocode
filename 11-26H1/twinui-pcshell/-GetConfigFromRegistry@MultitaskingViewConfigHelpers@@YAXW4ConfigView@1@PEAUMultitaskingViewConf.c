/*
 * XREFs of ?GetConfigFromRegistry@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConfig@@@Z @ 0x1804B7B10
 * Callers:
 *     ?RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIApplicationViewCollection@@PEAUITouchGestureSettings@@@Z @ 0x1804AD960 (-RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManage.c)
 *     ?RuntimeClassInitialize@CPPIAllUpViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUITabletModeViewManager@@@Z @ 0x1804AF9E0 (-RuntimeClassInitialize@CPPIAllUpViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewMana.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800712B0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@W_ea_1800712B0.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GetDefaultConfig@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConfig@@@Z @ 0x1804B7D10 (-GetDefaultConfig@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConfig@@@.c)
 *     ?_ReadFrameMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUFrameMetrics@@@Z @ 0x1804B84B8 (-_ReadFrameMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUFrameMetrics@@@Z.c)
 *     ?_ReadGridMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUGridMetrics@@@Z @ 0x1804B866C (-_ReadGridMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUGridMetrics@@@Z.c)
 *     ?_ReadVirtualDesktopMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopMetrics@@@Z @ 0x1804B8ACC (-_ReadVirtualDesktopMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopMetr.c)
 */

void __fastcall MultitaskingViewConfigHelpers::GetConfigFromRegistry(__int64 a1, _OWORD *a2)
{
  int v3; // r10d
  int v4; // r10d
  int v5; // r10d
  int v6; // r10d
  const wchar_t *v7; // r8
  int v8; // eax
  struct GridMetrics *v9; // r8
  struct VirtualDesktopMetrics *v10; // r8
  struct FrameMetrics *v11; // r8
  HKEY v12; // rcx
  __int64 v13; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm1
  LPCWSTR lpSubKey[4]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v24[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct HKEY__ v25; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+C8h] [rbp-38h]
  __int64 v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+130h] [rbp+30h]
  __int64 v29; // [rsp+1D8h] [rbp+D8h]
  struct HKEY__ v30; // [rsp+258h] [rbp+158h] BYREF
  __int64 v31; // [rsp+278h] [rbp+178h]
  __int64 v32; // [rsp+2F0h] [rbp+1F0h]
  struct HKEY__ v33; // [rsp+300h] [rbp+200h] BYREF
  __int64 v34; // [rsp+3B8h] [rbp+2B8h]
  __int64 v35; // [rsp+470h] [rbp+370h]
  wil::details::in1diag3 *retaddr; // [rsp+4F8h] [rbp+3F8h]
  HKEY hKey; // [rsp+508h] [rbp+408h] BYREF

  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  MultitaskingViewConfigHelpers::GetDefaultConfig(a1, v24);
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( !v4 )
    {
      v7 = L"AltTabViewHost";
      goto LABEL_11;
    }
    v5 = v4 - 1;
    if ( !v5 )
    {
      v7 = L"SnapAssistView";
      goto LABEL_11;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      v7 = L"PPIAllUpView";
      goto LABEL_11;
    }
    if ( v6 == 1 )
    {
      v7 = L"TestHost";
      goto LABEL_11;
    }
  }
  v7 = L"AllUpView";
LABEL_11:
  memset(lpSubKey, 0, 24);
  v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         (wchar_t **)lpSubKey,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\MultitaskingView\\%s",
         v7);
  if ( v8 >= 0 )
  {
    hKey = 0LL;
    if ( !RegOpenKeyExW(HKEY_CURRENT_USER, lpSubKey[0], 0, 0x20019u, &hKey) )
    {
      MultitaskingViewConfigHelpers::_ReadGridMetrics((MultitaskingViewConfigHelpers *)hKey, &v25, v9);
      MultitaskingViewConfigHelpers::_ReadVirtualDesktopMetrics((MultitaskingViewConfigHelpers *)hKey, &v33, v10);
      MultitaskingViewConfigHelpers::_ReadFrameMetrics((MultitaskingViewConfigHelpers *)hKey, &v30, v11);
    }
    v12 = hKey;
    hKey = 0LL;
    if ( v12 )
      RegCloseKey(v12);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x61,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\config.cpp",
      (const char *)(unsigned int)v8);
  }
  v13 = 9LL;
  v14 = v24;
  do
  {
    v15 = v14[1];
    *a2 = *v14;
    v16 = v14[2];
    a2[1] = v15;
    v17 = v14[3];
    a2[2] = v16;
    v18 = v14[4];
    a2[3] = v17;
    v19 = v14[5];
    a2[4] = v18;
    v20 = v14[6];
    a2[5] = v19;
    v21 = v14[7];
    v14 += 8;
    a2[6] = v20;
    a2 += 8;
    *(a2 - 1) = v21;
    --v13;
  }
  while ( v13 );
  v22 = v14[1];
  *a2 = *v14;
  a2[1] = v22;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)lpSubKey);
}
