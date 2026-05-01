/*
 * XREFs of ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x1801E9770
 * Callers:
 *     _anonymous_namespace_::GetDefaultVirtualDesktopName @ 0x1801E967C (_anonymous_namespace_--GetDefaultVirtualDesktopName.c)
 *     ?_SetTitle@VirtualDesktopItemCollection@@AEAAXPEAUIVirtualDesktopItem@@@Z @ 0x1804A1484 (-_SetTitle@VirtualDesktopItemCollection@@AEAAXPEAUIVirtualDesktopItem@@@Z.c)
 *     ?EndAppBarResize@JointResizeAcc@@UEAAXXZ @ 0x180518970 (-EndAppBarResize@JointResizeAcc@@UEAAXXZ.c)
 *     ?UpdateDrag@JointResizeAcc@@UEAAXPEAUIApplicationView@@0@Z @ 0x180518F10 (-UpdateDrag@JointResizeAcc@@UEAAXPEAUIApplicationView@@0@Z.c)
 *     ?UpdateDrag@JointResizeAcc@@UEAAXPEAUIApplicationView@@_K@Z @ 0x180519070 (-UpdateDrag@JointResizeAcc@@UEAAXPEAUIApplicationView@@_K@Z.c)
 *     ?InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z @ 0x180526D40 (-InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z.c)
 *     ?RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJ_N@Z @ 0x180537330 (-RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJ_N@Z.c)
 *     ?OnRemoteSessionConnected@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUhstring@6@@Z @ 0x180645ED0 (-OnRemoteSessionConnected@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@U.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGPEAD@Z @ 0x1800539AC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@IG@Z @ 0x1801E97E4 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHI.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  int v4; // edi
  LPVOID pv[6]; // [rsp+28h] [rbp-30h] BYREF
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  memset(pv, 0, 24);
  v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(pv, a2, a3);
  if ( v4 >= 0 )
    v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
           a1,
           (const wchar_t *)pv[0],
           va);
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return (unsigned int)v4;
}
