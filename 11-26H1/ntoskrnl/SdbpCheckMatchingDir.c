/*
 * XREFs of SdbpCheckMatchingDir @ 0x140888B80
 * Callers:
 *     <none>
 * Callees:
 *     SdbpUmaInit_PCWSTR @ 0x1407196AC (SdbpUmaInit_PCWSTR.c)
 *     SdbpInitializeSearchDBContext @ 0x14088AFA8 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x14088B888 (SdbpResolveMatchingFile.c)
 *     AslDoesDirectoryExistNtPath @ 0x14088E4A8 (AslDoesDirectoryExistNtPath.c)
 *     SdbGetStringTagPtr @ 0x1409D4804 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 */

__int64 __fastcall SdbpCheckMatchingDir(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        PCWSTR SourceString)
{
  int v7; // ebp
  _DWORD *v8; // r14
  unsigned int v9; // r13d
  int v10; // esi
  unsigned int FirstTag; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 (*StringTagPtr)(void); // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int128 v18; // kr00_16
  __int64 v19; // r14
  PCWSTR v20; // rsi
  int *v21; // r12
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 result; // rax
  int DoesDirectoryExistNtPath; // [rsp+30h] [rbp-58h]
  __int128 v26; // [rsp+38h] [rbp-50h] BYREF

  v7 = 0;
  v8 = a1;
  DoesDirectoryExistNtPath = 0;
  v9 = 0;
  v10 = 0;
  v26 = 0LL;
  FirstTag = SdbFindFirstTag(a3, a5, 24577LL);
  if ( FirstTag )
  {
    StringTagPtr = (__int64 (*)(void))SdbGetStringTagPtr(a3, FirstTag, v13, v14);
    SdbpUmaInit_PCWSTR(StringTagPtr, (__int64 (**)(void))&v26);
    v18 = v26;
    if ( (_QWORD)v26 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( *(_WORD *)(v26 + 2 * v19) );
      v20 = SourceString;
      if ( (*(_DWORD *)SourceString & 1) != 0 || (unsigned int)SdbpInitializeSearchDBContext(SourceString, v16, v17) )
      {
        v21 = (int *)*((_QWORD *)v20 + 9);
        while ( v7 < *v21 )
        {
          SourceString = 0LL;
          if ( !(unsigned int)SdbpResolveMatchingFile(a2, v20, v18, (unsigned int)v19, &v21[12 * v7 + 2], &SourceString) )
          {
            AslLogCallPrintf(
              1,
              (unsigned int)"SdbpCheckMatchingDir",
              3451,
              (unsigned int)"Failed to resolve matching dir");
            goto LABEL_23;
          }
          DoesDirectoryExistNtPath = AslDoesDirectoryExistNtPath(SourceString);
          AslFree(v22, SourceString);
          if ( DoesDirectoryExistNtPath )
          {
            if ( v7 > 0 )
              *((_DWORD *)v20 + 20) = 1;
            break;
          }
          ++v7;
        }
        v23 = *(unsigned __int16 *)v18;
        LOWORD(v23) = v23 - 37;
        if ( (unsigned __int16)v23 <= 0x37u )
        {
          v12 = 0x80000000000201LL;
          if ( _bittest64(&v12, v23) )
            *((_DWORD *)v20 + 20) = 1;
        }
        v9 = 1;
LABEL_23:
        v10 = DoesDirectoryExistNtPath;
        v8 = a1;
      }
      else
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpCheckMatchingDir",
          3427,
          (unsigned int)"Failed to initialize SEARCHDBCONTEXT");
        v8 = a1;
        v10 = 0;
      }
    }
    else
    {
      if ( *((_QWORD *)&v26 + 1) )
      {
        AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingDir", 3408, (unsigned int)"Out of memory");
        goto LABEL_28;
      }
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCheckMatchingDir",
        3414,
        (unsigned int)"Failed to get the string from the database");
    }
  }
  else
  {
    v18 = v26;
  }
  if ( (_QWORD)v18 && (_QWORD)v18 != *((_QWORD *)&v18 + 1) )
    AslFree(v12, v18);
LABEL_28:
  result = v9;
  *v8 = v10;
  return result;
}
