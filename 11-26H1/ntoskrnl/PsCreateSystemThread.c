/*
 * XREFs of PsCreateSystemThread @ 0x140A03420
 * Callers:
 *     PopCreatePowerThread @ 0x1403B653C (PopCreatePowerThread.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x1403E3550 (CcInitializePrivateVolumeCacheMap.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x1404CEA30 (CcInitializeAsyncReadForNodeHelper.c)
 *     EtwpStartLoggerThread @ 0x1404E4D30 (EtwpStartLoggerThread.c)
 *     DisplayBootBitmap @ 0x14057622C (DisplayBootBitmap.c)
 *     CcInitializePartition @ 0x1405B285C (CcInitializePartition.c)
 *     DifPsCreateSystemThreadWrapper @ 0x1406947F0 (DifPsCreateSystemThreadWrapper.c)
 *     ExRegisterBootDevice @ 0x1406CD5C0 (ExRegisterBootDevice.c)
 *     PopFlushVolumes @ 0x140C06720 (PopFlushVolumes.c)
 *     VfPendingInitPhase1 @ 0x140C2FF28 (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x140C385FC (VfPoolInitPhase1.c)
 *     FsRtlInitializeWorkerThread @ 0x140CB92D0 (FsRtlInitializeWorkerThread.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140CD0B50 (PopDirectedDripsInitializePhase3.c)
 *     ExpWorkerFactoryInitialization @ 0x140CE7508 (ExpWorkerFactoryInitialization.c)
 *     MiInitSystem @ 0x140CF15C4 (MiInitSystem.c)
 *     PspInitPhase0 @ 0x140D06FAC (PspInitPhase0.c)
 *     SeRmInitPhase1 @ 0x140D0B16C (SeRmInitPhase1.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x140A03170 (PsCreateSystemThreadEx.c)
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
           (__int64)ThreadHandle,
           DesiredAccess,
           (__int128 *)ObjectAttributes,
           (ULONG_PTR)ProcessHandle,
           ClientId,
           (__int64)StartRoutine,
           (__int64)StartContext,
           0LL,
           0LL);
}
