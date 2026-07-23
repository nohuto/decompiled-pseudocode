/*
 * XREFs of PopFxTryReferenceDevice @ 0x14021B7B8
 * Callers:
 *     PopFxAllocatePowerIrp @ 0x14021BA28 (PopFxAllocatePowerIrp.c)
 *     PopFxProcessWork @ 0x1403B8BD0 (PopFxProcessWork.c)
 *     PopFxPlatformIdleVeto @ 0x1403C01F0 (PopFxPlatformIdleVeto.c)
 *     PoFxPowerControl @ 0x1403C1020 (PoFxPowerControl.c)
 *     PopFxLockDevice @ 0x1403C13A4 (PopFxLockDevice.c)
 *     PopFxProcessorIdleVeto @ 0x140607F30 (PopFxProcessorIdleVeto.c)
 *     PopFxUpdatePlatformIdleState @ 0x140608740 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x140608830 (PopFxUpdateProcessorIdleState.c)
 *     PopPepPlatformStateRegistered @ 0x1406146A4 (PopPepPlatformStateRegistered.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x140B0F450 (PoFxSetTargetDripsDevicePowerState.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 */

__int64 __fastcall PopFxTryReferenceDevice(__int64 a1, int a2)
{
  unsigned int v2; // r8d

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 244));
  v2 = 0;
  if ( *(_BYTE *)(a1 + 240) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 244), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 248), 0, 0);
    return (unsigned int)-1073741738;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 4LL * a2 + 272));
  }
  return v2;
}
