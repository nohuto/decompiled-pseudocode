/*
 * XREFs of InitOnceScanIndexes @ 0x1409D48C0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SdbFindNextTag @ 0x1409D4254 (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 *     SdbGetTagFromTagID @ 0x1409D4F94 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     SdbReadWORDTag @ 0x1409D53C0 (SdbReadWORDTag.c)
 *     SdbReadDWORDTag @ 0x1409D5464 (SdbReadDWORDTag.c)
 */

__int64 __fastcall InitOnceScanIndexes(PRTL_RUN_ONCE a1, _DWORD *a2, PVOID *a3)
{
  unsigned int v3; // esi
  char *v6; // r12
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // eax
  unsigned int v10; // ebp
  unsigned int i; // eax
  unsigned int v12; // r14d
  unsigned int FirstTag; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // r9
  int v17; // edx
  __int64 v18; // r9
  __int64 v19; // rax
  const char *v21; // r9
  int v22; // r8d
  const char *v23; // r9
  int v24; // r8d

  v3 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      v6 = (char *)(a2 + 12);
      memset_0(a2 + 12, 0, 0xA00uLL);
      v9 = a2[5];
      v10 = v9 > 0xC ? 0xC : 0;
      if ( v9 <= 0xC )
      {
        v21 = "Failed to get the child index from root";
        v22 = 1359;
      }
      else
      {
        if ( (unsigned __int16)SdbGetTagFromTagID(a2, v10, v7, v8) != 30722 )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"InitOnceScanIndexes",
            1364,
            (unsigned int)"Root child tag is not index tagid 0x%lx");
          return v3;
        }
        a2[659] = 0;
        for ( i = SdbFindFirstTag(a2, v10, 30723LL); ; i = SdbFindNextTag((__int64)a2, v10, v12, v18) )
        {
          v12 = i;
          if ( !i )
          {
            *a3 = v6;
            return 1;
          }
          if ( a2[659] == 64 )
          {
            v21 = "Too many indexes in file: recompile and increase SDB_MAX_INDEXES";
            v22 = 1379;
            goto LABEL_18;
          }
          FirstTag = SdbFindFirstTag(a2, i, 14338LL);
          if ( !FirstTag )
            break;
          LOWORD(a2[10 * a2[659] + 13]) = SdbReadWORDTag(a2, FirstTag, 0LL);
          v14 = SdbFindFirstTag(a2, v12, 14339LL);
          if ( !v14 )
          {
            v21 = "Index missing TAG_INDEX_KEY";
            v22 = 1395;
            goto LABEL_18;
          }
          HIWORD(a2[10 * a2[659] + 13]) = SdbReadWORDTag(a2, v14, 0LL);
          v15 = SdbFindFirstTag(a2, v12, 16406LL);
          if ( v15 )
            a2[10 * a2[659] + 20] = SdbReadDWORDTag(a2, v15, 0LL, v16);
          else
            a2[10 * a2[659] + 20] = 0;
          v17 = SdbFindFirstTag(a2, v12, 38913LL);
          v19 = (unsigned int)a2[659];
          if ( !v17 )
          {
            LOWORD(a2[10 * v19 + 13]) = 0;
            v21 = "Index missing TAG_INDEX_BITS";
            v22 = 1412;
            goto LABEL_18;
          }
          a2[10 * v19 + 12] = v17;
          ++a2[659];
        }
        v21 = "Index missing TAG_INDEX_TAG";
        v22 = 1386;
      }
LABEL_18:
      AslLogCallPrintf(1, (unsigned int)"InitOnceScanIndexes", v22, (_DWORD)v21);
      return v3;
    }
    v23 = "No return context was supplied for InitOnceScanIndexes";
    v24 = 1344;
  }
  else
  {
    v23 = "PDB was not supplied for InitOnceScanIndexes";
    v24 = 1338;
  }
  AslLogCallPrintf(1, (unsigned int)"InitOnceScanIndexes", v24, (_DWORD)v23);
  return 0LL;
}
