/*
 * XREFs of ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@IG@Z @ 0x1801E97E4
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x18009D874 (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x18019913C (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 *     ?RuntimeClassInitialize@VirtualDesktopAcessibility@@QEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@@Z @ 0x1801CDE34 (-RuntimeClassInitialize@VirtualDesktopAcessibility@@QEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktop.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x1801E9770 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     ?CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z @ 0x1804A80A0 (-CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z.c)
 *     ?GetAccessibleName@CSwitchItemGrid@@UEAAJPEAPEAG@Z @ 0x1804B44B0 (-GetAccessibleName@CSwitchItemGrid@@UEAAJPEAPEAG@Z.c)
 *     ?GetAccessibleName@CGlyphButtonElement@@UEAAJPEAPEAG@Z @ 0x1804BDF90 (-GetAccessibleName@CGlyphButtonElement@@UEAAJPEAPEAG@Z.c)
 *     ?GetAccessibleName@LightDismissElement@@UEAAJPEAPEAG@Z @ 0x1804C7E60 (-GetAccessibleName@LightDismissElement@@UEAAJPEAPEAG@Z.c)
 *     ?GetAccessibleName@CVirtualDesktopContainerElement@@UEAAJPEAPEAG@Z @ 0x1804CB0B0 (-GetAccessibleName@CVirtualDesktopContainerElement@@UEAAJPEAPEAG@Z.c)
 *     TabletModeDragPattern::GenerateStringWithMap @ 0x180510480 (TabletModeDragPattern--GenerateStringWithMap.c)
 *     ?GenerateDropEffectPlaceMode@@YAJPEBGW4PlaceModeEvent@@PEAPEAG@Z @ 0x1805265E4 (-GenerateDropEffectPlaceMode@@YAJPEBGW4PlaceModeEvent@@PEAPEAG@Z.c)
 *     ?InitializeResMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x1805271F8 (-InitializeResMessage@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@Q.c)
 *     _lambda_b805fef3212819eb2cf6481f0437eff8_::operator() @ 0x1805CA404 (_lambda_b805fef3212819eb2cf6481f0437eff8_--operator().c)
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x1805DD240 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180086830 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
        __int64 a1,
        HMODULE a2,
        unsigned int a3)
{
  char v4; // bl
  unsigned int v6; // edi
  HRSRC Resource; // rax
  HGLOBAL v9; // rax
  _WORD *v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  const WCHAR *v13; // rdx

  v4 = a3;
  v6 = -2147467259;
  Resource = FindResourceExW(a2, (LPCWSTR)6, (LPCWSTR)(unsigned __int16)((a3 >> 4) + 1), 0);
  if ( Resource )
  {
    v9 = LoadResource(a2, Resource);
    if ( v9 )
    {
      v10 = LockResource(v9);
      if ( v10 )
      {
        v11 = v4 & 0xF;
        if ( v11 )
        {
          v12 = v11;
          do
          {
            v10 += (unsigned __int16)*v10 + 1;
            --v12;
          }
          while ( v12 );
        }
        v13 = v10 + 1;
        if ( !*v10 )
          v13 = &LocaleName;
        return (unsigned int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                               a1,
                               (__int64)v13,
                               (unsigned __int16)*v10);
      }
    }
  }
  return v6;
}
