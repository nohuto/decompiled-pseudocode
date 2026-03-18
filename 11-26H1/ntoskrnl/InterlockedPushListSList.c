/*
 * XREFs of InterlockedPushListSList @ 0x140730D40
 * Callers:
 *     MiReplenishPageSlist @ 0x14028A710 (MiReplenishPageSlist.c)
 *     ExHeapLookasideReplenish @ 0x1404678B0 (ExHeapLookasideReplenish.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x14048ADF0 (EtwpCovSampCaptureQueueDpc.c)
 *     EtwpCovSampPushListSList @ 0x140492DC4 (EtwpCovSampPushListSList.c)
 *     HvlpSetupCachedHypercallPages @ 0x1405BB1B8 (HvlpSetupCachedHypercallPages.c)
 *     SmHwAcceleratorParitionCtxCreate @ 0x14081B58C (SmHwAcceleratorParitionCtxCreate.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall InterlockedPushListSList(
        PSLIST_HEADER ListHead,
        PSLIST_ENTRY List,
        PSLIST_ENTRY ListEnd,
        ULONG Count)
{
  __int128 v6; // rax
  _SLIST_ENTRY *v7; // r10
  signed __int64 v8; // rbx
  __int128 v9; // rt0
  unsigned __int8 v10; // tt

  _m_prefetchw(ListHead);
  *(_QWORD *)&v6 = ListHead->Alignment;
  *((_QWORD *)&v6 + 1) = ListHead->Region;
  do
  {
    v7 = (_SLIST_ENTRY *)*((_QWORD *)&v6 + 1);
    LOBYTE(v7) = BYTE8(v6) & 0xF0;
    ListEnd->Next = v7;
    v8 = v6 + 0x20000;
    LOWORD(v8) = v6 + Count;
    v9 = v6;
    v10 = _InterlockedCompareExchange128(
            (volatile signed __int64 *)ListHead,
            (signed __int64)List,
            v8,
            (signed __int64 *)&v9);
    v6 = v9;
  }
  while ( !v10 );
  return v7;
}
