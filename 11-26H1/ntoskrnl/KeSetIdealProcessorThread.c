/*
 * XREFs of KeSetIdealProcessorThread @ 0x140204860
 * Callers:
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 * Callees:
 *     KeSetIdealProcessorThreadEx @ 0x140204930 (KeSetIdealProcessorThreadEx.c)
 */

UCHAR __stdcall KeSetIdealProcessorThread(PKTHREAD Thread, UCHAR Processor)
{
  __int64 v2; // r8
  __int64 v3; // rax
  unsigned int v4; // edx
  volatile unsigned int IdealProcessor; // eax
  int v6; // eax

  v2 = 560LL;
  if ( Thread == KeGetCurrentThread() )
    v2 = 584LL;
  v3 = *(unsigned __int16 *)((char *)&Thread->Header.Lock + v2);
  if ( !(_WORD)v3 && !Processor )
  {
    v4 = 0;
LABEL_18:
    KeSetIdealProcessorThreadEx(Thread, v4);
    IdealProcessor = 0;
    goto LABEL_10;
  }
  if ( (unsigned __int16)v3 < (unsigned __int16)KiActiveGroups && Processor < 0x40u )
  {
    v4 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * v3].Flink + Processor);
    if ( v4 )
    {
      if ( v4 != -1 )
        goto LABEL_18;
    }
  }
  if ( Thread == KeGetCurrentThread() )
    IdealProcessor = Thread->IdealProcessor;
  else
    IdealProcessor = Thread->UserIdealProcessor;
LABEL_10:
  if ( IdealProcessor
    && IdealProcessor < KeMaximumProcessors
    && (v6 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + IdealProcessor)) != 0 )
  {
    return v6 & 0x3F;
  }
  else
  {
    return 0;
  }
}
