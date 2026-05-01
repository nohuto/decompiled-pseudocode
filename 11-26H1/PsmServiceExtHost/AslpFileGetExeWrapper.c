/*
 * XREFs of AslpFileGetExeWrapper @ 0x18009BD0C
 * Callers:
 *     AslpFileGetExeWrapperAttribute @ 0x18009BF48 (AslpFileGetExeWrapperAttribute.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x18009C570 (AslpFileGetImageNtHeader.c)
 *     AslpFileHasActiveMarkWrapper @ 0x18009D6CC (AslpFileHasActiveMarkWrapper.c)
 */

__int64 __fastcall AslpFileGetExeWrapper(_DWORD *a1, __int64 a2)
{
  int ImageNtHeader; // eax
  int HasActiveMarkWrapper; // ebx
  __int64 v7; // rdi
  __int64 v8; // rdx
  unsigned int v9; // r13d
  __int64 i; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rcx
  int v15; // [rsp+70h] [rbp+8h] BYREF
  __int64 v16; // [rsp+78h] [rbp+10h] BYREF

  v15 = 0;
  *a1 = 0;
  v16 = 0LL;
  if ( *(_QWORD *)(a2 + 24) >= 0x100000000uLL )
    return 0LL;
  ImageNtHeader = AslpFileGetImageNtHeader(&v16, a2);
  HasActiveMarkWrapper = ImageNtHeader;
  if ( ImageNtHeader >= 0 )
  {
    v7 = v16;
    if ( *(_WORD *)(v16 + 24) != 267 )
      return 0LL;
    v8 = v16 + *(unsigned __int16 *)(v16 + 20) + 24LL;
    v16 = v8;
    v9 = *(unsigned __int16 *)(v7 + 6);
    for ( i = 0LL; (unsigned int)i < v9; i = (unsigned int)(i + 1) )
    {
      v11 = v8 + 40 * i;
      if ( *(_DWORD *)(v11 + 12) && *(_DWORD *)(v11 + 8) )
      {
        if ( !strncmp((const char *)v11, ".securom", 8uLL) )
        {
          *a1 = 1;
          return 0;
        }
        v8 = v16;
      }
    }
    HasActiveMarkWrapper = AslpFileHasActiveMarkWrapper(&v15, v7, a2);
    if ( HasActiveMarkWrapper >= 0 )
    {
      if ( v15 )
      {
        *a1 = 2;
      }
      else if ( *(_DWORD *)v7 == 17744 && *(_BYTE *)(v7 + 26) == 83 && *(_BYTE *)(v7 + 27) == 82 )
      {
        *a1 = 3;
      }
      else
      {
        v12 = 0LL;
        v13 = v16;
        while ( (unsigned int)v12 < v9 )
        {
          v14 = v13 + 40 * v12;
          if ( *(_DWORD *)(v14 + 12) && *(_DWORD *)(v14 + 8) && !strncmp((const char *)v14, ".ps4", 8uLL) )
          {
            *a1 = 4;
            return 0;
          }
          v12 = (unsigned int)(v12 + 1);
        }
      }
      return 0;
    }
    if ( HasActiveMarkWrapper == -1073741275 )
      AslLogCallPrintf(
        2LL,
        "AslpFileGetExeWrapper",
        3893LL,
        "AslpFileHasActiveMarkWrapper failed (FileSize: %I64u) [%x]",
        *(_QWORD *)(a2 + 24),
        -1073741275);
    else
      AslLogCallPrintf(
        1LL,
        "AslpFileGetExeWrapper",
        3895LL,
        "AslpFileHasActiveMarkWrapper failed [%x]",
        HasActiveMarkWrapper);
  }
  else
  {
    AslLogCallPrintf(1LL, "AslpFileGetExeWrapper", 3833LL, "AslpFileGetImageNtHeader failed [%x]", ImageNtHeader);
  }
  return (unsigned int)HasActiveMarkWrapper;
}
