/*
 * XREFs of ?SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x140129E60
 * Callers:
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x140118E90 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?_Signal@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@AEBAXXZ @ 0x140129EF8 (-_Signal@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@AEBAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CRIMBase::SignalMarshalingCompleted(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  CRIMBase::SensorDispatcherObject::MarshalingCompletion *v5; // rcx

  v2 = a2;
  if ( a2 >= 0x13 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 427LL);
  v4 = 56 * (v2 + 3);
  if ( *(_DWORD *)(v4 + a1 + 8) != (_DWORD)v2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 430LL);
  v5 = (CRIMBase::SensorDispatcherObject::MarshalingCompletion *)(v4 + a1 + 48);
  if ( *(_QWORD *)v5 )
    CRIMBase::SensorDispatcherObject::MarshalingCompletion::_Signal(v5);
}
