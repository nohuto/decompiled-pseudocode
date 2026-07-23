/*
 * XREFs of ExfAcquireReleasePushLockExclusive @ 0x140441C9C
 * Callers:
 *     PspLockUnlockProcessExclusive @ 0x140441BB0 (PspLockUnlockProcessExclusive.c)
 *     EtwpLockUnlockBufferList @ 0x140441BF0 (EtwpLockUnlockBufferList.c)
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 *     PsShutdownSystem @ 0x1407FFCB4 (PsShutdownSystem.c)
 *     PsLookupProcessByProcessId @ 0x1408F5AA0 (PsLookupProcessByProcessId.c)
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 *     PsSynchronizeWithThreadInsertion @ 0x14094BA20 (PsSynchronizeWithThreadInsertion.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14098DF10 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcReferenceBlobByHandle @ 0x14098FD60 (AlpcReferenceBlobByHandle.c)
 *     NtAlpcDeleteSecurityContext @ 0x140991F30 (NtAlpcDeleteSecurityContext.c)
 *     PsLookupThreadByThreadId @ 0x140A0FD60 (PsLookupThreadByThreadId.c)
 *     PspThreadFromTicket @ 0x140A227F0 (PspThreadFromTicket.c)
 *     NtAlertThreadByThreadIdEx @ 0x140A4E1B0 (NtAlertThreadByThreadIdEx.c)
 *     NtAlertThreadByThreadId @ 0x140A6A8B0 (NtAlertThreadByThreadId.c)
 *     PfpRpCHashDeleteEntries @ 0x140AA9288 (PfpRpCHashDeleteEntries.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x140AB2A5C (EtwpUpdateLoggerSecurityDescriptor.c)
 *     ObpDeleteDirectoryObject @ 0x140AF94C0 (ObpDeleteDirectoryObject.c)
 * Callees:
 *     ExfReleasePushLockExclusive @ 0x14021B250 (ExfReleasePushLockExclusive.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 */

void __fastcall ExfAcquireReleasePushLockExclusive(
        struct _KTHREAD *a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  _BYTE *v5; // rbx
  volatile unsigned __int8 *v6; // rdx

  v5 = (_BYTE *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
  ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, (AutoBoost *)v5, (__int64)a1);
  if ( v5 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v6) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v5 + 33), v6, 1);
    }
    else
    {
      v5[10] = 1;
    }
  }
  ExfReleasePushLockExclusive((volatile signed __int64 *)&a1->Header.Lock);
  if ( v5 )
    KeAbPostRelease((unsigned __int64)a1);
}
