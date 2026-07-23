/*
 * XREFs of PopSetSystemAwayMode @ 0x1407D4430
 * Callers:
 *     PopIssueActionRequest @ 0x1409F3438 (PopIssueActionRequest.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     PopDiagTraceEventNoPayload @ 0x1404C0304 (PopDiagTraceEventNoPayload.c)
 *     PopAcquireUserPresentSpinLock @ 0x1404D7908 (PopAcquireUserPresentSpinLock.c)
 *     PopReleaseUserPresentSpinLock @ 0x1404E14C0 (PopReleaseUserPresentSpinLock.c)
 *     PopSetAwayModeStatus @ 0x1407D43AC (PopSetAwayModeStatus.c)
 *     PopNotifyConsoleUserPresent @ 0x1409F9560 (PopNotifyConsoleUserPresent.c)
 */

__int64 __fastcall PopSetSystemAwayMode(int a1)
{
  unsigned int v1; // ebx
  KIRQL v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v3 = 0;
  if ( a1 )
  {
    if ( !BYTE1(PpmIdlePolicyLock.IoSelfBoostsEntry.Next) )
    {
      if ( LOBYTE(PpmIdlePolicyLock.IoSelfBoostsEntry.Next) )
      {
        PopAcquireUserPresentSpinLock(&v3);
        KeResetEvent(&PopUserPresentCompletedEvent);
        HIDWORD(PpmIdlePolicyLock.IoSelfBoostsEntry.Next) = 1;
        if ( dword_140E67708 )
        {
          PopReleaseUserPresentSpinLock(v3);
          KeWaitForSingleObject(&PopUserPresentCompletedEvent, Executive, 0, 0, 0LL);
        }
        else
        {
          PopReleaseUserPresentSpinLock(v3);
        }
        KeInitializeDpc(
          &PopAwayModeUserPresenceDpcObject,
          (PKDEFERRED_ROUTINE)PopAwayModeUserPresenceDpc,
          (char *)&PpmIdlePolicyLock.IoSelfBoostsEntry.Next + 4);
        KiSetTimerEx((__int64)&qword_140E67750, -30000000LL, 0, 0, (__int64)&PopAwayModeUserPresenceDpcObject);
        PopDiagTraceEventNoPayload(&POP_ETW_EVENT_AWAYMODE);
        PopSetAwayModeStatus(1);
      }
      else
      {
        return (unsigned int)-1073741811;
      }
    }
  }
  else if ( BYTE1(PpmIdlePolicyLock.IoSelfBoostsEntry.Next) )
  {
    PopSetAwayModeStatus(0);
    PopNotifyConsoleUserPresent(0LL, (unsigned int)PopAwaymodeExitReason);
  }
  return v1;
}
