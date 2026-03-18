/*
 * XREFs of ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x14014D6D0
 * Callers:
 *     NtMITCoreMsgKOpenConnectionTo @ 0x140128F30 (NtMITCoreMsgKOpenConnectionTo.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CD3B0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     CoreMsgOpenConnection @ 0x1400FD1A8 (CoreMsgOpenConnection.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall InputExtensibilityCallout::CoreMsgOpenDestinationHandle(
        __int64 a1,
        int a2,
        const struct tagMsgRoutingInfo *a3)
{
  __int64 v3; // rdi
  __int64 v6; // r14
  __int64 v7; // rbp
  void **v8; // r8
  int v9; // edi
  __int128 v11; // [rsp+20h] [rbp-48h]

  v3 = a2;
  if ( (unsigned __int64)a2 >= 0x16 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 209LL);
  if ( !(unsigned int)IsCurrentProcessDwm() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 211LL);
  v6 = 0LL;
  v11 = 0LL;
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(a1 + 8), 0);
  v7 = 5 * v3;
  v8 = (void **)(a1 + 24 + 40 * v3);
  if ( *v8 )
  {
    v9 = -2147020579;
  }
  else
  {
    v9 = CoreMsgOpenConnection(0, a3, v8);
    if ( v9 >= 0 )
    {
      v6 = *(_QWORD *)(a1 + 8 * v7 + 56);
      v11 = *(_OWORD *)(a1 + 8 * v7 + 40);
    }
  }
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(a1 + 8), 0LL);
  if ( *((_QWORD *)&v11 + 1) && (v11 & 1) != 0 )
    (*((void (__fastcall **)(__int64, __int64))&v11 + 1))(1LL, v6);
  return (unsigned int)v9;
}
