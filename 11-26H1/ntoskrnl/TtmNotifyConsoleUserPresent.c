/*
 * XREFs of TtmNotifyConsoleUserPresent @ 0x140A3C5F8
 * Callers:
 *     PopNotifyConsoleUserPresent @ 0x140A3DB40 (PopNotifyConsoleUserPresent.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     TtmiResetTerminalTimeouts @ 0x1407EC080 (TtmiResetTerminalTimeouts.c)
 *     TtmpAcquireSessionById @ 0x140A3AA34 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x140A3AAD8 (TtmiLogError.c)
 *     TtmiLogConsoleUserPresent @ 0x140A3ACFC (TtmiLogConsoleUserPresent.c)
 */

void __fastcall TtmNotifyConsoleUserPresent(unsigned int a1, int a2, __int64 a3)
{
  int v4; // eax
  _QWORD *v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  v4 = TtmpAcquireSessionById((void **)&v5, a1, a3);
  if ( v4 >= 0 )
  {
    TtmiResetTerminalTimeouts((int)v5, v5[4], a2, 1347765070, 1);
    ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WriteOperationCount);
    KeLeaveCriticalRegion();
  }
  else
  {
    TtmiLogError("TtmNotifyConsoleUserPresent", 3297, v4, -1);
  }
  TtmiLogConsoleUserPresent();
}
