/*
 * XREFs of KsepDbCacheReadDeviceInternal @ 0x1409D767C
 * Callers:
 *     KsepDbCacheReadDevice @ 0x1409D6A58 (KsepDbCacheReadDevice.c)
 * Callees:
 *     KsepDbReadKData @ 0x1407BFE40 (KsepDbReadKData.c)
 *     KsepCacheDeviceInsertData @ 0x1407C1AEC (KsepCacheDeviceInsertData.c)
 *     SdbTagRefToTagID @ 0x14088C068 (SdbTagRefToTagID.c)
 *     SdbFindNextTag @ 0x1409D4254 (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 *     SdbGetDatabaseMatchEx @ 0x1409D745C (SdbGetDatabaseMatchEx.c)
 *     KsepDbReadKFlag @ 0x140B6AC94 (KsepDbReadKFlag.c)
 */

__int64 __fastcall KsepDbCacheReadDeviceInternal(__int64 a1, __int64 a2, const wchar_t *a3, __int64 a4)
{
  unsigned int DatabaseMatch; // eax
  __int64 result; // rax
  __int64 v8; // rbx
  unsigned int i; // eax
  unsigned int v10; // edi
  __int64 v11; // r9
  unsigned int j; // eax
  unsigned int v13; // edi
  __int64 v14; // r9
  unsigned int v15; // [rsp+40h] [rbp-40h] BYREF
  __int64 v16; // [rsp+48h] [rbp-38h] BYREF
  __int128 v17; // [rsp+50h] [rbp-30h] BYREF
  __int128 v18; // [rsp+60h] [rbp-20h]
  __int64 v19; // [rsp+70h] [rbp-10h]

  v15 = 0;
  v16 = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  DatabaseMatch = SdbGetDatabaseMatchEx(a1, 1, a3, a4, 0LL, 0LL, a2);
  if ( !DatabaseMatch || !(unsigned int)SdbTagRefToTagID(a1, DatabaseMatch, &v16, (int *)&v15) )
    return 3221226021LL;
  v8 = v16;
  for ( i = SdbFindFirstTag(v16, v15, 28691); ; i = SdbFindNextTag(v8, v15, v10, v11) )
  {
    v10 = i;
    if ( !i )
      break;
    result = KsepDbReadKFlag(v8, i, &v17);
    if ( (int)result < 0 )
      return result;
    result = KsepCacheDeviceInsertData(a4, v17, (const void *)v18, SDWORD2(v17), HIDWORD(v17));
    if ( (int)result < 0 )
      return result;
  }
  for ( j = SdbFindFirstTag(v8, v15, 28712); ; j = SdbFindNextTag(v8, v15, v13, v14) )
  {
    v13 = j;
    if ( !j )
      break;
    result = KsepDbReadKData(v8, j, (__int64)&v17);
    if ( (int)result < 0 )
      return result;
    result = KsepCacheDeviceInsertData(a4, v17, (const void *)v18, SDWORD2(v17), HIDWORD(v17));
    if ( (int)result < 0 )
      return result;
  }
  return 0LL;
}
