/*
 * XREFs of KiReleaseProcessLockExclusive @ 0x140203330
 * Callers:
 *     KeSetExpectedConcurrencyCountProcess @ 0x140200A58 (KeSetExpectedConcurrencyCountProcess.c)
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 *     KeSetQuantumProcess @ 0x1402028D4 (KeSetQuantumProcess.c)
 *     KeSetExecuteOptions @ 0x140202B0C (KeSetExecuteOptions.c)
 *     KeForceResumeProcess @ 0x140203144 (KeForceResumeProcess.c)
 *     KeSetProcessPpmPolicy @ 0x140203234 (KeSetProcessPpmPolicy.c)
 *     KeSetDisableQuantumProcess @ 0x1402032A0 (KeSetDisableQuantumProcess.c)
 *     KeThawMultiProcess @ 0x1402C5CF8 (KeThawMultiProcess.c)
 *     KeSetAffinityProcess @ 0x14050BCE4 (KeSetAffinityProcess.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiReleaseProcessLockExclusive(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rcx
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_DWORD *)(a1 + 64);
  v3 = (unsigned __int8)a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
    || (result = LODWORD(stru_140F11D08.WaitStatus), LODWORD(stru_140F11D08.WaitStatus)) )
  {
    *v2 = 0;
  }
  else
  {
    result = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = v3;
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
  }
  __writecr8(v3);
  return result;
}
