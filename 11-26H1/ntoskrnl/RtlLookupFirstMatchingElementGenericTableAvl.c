/*
 * XREFs of RtlLookupFirstMatchingElementGenericTableAvl @ 0x1403C2150
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x1403C21F0 (FindNodeOrParent.c)
 *     RealPredecessor @ 0x1403C304C (RealPredecessor.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID __stdcall RtlLookupFirstMatchingElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer, PVOID *RestartKey)
{
  __int64 v7; // rbx
  __int64 v8; // rsi
  void *v9; // rbp
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  *RestartKey = 0LL;
  v10 = 0LL;
  if ( (unsigned int)FindNodeOrParent(Table, Buffer, &v10) != 1 )
    return 0LL;
  v7 = v10;
  do
  {
    v8 = v7;
    v9 = (void *)v7;
    v7 = RealPredecessor(v7);
  }
  while ( v7 && (unsigned int)guard_dispatch_icall_no_overrides(Table, Buffer) == 2 );
  *RestartKey = v9;
  return (PVOID)(v8 + 32);
}
