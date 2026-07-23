/*
 * XREFs of ExStopRecordingIRTimerExpiries @ 0x140B1B4F4
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140421FC8 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     ExpGetIRTimerDesc @ 0x1404E6C90 (ExpGetIRTimerDesc.c)
 *     PoDiagTraceIRTimerSleepStudyRundown @ 0x1404F1B14 (PoDiagTraceIRTimerSleepStudyRundown.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void ExStopRecordingIRTimerExpiries()
{
  _DWORD *v0; // rbx
  int v1; // ebp
  unsigned int i; // edi
  wchar_t **IRTimerDesc; // r14
  __int16 j; // si
  int v5; // ecx

  v0 = (_DWORD *)_InterlockedExchange64(
                   (volatile __int64 *)&ExSaPageGroupDescriptorArrayLock.KernelShadowStackInitial,
                   0LL);
  if ( v0 )
  {
    v1 = 0;
    for ( i = 0; i < 0x14; ++i )
    {
      IRTimerDesc = ExpGetIRTimerDesc(i);
      for ( j = 0; (unsigned __int16)j < *((unsigned __int8 *)IRTimerDesc + 16); ++j )
      {
        v5 = v0[v1];
        if ( v5 )
          PoDiagTraceIRTimerSleepStudyRundown(v5, j, *IRTimerDesc);
        ++v1;
      }
    }
    ExFreePoolWithTag(v0, 0x69547845u);
  }
}
