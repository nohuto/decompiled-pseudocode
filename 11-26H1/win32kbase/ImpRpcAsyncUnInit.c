/*
 * XREFs of ImpRpcAsyncUnInit @ 0x1400C0264
 * Callers:
 *     ImpRpcDisconnect @ 0x1400BD804 (ImpRpcDisconnect.c)
 *     ImpInitializeWork @ 0x1400BE40C (ImpInitializeWork.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void ImpRpcAsyncUnInit()
{
  __int64 InputMonitorSessionState; // rbx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  void *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  InputMonitorSessionState = W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !*(_QWORD *)(InputMonitorSessionState + 520) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  ExFreePoolWithTag(*(PVOID *)(InputMonitorSessionState + 520), 0);
  *(_QWORD *)(InputMonitorSessionState + 520) = 0LL;
  if ( (unsigned int)dword_1402AA1C0 > 5 )
  {
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1402AA1C8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1402AA1C8;
    v3 = &unk_14028F203;
    UserData.Reserved = 2;
    v4 = 22;
    v5 = 1;
    EtwWriteTransfer(qword_1402AA1E0, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
}
