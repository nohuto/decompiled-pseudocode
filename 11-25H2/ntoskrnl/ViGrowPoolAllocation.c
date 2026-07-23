/*
 * XREFs of ViGrowPoolAllocation @ 0x1406062C0
 * Callers:
 *     VfHandlePoolAlloc @ 0x140B98AC0 (VfHandlePoolAlloc.c)
 * Callees:
 *     KeZeroSinglePage @ 0x1406A8080 (KeZeroSinglePage.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

PSLIST_ENTRY __fastcall ViGrowPoolAllocation(_SLIST_HEADER *a1)
{
  __int64 Pool2; // rax
  _SLIST_HEADER *v3; // rdi
  __int64 v4; // rbx
  __int64 v6; // rsi

  Pool2 = ExAllocatePool2(0x240uLL);
  v3 = a1 + 5;
  v4 = Pool2;
  if ( !Pool2 )
    return RtlpInterlockedPopEntrySList(a1 + 5);
  KeZeroSinglePage(Pool2);
  *(_QWORD *)(v4 + 8) = a1;
  *(_QWORD *)(v4 + 16) = 556929861LL;
  RtlpInterlockedPushEntrySList(a1 + 4, (PSLIST_ENTRY)v4);
  v6 = 126LL;
  do
  {
    v4 += 32LL;
    *(_QWORD *)(v4 + 16) = 1LL;
    RtlpInterlockedPushEntrySList(v3, (PSLIST_ENTRY)v4);
    --v6;
  }
  while ( v6 );
  *(_QWORD *)(v4 + 48) = 1LL;
  return (PSLIST_ENTRY)(v4 + 32);
}
