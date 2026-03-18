/*
 * XREFs of InitOnceGetStringTableOffset @ 0x140B21F90
 * Callers:
 *     <none>
 * Callees:
 *     SdbFindFirstTag @ 0x1409E8510 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 */

__int64 __fastcall InitOnceGetStringTableOffset(PRTL_RUN_ONCE RunOnce, char *Parameter, PVOID *Context)
{
  unsigned int v3; // ebx
  int FirstTag; // eax
  _DWORD *v7; // rsi

  v3 = 0;
  if ( Parameter && Context )
  {
    FirstTag = SdbFindFirstTag((__int64)Parameter, 0LL, 30721);
    v7 = Parameter + 2632;
    *v7 = FirstTag;
    if ( FirstTag )
    {
      *Context = v7;
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
