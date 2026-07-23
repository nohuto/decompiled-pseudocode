/*
 * XREFs of RtlEnumerateGenericTableLikeADirectory @ 0x180146920
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x1800BB810 (FindNodeOrParent.c)
 *     RealSuccessor @ 0x1800D7398 (RealSuccessor.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

PVOID __cdecl RtlEnumerateGenericTableLikeADirectory(
        PRTL_AVL_TABLE Table,
        PRTL_AVL_MATCH_FUNCTION MatchFunction,
        PVOID MatchData,
        ULONG NextFlag,
        PVOID *RestartKey,
        PULONG DeleteCount,
        PVOID Buffer)
{
  PVOID *v7; // r14
  void *v8; // rdi
  PVOID *v12; // rbx
  PULONG v13; // r12
  __int64 (__fastcall *v14)(PRTL_AVL_TABLE, PVOID *, PVOID); // r15
  int NodeOrParent; // eax
  PVOID *i; // rcx
  int v17; // eax

  v7 = RestartKey;
  v8 = 0LL;
  v12 = (PVOID *)*RestartKey;
  RestartKey = (PVOID *)*RestartKey;
  if ( !Table->NumberGenericTableElements )
  {
    *v7 = 0LL;
    return 0LL;
  }
  v13 = DeleteCount;
  v14 = (__int64 (__fastcall *)(PRTL_AVL_TABLE, PVOID *, PVOID))WinSqmCheckEscalationSetString;
  if ( MatchFunction )
    v14 = (__int64 (__fastcall *)(PRTL_AVL_TABLE, PVOID *, PVOID))MatchFunction;
  if ( *DeleteCount == Table->DeleteCount )
  {
    if ( v12 )
      goto LABEL_12;
  }
  else
  {
    RestartKey = 0LL;
  }
  NodeOrParent = FindNodeOrParent((__int64)Table, (__int64)Buffer, &RestartKey);
  if ( NodeOrParent == 1 )
  {
    v12 = RestartKey;
LABEL_12:
    if ( !NextFlag )
      goto LABEL_15;
    goto LABEL_13;
  }
  if ( NodeOrParent != 3 )
  {
    v12 = RestartKey;
    goto LABEL_15;
  }
  for ( i = RestartKey; ; i = v12 )
  {
    v12 = (PVOID *)RealSuccessor(i);
LABEL_15:
    if ( !v12 )
      break;
    v17 = v14(Table, v12 + 4, MatchData);
    if ( v17 != -1073741198 )
    {
      *v7 = v12;
      if ( !v17 )
        v8 = v12 + 4;
      *v13 = Table->DeleteCount;
      return v8;
    }
LABEL_13:
    ;
  }
  return 0LL;
}
