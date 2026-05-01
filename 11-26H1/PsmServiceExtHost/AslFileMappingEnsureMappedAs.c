/*
 * XREFs of AslFileMappingEnsureMappedAs @ 0x18009A458
 * Callers:
 *     SdbOpenDatabaseEx @ 0x18008DAA0 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x1800956FC (SdbpCheckMatchingTextEntry.c)
 *     AslpFileGetChecksumAttributes @ 0x18009B668 (AslpFileGetChecksumAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslpFileMappingGetFileKind @ 0x18009A94C (AslpFileMappingGetFileKind.c)
 *     RtlFileMapMapView @ 0x18009ABDC (RtlFileMapMapView.c)
 */

__int64 __fastcall AslFileMappingEnsureMappedAs(__int64 a1)
{
  _DWORD *v1; // rsi
  int v2; // eax
  int v5; // eax
  unsigned int v6; // ebx
  int FileKind; // eax

  v1 = (_DWORD *)(a1 + 56);
  v2 = *(_DWORD *)(a1 + 56);
  if ( *(_DWORD *)(a1 + 72) )
  {
    if ( v2 != 1 )
      return 3221226605LL;
    return 3221225758LL;
  }
  if ( v2 == 1 )
    return 3221225758LL;
  v5 = RtlFileMapMapView(a1 + 8, 0LL);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( *(_BYTE *)(a1 + 51) )
    {
      *v1 = 6;
    }
    else
    {
      FileKind = AslpFileMappingGetFileKind(a1 + 8, v1);
      v6 = FileKind;
      if ( FileKind < 0 )
      {
        AslLogCallPrintf(
          1LL,
          "AslFileMappingEnsureMappedAs",
          503LL,
          "AslpFileMappingGetFileKind failed %S [%x]",
          *(const wchar_t **)a1,
          FileKind);
        *v1 = 3;
      }
    }
  }
  else if ( v5 == -1073741554 && !*(_BYTE *)(a1 + 51) )
  {
    return 0;
  }
  return v6;
}
