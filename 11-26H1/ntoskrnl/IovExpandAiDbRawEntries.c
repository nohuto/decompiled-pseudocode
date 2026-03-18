/*
 * XREFs of IovExpandAiDbRawEntries @ 0x140642470
 * Callers:
 *     IovAiDbNodeAlloc @ 0x140641F20 (IovAiDbNodeAlloc.c)
 *     IovInitAiDb @ 0x1406424E0 (IovInitAiDb.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 IovExpandAiDbRawEntries()
{
  struct _SLIST_ENTRY *Pool2; // rax
  struct _SLIST_ENTRY *v1; // rbx
  __int64 v3; // rdi

  Pool2 = (struct _SLIST_ENTRY *)ExAllocatePool2(0x240uLL);
  v1 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)&stru_140E27B08.WaitBlockFill11[120], Pool2);
  v3 = 1023LL;
  do
  {
    v1 += 4;
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)&stru_140E27B08.WaitBlockFill11[136], v1);
    --v3;
  }
  while ( v3 );
  return 0LL;
}
