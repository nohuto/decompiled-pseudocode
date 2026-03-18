/*
 * XREFs of ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x1400D7F54
 * Callers:
 *     NtMITCoreMsgKOpenConnectionTo @ 0x140166D50 (NtMITCoreMsgKOpenConnectionTo.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400D7D60 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     CoreMsgOpenConnection @ 0x1400D8214 (CoreMsgOpenConnection.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall InputExtensibilityCallout::CoreMsgOpenDestinationHandle(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // r14
  __int64 v7; // rbp
  int v8; // edi
  __int128 v10; // [rsp+20h] [rbp-48h]

  v3 = (int)a2;
  if ( a2 >= 0x17 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 209LL);
  if ( !(unsigned int)IsCurrentProcessDwm(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 211LL);
  v10 = 0LL;
  v6 = 0LL;
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(a1 + 8));
  v7 = 5 * v3;
  if ( *(_QWORD *)(a1 + 24 + 40 * v3) )
  {
    v8 = -2147020579;
  }
  else
  {
    v8 = CoreMsgOpenConnection(0LL, a3);
    if ( v8 >= 0 )
    {
      v6 = *(_QWORD *)(a1 + 8 * v7 + 56);
      v10 = *(_OWORD *)(a1 + 8 * v7 + 40);
    }
  }
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(a1 + 8));
  if ( *((_QWORD *)&v10 + 1) && (v10 & 1) != 0 )
    (*((void (__fastcall **)(__int64, __int64))&v10 + 1))(1LL, v6);
  return (unsigned int)v8;
}
