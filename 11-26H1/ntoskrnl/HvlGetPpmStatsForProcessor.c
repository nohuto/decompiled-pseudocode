/*
 * XREFs of HvlGetPpmStatsForProcessor @ 0x1405BF100
 * Callers:
 *     PpmHvGetRuntimesForProcessor @ 0x140611B90 (PpmHvGetRuntimesForProcessor.c)
 * Callees:
 *     HvlGetReferenceTime @ 0x140419B10 (HvlGetReferenceTime.c)
 */

__int64 __fastcall HvlGetPpmStatsForProcessor(struct _KPRCB *a1, _QWORD *a2, __int64 *a3)
{
  __int64 Next_high; // rbp
  unsigned __int64 *StatisticsPage; // rbx
  __int64 ReferenceTime; // rdx
  __int64 v9; // rcx

  if ( a1 == KeGetCurrentPrcb() )
  {
    Next_high = HIDWORD(stru_140E3E928.ForegroundDpcStackListEntry.Next);
    StatisticsPage = a1->StatisticsPage;
    do
    {
      *a2 = StatisticsPage[Next_high];
      ReferenceTime = HvlGetReferenceTime();
    }
    while ( *a2 != StatisticsPage[Next_high] );
    v9 = ReferenceTime - *a2;
  }
  else
  {
    ReferenceTime = HvlGetReferenceTime();
    v9 = a1->StatisticsPage[*(unsigned int *)&stru_140E3E928.KeReferenceCount];
    *a2 = ReferenceTime - v9;
  }
  *a3 = v9;
  return ReferenceTime;
}
