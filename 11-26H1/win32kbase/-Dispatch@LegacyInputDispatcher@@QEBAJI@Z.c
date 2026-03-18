/*
 * XREFs of ?Dispatch@LegacyInputDispatcher@@QEBAJI@Z @ 0x14013F820
 * Callers:
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1401AFD20 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     ?WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1402189F0 (-WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 * Callees:
 *     ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x14013F8FC (-HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall LegacyInputDispatcher::Dispatch(LegacyInputDispatcher *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdi
  int v6; // ebx

  v2 = a2;
  if ( a2 >= *((_DWORD *)this + 13)
    || !LegacyInputDispatcher::HasInputDispatcherObjects(this)
    || (unsigned int)v2 < *((_DWORD *)this + 10) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3260LL);
  }
  v4 = v2;
  v5 = 2 * v2;
  if ( !*(_QWORD *)(*((_QWORD *)this + 4) + 8 * v5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3261LL);
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)this + 4) + 8 * v5))(
         *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v4),
         *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v5 + 8));
  if ( v6 < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3268LL);
  return (unsigned int)v6;
}
