/*
 * XREFs of PpmResetDripsAccountingSnapshot @ 0x140518058
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14042AB54 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     <none>
 */

unsigned __int64 PpmResetDripsAccountingSnapshot()
{
  unsigned __int64 result; // rax
  PVOID *v1; // rdx
  void **v2; // r8
  __int64 v3; // rcx

  result = (unsigned int)dword_140E27100;
  if ( PpmPlatformStates && dword_140E27100 != -1 )
  {
    v1 = &stru_140F10828.SchedulerApc.Reserved[2];
    v2 = (void **)(1032LL * (unsigned int)dword_140E27100 + 240 + *(_QWORD *)(PpmPlatformStates + 48));
    v3 = 26LL;
    do
    {
      result = (unsigned __int64)*v2;
      v2 += 4;
      *v1++ = (PVOID)result;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
