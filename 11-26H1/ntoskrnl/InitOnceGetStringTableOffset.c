/*
 * XREFs of InitOnceGetStringTableOffset @ 0x140B24390
 * Callers:
 *     <none>
 * Callees:
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall InitOnceGetStringTableOffset(PRTL_RUN_ONCE a1, char *a2, PVOID *a3)
{
  unsigned int v3; // ebx
  int FirstTag; // eax
  _DWORD *v7; // rsi

  v3 = 0;
  if ( a2 && a3 )
  {
    FirstTag = SdbFindFirstTag((__int64)a2, 0LL, 30721);
    v7 = a2 + 2632;
    *v7 = FirstTag;
    if ( FirstTag )
    {
      *a3 = v7;
      return 1;
    }
    else
    {
      AslLogCallPrintf(1LL, (__int64)"InitOnceGetStringTableOffset");
    }
    return v3;
  }
  else
  {
    AslLogCallPrintf(1LL, (__int64)"InitOnceGetStringTableOffset");
    return 0LL;
  }
}
