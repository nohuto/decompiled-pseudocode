/*
 * XREFs of SdbGetMergeRedirectPath @ 0x140886EF0
 * Callers:
 *     SdbOpenDatabaseEx @ 0x140887068 (SdbOpenDatabaseEx.c)
 * Callees:
 *     SdbpGetMergeRedirectPathInternal @ 0x140887904 (SdbpGetMergeRedirectPathInternal.c)
 *     AslPathGetFileNamePart @ 0x14088FAA0 (AslPathGetFileNamePart.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 */

__int64 __fastcall SdbGetMergeRedirectPath(_QWORD *a1, int *a2, int a3, __int64 a4)
{
  int v8; // edi
  int MergeRedirectPathInternal; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  int v13; // r15d
  int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  _QWORD v18[2]; // [rsp+30h] [rbp-10h] BYREF
  int v19; // [rsp+70h] [rbp+30h] BYREF

  v19 = 0;
  v18[0] = 0LL;
  v8 = 0;
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  if ( a2 )
    *a2 = 0;
  MergeRedirectPathInternal = SdbpGetMergeRedirectPathInternal(v18, &v19, 1LL);
  v12 = MergeRedirectPathInternal;
  v13 = MergeRedirectPathInternal;
  if ( MergeRedirectPathInternal >= 0 )
  {
    if ( v19 )
      v8 = 1;
  }
  else if ( MergeRedirectPathInternal != -1073741772 )
  {
    v14 = 2112;
    goto LABEL_8;
  }
  if ( !a3 || !v8 )
  {
    if ( v18[0] )
      AslFree(v11, v18[0]);
    v17 = SdbpGetMergeRedirectPathInternal(v18, 0LL, 0LL);
    v12 = v17;
    if ( v17 < 0 )
    {
      if ( v17 == -1073741772 )
        goto LABEL_9;
      v14 = 2127;
LABEL_8:
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbGetMergeRedirectPath",
        v14,
        (unsigned int)"SdbpGetMergeRedirectPathInternal failed[%x]");
LABEL_9:
      v16 = v18[0];
      goto LABEL_27;
    }
    v16 = v18[0];
LABEL_24:
    *a1 = v16;
    v16 = 0LL;
    if ( a2 )
      *a2 = v8;
    v12 = 0;
    goto LABEL_27;
  }
  AslPathGetFileNamePart(a4);
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbGetMergeRedirectPath",
    2136,
    (unsigned int)"Handled Error: MergeSdb staged deletion feature was used, probably to prevent sdb mismatch error. SdbName: [%ls].");
  v16 = v18[0];
  if ( v18[0] )
  {
    v12 = v13;
    if ( v13 < 0 )
    {
LABEL_27:
      if ( v16 )
        AslFree(v15, v16);
      return v12;
    }
    goto LABEL_24;
  }
  return (unsigned int)-1073741772;
}
