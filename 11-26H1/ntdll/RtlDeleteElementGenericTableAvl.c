/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x1800BDE70
 * Callers:
 *     <none>
 * Callees:
 *     DeleteNodeFromTree @ 0x1800BDF90 (DeleteNodeFromTree.c)
 *     RealPredecessor @ 0x1800BE130 (RealPredecessor.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall RtlDeleteElementGenericTableAvl(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rax

  if ( !*(_DWORD *)(a1 + 44) )
    return 0;
  v4 = *(_QWORD *)(a1 + 16);
  while ( 1 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 72))(a1, a2, v4 + 32);
    if ( v5 )
      break;
    v6 = *(_QWORD *)(v4 + 8);
LABEL_5:
    v4 = v6;
    if ( !v6 )
      return 0;
  }
  if ( v5 == 1 )
  {
    v6 = *(_QWORD *)(v4 + 16);
    goto LABEL_5;
  }
  if ( v4 == *(_QWORD *)(a1 + 56) )
    *(_QWORD *)(a1 + 56) = RealPredecessor(v4);
  ++*(_DWORD *)(a1 + 64);
  DeleteNodeFromTree(a1, v4);
  --*(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  (*(void (__fastcall **)(__int64, __int64))(a1 + 88))(a1, v4);
  return 1;
}
