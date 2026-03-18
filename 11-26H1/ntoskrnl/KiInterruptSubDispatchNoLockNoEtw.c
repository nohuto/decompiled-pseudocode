/*
 * XREFs of KiInterruptSubDispatchNoLockNoEtw @ 0x140729FF0
 * Callers:
 *     KiInterruptDispatchNoLockNoEtw @ 0x14072A830 (KiInterruptDispatchNoLockNoEtw.c)
 * Callees:
 *     KiStartInterruptCycleAccumulation @ 0x140228150 (KiStartInterruptCycleAccumulation.c)
 *     KiCallInterruptServiceRoutine @ 0x14032D7C0 (KiCallInterruptServiceRoutine.c)
 *     KzSetIrqlUnsafe @ 0x1405EBBF0 (KzSetIrqlUnsafe.c)
 */

char __fastcall KiInterruptSubDispatchNoLockNoEtw()
{
  __int64 v0; // rbp
  __int64 v1; // rsi
  unsigned __int64 v2; // rcx
  unsigned __int8 CurrentIrql; // al
  __int64 v4; // r8
  char result; // al

  v2 = *(unsigned __int8 *)(v1 + 93);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KzSetIrqlUnsafe(v2);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v2);
  }
  *(_BYTE *)(v0 - 87) = CurrentIrql;
  KiStartInterruptCycleAccumulation((__int64)KeGetCurrentPrcb(), 1LL);
  _enable();
  *(_QWORD *)(v1 + 136) = v0 - 128;
  result = KiCallInterruptServiceRoutine(v1, 0, v4);
  _disable();
  return result;
}
