/*
 * XREFs of PpmIdleStartCsVetoAccounting @ 0x140420108
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140421FC8 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x140420F9C (PpmIdleCsVetoAccountingUpdateBlock.c)
 */

void PpmIdleStartCsVetoAccounting()
{
  KIRQL v0; // al
  __int64 v1; // r8
  unsigned int v2; // ebx
  KIRQL i; // di
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v6; // rcx

  if ( PpmPlatformStates )
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    v1 = PpmPlatformStates;
    v2 = 0;
    for ( i = v0; v2 < *(_DWORD *)PpmPlatformStates; ++v2 )
    {
      v4 = 0LL;
      v5 = v1 + 448LL * v2;
      if ( *(_DWORD *)(v5 + 108) )
      {
        do
        {
          v6 = (unsigned int)v4;
          v4 = (unsigned int)(v4 + 1);
          *(_QWORD *)((v6 << 6) + *(_QWORD *)(v5 + 112) + 56) = 0LL;
        }
        while ( (unsigned int)v4 < *(_DWORD *)(v5 + 108) );
      }
      LOBYTE(v1) = 1;
      LOBYTE(v4) = 4;
      PpmIdleCsVetoAccountingUpdateBlock(v5 + 80, v4, v1);
      v1 = PpmPlatformStates;
    }
    KeReleaseSpinLock(&PpmIdleVetoLock, i);
  }
}
