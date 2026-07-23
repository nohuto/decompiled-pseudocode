/*
 * XREFs of LdrpDependencyExist @ 0x180119230
 * Callers:
 *     LdrpLoadContextReplaceModule @ 0x18007C6F0 (LdrpLoadContextReplaceModule.c)
 * Callees:
 *     <none>
 */

char __fastcall LdrpDependencyExist(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  if ( a1 != a2
    && (*(_DWORD *)(a2 + 56) != 9 || *(_DWORD *)(a2 + 24) != -1 && (*(_DWORD *)(*(_QWORD *)a2 - 56LL) & 0x20) == 0) )
  {
    v2 = *(_QWORD **)(a1 + 40);
    if ( !v2 )
      return 0;
    v3 = v2;
    while ( 1 )
    {
      v3 = (_QWORD *)*v3;
      if ( v3[1] == a2 )
        break;
      if ( v3 == v2 )
        return 0;
    }
  }
  return 1;
}
