/*
 * XREFs of KeOptimizeSpecCtrlSettings @ 0x1405F4308
 * Callers:
 *     KiDynamicProcessorInitialization @ 0x1405ED8E4 (KiDynamicProcessorInitialization.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeIpiGenericCall @ 0x1404A43F0 (KeIpiGenericCall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeOptimizeSpecCtrlSettings(char a1)
{
  BOOL v1; // eax
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  ULONG Context; // [rsp+38h] [rbp+10h] BYREF
  ULONG Context_4; // [rsp+3Ch] [rbp+14h]

  v1 = !HvlHypervisorConnected
    || (HvlpFlags & 0x400000) != 0
    && ((HvlpFlags & 2) == 0
     || HvlpSchedulerType == 1
     || HvlpSchedulerType != 2 && (unsigned int)(HvlpSchedulerType - 3) <= 1);
  if ( !a1 )
    KiCoreIsolationEnforceable = v1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 12 )
    __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  Context_4 = KeQueryActiveProcessorCountEx(0xFFFFu);
  Context = Context_4;
  KeIpiGenericCall(KiOptimizeSpecCtrlSettingsWorker, (ULONG_PTR)&Context);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
