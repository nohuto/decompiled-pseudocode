/*
 * XREFs of PpmCheckArmPeriod @ 0x1404E6260
 * Callers:
 *     PpmCheckReInit @ 0x140A9D410 (PpmCheckReInit.c)
 * Callees:
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 *     PpmCheckResetProcessors @ 0x14042A1AC (PpmCheckResetProcessors.c)
 */

unsigned __int8 PpmCheckArmPeriod()
{
  __int64 v0; // rbx
  unsigned __int8 result; // al
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v0 = *(__int64 *)((char *)&PopSleepstudySessionLock.116 + 4);
  result = PopSleepstudySessionLock.WaitBlockFill6[97];
  if ( 10000 * (unsigned __int64)HIDWORD(PpmCurrentProfile[89 * dword_140F106CC + 11]) > *(_QWORD *)((char *)&PopSleepstudySessionLock.116 + 4) )
    v0 = 10000LL * HIDWORD(PpmCurrentProfile[89 * dword_140F106CC + 11]);
  if ( !PopSleepstudySessionLock.WaitBlockFill6[97] )
    goto LABEL_8;
  if ( (void *)v0 != PopSleepstudySessionLock.FirstArgument )
  {
    _InterlockedExchange64((volatile __int64 *)&PopSleepstudySessionLock.TrapFrame, 0LL);
    result = 0;
    PopSleepstudySessionLock.WaitBlockFill6[97] = 0;
  }
  if ( !result )
  {
LABEL_8:
    PopSleepstudySessionLock.FirstArgument = (void *)v0;
    PpmCheckResetProcessors(0LL);
    result = _InterlockedExchange64((volatile __int64 *)&PopSleepstudySessionLock.TrapFrame, 1LL);
    PopSleepstudySessionLock.WaitBlockFill6[97] = 1;
    if ( *(_DWORD *)&PopSleepstudySessionLock.AffinityPrimaryGroup )
    {
      v2[0] = 0LL;
      v2[1] = -1LL;
      return KeSetTimer2((__int64)&PopSleepstudySessionLock.WaitBlock[2].Object, -v0, v0, (__int64)v2);
    }
  }
  return result;
}
