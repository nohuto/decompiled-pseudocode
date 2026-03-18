/*
 * XREFs of PopShutdownListenerInsertCallback @ 0x140508534
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopShutdownListenerInsertCallback(_QWORD *a1)
{
  _QWORD *Pool2; // rax
  unsigned int v3; // edi
  _QWORD *v4; // rbx
  KIRQL v5; // al
  _QWORD *v6; // rcx

  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  v3 = 0;
  v4 = Pool2;
  if ( Pool2 )
  {
    Pool2[2] = *a1;
    Pool2[3] = a1[1];
    Pool2[4] = a1[2];
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopWeakChargerLock.SavedApcState.Process);
    v6 = *(_QWORD **)&PopWeakChargerLock.SchedulerApc.Type;
    if ( **(struct _KTHREAD ***)&PopWeakChargerLock.SchedulerApc.Type != (struct _KTHREAD *)&PopWeakChargerLock.SavedApcStateFill[40] )
      __fastfail(3u);
    *v4 = &PopWeakChargerLock.SavedApcStateFill[40];
    v4[1] = v6;
    *v6 = v4;
    *(_QWORD *)&PopWeakChargerLock.SchedulerApc.Type = v4;
    KeReleaseSpinLock((PKSPIN_LOCK)&PopWeakChargerLock.SavedApcState.Process, v5);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
