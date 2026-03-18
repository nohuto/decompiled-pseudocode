/*
 * XREFs of PopUserShutdownCalloutDelayTimerWorker @ 0x1407D17A0
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperBlockerActiveDereference @ 0x140256460 (SleepstudyHelperBlockerActiveDereference.c)
 */

__int64 PopUserShutdownCalloutDelayTimerWorker()
{
  signed __int32 v0; // eax
  bool v1; // cc
  __int64 result; // rax

  do
  {
    PdcTaskClientRequest(qword_140F11008, 0LL);
    if ( qword_140F10FF8 )
      SleepstudyHelperBlockerActiveDereference(qword_140F10FF8);
    v0 = _InterlockedExchangeAdd(&dword_140F10FE8, 0xFFFFFFFF);
    v1 = v0 <= 1;
    result = (unsigned int)(v0 - 1);
  }
  while ( !v1 );
  return result;
}
