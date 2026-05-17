/*
 * XREFs of RtlLookupFirstMatchingElementGenericTableAvl @ 0x1800BDD10
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x1800BDDB0 (FindNodeOrParent.c)
 *     RealPredecessor @ 0x1800BE130 (RealPredecessor.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlLookupFirstMatchingElementGenericTableAvl(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v11 = 0LL;
  if ( (unsigned int)FindNodeOrParent(a1, a2, &v11) != 1 )
    return 0LL;
  v6 = v11;
  do
  {
    v7 = v6;
    v8 = v6;
    v9 = RealPredecessor(v6);
    v6 = v9;
  }
  while ( v9 && (*(unsigned int (__fastcall **)(__int64, __int64, __int64))(a1 + 72))(a1, a2, v9 + 32) == 2 );
  *a3 = v8;
  return v7 + 32;
}
