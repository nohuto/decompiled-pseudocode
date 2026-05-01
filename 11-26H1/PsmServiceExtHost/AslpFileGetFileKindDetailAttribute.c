/*
 * XREFs of AslpFileGetFileKindDetailAttribute @ 0x18009C0D0
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x18009ADE0 (AslFileAllocAndGetAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x18009B9F4 (AslpFileGetClrVersionAttribute.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslFileMappingGetFileKindDetail @ 0x18009A528 (AslFileMappingGetFileKindDetail.c)
 */

__int64 __fastcall AslpFileGetFileKindDetailAttribute(__int64 a1, __int64 a2)
{
  int FileKindDetail; // eax
  unsigned int v4; // edi
  __int64 v5; // rax
  int v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0;
  FileKindDetail = AslFileMappingGetFileKindDetail(&v7, a2);
  v4 = FileKindDetail;
  if ( FileKindDetail >= 0 )
  {
    v5 = v7;
    *(_DWORD *)(a1 + 920) |= 1u;
    *(_QWORD *)(a1 + 912) = v5;
    v4 = 0;
    *(_DWORD *)(a1 + 896) = 2;
    *(_QWORD *)(a1 + 904) = 4LL;
  }
  else
  {
    AslLogCallPrintf(
      1LL,
      "AslpFileGetFileKindDetailAttribute",
      5793LL,
      "AslFileMappingGetFileKindDetails failed [%x]",
      FileKindDetail);
  }
  return v4;
}
