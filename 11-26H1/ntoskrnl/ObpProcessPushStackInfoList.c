/*
 * XREFs of ObpProcessPushStackInfoList @ 0x1407C7FB8
 * Callers:
 *     ObpRegisterObject @ 0x14077BE38 (ObpRegisterObject.c)
 *     ObpDeregisterObject @ 0x14077CC7C (ObpDeregisterObject.c)
 *     ObpPushStackInfoQueue @ 0x1407C8080 (ObpPushStackInfoQueue.c)
 *     ObpStopRuntimeStackTrace @ 0x1407C85E8 (ObpStopRuntimeStackTrace.c)
 * Callees:
 *     ObpTraceFreeMemory @ 0x140532F70 (ObpTraceFreeMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     ObpPushRefDerefInfoNoLock @ 0x1407732BC (ObpPushRefDerefInfoNoLock.c)
 */

signed __int64 ObpProcessPushStackInfoList()
{
  unsigned __int64 v0; // rbx
  unsigned __int64 v1; // rdx
  _SLIST_ENTRY *v2; // rdx
  unsigned int v3; // ecx
  signed __int64 result; // rax

  do
  {
    v0 = _InterlockedExchange64((volatile __int64 *)&ObpStackTraceLock.SchedulerApc.SystemArgument2, 1LL);
    while ( v0 > 1 )
    {
      ObpPushRefDerefInfoNoLock(
        *(_QWORD *)(v0 + 8),
        *(_WORD *)(v0 + 16),
        *(_DWORD *)(v0 + 24),
        v0 + 32,
        *(_DWORD *)(v0 + 20));
      v1 = v0;
      v0 = *(_QWORD *)v0;
      v2 = (_SLIST_ENTRY *)(v1 - 16);
      if ( (ObpTraceFlags & 0xF3) == 0 )
        goto LABEL_7;
      v3 = 10 * (*(_DWORD *)&ObpStackTraceLock.SavedApcStateFill[8] + 50);
      if ( v3 > 0xC350 )
        v3 = 50000;
      if ( LOWORD(ObpWorkItemFreeList.Alignment) < v3 )
        RtlpInterlockedPushEntrySList(&ObpWorkItemFreeList, v2);
      else
LABEL_7:
        ObpTraceFreeMemory(v2);
    }
    result = _InterlockedCompareExchange64(
               (volatile signed __int64 *)&ObpStackTraceLock.SchedulerApc.SystemArgument2,
               0LL,
               1LL);
  }
  while ( result != 1 );
  return result;
}
