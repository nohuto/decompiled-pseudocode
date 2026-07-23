/*
 * XREFs of PopUserShutdownCalloutDelayTimerWorker @ 0x1407D4840
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperBlockerActiveDereference @ 0x140257DF0 (SleepstudyHelperBlockerActiveDereference.c)
 */

__int64 PopUserShutdownCalloutDelayTimerWorker()
{
  signed __int32 v0; // eax
  bool v1; // cc
  __int64 result; // rax

  do
  {
    PdcTaskClientRequest(PopUserShutdownTaskClient, 0LL);
    if ( PopUserShutdownPoBlockerHandle )
      SleepstudyHelperBlockerActiveDereference(PopUserShutdownPoBlockerHandle);
    v0 = _InterlockedExchangeAdd(&dword_140F113C8, 0xFFFFFFFF);
    v1 = v0 <= 1;
    result = (unsigned int)(v0 - 1);
  }
  while ( !v1 );
  return result;
}
