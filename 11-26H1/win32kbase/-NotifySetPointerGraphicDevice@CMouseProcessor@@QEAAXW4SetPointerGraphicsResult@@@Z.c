/*
 * XREFs of ?NotifySetPointerGraphicDevice@CMouseProcessor@@QEAAXW4SetPointerGraphicsResult@@@Z @ 0x140166C4C
 * Callers:
 *     NotifySetPointerGraphicDevice @ 0x140166C20 (NotifySetPointerGraphicDevice.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMouseProcessor::NotifySetPointerGraphicDevice(__int64 a1, int a2)
{
  __int64 v4; // rdi
  int v5; // ebx
  int v6; // ebx

  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2152LL);
  v4 = a1 + 4024;
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)v4);
  if ( *(_BYTE *)(v4 + 8) )
  {
    v5 = a2 - 1;
    if ( v5 && (v6 = v5 - 1) != 0 )
    {
      if ( v6 == 1 )
        *(_BYTE *)(v4 + 9) = 1;
    }
    else if ( *(_BYTE *)(v4 + 9) )
    {
      *(_BYTE *)(v4 + 9) = 0;
    }
  }
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)v4);
}
