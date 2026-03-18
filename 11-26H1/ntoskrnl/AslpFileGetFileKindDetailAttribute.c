/*
 * XREFs of AslpFileGetFileKindDetailAttribute @ 0x14088CF90
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x14088BC84 (AslFileAllocAndGetAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x14088C914 (AslpFileGetClrVersionAttribute.c)
 * Callees:
 *     AslFileMappingGetFileKindDetail @ 0x140888B8C (AslFileMappingGetFileKindDetail.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetFileKindDetailAttribute(__int64 a1, __int64 a2)
{
  int FileKindDetail; // edi
  __int64 v4; // rax
  int v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0;
  FileKindDetail = AslFileMappingGetFileKindDetail(&v6, a2);
  if ( FileKindDetail >= 0 )
  {
    v4 = v6;
    *(_DWORD *)(a1 + 920) |= 1u;
    *(_QWORD *)(a1 + 912) = v4;
    FileKindDetail = 0;
    *(_DWORD *)(a1 + 896) = 2;
    *(_QWORD *)(a1 + 904) = 4LL;
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpFileGetFileKindDetailAttribute",
      5793,
      (unsigned int)"AslFileMappingGetFileKindDetails failed [%x]");
  }
  return (unsigned int)FileKindDetail;
}
