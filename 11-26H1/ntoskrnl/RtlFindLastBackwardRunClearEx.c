/*
 * XREFs of RtlFindLastBackwardRunClearEx @ 0x1404ACD90
 * Callers:
 *     MiReduceMappedFileReadAhead @ 0x1404ACCEC (MiReduceMappedFileReadAhead.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlFindLastBackwardRunClearEx(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  const signed __int64 *v4; // r9
  const signed __int64 *i; // r8
  unsigned __int64 v6; // rcx
  const signed __int64 *j; // r8

  if ( *a1 <= a2 )
  {
    *a3 = a2;
    return 0LL;
  }
  else
  {
    v4 = (const signed __int64 *)a1[1];
    i = (const signed __int64 *)((char *)v4 + 4 * (a2 >> 5));
    if ( i != v4 && (*(_DWORD *)i | ~*((_DWORD *)qword_1400195D0 + (a2 & 0x1F) + 1)) == 0xFFFFFFFF )
    {
      a2 = (a2 & 0xFFFFFFFFFFFFFFE0uLL) - 1;
      for ( i = (const signed __int64 *)((char *)i - 4);
            i > v4 && *(_DWORD *)i == -1;
            i = (const signed __int64 *)((char *)i - 4) )
      {
        a2 -= 32LL;
      }
    }
    while ( a2 != -1LL && _bittest64(v4, a2) == 1 )
      --a2;
    v6 = a2;
    if ( (*((_DWORD *)qword_1400195D0 + (a2 & 0x1F)) & *(_DWORD *)i) == 0 )
    {
      v6 = (a2 & 0xFFFFFFFFFFFFFFE0uLL) - 1;
      for ( j = (const signed __int64 *)((char *)i - 4);
            j > v4 && !*(_DWORD *)j;
            j = (const signed __int64 *)((char *)j - 4) )
      {
        v6 -= 32LL;
      }
    }
    while ( v6 != -1LL && !_bittest64(v4, v6) )
      --v6;
    *a3 = v6 + 1;
    return a2 - v6;
  }
}
