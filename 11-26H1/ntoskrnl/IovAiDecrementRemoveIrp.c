/*
 * XREFs of IovAiDecrementRemoveIrp @ 0x140645BD0
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x140C4B580 (IovpLocalCompletionRoutine.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1403C2960 (RtlDeleteElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x1404144B0 (RtlLookupElementGenericTableFullAvl.c)
 *     ViPtRaiseIrqlSafe @ 0x14064597C (ViPtRaiseIrqlSafe.c)
 *     IovAiAcquireDbLockAtDpcLevelSafe @ 0x140645A20 (IovAiAcquireDbLockAtDpcLevelSafe.c)
 *     IovAiCleanDbLockContext @ 0x140645AA0 (IovAiCleanDbLockContext.c)
 *     IovAiReleaseDbLockFromDpcLevel @ 0x140645E00 (IovAiReleaseDbLockFromDpcLevel.c)
 */

bool __fastcall IovAiDecrementRemoveIrp(__int64 a1, __int64 a2)
{
  bool v4; // bl
  _DWORD *v5; // rax
  _DWORD *v6; // rdi
  _QWORD *v7; // rax
  __int128 v9; // [rsp+20h] [rbp-40h] BYREF
  __int128 v10; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11; // [rsp+40h] [rbp-20h]
  __int64 Buffer; // [rsp+48h] [rbp-18h] BYREF
  __int128 v13; // [rsp+50h] [rbp-10h]
  TABLE_SEARCH_RESULT SearchResult; // [rsp+90h] [rbp+30h] BYREF
  PVOID NodeOrParent; // [rsp+98h] [rbp+38h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  if ( !IovAiDbInitialized || !IovAiDb )
    return 0;
  Buffer = a1;
  v4 = 0;
  v9 = 0LL;
  BYTE9(v9) = 4;
  v13 = 0LL;
  ViPtRaiseIrqlSafe((__int64)&v9);
  IovAiAcquireDbLockAtDpcLevelSafe((__int64)&v9);
  NodeOrParent = 0LL;
  SearchResult = TableEmptyTree;
  v5 = RtlLookupElementGenericTableFullAvl(IovAiDb, &Buffer, &NodeOrParent, &SearchResult);
  v6 = v5;
  if ( v5 && *(_QWORD *)v5 == a1 )
  {
    --v5[2];
    if ( !*(_QWORD *)(a1 + 8) )
    {
      *(_QWORD *)&v10 = a2;
      NodeOrParent = 0LL;
      SearchResult = TableEmptyTree;
      v7 = RtlLookupElementGenericTableFullAvl(IovAiDb, &v10, &NodeOrParent, &SearchResult);
      if ( v7 )
        v4 = *v7 == (_QWORD)v10;
    }
    if ( !v6[2] )
      RtlDeleteElementGenericTableAvl(IovAiDb, &Buffer);
  }
  IovAiReleaseDbLockFromDpcLevel(&v9);
  IovAiCleanDbLockContext((__int64)&v9);
  return v4;
}
