/*
 * XREFs of DbgMatchArg @ 0x140071678
 * Callers:
 *     DbgParseOneArg @ 0x140071754 (DbgParseOneArg.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DbgMatchArg(__int64 a1, const char **a2, _DWORD *a3)
{
  char *v6; // rax
  const char *v7; // rdx
  const char *v8; // rcx
  __int64 v9; // rax
  size_t v10; // rsi

  while ( *(_DWORD *)(a1 + 8) )
  {
    if ( !*(_QWORD *)a1 )
    {
      ++*a3;
      return a1 & -(__int64)(*(_DWORD *)(a1 + 8) != 0);
    }
    v6 = strchr("-/", **a2);
    v7 = *a2;
    if ( v6 )
      *a2 = ++v7;
    v8 = *(const char **)a1;
    v9 = -1LL;
    do
      ++v9;
    while ( v8[v9] );
    v10 = (unsigned int)v9;
    if ( (*(_DWORD *)(a1 + 12) & 1) != 0 && !strncmp(v8, v7, (unsigned int)v9)
      || (*(_DWORD *)(a1 + 12) & 1) == 0 && !_strnicmp(*(const char **)a1, *a2, v10) )
    {
      *a2 += v10;
      return a1 & -(__int64)(*(_DWORD *)(a1 + 8) != 0);
    }
    a1 += 40LL;
  }
  return a1 & -(__int64)(*(_DWORD *)(a1 + 8) != 0);
}
