/*
 * XREFs of PipDependencyGraphDepthFirstSearch @ 0x1404B8FA0
 * Callers:
 *     PipFindDependencyNodePath @ 0x1404B8F0C (PipFindDependencyNodePath.c)
 *     PipDependencyGraphDepthFirstSearch @ 0x1404B8FA0 (PipDependencyGraphDepthFirstSearch.c)
 * Callees:
 *     PipDependencyGraphDepthFirstSearch @ 0x1404B8FA0 (PipDependencyGraphDepthFirstSearch.c)
 */

char __fastcall PipDependencyGraphDepthFirstSearch(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  _QWORD *v7; // r14
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  _QWORD *v10; // r15
  int v11; // eax

  *a3 = 0;
  *a4 = 0;
  if ( a1 == a2 )
    return 1;
  v7 = (_QWORD *)(a1 + 16);
  v8 = *(_QWORD **)(a1 + 16);
  while ( v8 != v7 )
  {
    v9 = v8[4];
    v10 = v8;
    v8 = (_QWORD *)*v8;
    if ( (unsigned __int8)PipDependencyGraphDepthFirstSearch(v9, a2, a3, a4) )
    {
      v11 = *((_DWORD *)v10 + 12);
      ++*a3;
      *a4 = v11;
      return 1;
    }
  }
  return 0;
}
