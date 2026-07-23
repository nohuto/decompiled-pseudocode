/*
 * XREFs of IoGetRequestorProcess @ 0x1403FA0E0
 * Callers:
 *     FsRtlPrivateCheckWaitingLocks @ 0x14030A7AC (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1403BF9C4 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlProcessFileLock @ 0x1403F9EB0 (FsRtlProcessFileLock.c)
 *     FsRtlCheckLockForReadAccess @ 0x1403FA050 (FsRtlCheckLockForReadAccess.c)
 *     IopDoesCompletionNeedsApc @ 0x1403FB2F0 (IopDoesCompletionNeedsApc.c)
 *     FsRtlCheckLockForWriteAccess @ 0x1403FB350 (FsRtlCheckLockForWriteAccess.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoGetRequestorProcess(PIRP Irp)
{
  PETHREAD Thread; // rax
  CCHAR ApcEnvironment; // dl

  Thread = Irp->Tail.Overlay.Thread;
  if ( (Irp->Flags & 0x2000) != 0 )
    return (PEPROCESS)(Irp->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL);
  if ( !Thread )
    return 0LL;
  ApcEnvironment = Irp->ApcEnvironment;
  if ( !ApcEnvironment )
    return Thread->Process;
  if ( ApcEnvironment == 1 )
    return Thread->ApcState.Process;
  else
    return 0LL;
}
