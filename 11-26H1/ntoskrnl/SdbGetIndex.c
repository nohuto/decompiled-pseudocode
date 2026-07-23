/*
 * XREFs of SdbGetIndex @ 0x1409D5FF0
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x1409D5500 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbFindFirstStringIndexedTag @ 0x1409D6D00 (SdbFindFirstStringIndexedTag.c)
 *     SdbpSearchDB @ 0x140A96E98 (SdbpSearchDB.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1409D46E0 (RtlRunOnceExecuteOnce.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetIndex(_RTL_RUN_ONCE *Parameter, __int16 a2, __int16 a3, _DWORD *a4)
{
  unsigned int v7; // edi
  int v8; // ecx
  __int64 v9; // r8
  _WORD *i; // rax
  __int16 v11; // r9
  __int64 v12; // rcx
  PVOID Context; // [rsp+50h] [rbp+8h] BYREF

  Context = 0LL;
  v7 = 0;
  if ( a4 )
    *a4 = 0;
  if ( RtlRunOnceExecuteOnce(Parameter + 327, (PRTL_RUN_ONCE_INIT_FN)InitOnceScanIndexes, Parameter, &Context) < 0 )
  {
    AslLogCallPrintf(1LL, (__int64)"SdbGetIndex");
  }
  else
  {
    v8 = 0;
    v9 = 0LL;
    for ( i = (char *)Context + 6; v9 < 64; i += 20 )
    {
      v11 = *(i - 1);
      if ( !v11 )
        break;
      if ( v11 == a2 && *i == a3 )
      {
        v12 = 5LL * v8;
        v7 = *((_DWORD *)Context + 2 * v12);
        if ( a4 )
          *a4 = *((_DWORD *)Context + 2 * v12 + 8);
        return v7;
      }
      ++v8;
      ++v9;
    }
  }
  return v7;
}
