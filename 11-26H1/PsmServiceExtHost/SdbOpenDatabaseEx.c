/*
 * XREFs of SdbOpenDatabaseEx @ 0x18008DAA0
 * Callers:
 *     SdbInitDatabaseEx @ 0x18008FBFC (SdbInitDatabaseEx.c)
 *     SdbpOpenLocalDatabaseEx @ 0x18009015C (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbGetMergeRedirectPath @ 0x18008D65C (SdbGetMergeRedirectPath.c)
 *     SdbpReadMappedData @ 0x18008F444 (SdbpReadMappedData.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x18008F700 (SdbpValidateAndApplyCompatFlags.c)
 *     SdbpOpenCompressedDatabase @ 0x1800975B0 (SdbpOpenCompressedDatabase.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 *     AslFileMappingCreate @ 0x18009A09C (AslFileMappingCreate.c)
 *     AslFileMappingDelete @ 0x18009A30C (AslFileMappingDelete.c)
 *     AslFileMappingEnsureMappedAs @ 0x18009A458 (AslFileMappingEnsureMappedAs.c)
 *     AslFileMappingGetViewBase @ 0x18009A934 (AslFileMappingGetViewBase.c)
 *     AslPathGetFileNamePart @ 0x18009F158 (AslPathGetFileNamePart.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

_QWORD *__fastcall SdbOpenDatabaseEx(__int64 a1, __int64 a2, unsigned int a3)
{
  const wchar_t *v5; // rax
  _QWORD *Heap; // rax
  _QWORD *v7; // rbx
  int MergeRedirectPath; // eax
  int v9; // esi
  const wchar_t *FileNamePart; // rax
  const char *v11; // r9
  __int64 v12; // r8
  __int64 v13; // rcx
  int v14; // eax
  const char *v15; // r9
  __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v20; // [rsp+20h] [rbp-40h]
  int v21; // [rsp+30h] [rbp-30h] BYREF
  __int64 v22; // [rsp+38h] [rbp-28h] BYREF
  _QWORD *v23; // [rsp+40h] [rbp-20h] BYREF
  __int64 v24; // [rsp+48h] [rbp-18h] BYREF
  int v25; // [rsp+50h] [rbp-10h]

  v24 = 0LL;
  v25 = 0;
  v21 = 0;
  v5 = (const wchar_t *)a1;
  if ( !a1 )
    v5 = &word_1800BBB1C;
  AslLogCallPrintf(3LL, "SdbOpenDatabaseEx", 2407LL, "Flags:%d; DatabasePath:%ws", a3, v5);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xA80uLL);
  v23 = Heap;
  v7 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0xA80uLL);
    v22 = 0LL;
    if ( (a3 & 0x10) != 0 )
    {
LABEL_23:
      v14 = AslFileMappingCreate(v7, a1);
      if ( v14 < 0 )
      {
        v15 = "Failed to create file mapping [%x]";
        v16 = 2486LL;
LABEL_25:
        LODWORD(v20) = v14;
        AslLogCallPrintf(1LL, "SdbOpenDatabaseEx", v16, v15, v20);
        goto LABEL_42;
      }
LABEL_26:
      v17 = *(_QWORD *)(*v7 + 24LL);
      if ( (unsigned __int64)(v17 - 42) > 0xFFFFFD5 )
      {
        AslLogCallPrintf(1LL, "SdbOpenDatabaseEx", 2495LL, "Failed to open SDB - File size too large or small.");
        goto LABEL_42;
      }
      v14 = AslFileMappingEnsureMappedAs();
      if ( v14 < 0 )
      {
        v15 = "Failed to map SDB [%x]";
        v16 = 2501LL;
        goto LABEL_25;
      }
      *((_DWORD *)v7 + 4) = 0;
      *((_DWORD *)v7 + 5) = v17;
      v7[1] = AslFileMappingGetViewBase(*v7);
      if ( !(unsigned int)SdbpReadMappedData(v7, 0LL, &v24, 12LL) )
      {
        AslLogCallPrintf(1LL, "SdbOpenDatabaseEx", 2514LL, "Failed to read database header");
        goto LABEL_42;
      }
      v14 = v25;
      if ( v25 != 1717724275 )
      {
        if ( v25 == 1717724282 )
        {
          if ( (unsigned int)SdbpOpenCompressedDatabase(&v23, v18, a3) )
            return v23;
          AslLogCallPrintf(
            1LL,
            "SdbOpenDatabaseEx",
            2533LL,
            "SdbpOpenCompressedDatabase failed to open compressed database.");
          v7 = v23;
LABEL_42:
          if ( v7 )
          {
            AslFileMappingDelete(*v7);
            AslFree(NtCurrentPeb()->ProcessHeap, v7);
          }
          return 0LL;
        }
        if ( (a3 & 2) == 0 )
        {
          v15 = "Magic does not match a valid value: 0x%lx";
          v16 = 2527LL;
          goto LABEL_25;
        }
      }
      if ( (unsigned int)SdbpValidateAndApplyCompatFlags(v7, &v24, a3) )
        return v7;
      goto LABEL_42;
    }
    MergeRedirectPath = SdbGetMergeRedirectPath(&v22, &v21, (a3 & 0x20) == 0, a1);
    v9 = MergeRedirectPath;
    if ( MergeRedirectPath < 0 )
    {
      if ( MergeRedirectPath == -1073741772 )
        goto LABEL_19;
      v11 = "SdbGetMergeRedirectPath failed to check for sdb merge redirect [%x]";
      v12 = 2433LL;
      v13 = 3LL;
    }
    else
    {
      if ( !v22 )
      {
        v9 = -1073741772;
        goto LABEL_19;
      }
      if ( (a3 & 0x20) != 0 )
      {
        if ( !v21 )
          *((_DWORD *)v7 + 6) |= 0x20u;
      }
      else if ( v21 )
      {
        FileNamePart = (const wchar_t *)AslPathGetFileNamePart(a1);
        AslLogCallPrintf(
          1LL,
          "SdbOpenDatabaseEx",
          2445LL,
          "Handled Error: MergeSdb staged deletion feature was used to prevent sdb mismatch error. SdbName: [%ls].",
          FileNamePart);
      }
      MergeRedirectPath = AslFileMappingCreate(v7, v22);
      v9 = MergeRedirectPath;
      if ( MergeRedirectPath >= 0 )
      {
LABEL_19:
        if ( v22 )
          AslFree(NtCurrentPeb()->ProcessHeap, v22);
        if ( v9 >= 0 && *v7 )
          goto LABEL_26;
        goto LABEL_23;
      }
      v11 = "Failed to create file mapping for redirected SDB file [%x]";
      v12 = 2464LL;
      v13 = 1LL;
    }
    LODWORD(v20) = MergeRedirectPath;
    AslLogCallPrintf(v13, "SdbOpenDatabaseEx", v12, v11, v20);
    goto LABEL_19;
  }
  AslLogCallPrintf(1LL, "SdbOpenDatabaseEx", 2415LL, "Failed to allocate DB structure");
  return 0LL;
}
