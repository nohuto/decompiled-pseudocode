/*
 * XREFs of PopMonitorProcessLoop @ 0x140B24F78
 * Callers:
 *     PopMonitorAlpcCallback @ 0x140B24F60 (PopMonitorAlpcCallback.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140CD55F0 (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x140724310 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1407245B0 (ZwAlpcSendWaitReceivePort.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopMonitorProcessBrightnessAction @ 0x140B25090 (PopMonitorProcessBrightnessAction.c)
 */

__int64 PopMonitorProcessLoop()
{
  __int64 result; // rax
  _DWORD v1[4]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v2; // [rsp+A0h] [rbp-60h]
  __int16 v3; // [rsp+E4h] [rbp-1Ch]
  unsigned int v4; // [rsp+108h] [rbp+8h]
  unsigned int v5; // [rsp+10Ch] [rbp+Ch]

  memset_0(v1, 0, 0x48uLL);
  while ( 1 )
  {
    result = ZwAlpcSendWaitReceivePort(PopModernStandbyStateNotify.OtherOperationCount, 0LL);
    if ( (_DWORD)result )
      break;
    switch ( (unsigned __int8)v3 )
    {
      case 3u:
        PopMonitorProcessBrightnessAction(v4, v5);
        break;
      case 5u:
      case 6u:
        ZwClose((HANDLE)PopModernStandbyStateNotify.ReadTransferCount);
        PopModernStandbyStateNotify.ReadTransferCount = 0LL;
        break;
      case 0xAu:
        if ( PopModernStandbyStateNotify.ReadTransferCount )
        {
          ZwClose((HANDLE)PopModernStandbyStateNotify.ReadTransferCount);
          PopModernStandbyStateNotify.ReadTransferCount = 0LL;
        }
        memset_0(v1, 0, 0x48uLL);
        v1[0] = 0x100000;
        v2 = 256LL;
        if ( (int)ZwAlpcAcceptConnectPort(
                    (__int64)&PopModernStandbyStateNotify.ReadTransferCount,
                    PopModernStandbyStateNotify.OtherOperationCount) < 0 )
          ZwAlpcAcceptConnectPort(
            (__int64)&PopModernStandbyStateNotify.ReadTransferCount,
            PopModernStandbyStateNotify.OtherOperationCount);
        break;
    }
  }
  return result;
}
