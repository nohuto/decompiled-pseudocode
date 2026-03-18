/*
 * XREFs of ImpRpcAsyncInit @ 0x1400C0414
 * Callers:
 *     ImpInitializeWork @ 0x1400BE40C (ImpInitializeWork.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400F39AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 ImpRpcAsyncInit()
{
  __int64 InputMonitorSessionState; // rbx
  RPC_STATUS v1; // edi
  struct _KEVENT *Pool2; // rax
  struct _KEVENT *v3; // rsi
  void *v4; // rdx
  RPC_STATUS v6; // [rsp+30h] [rbp-40h] BYREF
  char v7[32]; // [rsp+38h] [rbp-38h] BYREF
  RPC_STATUS *v8; // [rsp+58h] [rbp-18h]
  __int64 v9; // [rsp+60h] [rbp-10h]

  InputMonitorSessionState = W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v1 = RpcAsyncInitializeHandle((PRPC_ASYNC_STATE)(InputMonitorSessionState + 472), 0x58u);
  if ( v1 >= 0 )
  {
    Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1836084809LL);
    v3 = Pool2;
    if ( Pool2 )
    {
      KeInitializeEvent(Pool2, SynchronizationEvent, 0);
      *(_QWORD *)(InputMonitorSessionState + 496) = 0LL;
      *(_DWORD *)(InputMonitorSessionState + 516) = 1;
      *(_QWORD *)(InputMonitorSessionState + 520) = v3;
      if ( (unsigned int)dword_1402AA1C0 <= 5 )
        return (unsigned int)v1;
      v4 = &unk_14028F290;
      goto LABEL_8;
    }
    v1 = -1073741670;
  }
  if ( (unsigned int)dword_1402AA1C0 > 2 )
  {
    v4 = &unk_14028F341;
LABEL_8:
    v8 = &v6;
    v6 = v1;
    v9 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(&dword_1402AA1C0, v4, 0LL, 0LL, 3, v7);
  }
  return (unsigned int)v1;
}
