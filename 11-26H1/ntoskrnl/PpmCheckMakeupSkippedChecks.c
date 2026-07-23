/*
 * XREFs of PpmCheckMakeupSkippedChecks @ 0x1404A02A0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     PpmPerfCompleteMakeup @ 0x1404A03D8 (PpmPerfCompleteMakeup.c)
 *     PpmParkMaximumCoresParked @ 0x1404A03F8 (PpmParkMaximumCoresParked.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x1404A0498 (PpmEventTraceMakeupPerfCheck.c)
 *     PpmPerfMinimumPerfReached @ 0x1404A0508 (PpmPerfMinimumPerfReached.c)
 *     PpmParkCompleteMakeup @ 0x1405305A0 (PpmParkCompleteMakeup.c)
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

  if ( PpmCheckMakeupCount )
  {
    if ( (unsigned __int8)PpmParkMaximumCoresParked() && (unsigned __int8)PpmPerfMinimumPerfReached() )
    {
      v0 = PpmCheckRegistered.Bitmap[0];
      LOWORD(v1) = 0;
      while ( 1 )
      {
        while ( v0 )
        {
          _BitScanForward64(&v2, v0);
          v0 &= ~(1LL << v2);
          Prcb = KeGetPrcb(*((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int16)v1].Flink
                           + (unsigned int)(unsigned __int8)v2));
          PpmPerfCompleteMakeup(Prcb + 35264);
        }
        v1 = (unsigned __int16)(v1 + 1);
        if ( (unsigned int)v1 >= PpmCheckRegistered.Count )
          break;
        v0 = PpmCheckRegistered.Bitmap[v1];
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
      PpmCheckMakeupCount = 0;
    }
    else
    {
      PpmEventTraceMakeupPerfCheck();
      --PpmCheckMakeupCount;
      ++PpmCheckIterations;
      PpmCheckPipelineIndex = 4;
    }
  }
}
