/*
 * XREFs of TtmiResetTerminalTimeouts @ 0x140760170
 * Callers:
 *     TtmNotifyDeviceInput @ 0x140758C90 (TtmNotifyDeviceInput.c)
 *     TtmNotifyConsoleUserPresent @ 0x140A2D0B0 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifySessionTerminalInput @ 0x140A2D208 (TtmNotifySessionTerminalInput.c)
 *     TtmNotifySessionDisplayBurst @ 0x140A2DB84 (TtmNotifySessionDisplayBurst.c)
 * Callees:
 *     TtmiResetInactivityTimer @ 0x1407600D0 (TtmiResetInactivityTimer.c)
 *     TtmiSetPendingOnOffRequest @ 0x140760454 (TtmiSetPendingOnOffRequest.c)
 */

char __fastcall TtmiResetTerminalTimeouts(int a1, __int64 a2, int a3, int a4, char a5)
{
  int v9; // r8d
  int v10; // eax

  *(_QWORD *)(a2 + 80) = MEMORY[0xFFFFF78000000008];
  TtmiResetInactivityTimer(a3);
  v10 = *(_DWORD *)(a2 + 40);
  if ( v10 == 3 || !a5 && v10 != 2 )
    return 0;
  LOBYTE(v9) = 1;
  TtmiSetPendingOnOffRequest(a1, a2, v9, a3, a4);
  return 1;
}
