/*
 * XREFs of ExpInsertTimerResolutionEntry @ 0x1404E6A94
 * Callers:
 *     NtSetTimerResolution @ 0x140A667F0 (NtSetTimerResolution.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall ExpInsertTimerResolutionEntry(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *SparePtr; // rcx
  PVOID *v4; // rbx

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&ExpSysDbgLock.WaitBlock[3].Thread);
  SparePtr = ExpSysDbgLock.WaitBlock[2].SparePtr;
  v4 = (PVOID *)(a1 + 1440);
  if ( *((struct _KTHREAD **)ExpSysDbgLock.WaitBlock[2].SparePtr + 1) != (struct _KTHREAD *)&ExpSysDbgLock.WaitBlockFill11[136] )
    __fastfail(3u);
  *v4 = ExpSysDbgLock.WaitBlock[2].SparePtr;
  v4[1] = &ExpSysDbgLock.WaitBlockFill11[136];
  SparePtr[1] = v4;
  ExpSysDbgLock.WaitBlock[2].SparePtr = v4;
  KeReleaseSpinLock((PKSPIN_LOCK)&ExpSysDbgLock.WaitBlock[3].Thread, v2);
}
