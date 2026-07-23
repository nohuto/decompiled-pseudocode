/*
 * XREFs of IovAiIsInvalidIrpMdlMarking @ 0x140645D04
 * Callers:
 *     IovLogNulledMdl @ 0x140646190 (IovLogNulledMdl.c)
 * Callees:
 *     RtlLookupElementGenericTableFullAvl @ 0x1404144B0 (RtlLookupElementGenericTableFullAvl.c)
 *     ViPtRaiseIrqlSafe @ 0x14064597C (ViPtRaiseIrqlSafe.c)
 *     IovAiAcquireDbLockAtDpcLevelSafe @ 0x140645A20 (IovAiAcquireDbLockAtDpcLevelSafe.c)
 *     IovAiCleanDbLockContext @ 0x140645AA0 (IovAiCleanDbLockContext.c)
 *     IovAiReleaseDbLockFromDpcLevel @ 0x140645E00 (IovAiReleaseDbLockFromDpcLevel.c)
 */

bool __fastcall IovAiIsInvalidIrpMdlMarking(__int64 a1, __int64 a2)
{
  bool v2; // bl
  _DWORD *v5; // rax
  _QWORD *v6; // rax
  __int128 v8; // [rsp+20h] [rbp-40h] BYREF
  __int128 v9; // [rsp+30h] [rbp-30h] BYREF
  __int64 v10; // [rsp+40h] [rbp-20h]
  __int64 Buffer; // [rsp+48h] [rbp-18h] BYREF
  __int128 v12; // [rsp+50h] [rbp-10h]
  TABLE_SEARCH_RESULT SearchResult; // [rsp+90h] [rbp+30h] BYREF
  PVOID NodeOrParent; // [rsp+98h] [rbp+38h] BYREF

  v2 = 0;
  v10 = 0LL;
  v9 = 0LL;
  if ( !IovAiDbInitialized || !IovAiDb )
    return 0;
  Buffer = a1;
  v8 = 0LL;
  BYTE9(v8) = 4;
  v12 = 0LL;
  ViPtRaiseIrqlSafe((__int64)&v8);
  IovAiAcquireDbLockAtDpcLevelSafe((__int64)&v8);
  NodeOrParent = 0LL;
  SearchResult = TableEmptyTree;
  v5 = RtlLookupElementGenericTableFullAvl(IovAiDb, &Buffer, &NodeOrParent, &SearchResult);
  if ( v5 )
  {
    if ( *(_QWORD *)v5 == a1 )
    {
      --v5[2];
      if ( !*(_QWORD *)(a1 + 8) )
      {
        *(_QWORD *)&v9 = a2;
        NodeOrParent = 0LL;
        SearchResult = TableEmptyTree;
        v6 = RtlLookupElementGenericTableFullAvl(IovAiDb, &v9, &NodeOrParent, &SearchResult);
        if ( v6 )
          v2 = *v6 == a2;
      }
    }
  }
  IovAiReleaseDbLockFromDpcLevel(&v8);
  IovAiCleanDbLockContext((__int64)&v8);
  return v2;
}
