/*
 * XREFs of MWaitIdle @ 0x140003DD0
 * Callers:
 *     <none>
 * Callees:
 *     IssueVerw @ 0x14000E650 (IssueVerw.c)
 */

__int64 __fastcall MWaitIdle(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edx
  unsigned int v3; // ebx
  char *v5; // r8
  char v6; // al

  v2 = HIWORD(a2);
  v3 = 0;
  if ( (_WORD)v2 )
    IssueVerw((unsigned __int16)v2);
  v5 = *(char **)(a1 + 8);
  *v5 = 0;
  _mm_monitor(*(const void **)(a1 + 8), 0, 0);
  if ( *v5 )
  {
    return 257;
  }
  else
  {
    _mm_mwait(*(_DWORD *)(a1 + 4), *(_DWORD *)a1);
    v6 = *v5;
    *v5 = 1;
    if ( v6 == 1 )
      return 257;
  }
  return v3;
}
