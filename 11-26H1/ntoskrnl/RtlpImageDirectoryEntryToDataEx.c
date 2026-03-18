/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x14040E000
 * Callers:
 *     RtlCaptureRetpolineImportRvas @ 0x14040C620 (RtlCaptureRetpolineImportRvas.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x14050B370 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 * Callees:
 *     RtlpImageDirectoryEntryToData32 @ 0x14040E1A0 (RtlpImageDirectoryEntryToData32.c)
 *     RtlAddressInSectionTable @ 0x14040E484 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 a1,
        unsigned __int8 a2,
        unsigned __int16 a3,
        _DWORD *a4,
        __int64 *a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v7; // r10
  unsigned __int64 v9; // r9
  __int16 v10; // ax
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned __int8 v14; // dl
  __int64 v15; // rax
  unsigned int v16; // ecx

  v5 = 0;
  v7 = a1 & 1;
  *a5 = 0LL;
  if ( (a1 & 2) != 0 || (a1 & 1) != 0 )
  {
    a1 &= 0xFFFFFFFFFFFFFFFCuLL;
    v14 = 0;
    if ( !v7 )
      v14 = a2;
    a2 = v14;
  }
  if ( a1 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return (unsigned int)-1073741811;
  if ( *(_WORD *)a1 != 23117 )
    return (unsigned int)-1073741701;
  v9 = a1 + *(unsigned int *)(a1 + 60);
  if ( v9 < a1 || a1 < 0x7FFFFFFF0000LL && (v9 + 264 > 0x7FFFFFFF0000LL || v9 + 264 <= v9) )
    return (unsigned int)-1073741701;
  if ( *(_DWORD *)v9 != 17744 )
    return (unsigned int)-1073741701;
  if ( v9 )
  {
    v10 = *(_WORD *)(v9 + 24);
    if ( v10 == 267 )
      return (unsigned int)RtlpImageDirectoryEntryToData32(a1, a2, a3, (_DWORD)a4, v9, (__int64)a5);
    if ( v10 == 523 && (unsigned int)a3 < *(_DWORD *)(v9 + 132) )
    {
      v11 = a3;
      v12 = *(unsigned int *)(v9 + 8LL * a3 + 136);
      if ( !(_DWORD)v12 )
        return (unsigned int)-1073741822;
      if ( a1 >= 0x7FFFFFFF0000LL || v12 + a1 <= 0x7FFFFFFF0000LL && v12 + a1 > a1 )
      {
        *a4 = *(_DWORD *)(v9 + 8 * v11 + 140);
        if ( a2 || (unsigned int)v12 < *(_DWORD *)(v9 + 84) )
        {
          *a5 = v12 + a1;
        }
        else
        {
          v15 = RtlAddressInSectionTable(v9, a1);
          v16 = 0;
          *a5 = v15;
          if ( !v15 )
            return (unsigned int)-1073741811;
          return v16;
        }
        return v5;
      }
    }
    return (unsigned int)-1073741811;
  }
  return v5;
}
