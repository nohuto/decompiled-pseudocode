/*
 * XREFs of ?GetWorkAndWait@SensorDispatcherObject@CRIMBase@@QEBA?AVDoWorkAndWait@2@XZ @ 0x14020FB14
 * Callers:
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x140210C00 (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140099140 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CRIMBase::SensorDispatcherObject::GetWorkAndWait(__int64 a1, __int64 a2)
{
  void *v4; // rsi
  __int64 v5; // rax

  W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)a1, 0);
  v4 = *(void **)(a1 + 40);
  if ( !v4 )
    goto LABEL_6;
  if ( *(_DWORD *)(a1 + 12) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 721);
  v5 = *(_QWORD *)(a1 + 48);
  if ( v5 )
  {
    *(_QWORD *)a2 = v4;
    *(_QWORD *)(a2 + 8) = v5;
    ObfReferenceObject(v4);
    ObfReferenceObject(*(PVOID *)(a2 + 8));
  }
  else
  {
LABEL_6:
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  ExReleasePushLockSharedEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return a2;
}
