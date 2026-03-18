/*
 * XREFs of HalpAcpiPostSleep @ 0x140BECAA0
 * Callers:
 *     HaliAcpiSleep @ 0x1405A2710 (HaliAcpiSleep.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     HalpSetClockAfterSleep @ 0x140451214 (HalpSetClockAfterSleep.c)
 *     HalpAcpiPmRegisterWrite @ 0x1404576C0 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterAvailable @ 0x14046B360 (HalpAcpiPmRegisterAvailable.c)
 *     HalpAcpiPmRegisterRead @ 0x14046B750 (HalpAcpiPmRegisterRead.c)
 *     HalpTimerRestorePerformanceCounter @ 0x1404E56C8 (HalpTimerRestorePerformanceCounter.c)
 *     HalpTimerEnableHypervisorTimer @ 0x14050827C (HalpTimerEnableHypervisorTimer.c)
 *     HalpTimerSwitchStallSource @ 0x14051891C (HalpTimerSwitchStallSource.c)
 *     HalpTimerInitializeVpptClockTimer @ 0x1405277F0 (HalpTimerInitializeVpptClockTimer.c)
 *     HalpRestoreNvsArea @ 0x140528F30 (HalpRestoreNvsArea.c)
 *     HalpMiscIsLegacyPcType @ 0x140584F1C (HalpMiscIsLegacyPcType.c)
 *     HalpHvNotifyDebugDeviceAvailable @ 0x140585D60 (HalpHvNotifyDebugDeviceAvailable.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpResetSBF @ 0x140BE917C (HalpResetSBF.c)
 *     HalpInterruptReinitialize @ 0x140BEA368 (HalpInterruptReinitialize.c)
 *     HalpRestoreLegacyDmaControllerState @ 0x140BECA00 (HalpRestoreLegacyDmaControllerState.c)
 *     HalpCheckLowMemoryPostSleep @ 0x140C09D9C (HalpCheckLowMemoryPostSleep.c)
 *     HalpPiix4Detect @ 0x140C0A8DC (HalpPiix4Detect.c)
 *     HalpCheckFixedWakeSources @ 0x140C0D340 (HalpCheckFixedWakeSources.c)
 */

char __fastcall HalpAcpiPostSleep(unsigned int a1)
{
  __int16 v2; // bx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 i; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _WORD v14[2]; // [rsp+30h] [rbp-50h] BYREF
  _WORD v15[2]; // [rsp+34h] [rbp-4Ch] BYREF
  int v16; // [rsp+38h] [rbp-48h] BYREF
  int v17; // [rsp+3Ch] [rbp-44h] BYREF
  int v18; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  int *v20; // [rsp+58h] [rbp-28h]
  __int64 v21; // [rsp+60h] [rbp-20h]
  int *v22; // [rsp+68h] [rbp-18h]
  __int64 v23; // [rsp+70h] [rbp-10h]

  v17 = 0;
  v18 = 0;
  v16 = 0;
  v14[0] = 0;
  v15[0] = 0;
  HalpHiberResumePerf = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (HalpPlatformFlags & 1) != 0 )
  {
    HalpCheckFixedWakeSources();
    if ( (int)HalpAcpiPmRegisterAvailable(0) >= 0 )
    {
      HalpAcpiPmRegisterRead(0, HalpDeviceBlockUnblockPushLock.SavedApcStateFill[32] >> 1, (__int64)v15, 2u, 0LL);
      v2 = v15[0];
      v14[0] = v15[0];
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
      {
        HalpAcpiPmRegisterRead(3, HalpDeviceBlockUnblockPushLock.SavedApcStateFill[32] >> 1, (__int64)v15, 2u, 0LL);
        v2 = v14[0] | v15[0];
      }
      v14[0] = v2 & 0xFBFF;
      HalpAcpiPmRegisterWrite(0, HalpDeviceBlockUnblockPushLock.SavedApcStateFill[32] >> 1, (__int64)v14, 2u, 0LL);
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
        HalpAcpiPmRegisterWrite(3, HalpDeviceBlockUnblockPushLock.SavedApcStateFill[32] >> 1, (__int64)v14, 2u, 0LL);
    }
  }
  HalpCheckLowMemoryPostSleep(&v17, &v18, &v16);
  if ( (HalpPlatformFlags & 4) != 0 )
    HalpSetClockAfterSleep();
  qword_140F87EA8 = KeQueryPerformanceCounter(0LL).QuadPart;
  HalpTimerRestorePerformanceCounter(v4, v3);
  qword_140F87EB0 = KeQueryPerformanceCounter(0LL).QuadPart;
  HalpTimerSwitchStallSource(0);
  HIBYTE(HalpWakeupState) = 0;
  **(_DWORD **)&HalpDeviceBlockUnblockPushLock.PriorityFloorCounts[24] = 0;
  HalpInterruptReinitialize(a1);
  if ( !HalpDeviceBlockUnblockPushLock.PriorityFloorCounts[16] )
  {
    guard_dispatch_icall_no_overrides(((a1 >> 8) & 0xF) + 1, v5);
    if ( HalpHvCpuManager )
      HalpHvNotifyDebugDeviceAvailable(v6, v5);
  }
  if ( v16
    && HalpDiagnosticEventsRegistered
    && EtwEventEnabled(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_FIRMWARE_SLEEP_CORRUPTION) )
  {
    UserData.Ptr = (ULONGLONG)&v16;
    *(_QWORD *)&UserData.Size = 4LL;
    v20 = &v17;
    v21 = 4LL;
    v22 = &v18;
    v23 = 4LL;
    EtwWrite(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_FIRMWARE_SLEEP_CORRUPTION, 0LL, 3u, &UserData);
  }
  if ( (HalpDeviceBlockUnblockPushLock.KeReferenceCount & 0x4000) != 0 )
  {
    if ( KdComPortInUse )
      KdInitialize(4LL, 0LL, 0LL);
    for ( i = HalpDmaControllers; (__int64 *)i != &HalpDmaControllers; i = *(_QWORD *)i )
    {
      v8 = *(_QWORD *)(i + 64);
      *(_BYTE *)(i + 216) = 1;
      guard_dispatch_icall_no_overrides(v8, v5);
    }
    if ( HalpMiscIsLegacyPcType() )
      HalpRestoreLegacyDmaControllerState();
  }
  HalpTimerInitializeVpptClockTimer();
  HalpTimerEnableHypervisorTimer(v10, v9);
  HalpPiix4Detect(0LL);
  if ( !HalpDeviceBlockUnblockPushLock.PriorityFloorCounts[16] )
    guard_dispatch_icall_no_overrides(((a1 >> 8) & 0xF) + 1, v11);
  v12 = PmAcpiDispatchTable;
  LOBYTE(v12) = 1;
  guard_dispatch_icall_no_overrides(v12, v11);
  HalpRestoreNvsArea();
  HalpResetSBF();
  qword_140F87ED0 = KeQueryPerformanceCounter(0LL).QuadPart;
  return 1;
}
