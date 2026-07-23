/*
 * XREFs of LZNT1DecompressChunkWorkItem @ 0x140478F60
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     LZNT1DecompressChunk @ 0x1407362D0 (LZNT1DecompressChunk.c)
 */

PSLIST_ENTRY __fastcall LZNT1DecompressChunkWorkItem(PSLIST_ENTRY ListEntry)
{
  int v2; // eax
  __int64 v3; // rdx
  _SLIST_ENTRY *Next; // rcx

  v2 = LZNT1DecompressChunk(
         ListEntry[2].Next,
         *((_QWORD *)&ListEntry[2].Next + 1),
         ListEntry[3].Next,
         *((_QWORD *)&ListEntry[3].Next + 1),
         (__int64)ListEntry[4].Next);
  if ( v2 < 0 )
  {
    Next = ListEntry[5].Next;
    if ( *((int *)&Next[1].Next + 3) >= 0 )
      *((_DWORD *)&Next[1].Next + 3) = v2;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&ListEntry[5].Next[1].Next + 2, 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)ListEntry[5].Next, 0, 0);
  ++HIDWORD(PspTlsContext.WaitBlockList);
  if ( *(_WORD *)&PspTlsContext.ApcStateFill[32] < LOWORD(PspTlsContext.WaitStatus) )
    return RtlpInterlockedPushEntrySList((PSLIST_HEADER)&PspTlsContext.ApcStateFill[32], ListEntry);
  ++LODWORD(PspTlsContext.WaitListEntry.Flink);
  return (PSLIST_ENTRY)guard_dispatch_icall_no_overrides(ListEntry, v3);
}
