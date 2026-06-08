/*
 * XREFs of MWaitIdle @ 0x140007E10
 * Callers:
 *     <none>
 * Callees:
 *     IssueVerw @ 0x140010360 (IssueVerw.c)
 */

__int64 __fastcall MWaitIdle(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  char *v4; // r8
  char v5; // al
  unsigned int v6; // r8d

  v2 = a2;
  if ( (_WORD)a2 )
  {
    a2 = 0LL;
    __writemsr(0x48u, 0LL);
  }
  if ( HIWORD(v2) )
    IssueVerw(HIWORD(v2), a2);
  v4 = *(char **)(a1 + 8);
  *v4 = 0;
  _mm_monitor(*(const void **)(a1 + 8), 0, 0);
  if ( *v4 )
  {
    v6 = 257;
  }
  else
  {
    _mm_mwait(*(_DWORD *)(a1 + 4), *(_DWORD *)a1);
    v5 = *v4;
    *v4 = 1;
    v6 = 0;
    if ( v5 == 1 )
      v6 = 257;
  }
  if ( (_WORD)v2 )
    __writemsr(0x48u, (unsigned __int16)v2);
  else
    _mm_lfence();
  return v6;
}
