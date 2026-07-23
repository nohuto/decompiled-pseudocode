/*
 * XREFs of HalpAcpiInitializePmRegisters @ 0x140CB94AC
 * Callers:
 *     HalpSetupAcpiPhase0 @ 0x140CB9944 (HalpSetupAcpiPhase0.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpAcpiSetupPmRegister @ 0x140CB96B4 (HalpAcpiSetupPmRegister.c)
 *     HalpAcpiSetupPmRegisterLegacy @ 0x140CB97FC (HalpAcpiSetupPmRegisterLegacy.c)
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

  if ( LOBYTE(HalpDeviceBlockUnblockPushLock.QueueListEntry.Flink) >= 5u
    && (*(_DWORD *)&HalpDeviceBlockUnblockPushLock.SavedApcStateFill[24] & 0x100000) != 0 )
  {
    return 3221225659LL;
  }
  if ( (int)HalpAcpiSetupPmRegisterLegacy(
              a1,
              LODWORD(HalpDeviceBlockUnblockPushLock.AffinityVersion),
              &HalpDeviceBlockUnblockPushLock.SchedulerApcFill5[12],
              HalpDeviceBlockUnblockPushLock.SavedApcStateFill[0],
              2,
              &IommuInterfaceStateChangeCallbackPushLock.ThreadTimerDelay) < 0 )
    KeBugCheckEx(0x5Cu, 0x8200uLL, 0LL, (ULONG_PTR)"minkernel\\hals\\lib\\acpi\\pmregs.c", 0xC2uLL);
  if ( (int)HalpAcpiSetupPmRegisterLegacy(
              v2,
              LODWORD(HalpDeviceBlockUnblockPushLock.Affinity),
              &HalpDeviceBlockUnblockPushLock.SchedulerApcFill5[36],
              HalpDeviceBlockUnblockPushLock.SavedApcStateFill[1],
              2,
              &IommuInterfaceStateChangeCallbackPushLock.UserWaitTime) < 0 )
    KeBugCheckEx(0x5Cu, 0x8200uLL, 1uLL, (ULONG_PTR)"minkernel\\hals\\lib\\acpi\\pmregs.c", 0xD1uLL);
  HalpAcpiSetupPmRegisterLegacy(
    v3,
    HalpDeviceBlockUnblockPushLock.IdealProcessor,
    &HalpDeviceBlockUnblockPushLock.SchedulerApcFill5[72],
    HalpDeviceBlockUnblockPushLock.SavedApcStateFill[3],
    4,
    &IommuInterfaceStateChangeCallbackPushLock.KernelShadowStackBase);
  HalpAcpiSetupPmRegisterLegacy(
    v4,
    HIDWORD(HalpDeviceBlockUnblockPushLock.AffinityVersion),
    &HalpDeviceBlockUnblockPushLock.SchedulerApcFill5[24],
    HalpDeviceBlockUnblockPushLock.SavedApcStateFill[0],
    2,
    &IommuInterfaceStateChangeCallbackPushLock.Spare36);
  HalpAcpiSetupPmRegisterLegacy(
    v5,
    HIDWORD(HalpDeviceBlockUnblockPushLock.Affinity),
    &HalpDeviceBlockUnblockPushLock.SchedulerApcFill5[48],
    HalpDeviceBlockUnblockPushLock.SavedApcStateFill[1],
    2,
    &IommuInterfaceStateChangeCallbackPushLock.1144);
  HalpAcpiSetupPmRegisterLegacy(
    v6,
    *(unsigned int *)&HalpDeviceBlockUnblockPushLock.AffinityPrimaryGroup,
    &HalpDeviceBlockUnblockPushLock.SchedulerApcFill5[60],
    HalpDeviceBlockUnblockPushLock.SavedApcStateFill[2],
    1,
    &IommuInterfaceStateChangeCallbackPushLock.Padding[2]);
  if ( LOBYTE(HalpDeviceBlockUnblockPushLock.QueueListEntry.Flink) > 1u
    && (*(_WORD *)&HalpDeviceBlockUnblockPushLock.SavedApcStateFill[24] & 0x400) != 0 )
  {
    HalpAcpiSetupPmRegister(1uLL);
  }
  HalpAcpiSetupPmRegisterLegacy(
    v7,
    LODWORD(HalpDeviceBlockUnblockPushLock.NpxState),
    &HalpDeviceBlockUnblockPushLock.UserTime,
    HalpDeviceBlockUnblockPushLock.SavedApcStateFill[4],
    1,
    &unk_140F88040);
  return HalpAcpiSetupPmRegisterLegacy(
           v8,
           HIDWORD(HalpDeviceBlockUnblockPushLock.NpxState),
           &HalpDeviceBlockUnblockPushLock.SuspendEvent.Header.WaitListHead,
           HalpDeviceBlockUnblockPushLock.SavedApcStateFill[5],
           1,
           &unk_140F88070);
}
