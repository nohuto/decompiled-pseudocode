/*
 * XREFs of HalpAcpiPostSleep @ 0x140BF2AA0
 * Callers:
 *     HaliAcpiSleep @ 0x1405A4F20 (HaliAcpiSleep.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     HalpSetClockAfterSleep @ 0x140449344 (HalpSetClockAfterSleep.c)
 *     HalpAcpiPmRegisterWrite @ 0x14044EF30 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterAvailable @ 0x140464AE0 (HalpAcpiPmRegisterAvailable.c)
 *     HalpAcpiPmRegisterRead @ 0x140464ED0 (HalpAcpiPmRegisterRead.c)
 *     HalpTimerRestorePerformanceCounter @ 0x1404DEC68 (HalpTimerRestorePerformanceCounter.c)
 *     HalpTimerEnableHypervisorTimer @ 0x140501D24 (HalpTimerEnableHypervisorTimer.c)
 *     HalpTimerSwitchStallSource @ 0x14051238C (HalpTimerSwitchStallSource.c)
 *     HalpTimerInitializeVpptClockTimer @ 0x140529E60 (HalpTimerInitializeVpptClockTimer.c)
 *     HalpRestoreNvsArea @ 0x14052B520 (HalpRestoreNvsArea.c)
 *     HalpMiscIsLegacyPcType @ 0x14058743C (HalpMiscIsLegacyPcType.c)
 *     HalpHvNotifyDebugDeviceAvailable @ 0x140588280 (HalpHvNotifyDebugDeviceAvailable.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpResetSBF @ 0x140BEF17C (HalpResetSBF.c)
 *     HalpInterruptReinitialize @ 0x140BF0368 (HalpInterruptReinitialize.c)
 *     HalpRestoreLegacyDmaControllerState @ 0x140BF2A00 (HalpRestoreLegacyDmaControllerState.c)
 *     HalpCheckLowMemoryPostSleep @ 0x140C0FFAC (HalpCheckLowMemoryPostSleep.c)
 *     HalpPiix4Detect @ 0x140C10AEC (HalpPiix4Detect.c)
 *     HalpCheckFixedWakeSources @ 0x140C13550 (HalpCheckFixedWakeSources.c)
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
      HalpAcpiPmRegisterRead(0, HalpDeviceBlockUnblockPushLock.SavedApcStateFill[0] >> 1, (__int64)v15, 2u, 0LL);
      v2 = v15[0];
      v14[0] = v15[0];
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
      {
        HalpAcpiPmRegisterRead(3, HalpDeviceBlockUnblockPushLock.SavedApcStateFill[0] >> 1, (__int64)v15, 2u, 0LL);
        v2 = v14[0] | v15[0];
      }
      v14[0] = v2 & 0xFBFF;
      HalpAcpiPmRegisterWrite(0, HalpDeviceBlockUnblockPushLock.SavedApcStateFill[0] >> 1, (__int64)v14, 2u, 0LL);
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
        HalpAcpiPmRegisterWrite(3, HalpDeviceBlockUnblockPushLock.SavedApcStateFill[0] >> 1, (__int64)v14, 2u, 0LL);
    }
  }
  HalpCheckLowMemoryPostSleep(&v17, &v18, &v16);
  if ( (HalpPlatformFlags & 4) != 0 )
    HalpSetClockAfterSleep();
  qword_140F882A8 = KeQueryPerformanceCounter(0LL).QuadPart;
  HalpTimerRestorePerformanceCounter(v4, v3);
  qword_140F882B0 = KeQueryPerformanceCounter(0LL).QuadPart;
  HalpTimerSwitchStallSource(0);
  HIBYTE(HalpWakeupState) = 0;
  LODWORD(HalpDeviceBlockUnblockPushLock.IoSelfBoostsEntry.Next->Next) = 0;
  HalpInterruptReinitialize(a1);
  if ( !BYTE1(HalpDeviceBlockUnblockPushLock.PropagateBoostsEntry.Next) )
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
  if ( (*(_WORD *)&HalpDeviceBlockUnblockPushLock.PriorityFloorCounts[8] & 0x4000) != 0 )
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
  if ( !BYTE1(HalpDeviceBlockUnblockPushLock.PropagateBoostsEntry.Next) )
    guard_dispatch_icall_no_overrides(((a1 >> 8) & 0xF) + 1, v11);
  v12 = PmAcpiDispatchTable;
  LOBYTE(v12) = 1;
  guard_dispatch_icall_no_overrides(v12, v11);
  HalpRestoreNvsArea();
  HalpResetSBF();
  qword_140F882D0 = KeQueryPerformanceCounter(0LL).QuadPart;
  return 1;
}
