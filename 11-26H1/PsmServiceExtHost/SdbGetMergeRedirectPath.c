/*
 * XREFs of SdbGetMergeRedirectPath @ 0x18008D65C
 * Callers:
 *     SdbGetMergeStubPath @ 0x18008D810 (SdbGetMergeStubPath.c)
 *     SdbOpenDatabaseEx @ 0x18008DAA0 (SdbOpenDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x18008E830 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpGetMergeSdbsSupported @ 0x18008F10C (SdbpGetMergeSdbsSupported.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 *     AslPathGetFileNamePart @ 0x18009F158 (AslPathGetFileNamePart.c)
 */

__int64 __fastcall SdbGetMergeRedirectPath(_QWORD *a1, int *a2, int a3, __int64 a4)
{
  int v7; // esi
  int MergeRedirectPathInternal; // ebx
  const wchar_t *FileNamePart; // rax
  int v11; // eax
  _QWORD v12[2]; // [rsp+30h] [rbp-10h] BYREF
  int v13; // [rsp+70h] [rbp+30h] BYREF
  int v14; // [rsp+80h] [rbp+40h]

  v14 = a3;
  v13 = 0;
  v12[0] = 0LL;
  v7 = 0;
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  if ( a2 )
    *a2 = 0;
  if ( !(unsigned int)SdbpGetMergeSdbsSupported() )
  {
    MergeRedirectPathInternal = -1073741772;
    goto LABEL_20;
  }
  MergeRedirectPathInternal = SdbpGetMergeRedirectPathInternal(v12, &v13, 1LL, a4);
  if ( MergeRedirectPathInternal >= 0 )
  {
    if ( v13 )
      v7 = 1;
  }
  else if ( MergeRedirectPathInternal != -1073741772 )
  {
    AslLogCallPrintf(
      1LL,
      "SdbGetMergeRedirectPath",
      2112LL,
      "SdbpGetMergeRedirectPathInternal failed[%x]",
      MergeRedirectPathInternal);
    goto LABEL_20;
  }
  if ( !v14 || !v7 )
  {
    if ( v12[0] )
      AslFree(NtCurrentPeb()->ProcessHeap, v12[0]);
    v11 = SdbpGetMergeRedirectPathInternal(v12, 0LL, 0LL, a4);
    MergeRedirectPathInternal = v11;
    if ( v11 < 0 )
    {
      if ( v11 != -1073741772 )
        AslLogCallPrintf(1LL, "SdbGetMergeRedirectPath", 2127LL, "SdbpGetMergeRedirectPathInternal failed[%x]", v11);
      goto LABEL_20;
    }
    goto LABEL_17;
  }
  FileNamePart = (const wchar_t *)AslPathGetFileNamePart(a4);
  AslLogCallPrintf(
    1LL,
    "SdbGetMergeRedirectPath",
    2136LL,
    "Handled Error: MergeSdb staged deletion feature was used, probably to prevent sdb mismatch error. SdbName: [%ls].",
    FileNamePart);
  if ( v12[0] )
  {
    if ( MergeRedirectPathInternal < 0 )
    {
LABEL_20:
      if ( v12[0] )
        AslFree(NtCurrentPeb()->ProcessHeap, v12[0]);
      return (unsigned int)MergeRedirectPathInternal;
    }
LABEL_17:
    *a1 = v12[0];
    v12[0] = 0LL;
    if ( a2 )
      *a2 = v7;
    MergeRedirectPathInternal = 0;
    goto LABEL_20;
  }
  return (unsigned int)-1073741772;
}
