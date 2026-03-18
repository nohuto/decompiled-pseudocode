/*
 * XREFs of WbDisableTracing @ 0x140909530
 * Callers:
 *     sub_140907BA0 @ 0x140907BA0 (sub_140907BA0.c)
 * Callees:
 *     PsWow64GetProcessMachine @ 0x140907610 (PsWow64GetProcessMachine.c)
 */

__int64 __fastcall WbDisableTracing(__int64 a1)
{
  unsigned int v2; // edi
  _KPROCESS *Process; // rcx
  __int16 v5; // ax
  __int16 ProcessMachine; // ax

  v2 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[1].ReadyTime
    && ((v5 = WORD2(Process[3].PerProcessorCycleTimes), v5 == 332) || v5 == 452)
    && (ProcessMachine = PsWow64GetProcessMachine((__int64)KeGetCurrentThread()->ApcState.Process), ProcessMachine != 332) )
  {
    if ( ProcessMachine != 452 )
      return (unsigned int)-1073741637;
  }
  else
  {
    *(_DWORD *)(a1 + 16) &= ~0x100u;
  }
  return v2;
}
