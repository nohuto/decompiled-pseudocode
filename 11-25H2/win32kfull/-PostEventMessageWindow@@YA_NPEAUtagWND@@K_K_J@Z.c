/*
 * XREFs of ?PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z @ 0x14021E418
 * Callers:
 *     xxxTrackMouseMove @ 0x14025D2EC (xxxTrackMouseMove.c)
 *     _lambda_f1f8f0736c0bde49f507539c36edf3c7_::operator() @ 0x1402A69F0 (_lambda_f1f8f0736c0bde49f507539c36edf3c7_--operator().c)
 *     ?MigrateWindowAsyncOld@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHMONITOR__@@K@Z @ 0x1402C1B14 (-MigrateWindowAsyncOld@ShellWindowPos@@YA-AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHMONITO.c)
 *     ?PositionWindowAsyncOld@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@AEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1402C1D24 (-PositionWindowAsyncOld@ShellWindowPos@@YA-AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__.c)
 *     ?PostWindowAction@@YA_NPEAUtagWND@@PEBU_WINDOW_ACTION@@PEAVCMonitorTopology@@@Z @ 0x1402CBA38 (-PostWindowAction@@YA_NPEAUtagWND@@PEBU_WINDOW_ACTION@@PEAVCMonitorTopology@@@Z.c)
 *     ?TooltipRitHideTimerCallback@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402DD0F0 (-TooltipRitHideTimerCallback@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?TooltipRitShowTimerCallback@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402DD190 (-TooltipRitShowTimerCallback@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

bool __fastcall PostEventMessageWindow(struct tagTHREADINFO **a1, DWORD a2, LARGE_INTEGER a3, __int64 a4)
{
  return (unsigned int)PostEventMessageEx(a1[2], *((struct tagQ **)a1[2] + 59), a2, (LARGE_INTEGER *)a1, 0, a3, a4, 0LL) != 0;
}
