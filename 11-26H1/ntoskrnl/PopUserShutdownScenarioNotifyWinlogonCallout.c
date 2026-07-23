/*
 * XREFs of PopUserShutdownScenarioNotifyWinlogonCallout @ 0x1407D4888
 * Callers:
 *     PopDispatchShutdownEvent @ 0x1407DA7B0 (PopDispatchShutdownEvent.c)
 * Callees:
 *     SleepstudyHelperBlockerActiveDereference @ 0x140257DF0 (SleepstudyHelperBlockerActiveDereference.c)
 *     SleepstudyHelperBlockerActiveReference @ 0x140257E90 (SleepstudyHelperBlockerActiveReference.c)
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 */

void __fastcall PopUserShutdownScenarioNotifyWinlogonCallout(__int64 a1, __int64 a2)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  if ( PopUserShutdownTaskClient )
  {
    LOBYTE(a2) = 1;
    PdcTaskClientRequest(PopUserShutdownTaskClient, a2);
    if ( PopUserShutdownPoBlockerHandle )
      SleepstudyHelperBlockerActiveReference(PopUserShutdownPoBlockerHandle);
    v2 = 0LL;
    if ( (unsigned __int8)KeSetTimer2((__int64)&PopUserShutdownCalloutDelayTimer, -900000000LL, 0LL, (__int64)&v2) )
    {
      PdcTaskClientRequest(PopUserShutdownTaskClient, 0LL);
      if ( PopUserShutdownPoBlockerHandle )
        SleepstudyHelperBlockerActiveDereference(PopUserShutdownPoBlockerHandle);
    }
  }
}
