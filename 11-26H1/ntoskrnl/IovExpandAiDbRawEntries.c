/*
 * XREFs of IovExpandAiDbRawEntries @ 0x140646050
 * Callers:
 *     IovAiDbNodeAlloc @ 0x140645B00 (IovAiDbNodeAlloc.c)
 *     IovInitAiDb @ 0x1406460C0 (IovInitAiDb.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 IovExpandAiDbRawEntries()
{
  _SLIST_ENTRY *Pool2; // rax
  _SLIST_ENTRY *v1; // rbx
  __int64 v3; // rdi

  Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(0x240uLL);
  v1 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)&stru_140E27C48.WaitBlockFill11[120], Pool2);
  v3 = 1023LL;
  do
  {
    v1 += 4;
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)&stru_140E27C48.WaitBlockFill11[136], v1);
    --v3;
  }
  while ( v3 );
  return 0LL;
}
