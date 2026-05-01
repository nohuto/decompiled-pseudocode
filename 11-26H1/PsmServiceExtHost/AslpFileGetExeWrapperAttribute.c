/*
 * XREFs of AslpFileGetExeWrapperAttribute @ 0x18009BF48
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x18009ADE0 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x18009A388 (AslFileMappingEnsure.c)
 *     AslpFileGetExeWrapper @ 0x18009BD0C (AslpFileGetExeWrapper.c)
 */

__int64 __fastcall AslpFileGetExeWrapperAttribute(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // ecx
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0;
  v4 = AslFileMappingEnsure(a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)(a2 + 56) == 6 )
    {
      if ( (int)AslpFileGetExeWrapper(&v8, a2) < 0 )
      {
        v6 = 2;
      }
      else
      {
        v6 = 1;
        *(_QWORD *)(a1 + 816) = v8;
        *(_DWORD *)(a1 + 800) = 2;
        *(_QWORD *)(a1 + 808) = 4LL;
      }
      *(_DWORD *)(a1 + 824) |= v6;
    }
    else
    {
      *(_DWORD *)(a1 + 824) |= 2u;
    }
    return 0;
  }
  else
  {
    AslLogCallPrintf(1LL, "AslpFileGetExeWrapperAttribute", 3220LL, "AslFileMappingEnsure failed [%x]", v4);
  }
  return v5;
}
