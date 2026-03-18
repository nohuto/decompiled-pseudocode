/*
 * XREFs of ExfAcquireReleasePushLockExclusive @ 0x140449B6C
 * Callers:
 *     PspLockUnlockProcessExclusive @ 0x140449A80 (PspLockUnlockProcessExclusive.c)
 *     EtwpLockUnlockBufferList @ 0x140449AC0 (EtwpLockUnlockBufferList.c)
 *     NtSetInformationJobObject @ 0x1407F4C70 (NtSetInformationJobObject.c)
 *     PsShutdownSystem @ 0x1407FA284 (PsShutdownSystem.c)
 *     PsLookupProcessByProcessId @ 0x1408EF4E0 (PsLookupProcessByProcessId.c)
 *     PsSynchronizeWithThreadInsertion @ 0x140956164 (PsSynchronizeWithThreadInsertion.c)
 *     PspExitThread @ 0x14095771C (PspExitThread.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1409BCF30 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcReferenceBlobByHandle @ 0x1409BED80 (AlpcReferenceBlobByHandle.c)
 *     NtAlpcDeleteSecurityContext @ 0x1409C0F50 (NtAlpcDeleteSecurityContext.c)
 *     PsLookupThreadByThreadId @ 0x140A10B70 (PsLookupThreadByThreadId.c)
 *     PspThreadFromTicket @ 0x140A191C0 (PspThreadFromTicket.c)
 *     NtAlertThreadByThreadIdEx @ 0x140A33250 (NtAlertThreadByThreadIdEx.c)
 *     NtAlertThreadByThreadId @ 0x140A5D8F0 (NtAlertThreadByThreadId.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x140A6C604 (EtwpUpdateLoggerSecurityDescriptor.c)
 *     PfpRpCHashDeleteEntries @ 0x140AABCD8 (PfpRpCHashDeleteEntries.c)
 *     ObpDeleteDirectoryObject @ 0x140AF6E20 (ObpDeleteDirectoryObject.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockExclusive @ 0x1402E3150 (ExfReleasePushLockExclusive.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
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
