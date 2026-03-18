/*
 * XREFs of TtmiResetTerminalTimeouts @ 0x1407EC080
 * Callers:
 *     TtmNotifyDeviceInput @ 0x1407E4EE0 (TtmNotifyDeviceInput.c)
 *     TtmNotifySessionDisplayBurst @ 0x140A3A998 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifyConsoleUserPresent @ 0x140A3C5F8 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifySessionTerminalInput @ 0x140B697BC (TtmNotifySessionTerminalInput.c)
 * Callees:
 *     TtmiResetInactivityTimer @ 0x1407EBFE0 (TtmiResetInactivityTimer.c)
 *     TtmiSetPendingOnOffRequest @ 0x1407EC370 (TtmiSetPendingOnOffRequest.c)
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
