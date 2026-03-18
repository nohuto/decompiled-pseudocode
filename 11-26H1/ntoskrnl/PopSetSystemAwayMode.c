/*
 * XREFs of PopSetSystemAwayMode @ 0x1407D1390
 * Callers:
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 *     KeInitializeDpc @ 0x140481A50 (KeInitializeDpc.c)
 *     PopDiagTraceEventNoPayload @ 0x1404C6954 (PopDiagTraceEventNoPayload.c)
 *     PopAcquireUserPresentSpinLock @ 0x1404DE228 (PopAcquireUserPresentSpinLock.c)
 *     PopReleaseUserPresentSpinLock @ 0x1404E8100 (PopReleaseUserPresentSpinLock.c)
 *     PopSetAwayModeStatus @ 0x1407D130C (PopSetAwayModeStatus.c)
 *     PopNotifyConsoleUserPresent @ 0x140A3DB40 (PopNotifyConsoleUserPresent.c)
 */

__int64 __fastcall PopSetSystemAwayMode(int a1)
{
  unsigned int v1; // ebx
  KIRQL v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v3 = 0;
  if ( a1 )
  {
    if ( !byte_140F106D1 )
    {
      if ( byte_140F106D0 )
      {
        PopAcquireUserPresentSpinLock(&v3);
        KeResetEvent(&word_140F11020);
        dword_140F106D4 = 1;
        if ( HIDWORD(stru_140E66FF0.Padding[3]) )
        {
          PopReleaseUserPresentSpinLock(v3);
          KeWaitForSingleObject(&word_140F11020, Executive, 0, 0, 0LL);
        }
        else
        {
          PopReleaseUserPresentSpinLock(v3);
        }
        KeInitializeDpc(&dword_140F11040, (PKDEFERRED_ROUTINE)PopAwayModeUserPresenceDpc, &dword_140F106D4);
        KiSetTimerEx((__int64)&qword_140E674E0, -30000000LL, 0, 0, (__int64)&dword_140F11040);
        PopDiagTraceEventNoPayload(&POP_ETW_EVENT_AWAYMODE);
        PopSetAwayModeStatus(1);
      }
      else
      {
        return (unsigned int)-1073741811;
      }
    }
  }
  else if ( byte_140F106D1 )
  {
    PopSetAwayModeStatus(0);
    PopNotifyConsoleUserPresent(0LL, HIDWORD(stru_140F10828.ReadTransferCount));
  }
  return v1;
}
