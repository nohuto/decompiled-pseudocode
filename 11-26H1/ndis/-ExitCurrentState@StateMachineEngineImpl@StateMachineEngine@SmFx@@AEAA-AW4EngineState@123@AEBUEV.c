/*
 * XREFs of ?ExitCurrentState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@AEBUEVENT_ACTION@123@@Z @ 0x1400E9600
 * Callers:
 *     ?ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@AEBUEVENT_ACTION@123@@Z @ 0x14005FB50 (-ExecuteEventAction@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@AEBU.c)
 *     ?PopToStackDepth@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA?AW4EngineState@123@AEBUEVENT_ACTION@123@@Z @ 0x1400E9A8C (-PopToStackDepth@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA-AW4EngineState@123@AEBUEVE.c)
 * Callees:
 *     ?GetCurrentStateIndex@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEBAGXZ @ 0x140060000 (-GetCurrentStateIndex@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEBAGXZ.c)
 *     ?GetSlotIndexForSlotType@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAIAEBUSTATE_SPECIFICATION@3@W4StateSlotType@3@@Z @ 0x1400E9760 (-GetSlotIndexForSlotType@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAIAEBUSTATE_SPECIFIC.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::ExitCurrentState(__int64 a1, __int64 a2)
{
  SmFx::StateMachineEngine::StateMachineEngineImpl *v4; // rcx
  const struct SmFx::STATE_SPECIFICATION *v5; // r11
  __int64 SlotIndexForSlotType; // r8
  __int64 v7; // r11
  __int64 v8; // rdi

  if ( *(_BYTE *)(a1 + 981) )
    return 1LL;
  *(_BYTE *)(a1 + 981) = 1;
  v5 = (const struct SmFx::STATE_SPECIFICATION *)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 24LL)
                                                + 16LL
                                                * (unsigned __int16)SmFx::StateMachineEngine::StateMachineEngineImpl::GetCurrentStateIndex((SmFx::StateMachineEngine::StateMachineEngineImpl *)a1));
  if ( (v5->activeSlots[0] & 0x40) == 0 )
    return 1LL;
  SlotIndexForSlotType = SmFx::StateMachineEngine::StateMachineEngineImpl::GetSlotIndexForSlotType(
                           v4,
                           v5,
                           (enum SmFx::StateSlotType)64);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 8 * SlotIndexForSlotType);
  if ( !v8
    || *(_WORD *)(a2 + 4) == *(_WORD *)v8
    || (*(unsigned int (__fastcall **)(_QWORD))(v8 + 8))(*(_QWORD *)(a1 + 896)) == 1 )
  {
    return 1LL;
  }
  *(_OWORD *)(a1 + 960) = *(_OWORD *)a2;
  *(_WORD *)(a1 + 880) = *(_WORD *)v8;
  return 5LL;
}
