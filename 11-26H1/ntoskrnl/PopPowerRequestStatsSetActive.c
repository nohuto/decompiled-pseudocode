/*
 * XREFs of PopPowerRequestStatsSetActive @ 0x140B040A4
 * Callers:
 *     PopPowerRequestCallbackWorker @ 0x14049FF30 (PopPowerRequestCallbackWorker.c)
 * Callees:
 *     SleepstudyHelperBlockerActiveDereference @ 0x140257DF0 (SleepstudyHelperBlockerActiveDereference.c)
 *     SleepstudyHelperBlockerActiveReference @ 0x140257E90 (SleepstudyHelperBlockerActiveReference.c)
 */

__int64 __fastcall PopPowerRequestStatsSetActive(__int64 a1, int a2, char a3)
{
  KSPIN_LOCK *v3; // rcx
  __int64 result; // rax

  v3 = *(KSPIN_LOCK **)(a1 + 160);
  if ( v3 )
  {
    result = (unsigned int)(a2 - 1);
    if ( (result & 0xFFFFFFFD) == 0 )
    {
      if ( a3 )
        return SleepstudyHelperBlockerActiveReference(v3);
      else
        return SleepstudyHelperBlockerActiveDereference(v3);
    }
  }
  return result;
}
