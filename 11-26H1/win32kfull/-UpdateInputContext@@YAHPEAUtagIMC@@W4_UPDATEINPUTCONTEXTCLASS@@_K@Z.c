/*
 * XREFs of ?UpdateInputContext@@YAHPEAUtagIMC@@W4_UPDATEINPUTCONTEXTCLASS@@_K@Z @ 0x1402019E0
 * Callers:
 *     NtUserUpdateInputContext @ 0x140201930 (NtUserUpdateInputContext.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall UpdateInputContext(__int64 a1, int a2, __int64 a3)
{
  __int64 v7; // rax
  int v8; // ecx

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL) != *((_QWORD *)PtiCurrent(a1) + 57) )
  {
    v8 = 5;
LABEL_10:
    UserSetLastError(v8);
    return 0LL;
  }
  if ( !a2 )
  {
    v7 = *(_QWORD *)(a1 + 40);
    if ( !*(_QWORD *)(v7 + 24) )
    {
      *(_QWORD *)(v7 + 24) = a3;
      return 1LL;
    }
    v8 = 1247;
    goto LABEL_10;
  }
  if ( a2 == 1 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 32LL) = a3;
    return 1LL;
  }
  return 0LL;
}
