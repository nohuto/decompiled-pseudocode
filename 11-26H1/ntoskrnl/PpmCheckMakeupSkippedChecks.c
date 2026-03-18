/*
 * XREFs of PpmCheckMakeupSkippedChecks @ 0x1404A6C10
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     PpmPerfCompleteMakeup @ 0x1404A6D48 (PpmPerfCompleteMakeup.c)
 *     PpmParkMaximumCoresParked @ 0x1404A6D68 (PpmParkMaximumCoresParked.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x1404A6E08 (PpmEventTraceMakeupPerfCheck.c)
 *     PpmPerfMinimumPerfReached @ 0x1404A6E78 (PpmPerfMinimumPerfReached.c)
 *     PpmParkCompleteMakeup @ 0x14052E080 (PpmParkCompleteMakeup.c)
 */

void PpmCheckMakeupSkippedChecks()
{
  unsigned __int64 v0; // rsi
  __int64 v1; // rbx
  unsigned __int64 v2; // rdx
  __int64 Prcb; // rax
  char *v4; // r8
  char *v5; // r10
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int i; // r9d

  if ( *(_DWORD *)&PopSleepstudySessionLock.ApcStateFill[4] )
  {
    if ( (unsigned __int8)PpmParkMaximumCoresParked() && (unsigned __int8)PpmPerfMinimumPerfReached() )
    {
      v0 = qword_140E0B638[0];
      LOWORD(v1) = 0;
      while ( 1 )
      {
        while ( v0 )
        {
          _BitScanForward64(&v2, v0);
          v0 &= ~(1LL << v2);
          Prcb = KeGetPrcb(*((_DWORD *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                           + 64 * (unsigned __int16)v1
                           + (unsigned int)(unsigned __int8)v2));
          PpmPerfCompleteMakeup(Prcb + 35264);
        }
        v1 = (unsigned __int16)(v1 + 1);
        if ( (unsigned int)v1 >= LOWORD(PpmCheckRegistered[0]) )
          break;
        v0 = qword_140E0B638[v1];
      }
      v4 = *(char **)((char *)&Mm64BitPhysicalAddress + 2);
      v5 = (char *)&Mm64BitPhysicalAddress + 2;
      while ( v4 != v5 )
      {
        for ( i = 0; i < *((_DWORD *)v4 + 74); ++i )
        {
          v6 = 1224LL * i;
          v7 = *((_QWORD *)v4 + 39);
          if ( *(_DWORD *)(v6 + v7 + 16) == 1 )
            PpmPerfCompleteMakeup(*(_QWORD *)(v6 + v7));
        }
        v4 = *(char **)v4;
      }
      PpmParkCompleteMakeup();
      *(_DWORD *)&PopSleepstudySessionLock.ApcStateFill[4] = 0;
    }
    else
    {
      PpmEventTraceMakeupPerfCheck();
      --*(_DWORD *)&PopSleepstudySessionLock.ApcStateFill[4];
      ++LODWORD(PopSleepstudySessionLock.ApcState.ApcListHead[0].Flink);
      *(_DWORD *)&PopSleepstudySessionLock.WaitBlockFill11[100] = 4;
    }
  }
}
