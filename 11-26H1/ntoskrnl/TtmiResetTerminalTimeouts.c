/*
 * XREFs of TtmiResetTerminalTimeouts @ 0x1407F1BE4
 * Callers:
 *     TtmNotifyDeviceInput @ 0x1407EAA40 (TtmNotifyDeviceInput.c)
 *     TtmNotifySessionDisplayBurst @ 0x1409F6598 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifyConsoleUserPresent @ 0x1409F8018 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifySessionTerminalInput @ 0x140B6C74C (TtmNotifySessionTerminalInput.c)
 * Callees:
 *     TtmiResetInactivityTimer @ 0x1407F1B44 (TtmiResetInactivityTimer.c)
 *     TtmiSetPendingOnOffRequest @ 0x1407F1ED4 (TtmiSetPendingOnOffRequest.c)
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
