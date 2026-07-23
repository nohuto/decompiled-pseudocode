/*
 * XREFs of EmonResumeProfiling @ 0x140598E00
 * Callers:
 *     <none>
 * Callees:
 *     EmonResumeProfilingInternal @ 0x140598E3C (EmonResumeProfilingInternal.c)
 */

__int64 EmonResumeProfiling()
{
  unsigned int Number; // ebx
  __int64 result; // rax

  Number = KeGetPcr()->Prcb.Number;
  result = EmonResumeProfilingInternal(0LL, Number);
  if ( *(_DWORD *)IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts >= 2u )
    return EmonResumeProfilingInternal(1LL, Number);
  return result;
}
