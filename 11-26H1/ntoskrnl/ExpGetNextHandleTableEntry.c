/*
 * XREFs of ExpGetNextHandleTableEntry @ 0x140A4DF70
 * Callers:
 *     ExQueryProcessHandleInformation @ 0x140A4DD2C (ExQueryProcessHandleInformation.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x14092AE90 (ExpLookupHandleTableEntry.c)
 */

__int64 __fastcall ExpGetNextHandleTableEntry(unsigned int *a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // r10
  __int64 v4; // r9
  __int64 result; // rax
  _QWORD *v6; // r10

  v3 = a3;
  if ( a2 )
  {
    v4 = *a3 + 4;
    if ( (*a3 ^ (unsigned __int64)v4) >= 0x400 )
      result = ExpLookupHandleTableEntry(a1, *a3 + 8);
    else
      result = a2 + 16;
    *v3 = v4;
  }
  else
  {
    result = ExpLookupHandleTableEntry(a1, 4LL);
    *v6 = 4LL;
  }
  return result;
}
