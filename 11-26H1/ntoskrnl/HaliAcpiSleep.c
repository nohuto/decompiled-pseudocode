/*
 * XREFs of HaliAcpiSleep @ 0x1405A4F20
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
 *     HalpAcpiPmRegisterWrite @ 0x14044EF30 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterRead @ 0x140464ED0 (HalpAcpiPmRegisterRead.c)
 *     HalSetEnvironmentVariableEx @ 0x14046B270 (HalSetEnvironmentVariableEx.c)
 *     HalpTimerSaveProcessorCounter @ 0x140505AA0 (HalpTimerSaveProcessorCounter.c)
 *     HalReturnToFirmware @ 0x140581B60 (HalReturnToFirmware.c)
 *     HalpHvEnterSleepState @ 0x1405881B0 (HalpHvEnterSleepState.c)
 *     HalpCheckWakeupTimeAndAdjust @ 0x140596EB4 (HalpCheckWakeupTimeAndAdjust.c)
 *     VslTerminateSecureServices @ 0x1405C6AEC (VslTerminateSecureServices.c)
 *     HalpSetupRealModeResume @ 0x140727B50 (HalpSetupRealModeResume.c)
 *     HaliSaveProcessorContextAndSleep @ 0x140727CF0 (HaliSaveProcessorContextAndSleep.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpAcpiPostSleep @ 0x140BF2AA0 (HalpAcpiPostSleep.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140BF2DA8 (HalpCheckLowMemoryPreSleep.c)
 *     HalpPostSleepMP @ 0x140BF2EF0 (HalpPostSleepMP.c)
 *     KeWriteProtectPAT @ 0x140BFE0B0 (KeWriteProtectPAT.c)
 *     HalpReenableAcpi @ 0x140C0D600 (HalpReenableAcpi.c)
 *     HalpAcpiPreSleep @ 0x140C0EB98 (HalpAcpiPreSleep.c)
 */

__int64 __fastcall HaliAcpiSleep(unsigned int a1, __int64 a2, __int64 a3, unsigned int a4, volatile signed __int32 *a5)
{
  unsigned int v6; // r12d
  unsigned int v9; // r15d
  bool v10; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  volatile signed __int32 *v14; // rsi
  unsigned int v15; // ebx
  struct _KPRCB *v16; // rbx
  unsigned int Number; // eax
  __int64 v18; // rdx
  unsigned int v19; // r12d
  unsigned int v20; // ebx
  unsigned int v21; // esi
  unsigned int v22; // eax
  unsigned __int8 v23; // r14
  unsigned int v24; // ebx
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned int v27; // ebx
  int v28; // r14d
  __int64 v29; // rdx
  int v30; // ecx
  unsigned __int8 v31; // bl
  _WORD v33[2]; // [rsp+30h] [rbp-30h] BYREF
  _WORD v34[2]; // [rsp+34h] [rbp-2Ch] BYREF
  char v35; // [rsp+39h] [rbp-27h] BYREF
  bool v36; // [rsp+3Ah] [rbp-26h]
  _WORD v37[2]; // [rsp+3Ch] [rbp-24h] BYREF
  __int16 v38; // [rsp+40h] [rbp-20h] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+48h] [rbp-18h]
  __int64 CurrentIrql; // [rsp+50h] [rbp-10h]
  char v41; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v42; // [rsp+B8h] [rbp+58h]

  v42 = a4;
  v6 = a4;
  v41 = 0;
  v34[0] = 0;
  v37[0] = 0;
  v33[0] = 0;
  v35 = 0;
  v38 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0;
  v10 = HalpDisableInterrupts();
  v14 = a5;
  v15 = v11;
  v36 = v10;
  CurrentPrcb = KeGetCurrentPrcb();
  _InterlockedDecrement(a5);
  while ( *v14 )
  {
    if ( (++v15 & dword_140FBB3DC) != 0 || !qword_140FBB3E0 )
    {
      _mm_pause();
    }
    else
    {
      guard_dispatch_icall_no_overrides(v15, v11);
      v11 = 0LL;
    }
  }
  if ( HalpProfileInterface[6] )
    guard_dispatch_icall_no_overrides(v12, v11);
  HalpTimerSaveProcessorCounter(v12, v11, v13);
  HalpTscOnWake = 0LL;
  if ( !KeGetPcr()->Prcb.Number )
    HalpTscRestoreValue = *(_QWORD *)HalpTimerSavedProcessorCounter;
  v16 = CurrentPrcb;
  Number = CurrentPrcb->Number;
  if ( Number )
  {
    if ( (a1 & 0x8000) != 0 )
      v30 = 0;
    else
      v30 = *(_DWORD *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[168] + 1504 * Number;
    v9 = HaliSaveProcessorContextAndSleep(v30, a2, a3, v6, (__int64)&v35);
    goto LABEL_83;
  }
  BYTE1(HalpDeviceBlockUnblockPushLock.PropagateBoostsEntry.Next) = 0;
  dword_140F87A48 = 0;
  HalpAcpiPreSleep(a1);
  if ( LOBYTE(IommuInterfaceStateChangeCallbackPushLock.UserWaitTime) )
    HalpAcpiPmRegisterRead(1, 0, (__int64)v37, 2u, 0LL);
  if ( LOBYTE(IommuInterfaceStateChangeCallbackPushLock.Spare32) )
    HalpAcpiPmRegisterRead(4, 0, (__int64)&v38, 2u, 0LL);
  v19 = a1 >> 12;
  if ( ((a1 >> 12) & 2) != 0
    && (unsigned __int8)HalpSetupRealModeResume(
                          HalpDeviceBlockUnblockPushLock.SchedulerSharedSystemSlot,
                          *(unsigned int *)&HalpDeviceBlockUnblockPushLock.AbWaitEntryCount) )
  {
    goto LABEL_72;
  }
  HalpInterruptProcessorRestarting = 1;
  _InterlockedIncrement(&dword_140F87A4C);
  v20 = 0;
  v21 = v42;
  while ( dword_140F87A4C != v21 )
  {
    if ( (++v20 & dword_140FBB3DC) != 0 || !qword_140FBB3E0 )
      _mm_pause();
    else
      guard_dispatch_icall_no_overrides(v20, v18);
  }
  if ( a2 )
  {
    v22 = guard_dispatch_icall_no_overrides(a3, v18);
    v9 = v22;
    if ( (HalpPlatformFlags & 1) != 0 || v22 != -1073741632 )
    {
      if ( v22 )
      {
        if ( v22 == 1073742484 )
          BYTE1(HalpDeviceBlockUnblockPushLock.PropagateBoostsEntry.Next) = 1;
        else
          HalpReenableAcpi();
LABEL_72:
        if ( LOBYTE(IommuInterfaceStateChangeCallbackPushLock.UserWaitTime) )
          HalpAcpiPmRegisterWrite(1, 0, (__int64)v37, 2u, 0LL);
        if ( LOBYTE(IommuInterfaceStateChangeCallbackPushLock.Spare32) )
          HalpAcpiPmRegisterWrite(4, 0, (__int64)&v38, 2u, 0LL);
        goto LABEL_76;
      }
      v23 = 0;
    }
    else
    {
      v23 = 1;
    }
  }
  else
  {
    v23 = 0;
  }
  _InterlockedIncrement(dword_140F87A50);
  v24 = 0;
  while ( dword_140F87A50[0] != v21 )
  {
    if ( (++v24 & dword_140FBB3DC) != 0 || !qword_140FBB3E0 )
      _mm_pause();
    else
      guard_dispatch_icall_no_overrides(v24, v18);
  }
  _InterlockedOr(dword_140F87A50, 0);
  HalpCheckWakeupTimeAndAdjust();
  HalpCheckLowMemoryPreSleep(a1);
  v33[0] = 0x8000;
  if ( LOBYTE(IommuInterfaceStateChangeCallbackPushLock.ThreadTimerDelay) )
    HalpAcpiPmRegisterWrite(0, 0, (__int64)v33, 2u, 0LL);
  if ( LOBYTE(IommuInterfaceStateChangeCallbackPushLock.Spare36) )
    HalpAcpiPmRegisterWrite(3, 0, (__int64)v33, 2u, 0LL);
  v41 = -112;
  if ( (v19 & 0x40) != 0 )
    HalSetEnvironmentVariableEx(L"SystemSleepCheckpoint", (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID, (__int64)&v41, 1, 1);
  if ( (a1 & 0x1000) != 0 )
  {
    if ( CurrentPrcb->CpuVendor == 1 )
    {
      LOBYTE(v25) = 1;
      KeWriteProtectPAT(v25);
    }
    __wbinvd();
  }
  if ( !HalpHvSleepEnlightenedCpuManager
    || (v26 = (a1 >> 8) & 0xF, (_DWORD)v26 != 1) && ((((_DWORD)v26 - 2) & 0xFFFFFFFC) != 0 || (_DWORD)v26 == 4) )
  {
    if ( (HalpPlatformFlags & 1) == 0 )
      HalReturnToFirmware(v23 + 1);
    if ( (a1 & 0xF00) == 0x400 || (a1 & 0xF00) == 0x500 )
      VslTerminateSecureServices();
    if ( LOBYTE(IommuInterfaceStateChangeCallbackPushLock.UserWaitTime) )
    {
      HalpAcpiPmRegisterRead(1, 0, (__int64)v34, 2u, 0LL);
      v34[0] = v34[0] & 0x203 | ((a1 & 7 | 8) << 10);
      HalpAcpiPmRegisterWrite(1, 0, (__int64)v34, 2u, 0LL);
    }
    if ( LOBYTE(IommuInterfaceStateChangeCallbackPushLock.Spare32) )
    {
      HalpAcpiPmRegisterRead(4, 0, (__int64)v34, 2u, 0LL);
      v34[0] = v34[0] & 0x203 | (((a1 >> 4) & 7 | 8) << 10);
      HalpAcpiPmRegisterWrite(4, 0, (__int64)v34, 2u, 0LL);
    }
    v27 = 0;
    if ( LOBYTE(IommuInterfaceStateChangeCallbackPushLock.ThreadTimerDelay) )
    {
      v28 = LOBYTE(IommuInterfaceStateChangeCallbackPushLock.Spare36) != 0 ? 3 : 0;
      while ( 1 )
      {
        HalpAcpiPmRegisterRead(0, 0, (__int64)v33, 2u, 0LL);
        if ( (v33[0] & 0x8000) != 0 )
          break;
        HalpAcpiPmRegisterRead(v28, 0, (__int64)v33, 2u, 0LL);
        if ( (v33[0] & 0x8000) != 0 )
          break;
        if ( (++v27 & dword_140FBB3DC) != 0 || !qword_140FBB3E0 )
          _mm_pause();
        else
          guard_dispatch_icall_no_overrides(v27, v29);
      }
    }
    goto LABEL_72;
  }
  v9 = HalpHvEnterSleepState(v26);
LABEL_76:
  v41 = -97;
  if ( (v19 & 0x40) != 0 )
    HalSetEnvironmentVariableEx(L"SystemSleepCheckpoint", (int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID, (__int64)&v41, 1, 1);
  dword_140F87A4C = 0;
  dword_140F87A50[0] = 0;
  HalpAcpiPostSleep(a1);
  v6 = v42;
  v16 = CurrentPrcb;
LABEL_83:
  if ( ((a1 >> 12) & 0x10) == 0 && (a1 & 0x1000) != 0 && v16->CpuVendor == 1 )
  {
    KeWriteProtectPAT(0LL);
    __wbinvd();
  }
  HalpPostSleepMP(v6);
  v31 = CurrentIrql;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(v31);
  if ( v36 )
    _enable();
  return v9;
}
