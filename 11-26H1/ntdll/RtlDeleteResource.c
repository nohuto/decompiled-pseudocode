/*
 * XREFs of RtlDeleteResource @ 0x1800794C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlDeleteCriticalSection @ 0x180079550 (RtlDeleteCriticalSection.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     RtlpInterlockedPushEntrySList @ 0x180162D10 (RtlpInterlockedPushEntrySList.c)
 */

void *__fastcall RtlDeleteResource(HANDLE *a1)
{
  char *v2; // rdx

  RtlDeleteCriticalSection(a1);
  NtClose(a1[5]);
  NtClose(a1[7]);
  v2 = (char *)a1[11];
  if ( LOWORD(RtlCriticalSectionDebugSList.Alignment) < 0xAu
    || &RtlpStaticDebugInfo <= (_UNKNOWN *)v2 && v2 < &RtlpForceCSToUseEvents )
  {
    RtlpInterlockedPushEntrySList(&RtlCriticalSectionDebugSList, v2);
  }
  else
  {
    RtlFreeHeap_0();
  }
  return memset_thunk_772440563353939046(a1, 0, 0x60uLL);
}
