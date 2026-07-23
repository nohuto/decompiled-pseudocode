/*
 * XREFs of IovAiRemoveIrp @ 0x140645E54
 * Callers:
 *     IovFreeIrpPrivate @ 0x140C4B9D0 (IovFreeIrpPrivate.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1403C2960 (RtlDeleteElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x1404144B0 (RtlLookupElementGenericTableFullAvl.c)
 *     ViPtRaiseIrqlSafe @ 0x14064597C (ViPtRaiseIrqlSafe.c)
 *     IovAiAcquireDbLockAtDpcLevelSafe @ 0x140645A20 (IovAiAcquireDbLockAtDpcLevelSafe.c)
 *     IovAiCleanDbLockContext @ 0x140645AA0 (IovAiCleanDbLockContext.c)
 *     IovAiReleaseDbLockFromDpcLevel @ 0x140645E00 (IovAiReleaseDbLockFromDpcLevel.c)
 */

__int64 __fastcall IovAiRemoveIrp(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int128 v7; // [rsp+20h] [rbp-40h] BYREF
  __int128 v8; // [rsp+30h] [rbp-30h] BYREF
  __int64 v9; // [rsp+40h] [rbp-20h]
  __int64 Buffer; // [rsp+48h] [rbp-18h] BYREF
  __int128 v11; // [rsp+50h] [rbp-10h]
  TABLE_SEARCH_RESULT SearchResult; // [rsp+78h] [rbp+18h] BYREF
  PVOID NodeOrParent; // [rsp+80h] [rbp+20h] BYREF

  v1 = 0LL;
  if ( !IovAiDbInitialized || !IovAiDb )
    return 0LL;
  Buffer = a1;
  v7 = 0LL;
  BYTE9(v7) = 4;
  v11 = 0LL;
  v9 = 0LL;
  v8 = 0LL;
  ViPtRaiseIrqlSafe((__int64)&v7);
  IovAiAcquireDbLockAtDpcLevelSafe((__int64)&v7);
  NodeOrParent = 0LL;
  SearchResult = TableEmptyTree;
  v3 = RtlLookupElementGenericTableFullAvl(IovAiDb, &Buffer, &NodeOrParent, &SearchResult);
  if ( v3 )
  {
    if ( *v3 == a1 )
    {
      if ( *(_QWORD *)(a1 + 8) )
      {
        *(_QWORD *)&v8 = *(_QWORD *)(a1 + 8);
        NodeOrParent = 0LL;
        SearchResult = TableEmptyTree;
        v4 = RtlLookupElementGenericTableFullAvl(IovAiDb, &v8, &NodeOrParent, &SearchResult);
        if ( v4 )
        {
          v5 = *(_QWORD *)(a1 + 8);
          if ( *v4 == v5 && (*(_BYTE *)(v5 + 10) & 0x32) == 2 )
            v1 = *(_QWORD *)(a1 + 8);
        }
      }
    }
  }
  RtlDeleteElementGenericTableAvl(IovAiDb, &Buffer);
  IovAiReleaseDbLockFromDpcLevel((__int64)&v7);
  IovAiCleanDbLockContext((__int64)&v7);
  return v1;
}
