/*
 * XREFs of RtlStackDbContextInitialize @ 0x1406263B8
 * Callers:
 *     ObpInitStackAndObjectTables @ 0x1407C7C48 (ObpInitStackAndObjectTables.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *RtlStackDbContextInitialize())()
{
  __int64 (__fastcall *result)(); // rax

  ObpStackTraceLock.SchedulerApc.Reserved[2] = ObpStackDbAllocRoutine;
  result = ObpStackDbFreeRoutine;
  ObpStackTraceLock.SchedulerApc.NormalContext = ObpStackDbFreeRoutine;
  *(_OWORD *)&ObpStackTraceLock.SchedulerApc.Type = 0uLL;
  *(_OWORD *)&ObpStackTraceLock.SchedulerApcFill5[16] = 0uLL;
  *(_OWORD *)&ObpStackTraceLock.SchedulerApcFill5[32] = 0uLL;
  ObpStackTraceLock.SchedulerApc.SystemArgument1 = 0LL;
  return result;
}
