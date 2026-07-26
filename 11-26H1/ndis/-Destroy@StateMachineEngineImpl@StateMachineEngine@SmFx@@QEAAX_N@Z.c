/*
 * XREFs of ?Destroy@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAX_N@Z @ 0x1400E9480
 * Callers:
 *     ?UpdateEngineState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4EngineState@123@@Z @ 0x14005F990 (-UpdateEngineState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4EngineState@123@@Z.c)
 *     ?MakeAndInitialize@StateMachineEngineImpl@StateMachineEngine@SmFx@@SAJAEBUSTATE_MACHINE_ENGINE_CONFIG@3@PEAPEAV123@@Z @ 0x1400E99E4 (-MakeAndInitialize@StateMachineEngineImpl@StateMachineEngine@SmFx@@SAJAEBUSTATE_MACHINE_ENGINE_C.c)
 * Callees:
 *     ??1StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA@XZ @ 0x1400E93B8 (--1StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA@XZ.c)
 *     Feature_UDFDOD__private_IsEnabledDeviceUsageNoInline @ 0x1400E9E24 (Feature_UDFDOD__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::Destroy(
        SmFx::StateMachineEngine::StateMachineEngineImpl *P,
        char a2)
{
  void (__fastcall *v2)(__int64); // rdi
  __int64 v4; // rbp

  v2 = (void (__fastcall *)(__int64))*((_QWORD *)P + 118);
  v4 = *((_QWORD *)P + 112);
  SmFx::StateMachineEngine::StateMachineEngineImpl::~StateMachineEngineImpl(P);
  ExFreePool(P);
  if ( !(unsigned int)Feature_UDFDOD__private_IsEnabledDeviceUsageNoInline() || a2 )
  {
    if ( v2 )
      v2(v4);
  }
}
