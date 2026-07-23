/*
 * XREFs of FsRtlInitializeFileLock @ 0x1404D6A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall FsRtlInitializeFileLock(
        PFILE_LOCK FileLock,
        PCOMPLETE_LOCK_IRP_ROUTINE CompleteLockIrpRoutine,
        PUNLOCK_ROUTINE UnlockRoutine)
{
  FileLock->CompleteLockIrpRoutine = CompleteLockIrpRoutine;
  FileLock->LockInformation = 0LL;
  FileLock->FastIoIsQuestionable = 0;
  FileLock->UnlockRoutine = UnlockRoutine;
  FileLock->LockRequestsInProgress = 0;
}
