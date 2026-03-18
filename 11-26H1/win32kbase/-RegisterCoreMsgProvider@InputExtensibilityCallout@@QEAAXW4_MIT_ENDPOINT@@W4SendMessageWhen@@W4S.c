/*
 * XREFs of ?RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4StateOfInterest@@PEAXP6AX23@Z@Z @ 0x14017FEAC
 * Callers:
 *     RegisterCoreMsgProviderPreferences @ 0x14017FE40 (RegisterCoreMsgProviderPreferences.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall InputExtensibilityCallout::RegisterCoreMsgProvider(
        __int64 a1,
        int a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // rsi
  __int128 v10; // [rsp+20h] [rbp-48h]

  v9 = 5LL * a2;
  if ( *(_QWORD *)(a1 + 40LL * a2 + 24) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 292LL);
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(a1 + 8));
  *(_DWORD *)(a1 + 8 * v9 + 32) = a3;
  if ( (a4 != 0) != (a6 != 0) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 302LL);
  *(_QWORD *)&v10 = a4;
  *((_QWORD *)&v10 + 1) = a6;
  *(_OWORD *)(a1 + 8 * v9 + 40) = v10;
  *(_QWORD *)(a1 + 8 * v9 + 56) = a5;
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(a1 + 8));
}
