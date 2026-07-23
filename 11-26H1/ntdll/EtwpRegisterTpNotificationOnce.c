/*
 * XREFs of EtwpRegisterTpNotificationOnce @ 0x18009052C
 * Callers:
 *     EtwpRegisterProvider @ 0x180042360 (EtwpRegisterProvider.c)
 * Callees:
 *     TpAllocWait @ 0x1800399E0 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x180039E60 (TpSetWaitEx.c)
 *     TpReleaseWait @ 0x180090840 (TpReleaseWait.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwCreateEvent @ 0x18015F740 (ZwCreateEvent.c)
 *     NtTraceControl @ 0x180162910 (NtTraceControl.c)
 */

__int64 EtwpRegisterTpNotificationOnce()
{
  ULONG ReturnLength; // [rsp+30h] [rbp-20h] BYREF
  HANDLE EventHandle; // [rsp+38h] [rbp-18h] BYREF
  PTP_WAIT WaitReturn; // [rsp+40h] [rbp-10h] BYREF
  int InputBuffer; // [rsp+78h] [rbp+28h] BYREF

  ReturnLength = 0;
  InputBuffer = 0;
  WaitReturn = 0LL;
  EventHandle = 0LL;
  if ( ZwCreateEvent(&EventHandle, 0x1F0003u, 0LL, SynchronizationEvent, 0) >= 0 )
  {
    if ( TpAllocWait(&WaitReturn, (PTP_WAIT_CALLBACK)EtwpNotificationThread, EventHandle, 0LL) >= 0 )
    {
      TpSetWaitEx(WaitReturn, EventHandle, 0LL, 0LL);
      InputBuffer = (int)EventHandle;
      if ( NtTraceControl(EtwAddNotificationEvent, &InputBuffer, 4u, 0LL, 0, &ReturnLength) >= 0 )
        return 1LL;
    }
    if ( WaitReturn )
      TpReleaseWait(WaitReturn);
  }
  if ( EventHandle )
    NtClose(EventHandle);
  return 0LL;
}
