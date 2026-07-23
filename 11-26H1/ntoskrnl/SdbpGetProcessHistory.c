/*
 * XREFs of SdbpGetProcessHistory @ 0x14088C140
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x14088AFA8 (SdbpInitializeSearchDBContext.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     AslEnvVarQuery @ 0x140891A64 (AslEnvVarQuery.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 */

_WORD *__fastcall SdbpGetProcessHistory(__int64 a1, _WORD *a2, _WORD *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // r15d
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rbp
  _WORD *v12; // rdi
  _WORD *v13; // r14
  _WORD *result; // rax
  _WORD *v15; // rcx
  _WORD *v16; // rdi
  size_t v17; // rbx
  _WORD *v18; // rdi

  v5 = -1LL;
  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  do
    ++v5;
  while ( a3[v5] );
  v8 = AslEnvVarQuery(a1, L"__PROCESS_HISTORY", 17LL);
  v9 = v5 + v6;
  if ( v8 == -1073741789 )
    v10 = (unsigned int)(v9 + 2);
  else
    v10 = (unsigned int)(v9 + 1);
  v11 = 2 * v10;
  v12 = (_WORD *)AslAlloc(v7, 2 * v10);
  v13 = v12;
  if ( v12 )
  {
    *v12 = 0;
    if ( v8 == -1073741789 && (int)AslEnvVarQuery(a1, L"__PROCESS_HISTORY", 17LL) >= 0 )
    {
      v15 = &v12[v11];
      v16 = v15 - 1;
      if ( *(v15 - 1) != 59 )
      {
        v16 = &v13[v11];
        *v15 = 59;
      }
      v12 = v16 + 1;
    }
    v17 = (unsigned int)v6;
    memmove(v12, a2, v17 * 2);
    v18 = &v12[v17];
    memmove(v18, a3, 2LL * (unsigned int)v5);
    result = v13;
    v18[(unsigned int)v5] = 0;
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetProcessHistory",
      3449,
      (unsigned int)"Unable to allocate process history buffer");
    return 0LL;
  }
  return result;
}
