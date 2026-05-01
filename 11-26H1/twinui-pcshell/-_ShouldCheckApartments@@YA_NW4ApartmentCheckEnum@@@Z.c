/*
 * XREFs of ?_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z @ 0x180049DB8
 * Callers:
 *     ?ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z @ 0x180048810 (-ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z.c)
 *     ?HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z @ 0x180048990 (-HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z.c)
 *     ?HandleActivationDeprecated@CImmersiveMode@@UEAAJW4ZBID@@_N@Z @ 0x180048B20 (-HandleActivationDeprecated@CImmersiveMode@@UEAAJW4ZBID@@_N@Z.c)
 *     ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x180048E50 (-GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV-$CCoSimpleArray@V-$ComPtr@.c)
 *     ?HandleMonitorMove@CClassicWindowManager@@UEAA_NPEAUHWND__@@PEAUIImmersiveMonitor@@@Z @ 0x1800497E0 (-HandleMonitorMove@CClassicWindowManager@@UEAA_NPEAUHWND__@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?PerformModeBasedCallouts@CApplicationManager@@UEAAXQEBUMODE_TRANSITION_INFORMATION@@@Z @ 0x180049A40 (-PerformModeBasedCallouts@CApplicationManager@@UEAAXQEBUMODE_TRANSITION_INFORMATION@@@Z.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18004A620 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180084674 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@AgileApplicationViewChangeListenerConverter@@QEAAJPEAUIApplicationViewChangeListener@@@Z @ 0x180084970 (-RuntimeClassInitialize@AgileApplicationViewChangeListenerConverter@@QEAAJPEAUIApplicationViewCh.c)
 *     ?_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z @ 0x180084AC8 (-_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

char __fastcall _ShouldCheckApartments(int a1)
{
  char v2; // bl
  int v3; // eax
  int v5; // ecx
  WCHAR Filename[264]; // [rsp+30h] [rbp-228h] BYREF

  v2 = 1;
  if ( a1 != 2 )
  {
    v3 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( !`_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
    {
      if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
      {
        v5 = (FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1) + 1;
        `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v5;
      }
      else
      {
        v5 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
      }
      if ( v5 != 1 )
        return 0;
      if ( a1 != 1 )
        return v2;
      if ( (unsigned int)IsAppCompatModeEnabled(16LL) )
      {
        v3 = 2;
        `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
      }
      else
      {
        v3 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
      }
    }
    if ( v3 == 1 )
      return v2;
    return 0;
  }
  return v2;
}
