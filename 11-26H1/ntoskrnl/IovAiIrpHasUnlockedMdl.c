/*
 * XREFs of IovAiIrpHasUnlockedMdl @ 0x140532AF0
 * Callers:
 *     IopAllocateMdl @ 0x1403A0940 (IopAllocateMdl.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 * Callees:
 *     RtlLookupElementGenericTableFullAvl @ 0x1404144B0 (RtlLookupElementGenericTableFullAvl.c)
 *     ViPtRaiseIrqlSafe @ 0x14064597C (ViPtRaiseIrqlSafe.c)
 *     IovAiAcquireDbLockAtDpcLevelSafe @ 0x140645A20 (IovAiAcquireDbLockAtDpcLevelSafe.c)
 *     IovAiCleanDbLockContext @ 0x140645AA0 (IovAiCleanDbLockContext.c)
 *     IovAiReleaseDbLockFromDpcLevel @ 0x140645E00 (IovAiReleaseDbLockFromDpcLevel.c)
 */

bool __fastcall IovAiIrpHasUnlockedMdl(__int64 a1)
{
  bool v1; // bl
  _QWORD *v3; // rax
  __int128 v5; // [rsp+20h] [rbp-30h] BYREF
  __int64 Buffer; // [rsp+30h] [rbp-20h] BYREF
  __int128 v7; // [rsp+38h] [rbp-18h]
  TABLE_SEARCH_RESULT SearchResult; // [rsp+68h] [rbp+18h] BYREF
  PVOID NodeOrParent; // [rsp+70h] [rbp+20h] BYREF

  v1 = 0;
  if ( !IovAiDbInitialized || !IovAiDb || !a1 )
    return 0;
  Buffer = a1;
  v5 = 0LL;
  BYTE9(v5) = 4;
  v7 = 0LL;
  ViPtRaiseIrqlSafe(&v5);
  IovAiAcquireDbLockAtDpcLevelSafe(&v5);
  NodeOrParent = 0LL;
  SearchResult = TableEmptyTree;
  v3 = RtlLookupElementGenericTableFullAvl(IovAiDb, &Buffer, &NodeOrParent, &SearchResult);
  if ( v3 )
  {
    if ( *v3 == a1 )
      v1 = (*(_BYTE *)(a1 + 10) & 0x32) == 2;
  }
  IovAiReleaseDbLockFromDpcLevel(&v5);
  IovAiCleanDbLockContext(&v5);
  return v1;
}
