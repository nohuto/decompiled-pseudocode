/*
 * XREFs of PsCaptureExceptionPort @ 0x140A9F91C
 * Callers:
 *     PspFreezeProcessWorker @ 0x1407FB270 (PspFreezeProcessWorker.c)
 *     PspExitThread @ 0x14095771C (PspExitThread.c)
 *     ExpRaiseHardError @ 0x140B33F0C (ExpRaiseHardError.c)
 * Callees:
 *     PspLockProcessShared @ 0x140276700 (PspLockProcessShared.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     PspUnlockProcessShared @ 0x14027CFB0 (PspUnlockProcessShared.c)
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
