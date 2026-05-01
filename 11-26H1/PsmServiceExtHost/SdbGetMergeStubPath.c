/*
 * XREFs of SdbGetMergeStubPath @ 0x18008D810
 * Callers:
 *     SdbInitDatabaseEx @ 0x18008FBFC (SdbInitDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbGetMergeRedirectPath @ 0x18008D65C (SdbGetMergeRedirectPath.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x18008E3FC (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpGetMergeSdbsSupported @ 0x18008F10C (SdbpGetMergeSdbsSupported.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 *     AslPathGetFileNamePart @ 0x18009F158 (AslPathGetFileNamePart.c)
 */

__int64 __fastcall SdbGetMergeStubPath(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v6; // ebx
  __int64 FileNamePart; // rax
  int ManifestedMergeStubAlloc; // eax
  __int64 v9; // rdi
  int MergeRedirectPath; // eax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  v6 = -1073741772;
  if ( (unsigned int)SdbpGetMergeSdbsSupported() )
  {
    FileNamePart = AslPathGetFileNamePart(a2);
    if ( FileNamePart != a2 )
    {
      ManifestedMergeStubAlloc = SdbpGetManifestedMergeStubAlloc(&v12, FileNamePart);
      v6 = ManifestedMergeStubAlloc;
      if ( ManifestedMergeStubAlloc != -1073741772 )
      {
        if ( ManifestedMergeStubAlloc >= 0 )
        {
          v9 = v12;
          MergeRedirectPath = SdbGetMergeRedirectPath(&v11, 0LL, 0, v12);
          v6 = MergeRedirectPath;
          if ( MergeRedirectPath == -1073741772 )
          {
            v2 = v11;
            *a1 = v9;
            v9 = 0LL;
          }
          else
          {
            if ( MergeRedirectPath < 0 )
            {
              AslLogCallPrintf(
                1LL,
                "SdbGetMergeStubPath",
                1395LL,
                "Failed to get manifested stub [%x]",
                MergeRedirectPath);
              v2 = v11;
              goto LABEL_9;
            }
            *a1 = v11;
          }
          v6 = 0;
          goto LABEL_9;
        }
        AslLogCallPrintf(
          1LL,
          "SdbGetMergeStubPath",
          1379LL,
          "Failed to get manifested stub [%x]",
          ManifestedMergeStubAlloc);
      }
      v9 = v12;
LABEL_9:
      if ( v9 )
        AslFree(NtCurrentPeb()->ProcessHeap, v9);
      if ( v2 )
        AslFree(NtCurrentPeb()->ProcessHeap, v2);
    }
  }
  return v6;
}
