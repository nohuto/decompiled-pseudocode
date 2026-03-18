/*
 * XREFs of HUBFDO_UnregisterSleepstudyBlockerReasons @ 0x140080A80
 * Callers:
 *     HUBFDO_EvtDeviceReleaseHardware @ 0x14007C540 (HUBFDO_EvtDeviceReleaseHardware.c)
 *     HUBFDO_RegisterSleepstudyBlockerReasons @ 0x140080724 (HUBFDO_RegisterSleepstudyBlockerReasons.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBFDO_UnregisterSleepstudyBlockerReasons(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[329] )
  {
    result = SleepstudyHelper_UnregisterComponent();
    a1[329] = 0LL;
  }
  if ( a1[330] )
  {
    result = SleepstudyHelper_UnregisterComponent();
    a1[330] = 0LL;
  }
  if ( a1[331] )
  {
    result = SleepstudyHelper_UnregisterComponent();
    a1[331] = 0LL;
  }
  return result;
}
