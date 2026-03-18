/*
 * XREFs of KeEnterKernelDebugger @ 0x1405E7070
 * Callers:
 *     <none>
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiBugCheckDebugBreak @ 0x1405E7550 (KiBugCheckDebugBreak.c)
 *     KdInitSystem @ 0x140C12B60 (KdInitSystem.c)
 */

__int64 KeEnterKernelDebugger()
{
  unsigned __int8 CurrentIrql; // cl

  _InterlockedExchange((volatile __int32 *)&KiDpcCorralLock.WaitBlockFill11[104], 1);
  _disable();
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  if ( !(_BYTE)KdDebuggerEnabled && !KdPitchDebugger && !_InterlockedExchange(&dword_140E666A4, 1) )
    KdInitSystem(0LL, 0LL);
  return KiBugCheckDebugBreak(5u);
}
