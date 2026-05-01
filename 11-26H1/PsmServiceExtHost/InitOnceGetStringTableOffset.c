/*
 * XREFs of InitOnceGetStringTableOffset @ 0x180093280
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbFindFirstTag @ 0x1800930BC (SdbFindFirstTag.c)
 */

__int64 __fastcall InitOnceGetStringTableOffset(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int FirstTag; // eax
  _DWORD *v8; // rsi

  v3 = 0;
  if ( !a2 )
  {
    AslLogCallPrintf(
      1LL,
      "InitOnceGetStringTableOffset",
      777LL,
      "PDB was not supplied for InitOnceGetStringTableOffset");
    return 0LL;
  }
  if ( !a3 )
  {
    AslLogCallPrintf(
      1LL,
      "InitOnceGetStringTableOffset",
      783LL,
      "No return context was supplied for InitOnceGetStringTableOffset");
    return 0LL;
  }
  FirstTag = SdbFindFirstTag(a2, 0, 30721);
  v8 = (_DWORD *)(a2 + 2632);
  *v8 = FirstTag;
  if ( FirstTag )
  {
    *a3 = v8;
    return 1;
  }
  else
  {
    AslLogCallPrintf(1LL, "InitOnceGetStringTableOffset", 793LL, "No stringtable in DB");
  }
  return v3;
}
