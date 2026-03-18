/*
 * XREFs of SdbGetDatabaseMatchEx @ 0x1409E57D4
 * Callers:
 *     KsepDbGetDriverShimsInternal @ 0x1409E47C0 (KsepDbGetDriverShimsInternal.c)
 *     KsepDbCacheReadDeviceInternal @ 0x1409E5724 (KsepDbCacheReadDeviceInternal.c)
 * Callees:
 *     wcsrchr @ 0x140538350 (wcsrchr.c)
 *     SdbpFindFirstTagWithoutIndex @ 0x140883F24 (SdbpFindFirstTagWithoutIndex.c)
 *     SdbpFindFirstWildcardTagWithoutIndex @ 0x140883FE0 (SdbpFindFirstWildcardTagWithoutIndex.c)
 *     SdbpFindNextTagWithoutIndex @ 0x14088409C (SdbpFindNextTagWithoutIndex.c)
 *     SdbpFindNextWildcardTagWithoutIndex @ 0x140884118 (SdbpFindNextWildcardTagWithoutIndex.c)
 *     SdbTagIDToTagRef @ 0x140885BF0 (SdbTagIDToTagRef.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1409E4454 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckKObject @ 0x1409E4A54 (SdbpCheckKObject.c)
 *     SdbFindFirstStringIndexedTag @ 0x1409E6084 (SdbFindFirstStringIndexedTag.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1409E7480 (SdbpFindFirstIndexedWildCardTag.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 *     SdbpFindMatchingName @ 0x140B27CD8 (SdbpFindMatchingName.c)
 *     SdbpGetNextIndexedRecord @ 0x140B27DC8 (SdbpGetNextIndexedRecord.c)
 */

__int64 __fastcall SdbGetDatabaseMatchEx(
        __int64 a1,
        int a2,
        const wchar_t *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  unsigned __int16 v9; // r15
  const WCHAR *v10; // r12
  wchar_t *v11; // rbx
  __int64 v12; // rdi
  __int64 *v13; // r13
  void *v14; // rdi
  unsigned int FirstStringIndexedTag; // eax
  unsigned int k; // r14d
  unsigned int m; // eax
  unsigned int v18; // ebx
  wchar_t *v20; // rax
  unsigned int NextIndexedRecord; // eax
  unsigned int i; // eax
  int v23; // r8d
  unsigned int v24; // r14d
  unsigned int j; // eax
  unsigned int v26; // r14d
  __int64 v27[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v28; // [rsp+50h] [rbp-20h]
  __int64 v29; // [rsp+60h] [rbp-10h]
  unsigned int v30; // [rsp+A8h] [rbp+38h] BYREF

  v29 = 0LL;
  *(_OWORD *)v27 = 0LL;
  v28 = 0LL;
  if ( a2 )
  {
    v9 = 28698;
    v10 = 0LL;
LABEL_3:
    v11 = (wchar_t *)a3;
    goto LABEL_4;
  }
  v9 = 28700;
  v10 = a3;
  v20 = wcsrchr(a3, 0x5Cu);
  if ( !v20 )
    goto LABEL_3;
  v11 = v20 + 1;
LABEL_4:
  v12 = *(_QWORD *)(a1 + 16);
  v13 = a7;
  v30 = 0;
  if ( v12 )
  {
    for ( i = SdbpFindFirstTagWithoutIndex(v12, v9, 0x6001u, v11, (__int64)v27);
          ;
          i = SdbpFindNextTagWithoutIndex(v12, (__int64)v27) )
    {
      v24 = i;
      if ( !i )
      {
        for ( j = SdbpFindFirstWildcardTagWithoutIndex(v12, v9, 0x600Bu, v11, (__int64)v27);
              ;
              j = SdbpFindNextWildcardTagWithoutIndex(v12, (__int64)v27) )
        {
          v26 = j;
          if ( !j )
            break;
          if ( (unsigned int)SdbpCheckKObject(a1, v12, j, v10, (void *)0xFFFFFFFFFFFFFFFFLL, a5, a6, v13) )
          {
            if ( (unsigned int)SdbTagIDToTagRef(a1, v12, v26, (int *)&v30) )
              return v30;
            v23 = 7132;
            goto LABEL_35;
          }
        }
        goto LABEL_5;
      }
      if ( (unsigned int)SdbpCheckKObject(a1, v12, i, v10, (void *)0xFFFFFFFFFFFFFFFFLL, a5, a6, v13) )
        break;
    }
    if ( (unsigned int)SdbTagIDToTagRef(a1, v12, v24, (int *)&v30) )
      return v30;
    v23 = 7110;
  }
  else
  {
LABEL_5:
    v14 = *(void **)(a1 + 8);
    FirstStringIndexedTag = SdbFindFirstStringIndexedTag(v14, v9, 24577LL, v11, v27);
LABEL_6:
    for ( k = FirstStringIndexedTag; ; k = 0 )
    {
      if ( !k )
      {
        for ( m = SdbpFindFirstIndexedWildCardTag(v14, (__int64)v27);
              ;
              m = SdbpFindNextIndexedWildCardTag((__int64)v14, (unsigned int *)v27) )
        {
          v18 = m;
          if ( !m )
            break;
          if ( (unsigned int)SdbpCheckKObject(a1, (__int64)v14, m, v10, (void *)0xFFFFFFFFFFFFFFFFLL, a5, a6, v13) )
          {
            if ( (unsigned int)SdbTagIDToTagRef(a1, (__int64)v14, v18, (int *)&v30) )
              return v30;
            v23 = 7189;
            goto LABEL_35;
          }
        }
        return v30;
      }
      if ( (unsigned int)SdbpCheckKObject(a1, (__int64)v14, k, v10, (void *)0xFFFFFFFFFFFFFFFFLL, a5, a6, v13) )
        break;
      NextIndexedRecord = SdbpGetNextIndexedRecord(v14, LODWORD(v27[0]), v27);
      if ( NextIndexedRecord )
      {
        FirstStringIndexedTag = SdbpFindMatchingName(v14, NextIndexedRecord, v27);
        goto LABEL_6;
      }
    }
    if ( (unsigned int)SdbTagIDToTagRef(a1, (__int64)v14, k, (int *)&v30) )
      return v30;
    v23 = 7164;
  }
LABEL_35:
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbGetDatabaseMatchEx",
    v23,
    (unsigned int)"Failed to convert tiKObject to trKObject");
  return v30;
}
