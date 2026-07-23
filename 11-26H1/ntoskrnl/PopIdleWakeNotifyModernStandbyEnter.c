/*
 * XREFs of PopIdleWakeNotifyModernStandbyEnter @ 0x1404DF17C
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x1409F4CE0 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void PopIdleWakeNotifyModernStandbyEnter()
{
  __int64 Pool2; // rax
  void *v1; // rbx
  _QWORD *v2; // rdi
  unsigned int v3; // esi
  unsigned int *v4; // r14
  KIRQL v5; // al
  signed __int32 v6; // eax

  Pool2 = ExAllocatePool2(0x40uLL);
  v1 = (void *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 38056) = Pool2;
    *(_QWORD *)(Pool2 + 38048) = PopIdleWakeNotifyModernStandbyExitWorker;
    *(_QWORD *)(Pool2 + 38032) = 0LL;
    *(_QWORD *)(Pool2 + 38104) = PopIdleWakeDelayedWakeSourceReferencer;
    v2 = (_QWORD *)(Pool2 + 952);
    *(_DWORD *)(Pool2 + 38080) = 275;
    *(_QWORD *)(Pool2 + 38112) = Pool2;
    *(_QWORD *)(Pool2 + 38136) = 0LL;
    v3 = 0;
    *(_QWORD *)(Pool2 + 38096) = 0LL;
    *(_WORD *)(Pool2 + 38144) = 0;
    *(_BYTE *)(Pool2 + 38146) = 6;
    *(_DWORD *)(Pool2 + 38148) = 1;
    *(_QWORD *)(Pool2 + 38160) = Pool2 + 38152;
    *(_QWORD *)(Pool2 + 38152) = Pool2 + 38152;
    do
    {
      v4 = (unsigned int *)(v2 - 101);
      memset_0(v2 - 101, 0, 0x4A0uLL);
      *(v2 - 48) = -1LL;
      *v2 = -1LL;
      *(v2 - 83) = 2097153LL;
      memset_0(v2 - 82, 0, 0x100uLL);
      if ( v3 <= 0xB )
      {
        *v4 = v3;
        do
        {
          v6 = _InterlockedIncrement(&PopIdleWakeNextToken);
          *((_DWORD *)v2 - 100) = v6;
        }
        while ( v6 == -1 );
      }
      else
      {
        *v4 = 130;
      }
      ++v3;
      v2 += 148;
    }
    while ( v3 < 0x20 );
    v5 = KeAcquireSpinLockRaiseToDpc(&PopIdleWakeContextLock);
    PopIdleWakeContext = v1;
    KeReleaseSpinLock(&PopIdleWakeContextLock, v5);
  }
}
