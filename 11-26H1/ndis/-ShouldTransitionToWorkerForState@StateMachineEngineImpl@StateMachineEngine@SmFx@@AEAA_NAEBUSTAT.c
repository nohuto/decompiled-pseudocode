/*
 * XREFs of ?ShouldTransitionToWorkerForState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NAEBUSTATE_SPECIFICATION@3@@Z @ 0x1400E9D04
 * Callers:
 *     ?ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@AEBUEVENT_ACTION@123@@Z @ 0x14005FB50 (-ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@AEBU.c)
 * Callees:
 *     <none>
 */

bool __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::ShouldTransitionToWorkerForState(
        SmFx::StateMachineEngine::StateMachineEngineImpl *this,
        const struct SmFx::STATE_SPECIFICATION *a2)
{
  SmFx::StateFlags flags; // al

  flags = a2->flags;
  if ( (flags & 2) != 0 && !*((_BYTE *)this + 982) )
    return 1;
  if ( (flags & 1) != 0 )
    return *((_BYTE *)this + 983) != 0;
  return 0;
}
