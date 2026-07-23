/*
 * XREFs of PsCaptureExceptionPort @ 0x140A9FC4C
 * Callers:
 *     PspFreezeProcessWorker @ 0x140800CA0 (PspFreezeProcessWorker.c)
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 *     ExpRaiseHardError @ 0x140B3635C (ExpRaiseHardError.c)
 * Callees:
 *     PspLockProcessShared @ 0x140275C70 (PspLockProcessShared.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     PspUnlockProcessShared @ 0x14027C520 (PspUnlockProcessShared.c)
 */

void *__fastcall PsCaptureExceptionPort(__int64 a1)
{
  void *v1; // rdi
  struct _KTHREAD *CurrentThread; // rbx

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 576) )
  {
    CurrentThread = KeGetCurrentThread();
    PspLockProcessShared(a1, (__int64)CurrentThread);
    v1 = (void *)(*(_QWORD *)(a1 + 576) & 0xFFFFFFFFFFFFFFF8uLL);
    PsReferenceSiloContext(v1);
    PspUnlockProcessShared(a1, (__int64)CurrentThread);
  }
  return v1;
}
