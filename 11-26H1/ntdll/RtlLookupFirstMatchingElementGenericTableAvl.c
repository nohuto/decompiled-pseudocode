/*
 * XREFs of RtlLookupFirstMatchingElementGenericTableAvl @ 0x1800BB770
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x1800BB810 (FindNodeOrParent.c)
 *     RealPredecessor @ 0x1800BBB90 (RealPredecessor.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

PVOID __cdecl RtlLookupFirstMatchingElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer, PVOID *RestartKey)
{
  char *v6; // rbx
  char *v7; // rsi
  char *v8; // rbp
  __int64 v9; // rax
  char *v11; // [rsp+50h] [rbp+18h] BYREF

  *RestartKey = 0LL;
  v11 = 0LL;
  if ( (unsigned int)FindNodeOrParent(Table, Buffer, &v11) != 1 )
    return 0LL;
  v6 = v11;
  do
  {
    v7 = v6;
    v8 = v6;
    v9 = RealPredecessor(v6);
    v6 = (char *)v9;
  }
  while ( v9 && Table->CompareRoutine(Table, Buffer, (void *)(v9 + 32)) == GenericEqual );
  *RestartKey = v8;
  return v7 + 32;
}
