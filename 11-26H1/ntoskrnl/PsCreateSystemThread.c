/*
 * XREFs of PsCreateSystemThread @ 0x140A78D90
 * Callers:
 *     PopCreatePowerThread @ 0x1403C043C (PopCreatePowerThread.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x1403E6740 (CcInitializePrivateVolumeCacheMap.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x1404C8460 (CcInitializeAsyncReadForNodeHelper.c)
 *     EtwpStartLoggerThread @ 0x1404DE2D0 (EtwpStartLoggerThread.c)
 *     DisplayBootBitmap @ 0x1405786DC (DisplayBootBitmap.c)
 *     CcInitializePartition @ 0x1405B506C (CcInitializePartition.c)
 *     DifPsCreateSystemThreadWrapper @ 0x1406983D0 (DifPsCreateSystemThreadWrapper.c)
 *     ExRegisterBootDevice @ 0x1406D15F0 (ExRegisterBootDevice.c)
 *     PopFlushVolumes @ 0x140C0C930 (PopFlushVolumes.c)
 *     VfPendingInitPhase1 @ 0x140C35F38 (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x140C3E60C (VfPoolInitPhase1.c)
 *     FsRtlInitializeWorkerThread @ 0x140CBF314 (FsRtlInitializeWorkerThread.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140CD6CF8 (PopDirectedDripsInitializePhase3.c)
 *     ExpWorkerFactoryInitialization @ 0x140CED3E0 (ExpWorkerFactoryInitialization.c)
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 *     PspInitPhase0 @ 0x140D0D27C (PspInitPhase0.c)
 *     SeRmInitPhase1 @ 0x140D1143C (SeRmInitPhase1.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x140A78DE0 (PsCreateSystemThreadEx.c)
 */

NTSTATUS __stdcall PsCreateSystemThread(
        PHANDLE ThreadHandle,
        ULONG DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PCLIENT_ID ClientId,
        PKSTART_ROUTINE StartRoutine,
        PVOID StartContext)
{
  return PsCreateSystemThreadEx(
           ThreadHandle,
           DesiredAccess,
           ObjectAttributes,
           ProcessHandle,
           ClientId,
           StartRoutine,
           StartContext,
           0LL,
           0LL);
}
