/*
 * XREFs of AslFileMappingEnsure @ 0x1408889EC
 * Callers:
 *     AslFileMappingGetFileKindDetail @ 0x140888B8C (AslFileMappingGetFileKindDetail.c)
 *     AslFileMappingGetImageTypeEx @ 0x140888D50 (AslFileMappingGetImageTypeEx.c)
 *     AslFileAllocAndGetAttributes @ 0x14088BC84 (AslFileAllocAndGetAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x14088C914 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetExeWrapperAttribute @ 0x14088CE08 (AslpFileGetExeWrapperAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x14088D018 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x14088D1C0 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameAttribute @ 0x14088D92C (AslpFileGetPeExportNameAttribute.c)
 *     AslpFileGetVersionBlock @ 0x14088DAFC (AslpFileGetVersionBlock.c)
 *     AslpFileGetVersionBlockImageOnly @ 0x14088E394 (AslpFileGetVersionBlockImageOnly.c)
 * Callees:
 *     RtlFileMapMapView @ 0x140714ACC (RtlFileMapMapView.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 *     AslpFileMappingGetFileKind @ 0x140B3EBDC (AslpFileMappingGetFileKind.c)
 */

__int64 __fastcall AslFileMappingEnsure(__int64 a1)
{
  int FileKind; // edi
  _DWORD *v4; // rsi

  if ( *(_DWORD *)(a1 + 80) )
  {
    if ( *(_DWORD *)(a1 + 64) != 1 )
      return *(_QWORD *)(a1 + 32) == 0LL ? 0xC000046D : 0;
    return 3221225758LL;
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    return 0;
  }
  else
  {
    v4 = (_DWORD *)(a1 + 64);
    if ( *(_DWORD *)(a1 + 64) == 1 )
      return 3221225758LL;
    FileKind = RtlFileMapMapView(a1 + 8, 0);
    if ( FileKind >= 0 )
    {
      if ( *(_BYTE *)(a1 + 59) )
      {
        *v4 = 6;
      }
      else
      {
        FileKind = AslpFileMappingGetFileKind(a1 + 8, v4);
        if ( FileKind < 0 )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"AslFileMappingEnsure",
            591,
            (unsigned int)"AslpFileMappingGetFileKind failed %S [%x]");
          *v4 = 3;
        }
      }
    }
  }
  return (unsigned int)FileKind;
}
