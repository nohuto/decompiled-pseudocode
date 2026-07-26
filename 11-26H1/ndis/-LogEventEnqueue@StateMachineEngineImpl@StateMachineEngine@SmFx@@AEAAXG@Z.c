/*
 * XREFs of ?LogEventEnqueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXG@Z @ 0x1400E9998
 * Callers:
 *     ?EnqueueEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAXG@Z @ 0x14005F5D0 (-EnqueueEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAXG@Z.c)
 *     ?AddEventToEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NG@Z @ 0x14008C430 (-AddEventToEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NG@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::LogEventEnqueue(
        SmFx::StateMachineEngine::StateMachineEngineImpl *this,
        unsigned __int16 a2)
{
  void (__fastcall *v2)(_QWORD, __int64); // r9
  __int64 v3; // r8
  __int64 v4; // rdx

  v2 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)this + 116);
  v3 = a2;
  v4 = 0LL;
  if ( v2 )
  {
    if ( (_WORD)v3 )
      v4 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 111) + 16LL) + 4 * v3);
    v2(*((_QWORD *)this + 112), v4);
  }
}
