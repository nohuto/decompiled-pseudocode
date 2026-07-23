/*
 * XREFs of SdbOpenDatabaseEx @ 0x140887068
 * Callers:
 *     SdbpOpenLocalDatabaseEx @ 0x14088C60C (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SdbGetMergeRedirectPath @ 0x140886EF0 (SdbGetMergeRedirectPath.c)
 *     SdbpOpenCompressedDatabase @ 0x14088D444 (SdbpOpenCompressedDatabase.c)
 *     AslFileMappingEnsureMappedAs @ 0x14088EEB8 (AslFileMappingEnsureMappedAs.c)
 *     AslFileMappingGetViewBase @ 0x14088F394 (AslFileMappingGetViewBase.c)
 *     AslPathGetFileNamePart @ 0x14088FAA0 (AslPathGetFileNamePart.c)
 *     SdbpReadMappedData @ 0x1409D4FE8 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslFileMappingDelete @ 0x1409D772C (AslFileMappingDelete.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x1409D87A8 (SdbpValidateAndApplyCompatFlags.c)
 *     AslFileMappingCreate @ 0x140A37E7C (AslFileMappingCreate.c)
 */

_QWORD *__fastcall SdbOpenDatabaseEx(__int64 a1)
{
  const wchar_t *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  int MergeRedirectPath; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // esi
  const char *v10; // r9
  int v11; // r8d
  int v12; // ecx
  const char *v13; // r9
  int v14; // r8d
  __int64 v15; // rsi
  __int64 v17; // rcx
  int v18; // [rsp+20h] [rbp-40h]
  const wchar_t *v19; // [rsp+28h] [rbp-38h]
  int v20; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+38h] [rbp-28h] BYREF
  _QWORD *v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF
  int v24; // [rsp+50h] [rbp-10h]

  v23 = 0LL;
  v24 = 0;
  v20 = 0;
  v2 = (const wchar_t *)a1;
  if ( !a1 )
    v2 = &cchOriginalDestLength;
  v19 = v2;
  v18 = 0;
  AslLogCallPrintf(3, (unsigned int)"SdbOpenDatabaseEx", 2407, (unsigned int)"Flags:%d; DatabasePath:%ws");
  v4 = (_QWORD *)AslAlloc(v3, 2688LL);
  v22 = v4;
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0xA80uLL);
    v21 = 0LL;
    MergeRedirectPath = SdbGetMergeRedirectPath(&v21, &v20, 1, a1);
    v9 = MergeRedirectPath;
    if ( MergeRedirectPath < 0 )
    {
      if ( MergeRedirectPath == -1073741772 )
        goto LABEL_15;
      v10 = "SdbGetMergeRedirectPath failed to check for sdb merge redirect [%x]";
      v11 = 2433;
      v12 = 3;
    }
    else
    {
      if ( !v21 )
      {
        v9 = -1073741772;
        goto LABEL_15;
      }
      if ( v20 )
      {
        AslPathGetFileNamePart(a1);
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbOpenDatabaseEx",
          2445,
          (unsigned int)"Handled Error: MergeSdb staged deletion feature was used to prevent sdb mismatch error. SdbName: [%ls].");
      }
      MergeRedirectPath = AslFileMappingCreate((_DWORD)v5, v21, 0, 0, 0LL);
      v9 = MergeRedirectPath;
      if ( MergeRedirectPath >= 0 )
      {
LABEL_15:
        if ( v21 )
          AslFree(v8, v21);
        if ( v9 >= 0 && *v5 || (int)AslFileMappingCreate((_DWORD)v5, a1, 0, 0, 0LL) >= 0 )
        {
          v15 = *(_QWORD *)(*v5 + 24LL);
          if ( (unsigned __int64)(v15 - 42) > 0xFFFFFD5 )
          {
            v13 = "Failed to open SDB - File size too large or small.";
            v14 = 2495;
            goto LABEL_36;
          }
          if ( (int)AslFileMappingEnsureMappedAs(*v5, v7) >= 0 )
          {
            *((_DWORD *)v5 + 4) = 0;
            *((_DWORD *)v5 + 5) = v15;
            v5[1] = AslFileMappingGetViewBase(*v5);
            if ( (unsigned int)SdbpReadMappedData(v5, 0LL, &v23, 12LL, v18, v19) )
            {
              if ( v24 == 1717724275 )
              {
                if ( !(unsigned int)SdbpValidateAndApplyCompatFlags(v5, &v23, 0LL) )
                  goto LABEL_37;
              }
              else
              {
                if ( v24 != 1717724282 )
                {
                  v13 = "Magic does not match a valid value: 0x%lx";
                  v14 = 2527;
                  goto LABEL_36;
                }
                if ( !(unsigned int)SdbpOpenCompressedDatabase(&v22, 0LL, 0LL) )
                {
                  AslLogCallPrintf(
                    1,
                    (unsigned int)"SdbOpenDatabaseEx",
                    2533,
                    (unsigned int)"SdbpOpenCompressedDatabase failed to open compressed database.");
                  v5 = v22;
                  goto LABEL_37;
                }
                return v22;
              }
              return v5;
            }
            v13 = "Failed to read database header";
            v14 = 2514;
          }
          else
          {
            v13 = "Failed to map SDB [%x]";
            v14 = 2501;
          }
        }
        else
        {
          v13 = "Failed to create file mapping [%x]";
          v14 = 2486;
        }
LABEL_36:
        AslLogCallPrintf(1, (unsigned int)"SdbOpenDatabaseEx", v14, (_DWORD)v13);
LABEL_37:
        if ( v5 )
        {
          AslFileMappingDelete(*v5);
          AslFree(v17, v5);
        }
        return 0LL;
      }
      v10 = "Failed to create file mapping for redirected SDB file [%x]";
      v11 = 2464;
      v12 = 1;
    }
    v18 = MergeRedirectPath;
    AslLogCallPrintf(v12, (unsigned int)"SdbOpenDatabaseEx", v11, (_DWORD)v10);
    goto LABEL_15;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbOpenDatabaseEx", 2415, (unsigned int)"Failed to allocate DB structure");
  return 0LL;
}
