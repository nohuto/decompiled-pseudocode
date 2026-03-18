/*
 * XREFs of HalpAcpiPreSleep @ 0x140C08988
 * Callers:
 *     HaliAcpiSleep @ 0x1405A2710 (HaliAcpiSleep.c)
 * Callees:
 *     HalpSetClockBeforeSleep @ 0x140451288 (HalpSetClockBeforeSleep.c)
 *     HalpAcpiPmRegisterWrite @ 0x1404576C0 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterAvailable @ 0x14046B360 (HalpAcpiPmRegisterAvailable.c)
 *     HalpAcpiPmRegisterRead @ 0x14046B750 (HalpAcpiPmRegisterRead.c)
 *     HalpTimerSavePerformanceCounter @ 0x1404EB7B0 (HalpTimerSavePerformanceCounter.c)
 *     HalpPreserveNvsArea @ 0x1404F9E98 (HalpPreserveNvsArea.c)
 *     HalpTimerGetSavedPerformanceCounter @ 0x140511EA0 (HalpTimerGetSavedPerformanceCounter.c)
 *     KeSynchronizeTimeToQpc @ 0x1405183E0 (KeSynchronizeTimeToQpc.c)
 *     HalpTimerSwitchStallSource @ 0x14051891C (HalpTimerSwitchStallSource.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpSaveDmaControllerState @ 0x140BEA340 (HalpSaveDmaControllerState.c)
 */

__int64 __fastcall HalpAcpiPreSleep(int a1)
{
  __int16 v1; // bx
  unsigned __int64 SavedPerformanceCounter; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax
  __int16 v6; // bx
  __int16 v7; // bx
  __int16 v8; // [rsp+50h] [rbp+20h] BYREF
  __int16 v9; // [rsp+58h] [rbp+28h] BYREF

  v1 = a1;
  *(_DWORD *)&HalpDeviceBlockUnblockPushLock.KeReferenceCount = a1;
  v8 = 0;
  v9 = 0;
  HalpTimerSwitchStallSource(1);
  HalpTimerSavePerformanceCounter();
  if ( (HalpPlatformFlags & 4) != 0 )
    HalpSetClockBeforeSleep();
  SavedPerformanceCounter = HalpTimerGetSavedPerformanceCounter();
  KeSynchronizeTimeToQpc((LARGE_INTEGER)SavedPerformanceCounter);
  HalpHiberInProgress = 1;
  if ( (v1 & 0x4000) != 0 )
    HalpSaveDmaControllerState();
  if ( (int)HalpAcpiPmRegisterAvailable(0) >= 0 )
  {
    HalpAcpiPmRegisterRead(0, HalpDeviceBlockUnblockPushLock.SavedApcStateFill[32] >> 1, (__int64)&v9, 2u, 0LL);
    v6 = v9;
    v8 = v9;
    if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
    {
      HalpAcpiPmRegisterRead(3, HalpDeviceBlockUnblockPushLock.SavedApcStateFill[32] >> 1, (__int64)&v9, 2u, 0LL);
      v6 = v9 | v8;
      v8 |= v9;
    }
    if ( (HalpDeviceBlockUnblockPushLock.SchedulerApcFill3[8] & 0x40) == 0 )
    {
      if ( HIBYTE(HalpWakeupState) )
        v7 = v6 | 0x400;
      else
        v7 = v6 & 0xFBFF;
      v8 = v7;
    }
    HalpAcpiPmRegisterWrite(0, HalpDeviceBlockUnblockPushLock.SavedApcStateFill[32] >> 1, (__int64)&v8, 2u, 0LL);
    if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
      HalpAcpiPmRegisterWrite(3, HalpDeviceBlockUnblockPushLock.SavedApcStateFill[32] >> 1, (__int64)&v8, 2u, 0LL);
    HalpAcpiPmRegisterRead(0, 0, (__int64)&v9, 2u, 0LL);
    v8 = v9;
    if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
    {
      HalpAcpiPmRegisterRead(3, 0, (__int64)&v9, 2u, 0LL);
      v8 |= v9;
    }
    HalpAcpiPmRegisterWrite(0, 0, (__int64)&v8, 2u, 0LL);
    if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
      HalpAcpiPmRegisterWrite(3, 0, (__int64)&v8, 2u, 0LL);
  }
  if ( (_BYTE)HalpWakeupState )
    guard_dispatch_icall_no_overrides(v4, v3);
  else
    guard_dispatch_icall_no_overrides(0LL, v3);
  result = HalpPreserveNvsArea();
  HalpDeviceBlockUnblockPushLock.NextProcessor = 2;
  return result;
}
