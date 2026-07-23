/*
 * XREFs of TtmNotifyConsoleUserPresent @ 0x1409F8018
 * Callers:
 *     PopNotifyConsoleUserPresent @ 0x1409F9560 (PopNotifyConsoleUserPresent.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     TtmiResetTerminalTimeouts @ 0x1407F1BE4 (TtmiResetTerminalTimeouts.c)
 *     TtmpAcquireSessionById @ 0x1409F6634 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
 *     TtmiLogConsoleUserPresent @ 0x1409F68FC (TtmiLogConsoleUserPresent.c)
 */

void __fastcall TtmNotifyConsoleUserPresent(int a1, int a2)
{
  int v3; // eax
  _QWORD *v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  v3 = TtmpAcquireSessionById((void **)&v4, a1);
  if ( v3 >= 0 )
  {
    TtmiResetTerminalTimeouts((int)v4, v4[4], a2, 1347765070, 1);
    ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WpsFeedback);
    KeLeaveCriticalRegion();
  }
  else
  {
    TtmiLogError("TtmNotifyConsoleUserPresent", 3297, v3, -1);
  }
  TtmiLogConsoleUserPresent();
}
