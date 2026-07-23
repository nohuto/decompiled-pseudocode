/*
 * XREFs of RtlEnumerateGenericTableLikeADirectory @ 0x1403C1FD0
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x140967BEC (PiDmEnumObjectsWithCallback.c)
 * Callees:
 *     RealSuccessor @ 0x1403C2100 (RealSuccessor.c)
 *     FindNodeOrParent @ 0x1403C21F0 (FindNodeOrParent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID __stdcall RtlEnumerateGenericTableLikeADirectory(
        PRTL_AVL_TABLE Table,
        PRTL_AVL_MATCH_FUNCTION MatchFunction,
        PVOID MatchData,
        ULONG NextFlag,
        PVOID *RestartKey,
        PULONG DeleteCount,
        PVOID Buffer)
{
  bool v7; // zf
  PVOID *v9; // rsi
  PVOID *v11; // rdi
  PULONG v12; // r12
  void *v13; // rbx
  PVOID *v14; // rcx
  int v15; // ecx
  int NodeOrParent; // eax

  v7 = Table->NumberGenericTableElements == 0;
  v9 = RestartKey;
  v11 = (PVOID *)*RestartKey;
  RestartKey = (PVOID *)*RestartKey;
  if ( v7 )
  {
    *v9 = 0LL;
    return 0LL;
  }
  v12 = DeleteCount;
  v13 = 0LL;
  if ( *DeleteCount == Table->DeleteCount )
  {
    if ( v11 )
      goto LABEL_4;
  }
  else
  {
    RestartKey = 0LL;
  }
  NodeOrParent = FindNodeOrParent(Table, Buffer, &RestartKey);
  if ( NodeOrParent != 1 )
  {
    if ( NodeOrParent != 3 )
    {
      v11 = RestartKey;
      goto LABEL_7;
    }
    v14 = RestartKey;
    goto LABEL_6;
  }
  v11 = RestartKey;
LABEL_4:
  if ( !NextFlag )
    goto LABEL_7;
  do
  {
    v14 = v11;
LABEL_6:
    v11 = (PVOID *)RealSuccessor(v14, MatchFunction, MatchData);
LABEL_7:
    if ( !v11 )
      return 0LL;
    v15 = guard_dispatch_icall_no_overrides(Table, v11 + 4);
  }
  while ( v15 == -1073741198 );
  *v9 = v11;
  if ( !v15 )
    v13 = v11 + 4;
  *v12 = Table->DeleteCount;
  return v13;
}
