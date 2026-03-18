/*
 * XREFs of DpiAcquireCoreSyncAccessSafe @ 0x14030CE44
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x140014BDC (DpiFdoHandleDisplayDetectControl.c)
 *     DxgkQueryConnectionChanges @ 0x140015450 (DxgkQueryConnectionChanges.c)
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x140051678 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     ?CommonConstructor@CInterfaceCallContext@@AEAAXPEAXPEAU_IRP@@EW4AdapterLockAcquireType@@EEE@Z @ 0x140060BF4 (-CommonConstructor@CInterfaceCallContext@@AEAAXPEAXPEAU_IRP@@EW4AdapterLockAcquireType@@EEE@Z.c)
 *     ?Acquire@AUTO_ADAPTER_LOCK@@QEAAJXZ @ 0x140085DCC (-Acquire@AUTO_ADAPTER_LOCK@@QEAAJXZ.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x140091690 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiPanelBufferingSetAutomaticPolicy @ 0x1400921EC (DpiPanelBufferingSetAutomaticPolicy.c)
 *     DpiPanelBufferingSetOverrideState @ 0x1400923DC (DpiPanelBufferingSetOverrideState.c)
 *     DpiFdoDestroyRelatedObjects @ 0x140240494 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x140245108 (DpiFdoQueryAdapterInfoIntegratedDisplay.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x140245390 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 *     DxgkPowerOnOffMonitor @ 0x14024A2EC (DxgkPowerOnOffMonitor.c)
 *     ?DpiBrightness3Get@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_OUT@@@Z @ 0x14024D710 (-DpiBrightness3Get@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_OUT@@@Z.c)
 *     ?DpiBrightness3GetCaps@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_CAPS@@@Z @ 0x14024D810 (-DpiBrightness3GetCaps@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_CAPS@@@Z.c)
 *     ?DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z @ 0x14024D910 (-DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z.c)
 *     ?DpiBrightness3Set@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_SET_IN@@@Z @ 0x14024DA20 (-DpiBrightness3Set@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_SET_IN@@@Z.c)
 *     ?DpiBrightnessIfGet@@YAJPEAXPEAE@Z @ 0x14024DFC0 (-DpiBrightnessIfGet@@YAJPEAXPEAE@Z.c)
 *     ?DpiBrightnessIfGetBacklightReduction@@YAJPEAXPEAU_DXGK_BACKLIGHT_INFO@@@Z @ 0x14024E0E0 (-DpiBrightnessIfGetBacklightReduction@@YAJPEAXPEAU_DXGK_BACKLIGHT_INFO@@@Z.c)
 *     ?DpiBrightnessIfGetCaps@@YAJPEAXPEAU_DXGK_BRIGHTNESS_CAPS@@@Z @ 0x14024E1C0 (-DpiBrightnessIfGetCaps@@YAJPEAXPEAU_DXGK_BRIGHTNESS_CAPS@@@Z.c)
 *     ?DpiBrightnessIfSetState@@YAJPEAXPEAU_DXGK_BRIGHTNESS_STATE@@@Z @ 0x14024E2B0 (-DpiBrightnessIfSetState@@YAJPEAXPEAU_DXGK_BRIGHTNESS_STATE@@@Z.c)
 *     ?DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z @ 0x14024E5E8 (-DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z.c)
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x14024EB50 (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiFdoThermalActiveCooling @ 0x14024F910 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x14024FA90 (DpiFdoThermalPassiveCooling.c)
 *     DpiPdoDispatchIoctl @ 0x1402560E0 (DpiPdoDispatchIoctl.c)
 *     DpiPdoRemovePdoObjects @ 0x140256E10 (DpiPdoRemovePdoObjects.c)
 *     DpiGdoDispatchInternalIoctl @ 0x140257550 (DpiGdoDispatchInternalIoctl.c)
 *     ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x14030B510 (-DpiBrightnessIfSet@@YAJPEAXE@Z.c)
 *     DpiPdoSetDevicePower @ 0x1403B9898 (DpiPdoSetDevicePower.c)
 *     DpiPdoDispatchPnp @ 0x1403D1510 (DpiPdoDispatchPnp.c)
 *     ?DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x14040AE90 (-DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z.c)
 *     ?DpiBrightness3SetBacklightOptimization@@YAJPEAXKW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x140412970 (-DpiBrightness3SetBacklightOptimization@@YAJPEAXKW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1404279F8 (DpiFdoInitializeGpuVirtualization.c)
 *     DxgkHandleMiracastEscape @ 0x14042CB5C (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightnessIfGetPossible@@YAJPEAXKPEAE1@Z @ 0x14042F320 (-DpiBrightnessIfGetPossible@@YAJPEAXKPEAE1@Z.c)
 *     DpiPdoDispatchInternalIoctl @ 0x140442E60 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1400321CC (DpiCheckForOutstandingD3Requests.c)
 *     DpiIsPowerRuntimeDStateTransition @ 0x14030D094 (DpiIsPowerRuntimeDStateTransition.c)
 *     DxgkAcquireAdapterCoreSync @ 0x14030D100 (DxgkAcquireAdapterCoreSync.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 */

__int64 __fastcall DpiAcquireCoreSyncAccessSafe(__int64 a1, char a2)
{
  __int64 v2; // rbp
  int v3; // edi
  unsigned int v5; // esi
  __int64 v6; // rax
  __int64 v7; // rbx
  char IsPowerRuntimeDStateTransition; // al
  int v9; // r9d

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  v5 = 0;
  v6 = *(_QWORD *)(v2 + 32);
  v7 = *(_QWORD *)(v6 + 64);
  if ( *(_BYTE *)(v7 + 482) )
    DpiCheckForOutstandingD3Requests(*(_QWORD *)(v6 + 64));
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v7 + 3928), 1u);
  if ( *(_DWORD *)(v7 + 236) == 6 || *(_DWORD *)(v7 + 240) == 6 || *(_DWORD *)(v7 + 4120) == 3 )
  {
    v5 = -1073741810;
    WdLogSingleEntry2(3LL, *(_QWORD *)(v7 + 24), -1073741810LL);
    WdLogGlobalForLineNumber = 147;
  }
  else if ( *(_DWORD *)(v2 + 16) == 1953656900
         && (*(_DWORD *)(v2 + 20) == 6 || *(_DWORD *)(v2 + 20) == 5 || *(_DWORD *)(v2 + 20) == 2) )
  {
    IsPowerRuntimeDStateTransition = DpiIsPowerRuntimeDStateTransition(v7);
    if ( IsPowerRuntimeDStateTransition || v9 != 1 && *(_DWORD *)(v7 + 284) == 1 )
    {
      if ( *(_QWORD *)(v7 + 4032) )
      {
        if ( !IsPowerRuntimeDStateTransition || !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304384) )
        {
          LOBYTE(v3) = a2 == 1;
          DxgkAcquireAdapterCoreSync(*(_QWORD *)(v7 + 4032), (unsigned int)(v3 + 1));
          return v5;
        }
        v5 = -1073741661;
        WdLogSingleEntry2(3LL, *(_QWORD *)(v7 + 24), -1073741661LL);
        WdLogGlobalForLineNumber = 195;
      }
      else
      {
        v5 = -1073741661;
        WdLogSingleEntry2(3LL, *(_QWORD *)(v7 + 24), -1073741661LL);
        WdLogGlobalForLineNumber = 185;
      }
    }
    else
    {
      v5 = -1073741661;
      WdLogSingleEntry2(3LL, *(_QWORD *)(v7 + 24), -1073741661LL);
      WdLogGlobalForLineNumber = 176;
    }
  }
  else
  {
    v5 = -1073741637;
    WdLogSingleEntry2(2LL, *(_QWORD *)(v2 + 24), -1073741637LL);
    WdLogGlobalForLineNumber = 209;
  }
  if ( *(_BYTE *)(v7 + 482) )
    DpiEnableD3Requests(*(_QWORD *)(v7 + 24));
  ExReleaseResourceLite((PERESOURCE)(v7 + 3928));
  KeLeaveCriticalRegion();
  return v5;
}
