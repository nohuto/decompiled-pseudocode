/*
 * XREFs of SdbTagIDToTagRef @ 0x14088BFF0
 * Callers:
 *     SdbGetKShimTagRef @ 0x14088814C (SdbGetKShimTagRef.c)
 *     SdbGetDatabaseMatchEx @ 0x1409D745C (SdbGetDatabaseMatchEx.c)
 *     SdbGetDatabaseMatch @ 0x140A37C6C (SdbGetDatabaseMatch.c)
 * Callees:
 *     SdbpFindLocalDatabaseByPDB @ 0x14088C5BC (SdbpFindLocalDatabaseByPDB.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbTagIDToTagRef(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v5; // esi
  unsigned int v6; // ebx
  int v7; // eax
  int v9[6]; // [rsp+20h] [rbp-18h] BYREF

  v9[0] = -1;
  v5 = a3;
  v6 = 0;
  if ( (unsigned int)SdbpFindLocalDatabaseByPDB(a1, a2, a3, v9) )
  {
    v6 = 1;
    v7 = v5 | (v9[0] << 28);
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbTagIDToTagRef", 310, (unsigned int)"Bad PDB");
    v7 = 0;
  }
  *a4 = v7;
  return v6;
}
