/*
 * XREFs of HvlReadPerformanceStateCounters @ 0x140470830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HvlReadPerformanceStateCounters(unsigned int a1, unsigned int a2, _QWORD *a3, _QWORD *a4)
{
  _LIST_ENTRY *p_ThreadListEntry; // r8
  struct _LIST_ENTRY *Blink; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int i; // eax

  if ( a2 < 2 )
  {
    if ( a1 < (unsigned int)HvlpLogicalProcessorCount
      && (p_ThreadListEntry = (_LIST_ENTRY *)((char *)HvlpLogicalProcessorRegions + 104 * a1),
          HIDWORD(p_ThreadListEntry->Flink) == a1) )
    {
LABEL_4:
      if ( p_ThreadListEntry )
      {
LABEL_5:
        _mm_lfence();
        Blink = p_ThreadListEntry[1].Blink;
        v7 = a2;
        v8 = *((unsigned int *)&stru_140E3EAA8.InGlobalForegroundList + 2 * a2 + 1);
        *a3 = *((_QWORD *)&Blink->Flink + *((unsigned int *)&stru_140E3EAA8.InGlobalForegroundList + 2 * v7));
        *a4 = *((_QWORD *)&Blink->Flink + v8);
        return;
      }
    }
    else
    {
      p_ThreadListEntry = (_LIST_ENTRY *)HvlpLogicalProcessorRegions;
      for ( i = 0; i < (unsigned int)HvlpLogicalProcessorCount; ++i )
      {
        if ( HIDWORD(p_ThreadListEntry->Flink) == a1 )
          goto LABEL_4;
        p_ThreadListEntry = (_LIST_ENTRY *)((char *)p_ThreadListEntry + 104);
      }
      if ( !a1 )
      {
        p_ThreadListEntry = &stru_140E3EAA8.ThreadListEntry;
        goto LABEL_5;
      }
    }
  }
  *a3 = 0LL;
  *a4 = 0LL;
}
