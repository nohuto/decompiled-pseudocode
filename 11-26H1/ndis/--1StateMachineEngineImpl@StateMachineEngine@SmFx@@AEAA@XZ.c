/*
 * XREFs of ??1StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA@XZ @ 0x1400E93B8
 * Callers:
 *     ?Destroy@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAX_N@Z @ 0x1400E9480 (-Destroy@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAX_N@Z.c)
 * Callees:
 *     ?Deinitialize@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x1400E93E8 (-Deinitialize@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 *     ?Deinitialize@Worker@SmFx@@QEAAXXZ @ 0x1400E9EA0 (-Deinitialize@Worker@SmFx@@QEAAXXZ.c)
 */

void __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::~StateMachineEngineImpl(
        SmFx::StateMachineEngine::StateMachineEngineImpl *this)
{
  SmFx::StateMachineEngine::StateMachineEngineImpl::Deinitialize(this);
  SmFx::Worker::Deinitialize((SmFx::StateMachineEngine::StateMachineEngineImpl *)((char *)this + 1016));
  *((_BYTE *)this + 1008) = 0;
}
