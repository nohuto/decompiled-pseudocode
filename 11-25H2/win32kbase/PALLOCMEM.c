/*
 * XREFs of PALLOCMEM @ 0x14004C634
 * Callers:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x14001D340 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?HmgpAcquireHandleIndex@@YA_NAEAUSESSION_GLOBALS@Base@Gre@@PEAU_GRETHREAD@@PEAI@Z @ 0x140027AD8 (-HmgpAcquireHandleIndex@@YA_NAEAUSESSION_GLOBALS@Base@Gre@@PEAU_GRETHREAD@@PEAI@Z.c)
 *     ?InitializeTypeIsolation@@YA_NXZ @ 0x140029C78 (-InitializeTypeIsolation@@YA_NXZ.c)
 *     ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x14002BEE0 (-TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     DrvEnumDisplaySettings @ 0x14004AE70 (DrvEnumDisplaySettings.c)
 *     DrvBuildDevmodeList @ 0x14004BF38 (DrvBuildDevmodeList.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x14006A8F0 (DrvSetWddmDeviceMonitorPowerState.c)
 *     DrvUpdateGraphicsDeviceList @ 0x14006ADB0 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x14006BF78 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     PruneModesByDisplayDeviceCaps @ 0x140080A98 (PruneModesByDisplayDeviceCaps.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x14008205C (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x14008C0E0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     GreSfmCleanupPresentHistory @ 0x1400AF0F0 (GreSfmCleanupPresentHistory.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400C5FB8 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?newpathalloc@@YAPEAVPATHALLOC@@XZ @ 0x1400D6250 (-newpathalloc@@YAPEAVPATHALLOC@@XZ.c)
 *     LogDiagSDC @ 0x1400E2360 (LogDiagSDC.c)
 *     ?MakeRoom@ThreadRestrictNewHandlesRegion@@QEAA_NXZ @ 0x1400E4EB8 (-MakeRoom@ThreadRestrictNewHandlesRegion@@QEAA_NXZ.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400F7B3C (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     ldevLoadInternal @ 0x140101720 (ldevLoadInternal.c)
 *     ldevLoadCdd @ 0x140102280 (ldevLoadCdd.c)
 *     ?ldevBindDisplayStub@@YAPEAU_LDEV@@XZ @ 0x140102688 (-ldevBindDisplayStub@@YAPEAU_LDEV@@XZ.c)
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1401028AC (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x140112EB4 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     ?GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z @ 0x1401178EC (-GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1401189AC (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1401190B8 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     ApplyPathModalityToCdsRegistryStore @ 0x140122784 (ApplyPathModalityToCdsRegistryStore.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x140137A28 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x140139E70 (DrvCreatePhysicalMonitorObjects.c)
 *     ?AllocateSessionGlobalsArea@Base@Gre@@YA_NXZ @ 0x140146C0C (-AllocateSessionGlobalsArea@Base@Gre@@YA_NXZ.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x14016028C (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x14017A4B0 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017A6FC (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x14017C714 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvInitConsole @ 0x14017CE9C (DrvInitConsole.c)
 *     NtHWCursorUpdatePointer @ 0x14017D140 (NtHWCursorUpdatePointer.c)
 *     LogDiagCDS @ 0x14019C390 (LogDiagCDS.c)
 *     ?AllocateObjectFast@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@KK@Z @ 0x1401C4C34 (-AllocateObjectFast@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@KK@Z.c)
 * Callees:
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x14000C940 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D154 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001EBA0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ABF4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ACBC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall PALLOCMEM(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi
  int v5; // eax
  __int64 Pool2; // rbx
  unsigned __int64 *v8; // rax
  _DWORD *v9; // rax
  unsigned __int64 i; // rbp
  char v11; // r14
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = (unsigned int)a2;
  v3 = (unsigned int)a1;
  if ( !(_DWORD)a1 )
    return 0LL;
  v4 = W32GetUserSessionState(a1, a2) + 72032;
  v5 = *(_DWORD *)v4;
  if ( !*(_DWORD *)v4 )
    goto LABEL_3;
  if ( v5 != 1 )
  {
    if ( v5 == 2 )
    {
      if ( ((unsigned int)v2 & *(_DWORD *)(v4 + 80)) != (_DWORD)v2 )
      {
LABEL_3:
        Pool2 = ExAllocatePool2(256LL, v3, (unsigned int)v2);
        if ( Pool2 )
          _InterlockedIncrement64((volatile signed __int64 *)(v4 + 112));
        return Pool2;
      }
      v9 = (_DWORD *)(v4 + 48);
      for ( i = 0LL; ; ++i )
      {
        if ( i >= *(unsigned int *)(v4 + 84) )
          goto LABEL_3;
        if ( *v9 == (_DWORD)v2 )
          break;
        ++v9;
      }
      v11 = 0;
      if ( v3 < 0x1000 || (v3 & 0xFFF) != 0 )
      {
        v11 = 1;
        v3 += 16LL;
      }
      Pool2 = ExAllocatePool2(256LL, v3, (unsigned int)v2);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v4 + 128));
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v11 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v4,
                                  Pool2,
                                  i,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            return Pool2;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v4,
                                     Pool2,
                                     i,
                                     BackTrace) )
        {
          return Pool2;
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v4 + 136));
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
          (NSInstrumentation::CLeakTrackingAllocator *)v4,
          v2)
    || v3 + 16 < v3 )
  {
    return 0LL;
  }
  v8 = (unsigned __int64 *)ExAllocatePool2(256LL, v3 + 16, (unsigned int)v2);
  Pool2 = (__int64)v8;
  if ( !v8
    || (_InterlockedIncrement64((volatile signed __int64 *)(v4 + 112)),
        *v8 = v2,
        Pool2 = (__int64)(v8 + 2),
        v8 == (unsigned __int64 *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *(NSInstrumentation::CPointerHashTable **)(v4 + 8),
      v2);
  }
  return Pool2;
}
