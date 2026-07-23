/*
 * XREFs of MiStoreFreeWriteSupport @ 0x14020A1E8
 * Callers:
 *     MiStoreModifiedWriteComplete @ 0x14020BAAC (MiStoreModifiedWriteComplete.c)
 *     MiStoreWriteModifiedPagePostIssue @ 0x140401104 (MiStoreWriteModifiedPagePostIssue.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiStoreFreeWriteSupport(PSLIST_ENTRY ListEntry, _SLIST_HEADER *a2)
{
  ULONG_PTR v2; // rsi
  ULONG_PTR v5; // rbx
  signed __int64 v6; // rax
  bool v7; // cc
  signed __int64 BugCheckParameter4; // rax

  v2 = *((_QWORD *)&ListEntry[1].Next + 1);
  if ( v2 )
  {
    v5 = v2 - 48;
    if ( ObpTraceFlags )
      ObpPushStackInfo(v2 - 48, 0xFFFFFFFFLL, 1716546893LL);
    v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL);
    v7 = v6 <= 1;
    BugCheckParameter4 = v6 - 1;
    if ( v7 )
    {
      if ( *(_QWORD *)(v5 + 8) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v5 + 24) ^ (unsigned __int64)BYTE1(v5)],
          v2,
          3uLL,
          *(_QWORD *)(v5 + 8));
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, v2, 4uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(v2 - 48);
    }
    *((_QWORD *)&ListEntry[1].Next + 1) = 0LL;
  }
  return RtlpInterlockedPushEntrySList(a2 + 92, ListEntry);
}
