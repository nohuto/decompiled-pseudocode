/*
 * XREFs of KiIpiEnlightenedGuestPriorityKick @ 0x140460C50
 * Callers:
 *     KiIpiSendRequest @ 0x14032BF00 (KiIpiSendRequest.c)
 * Callees:
 *     KiHvEnlightenedGuestPriorityKick @ 0x140460D40 (KiHvEnlightenedGuestPriorityKick.c)
 */

__int64 __fastcall KiIpiEnlightenedGuestPriorityKick(unsigned __int16 *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int16 v3; // dx
  unsigned __int16 i; // cx
  __int64 result; // rax
  unsigned __int64 v6; // rbp
  unsigned __int16 v7; // si
  unsigned int v8; // ecx
  unsigned __int64 v9; // rdx
  __int64 v10; // rdx

  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->SchedulerAssist )
  {
    v3 = *a1;
    for ( i = 0; i < v3; ++i )
    {
      result = i;
      if ( *(_QWORD *)&a1[4 * i + 4] )
      {
        v6 = *((_QWORD *)a1 + 1);
        v7 = 0;
        while ( 1 )
        {
          if ( a1 )
            v8 = *a1;
          else
            v8 = v7 + 1;
          while ( !v6 )
          {
            result = ++v7;
            if ( v7 >= v8 )
              return result;
            v6 = *(_QWORD *)&a1[4 * v7 + 4];
          }
          _BitScanForward64(&v9, v6);
          v6 &= ~(1LL << v9);
          v10 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * v7].Flink
                                 + (unsigned __int8)v9)];
          if ( (struct _KPRCB *)v10 != CurrentPrcb )
            KiHvEnlightenedGuestPriorityKick(CurrentPrcb, v10, (unsigned int)KiVpThreadSystemWorkPriority);
        }
      }
    }
  }
  return result;
}
