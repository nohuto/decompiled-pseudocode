/*
 * XREFs of PpmHeteroRegisterWpsUpdatesIntel @ 0x1407E3800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 PpmHeteroRegisterWpsUpdatesIntel()
{
  __int64 result; // rax

  result = 0LL;
  if ( !PpmHeteroHgsEnabled || PpmHeteroHgsVendor != 2 )
    return 3221225485LL;
  if ( PopSleepstudySessionLock.StackLimit || PopSleepstudySessionLock.StateSaveArea )
    return 3221225680LL;
  PopSleepstudySessionLock.StackBase = 0LL;
  PopSleepstudySessionLock.StackLimit = PpmHeteroCheckWpsTableUpdatedIntel;
  PopSleepstudySessionLock.StateSaveArea = (_XSAVE_FORMAT *)PpmHeteroAcknowledgeWpsUpdateIntel;
  return result;
}
