/*
 * XREFs of SdbGetIndex @ 0x180092C5C
 * Callers:
 *     SdbFindFirstDWORDIndexedTag @ 0x180092BA8 (SdbFindFirstDWORDIndexedTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetIndex(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v5; // edi
  int v6; // eax
  int v7; // r8d
  __int64 v8; // rdx
  _WORD *i; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v5 = 0;
  if ( a4 )
    *a4 = 0;
  v6 = RtlRunOnceExecuteOnce(a1 + 2616, InitOnceScanIndexes, a1, &v11);
  if ( v6 >= 0 )
  {
    v7 = 0;
    v8 = 0LL;
    for ( i = (_WORD *)(v11 + 6); v8 < 64 && *(i - 1); i += 20 )
    {
      if ( *(i - 1) == 28685 && *i == 16405 )
      {
        v5 = *(_DWORD *)(v11 + 40LL * v7);
        if ( a4 )
          *a4 = *(_DWORD *)(v11 + 40LL * v7 + 32);
        return v5;
      }
      ++v7;
      ++v8;
    }
  }
  else
  {
    AslLogCallPrintf(1LL, "SdbGetIndex", 1461LL, "RtlRunOnceExecuteOnce failed for InitOnceScanIndexes [%x]", v6);
  }
  return v5;
}
