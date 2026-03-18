/*
 * XREFs of HalpAcpiInitializePmRegisters @ 0x140CB346C
 * Callers:
 *     HalpSetupAcpiPhase0 @ 0x140CB3904 (HalpSetupAcpiPhase0.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     HalpAcpiSetupPmRegister @ 0x140CB3674 (HalpAcpiSetupPmRegister.c)
 *     HalpAcpiSetupPmRegisterLegacy @ 0x140CB37BC (HalpAcpiSetupPmRegisterLegacy.c)
 */

__int64 __fastcall HalpAcpiInitializePmRegisters(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  if ( LOBYTE(HalpDeviceBlockUnblockPushLock.UserAffinity) >= 5u
    && (*(_DWORD *)&HalpDeviceBlockUnblockPushLock.SchedulerApcFill5[8] & 0x100000) != 0 )
  {
    return 3221225659LL;
  }
  if ( (int)HalpAcpiSetupPmRegisterLegacy(
              a1,
              LODWORD(HalpDeviceBlockUnblockPushLock.SavedApcState.ApcListHead[0].Flink),
              &HalpDeviceBlockUnblockPushLock.SchedulerApcFill5[44],
              HalpDeviceBlockUnblockPushLock.SavedApcStateFill[32],
              2,
              &IommuInterfaceStateChangeCallbackPushLock.ThreadTimerDelay) < 0 )
    KeBugCheckEx(0x5Cu, 0x8200uLL, 0LL, (ULONG_PTR)"minkernel\\hals\\lib\\acpi\\pmregs.c", 0xC2uLL);
  if ( (int)HalpAcpiSetupPmRegisterLegacy(
              v2,
              *(unsigned int *)&HalpDeviceBlockUnblockPushLock.SavedApcStateFill[8],
              &HalpDeviceBlockUnblockPushLock.SchedulerApcFill5[68],
              HalpDeviceBlockUnblockPushLock.SavedApcStateFill[33],
              2,
              &IommuInterfaceStateChangeCallbackPushLock.UserWaitTime) < 0 )
    KeBugCheckEx(0x5Cu, 0x8200uLL, 1uLL, (ULONG_PTR)"minkernel\\hals\\lib\\acpi\\pmregs.c", 0xD1uLL);
  HalpAcpiSetupPmRegisterLegacy(
    v3,
    *(unsigned int *)&HalpDeviceBlockUnblockPushLock.SavedApcStateFill[20],
    &HalpDeviceBlockUnblockPushLock.SuspendEvent.Header.WaitListHead.Blink,
    HalpDeviceBlockUnblockPushLock.SavedApcStateFill[35],
    4,
    &IommuInterfaceStateChangeCallbackPushLock.KernelShadowStackBase);
  HalpAcpiSetupPmRegisterLegacy(
    v4,
    *(unsigned int *)&HalpDeviceBlockUnblockPushLock.SavedApcStateFill[4],
    &HalpDeviceBlockUnblockPushLock.SchedulerApcFill5[56],
    HalpDeviceBlockUnblockPushLock.SavedApcStateFill[32],
    2,
    &IommuInterfaceStateChangeCallbackPushLock.Spare36);
  HalpAcpiSetupPmRegisterLegacy(
    v5,
    *(unsigned int *)&HalpDeviceBlockUnblockPushLock.SavedApcStateFill[12],
    &HalpDeviceBlockUnblockPushLock.SchedulerApcFill5[80],
    HalpDeviceBlockUnblockPushLock.SavedApcStateFill[33],
    2,
    &IommuInterfaceStateChangeCallbackPushLock.1144);
  HalpAcpiSetupPmRegisterLegacy(
    v6,
    *(unsigned int *)&HalpDeviceBlockUnblockPushLock.SavedApcStateFill[16],
    &HalpDeviceBlockUnblockPushLock.SuspendEvent.Header.SignalState,
    HalpDeviceBlockUnblockPushLock.SavedApcStateFill[34],
    1,
    &IommuInterfaceStateChangeCallbackPushLock.Padding[2]);
  if ( LOBYTE(HalpDeviceBlockUnblockPushLock.UserAffinity) > 1u
    && (*(_WORD *)&HalpDeviceBlockUnblockPushLock.SchedulerApcFill5[8] & 0x400) != 0 )
  {
    HalpAcpiSetupPmRegister(1uLL);
  }
  HalpAcpiSetupPmRegisterLegacy(
    v7,
    *(unsigned int *)&HalpDeviceBlockUnblockPushLock.SavedApcStateFill[24],
    (char *)&HalpDeviceBlockUnblockPushLock.ThreadListEntry.Flink + 4,
    HalpDeviceBlockUnblockPushLock.SavedApcStateFill[36],
    1,
    &unk_140F87C40);
  return HalpAcpiSetupPmRegisterLegacy(
           v8,
           *(unsigned int *)&HalpDeviceBlockUnblockPushLock.SavedApcStateFill[28],
           &HalpDeviceBlockUnblockPushLock.MutantListHead,
           HalpDeviceBlockUnblockPushLock.SavedApcStateFill[37],
           1,
           &unk_140F87C70);
}
