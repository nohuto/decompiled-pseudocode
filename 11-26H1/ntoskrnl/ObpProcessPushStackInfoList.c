/*
 * XREFs of ObpProcessPushStackInfoList @ 0x1407C4F58
 * Callers:
 *     ObpRegisterObject @ 0x140778F98 (ObpRegisterObject.c)
 *     ObpDeregisterObject @ 0x140779D4C (ObpDeregisterObject.c)
 *     ObpPushStackInfoQueue @ 0x1407C5020 (ObpPushStackInfoQueue.c)
 *     ObpStopRuntimeStackTrace @ 0x1407C5588 (ObpStopRuntimeStackTrace.c)
 * Callees:
 *     ObpTraceFreeMemory @ 0x140530A70 (ObpTraceFreeMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     ObpPushRefDerefInfoNoLock @ 0x1407702BC (ObpPushRefDerefInfoNoLock.c)
 */

signed __int64 ObpProcessPushStackInfoList()
{
  unsigned __int64 v0; // rbx
  unsigned __int64 v1; // rdx
  struct _SLIST_ENTRY *v2; // rdx
  unsigned int v3; // ecx
  signed __int64 result; // rax

  do
  {
    v0 = _InterlockedExchange64(&qword_140F132C0, 1LL);
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
      v2 = (struct _SLIST_ENTRY *)(v1 - 16);
      if ( (ObpTraceFlags & 0xF3) == 0 )
        goto LABEL_7;
      v3 = 10 * (LODWORD(stru_140F12D20.Padding[4]) + 50);
      if ( v3 > 0xC350 )
        v3 = 50000;
      if ( LOWORD(ObpWorkItemFreeList.Alignment) < v3 )
        RtlpInterlockedPushEntrySList(&ObpWorkItemFreeList, v2);
      else
LABEL_7:
        ObpTraceFreeMemory(v2);
    }
    result = _InterlockedCompareExchange64(&qword_140F132C0, 0LL, 1LL);
  }
  while ( result != 1 );
  return result;
}
