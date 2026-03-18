/*
 * XREFs of PopUserShutdownScenarioNotifyWinlogonCallout @ 0x1407D17E8
 * Callers:
 *     PopDispatchShutdownEvent @ 0x1407D7410 (PopDispatchShutdownEvent.c)
 * Callees:
 *     SleepstudyHelperBlockerActiveDereference @ 0x140256460 (SleepstudyHelperBlockerActiveDereference.c)
 *     SleepstudyHelperBlockerActiveReference @ 0x140256500 (SleepstudyHelperBlockerActiveReference.c)
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 */

void __fastcall PopUserShutdownScenarioNotifyWinlogonCallout(__int64 a1, __int64 a2)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  if ( qword_140F11008 )
  {
    LOBYTE(a2) = 1;
    PdcTaskClientRequest(qword_140F11008, a2);
    if ( qword_140F10FF8 )
      SleepstudyHelperBlockerActiveReference(qword_140F10FF8);
    v2 = 0LL;
    if ( (unsigned __int8)KeSetTimer2((__int64)&unk_140F10F40, -900000000LL, 0LL, (__int64)&v2) )
    {
      PdcTaskClientRequest(qword_140F11008, 0LL);
      if ( qword_140F10FF8 )
        SleepstudyHelperBlockerActiveDereference(qword_140F10FF8);
    }
  }
}
