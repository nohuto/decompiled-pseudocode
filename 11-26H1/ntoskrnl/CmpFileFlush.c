/*
 * XREFs of CmpFileFlush @ 0x140AA8F74
 * Callers:
 *     CmpSaveKeyByFileCopy @ 0x140854570 (CmpSaveKeyByFileCopy.c)
 *     HvWriteExternal @ 0x140AA7B6C (HvWriteExternal.c)
 *     CmpFileFlushAndPurge @ 0x140AA84FC (CmpFileFlushAndPurge.c)
 *     HvLoadHive @ 0x140AC4740 (HvLoadHive.c)
 * Callees:
 *     CmpDoFileFlush @ 0x1404C93FC (CmpDoFileFlush.c)
 */

NTSTATUS __fastcall CmpFileFlush(__int64 a1, unsigned int a2)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8LL * a2 + 1544);
  if ( v2 )
    return CmpDoFileFlush(v2);
  else
    return 0;
}
