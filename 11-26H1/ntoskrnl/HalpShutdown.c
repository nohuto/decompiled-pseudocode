/*
 * XREFs of HalpShutdown @ 0x14057FA90
 * Callers:
 *     HalReturnToFirmware @ 0x14057F640 (HalReturnToFirmware.c)
 *     HaliHaltSystem @ 0x14057F6B0 (HaliHaltSystem.c)
 *     HalpCheckPowerButton @ 0x14057F750 (HalpCheckPowerButton.c)
 * Callees:
 *     HalpAcpiPmRegisterWrite @ 0x1404576C0 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterRead @ 0x14046B750 (HalpAcpiPmRegisterRead.c)
 *     HalpHvEnterSleepState @ 0x140585C90 (HalpHvEnterSleepState.c)
 *     HalEfiResetSystem @ 0x140586B0C (HalEfiResetSystem.c)
 *     VslTerminateSecureServices @ 0x1405C427C (VslTerminateSecureServices.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpShutdown(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  volatile signed __int32 *SchedulerAssist; // rcx
  __int64 result; // rax
  __int64 v5; // rdx
  __int16 v6; // [rsp+60h] [rbp+30h] BYREF
  __int16 v7; // [rsp+68h] [rbp+38h] BYREF
  __int16 v8; // [rsp+70h] [rbp+40h] BYREF

  v8 = 0;
  v2 = 0;
  v6 = 0;
  v7 = 0;
  if ( _InterlockedCompareExchange((_DWORD *)&HalpPmuArbiter.FirstArgument + 1, 1, 0) )
  {
    SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( SchedulerAssist )
      _InterlockedOr(SchedulerAssist, 0x20000u);
    while ( 1 )
    {
      if ( (++v2 & dword_140FBB03C) != 0 || !qword_140FBB040 )
        _mm_pause();
      else
        guard_dispatch_icall_no_overrides(v2, a2);
    }
  }
  guard_dispatch_icall_no_overrides(0LL, a2);
  result = VslTerminateSecureServices();
  if ( LOBYTE(IommuInterfaceStateChangeCallbackPushLock.ThreadTimerDelay) )
  {
    HalpAcpiPmRegisterRead(0, 0, (__int64)&v8, 2u, 0LL);
    v7 = v8;
    if ( LOBYTE(IommuInterfaceStateChangeCallbackPushLock.Spare36) )
    {
      HalpAcpiPmRegisterRead(3, 0, (__int64)&v8, 2u, 0LL);
      v7 |= v8;
    }
    result = HalpAcpiPmRegisterWrite(0, 0, (__int64)&v7, 2u, 0LL);
    if ( LOBYTE(IommuInterfaceStateChangeCallbackPushLock.Spare36) )
      result = HalpAcpiPmRegisterWrite(3, 0, (__int64)&v7, 2u, 0LL);
  }
  if ( LODWORD(HalpPmuArbiter.TrapFrame) && LOBYTE(IommuInterfaceStateChangeCallbackPushLock.UserWaitTime) )
  {
    if ( HalpHvSleepEnlightenedCpuManager )
      HalpHvEnterSleepState(5LL);
    HalpAcpiPmRegisterRead(1, 0, (__int64)&v6, 2u, 0LL);
    v6 = v6 & 0x203 | (((__int64)HalpPmuArbiter.TrapFrame & 7 | 8) << 10);
    result = HalpAcpiPmRegisterWrite(1, 0, (__int64)&v6, 2u, 0LL);
    if ( LOBYTE(IommuInterfaceStateChangeCallbackPushLock.Spare32) )
    {
      HalpAcpiPmRegisterRead(4, 0, (__int64)&v6, 2u, 0LL);
      v6 = v6 & 0x203 | (((LODWORD(HalpPmuArbiter.TrapFrame) >> 4) & 7 | 8) << 10);
      result = HalpAcpiPmRegisterWrite(4, 0, (__int64)&v6, 2u, 0LL);
    }
  }
  if ( HalpDeviceBlockUnblockPushLock.WaitBlockFill6[104] )
    return HalEfiResetSystem(2LL, v5);
  return result;
}
