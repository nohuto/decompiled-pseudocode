/*
 * XREFs of PopShutdownListenerInsertCallback @ 0x140501FDC
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
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
    v5 = KeAcquireSpinLockRaiseToDpc(&PopShutdownNotificationCallbackLock);
    v6 = (_QWORD *)qword_140F0D478;
    if ( *(PVOID **)qword_140F0D478 != &PopShutdownNotificationCallbackList )
      __fastfail(3u);
    *v4 = &PopShutdownNotificationCallbackList;
    v4[1] = v6;
    *v6 = v4;
    qword_140F0D478 = (__int64)v4;
    KeReleaseSpinLock(&PopShutdownNotificationCallbackLock, v5);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
