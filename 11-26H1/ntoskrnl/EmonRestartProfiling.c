/*
 * XREFs of EmonRestartProfiling @ 0x140BED670
 * Callers:
 *     <none>
 * Callees:
 *     EmonRestartProfilingInternal @ 0x140596524 (EmonRestartProfilingInternal.c)
 */

unsigned __int64 __fastcall EmonRestartProfiling()
{
  __int64 v0; // rbx
  unsigned __int64 result; // rax

  LODWORD(v0) = KeGetPcr()->Prcb.Number;
  EmonRestartProfilingInternal(0, v0);
  result = EmonRestartProfilingInternal(1, v0);
  if ( IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts[25] )
  {
    result = *(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts[8] + 160 * v0;
    __writemsr(0x600u, result);
  }
  return result;
}
