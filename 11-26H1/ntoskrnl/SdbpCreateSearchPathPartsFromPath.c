/*
 * XREFs of SdbpCreateSearchPathPartsFromPath @ 0x1409D8280
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x14088AFA8 (SdbpInitializeSearchDBContext.c)
 * Callees:
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 */

__int64 __fastcall SdbpCreateSearchPathPartsFromPath(const wchar_t *a1, _QWORD *a2)
{
  const wchar_t *v3; // rdi
  unsigned int v4; // r15d
  const wchar_t *v5; // rbx
  int i; // esi
  wchar_t *v7; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // r8
  __int64 v11; // rax
  const wchar_t *j; // rdx
  wchar_t v13; // ax
  __int64 v14; // rcx

  v3 = a1;
  v4 = 0;
  v5 = 0LL;
  if ( !a1 )
    goto LABEL_5;
  for ( i = *a1 != 0; ; ++i )
  {
    v7 = wcschr(a1, 0x3Bu);
    if ( !v7 )
      break;
    a1 = v7 + 1;
  }
  v8 = (_DWORD *)AslAlloc();
  v9 = v8;
  if ( !v8 )
  {
LABEL_5:
    AslLogCallPrintf(1LL, (__int64)"SdbpCreateSearchPathPartsFromPath");
    return 0LL;
  }
  *v8 = i;
  v11 = -1LL;
  do
    ++v11;
  while ( v3[v11] );
  for ( j = &v3[v11]; j >= v3; --j )
  {
    v13 = *j;
    if ( *j == 92 )
    {
      if ( !v5 )
        v5 = j;
LABEL_15:
      if ( v3 != j )
        continue;
      goto LABEL_16;
    }
    if ( v13 != 59 )
      goto LABEL_15;
LABEL_16:
    if ( v5 )
    {
      if ( v13 == 59 )
        ++j;
      v14 = 6LL * v4++;
      v9[2 * v14 + 4] = v5 - j + 1;
      v5 = 0LL;
      *(_QWORD *)&v9[2 * v14 + 2] = j;
    }
  }
  *a2 = v9;
  return 1LL;
}
