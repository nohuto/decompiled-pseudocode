/*
 * XREFs of AslFileMappingEnsure @ 0x18009A388
 * Callers:
 *     AslFileMappingGetFileKindDetail @ 0x18009A528 (AslFileMappingGetFileKindDetail.c)
 *     AslFileMappingGetImageTypeEx @ 0x18009A6EC (AslFileMappingGetImageTypeEx.c)
 *     AslFileAllocAndGetAttributes @ 0x18009ADE0 (AslFileAllocAndGetAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x18009B9F4 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetExeWrapperAttribute @ 0x18009BF48 (AslpFileGetExeWrapperAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x18009C158 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x18009C300 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameAttribute @ 0x18009C964 (AslpFileGetPeExportNameAttribute.c)
 *     AslpFileGetVersionBlock @ 0x18009CB34 (AslpFileGetVersionBlock.c)
 *     AslpFileGetVersionBlockImageOnly @ 0x18009D410 (AslpFileGetVersionBlockImageOnly.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslpFileMappingGetFileKind @ 0x18009A94C (AslpFileMappingGetFileKind.c)
 *     RtlFileMapMapView @ 0x18009ABDC (RtlFileMapMapView.c)
 */

__int64 __fastcall AslFileMappingEnsure(__int64 a1)
{
  int v3; // edi
  _DWORD *v4; // rsi
  int FileKind; // eax

  if ( *(_DWORD *)(a1 + 72) )
  {
    if ( *(_DWORD *)(a1 + 56) != 1 )
      return *(_QWORD *)(a1 + 32) == 0LL ? 0xC000046D : 0;
    return 3221225758LL;
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    return 0;
  }
  else
  {
    v4 = (_DWORD *)(a1 + 56);
    if ( *(_DWORD *)(a1 + 56) == 1 )
      return 3221225758LL;
    v3 = RtlFileMapMapView(a1 + 8, 0LL);
    if ( v3 >= 0 )
    {
      if ( *(_BYTE *)(a1 + 51) )
      {
        *v4 = 6;
      }
      else
      {
        FileKind = AslpFileMappingGetFileKind(a1 + 8, v4);
        v3 = FileKind;
        if ( FileKind < 0 )
        {
          AslLogCallPrintf(
            1LL,
            "AslFileMappingEnsure",
            591LL,
            "AslpFileMappingGetFileKind failed %S [%x]",
            *(const wchar_t **)a1,
            FileKind);
          *v4 = 3;
        }
      }
    }
  }
  return (unsigned int)v3;
}
