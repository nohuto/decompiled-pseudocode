/*
 * XREFs of ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x140135A68
 * Callers:
 *     ?HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z @ 0x140219550 (-HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?HandlePTPDeferredMouseInputTimer@CHidInput@@QEAAX_NK@Z @ 0x1402195A0 (-HandlePTPDeferredMouseInputTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x14021A1BC (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CRIMBase::GetDispatcherHandleByName(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  __int64 v6; // rcx

  v3 = a2;
  if ( a2 >= 0x13 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 340LL);
  v6 = 56 * (v3 + 3);
  if ( a3 )
    return *(_QWORD *)(v6 + a1 + 32);
  else
    return *(_QWORD *)(v6 + a1 + 16);
}
