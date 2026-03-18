/*
 * XREFs of ImpRpcAsyncUnInit @ 0x14014DC74
 * Callers:
 *     ImpInitializeWork @ 0x14013882C (ImpInitializeWork.c)
 *     ImpRpcDisconnect @ 0x14014A738 (ImpRpcDisconnect.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
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
  if ( (unsigned int)dword_14029F1A0 > 5 )
  {
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_14029F1A8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_14029F1A8;
    v3 = &unk_140284BAB;
    UserData.Reserved = 2;
    v4 = 22;
    v5 = 1;
    EtwWriteTransfer(qword_14029F1C0, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
}
