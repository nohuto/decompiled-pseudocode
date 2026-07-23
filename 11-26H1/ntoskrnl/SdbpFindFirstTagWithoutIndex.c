/*
 * XREFs of SdbpFindFirstTagWithoutIndex @ 0x14088A324
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x1409D745C (SdbGetDatabaseMatchEx.c)
 * Callees:
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A973CC (SdbpFindFirstNamedTagHelper.c)
 */

__int64 __fastcall SdbpFindFirstTagWithoutIndex(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        wchar_t *a4,
        __int64 a5)
{
  int v8; // ebp
  __int64 result; // rax

  *(_OWORD *)a5 = 0LL;
  v8 = a1;
  *(_OWORD *)(a5 + 16) = 0LL;
  *(_QWORD *)(a5 + 32) = 0LL;
  if ( (unsigned int)SdbFindFirstTag(a1, 0LL, 28673LL) )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpFindFirstTagWithoutIndex", 5678, (unsigned int)"No DATABASE tag found");
    return 0LL;
  }
  else
  {
    *(_QWORD *)(a5 + 32) = a4;
    *(_WORD *)(a5 + 12) = a3;
    result = SdbpFindFirstNamedTagHelper(v8, 0, a2, a3, a4, 0);
    *(_DWORD *)(a5 + 4) = result;
  }
  return result;
}
