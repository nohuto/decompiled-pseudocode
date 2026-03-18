/*
 * XREFs of AslpFileGetExeWrapperAttribute @ 0x14088CE08
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x14088BC84 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslFileMappingEnsure @ 0x1408889EC (AslFileMappingEnsure.c)
 *     AslpFileGetExeWrapper @ 0x14088CBA4 (AslpFileGetExeWrapper.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetExeWrapperAttribute(__int64 a1, __int64 a2)
{
  int v4; // edi
  int v5; // ecx
  unsigned int v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0;
  v4 = AslFileMappingEnsure(a2);
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)(a2 + 64) == 6 )
    {
      if ( (int)AslpFileGetExeWrapper(&v7, a2) < 0 )
      {
        v5 = 2;
      }
      else
      {
        v5 = 1;
        *(_QWORD *)(a1 + 816) = v7;
        *(_DWORD *)(a1 + 800) = 2;
        *(_QWORD *)(a1 + 808) = 4LL;
      }
      *(_DWORD *)(a1 + 824) |= v5;
    }
    else
    {
      *(_DWORD *)(a1 + 824) |= 2u;
    }
    return 0;
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpFileGetExeWrapperAttribute",
      3220,
      (unsigned int)"AslFileMappingEnsure failed [%x]");
  }
  return (unsigned int)v4;
}
