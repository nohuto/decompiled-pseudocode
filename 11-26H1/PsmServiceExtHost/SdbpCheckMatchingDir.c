/*
 * XREFs of SdbpCheckMatchingDir @ 0x180094A80
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbFindFirstTag @ 0x1800930BC (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x1800933A4 (SdbGetStringTagPtr.c)
 *     SdbpInitializeSearchDBContext @ 0x180096C14 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x1800971F8 (SdbpResolveMatchingFile.c)
 *     AslDoesDirectoryExistNtPath @ 0x180098910 (AslDoesDirectoryExistNtPath.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 */

__int64 __fastcall SdbpCheckMatchingDir(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        PCWSTR SourceString)
{
  unsigned int v7; // edi
  int DoesDirectoryExistNtPath; // r13d
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax
  unsigned __int16 *v11; // r15
  const char *v12; // r9
  __int64 v13; // r8
  __int64 v14; // r14
  PCWSTR v15; // rsi
  int *v16; // r12
  int i; // ebp
  unsigned __int64 v18; // rax
  __int64 v19; // rcx

  v7 = 0;
  DoesDirectoryExistNtPath = 0;
  FirstTag = SdbFindFirstTag(a3, a5, 24577);
  if ( FirstTag )
  {
    StringTagPtr = SdbGetStringTagPtr(a3, FirstTag);
    v11 = (unsigned __int16 *)StringTagPtr;
    if ( !StringTagPtr )
    {
      v12 = "Failed to get the string from the database";
      v13 = 3414LL;
LABEL_4:
      AslLogCallPrintf(1LL, "SdbpCheckMatchingDir", v13, v12);
      goto LABEL_21;
    }
    v14 = -1LL;
    do
      ++v14;
    while ( *(_WORD *)(StringTagPtr + 2 * v14) );
    v15 = SourceString;
    if ( (*(_BYTE *)SourceString & 1) == 0 && !(unsigned int)SdbpInitializeSearchDBContext(SourceString) )
    {
      v12 = "Failed to initialize SEARCHDBCONTEXT";
      v13 = 3427LL;
      goto LABEL_4;
    }
    v16 = (int *)*((_QWORD *)v15 + 9);
    for ( i = 0; i < *v16; ++i )
    {
      SourceString = 0LL;
      if ( !(unsigned int)SdbpResolveMatchingFile(a2, v15, v11, (unsigned int)v14, &v16[12 * i + 2], &SourceString) )
      {
        v12 = "Failed to resolve matching dir";
        v13 = 3451LL;
        goto LABEL_4;
      }
      DoesDirectoryExistNtPath = AslDoesDirectoryExistNtPath(SourceString);
      AslFree(NtCurrentPeb()->ProcessHeap, SourceString);
      if ( DoesDirectoryExistNtPath )
      {
        if ( i > 0 )
          *((_DWORD *)v15 + 20) = 1;
        break;
      }
    }
    v18 = *v11;
    LOWORD(v18) = v18 - 37;
    if ( (unsigned __int16)v18 <= 0x37u )
    {
      v19 = 0x80000000000201LL;
      if ( _bittest64(&v19, v18) )
        *((_DWORD *)v15 + 20) = 1;
    }
    v7 = 1;
  }
LABEL_21:
  *a1 = DoesDirectoryExistNtPath;
  return v7;
}
