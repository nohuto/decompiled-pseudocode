/*
 * XREFs of PpmHeteroRegisterWpsUpdatesSim @ 0x1407E37A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 PpmHeteroRegisterWpsUpdatesSim()
{
  __int64 result; // rax

  result = 0LL;
  if ( !PpmHeteroHgsEnabled || PpmHeteroHgsVendor != 15 )
    return 3221225485LL;
  if ( PopSleepstudySessionLock.StackLimit || PopSleepstudySessionLock.StateSaveArea )
    return 3221225680LL;
  PopSleepstudySessionLock.StackBase = 0LL;
  PopSleepstudySessionLock.StackLimit = PpmHeteroCheckWpsTableUpdatedSim;
  PopSleepstudySessionLock.StateSaveArea = (_XSAVE_FORMAT *)tlgDefineProvider_annotation__TlgMiTraceHandleProv;
  return result;
}
