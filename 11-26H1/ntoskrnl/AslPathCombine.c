/*
 * XREFs of AslPathCombine @ 0x14088F92C
 * Callers:
 *     SdbpGetPathAppPatchPreRS3 @ 0x140719320 (SdbpGetPathAppPatchPreRS3.c)
 *     SdbpGetPathCustomSdbPreRS3 @ 0x1407194B0 (SdbpGetPathCustomSdbPreRS3.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1407818D0 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     SdbpGetPathAppPatch @ 0x14088CD50 (SdbpGetPathAppPatch.c)
 *     SdbpGetPathAppraiser @ 0x14088CE50 (SdbpGetPathAppraiser.c)
 *     SdbpGetPathCustomSdb @ 0x14088CFA0 (SdbpGetPathCustomSdb.c)
 *     SdbpGetPathMergeSource @ 0x14088D0A0 (SdbpGetPathMergeSource.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x140B6D868 (AslEnvGetSystem32DirPathBuf.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x1404509C0 (RtlStringCchLengthW.c)
 *     RtlStringCchCopyW @ 0x140464504 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x1404D855C (RtlStringCchCatW.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslPathCombine(NTSTRSAFE_PCWSTR pszSrc, __int64 a2, wchar_t *a3, size_t a4)
{
  NTSTATUS v8; // ebx
  const wchar_t *v9; // r10
  unsigned int v10; // r11d
  NTSTRSAFE_PCWSTR v11; // r10
  const wchar_t *v12; // r14
  unsigned int v13; // r11d
  unsigned int v14; // r11d
  unsigned int v15; // eax
  size_t pcchLength[5]; // [rsp+30h] [rbp-28h] BYREF
  size_t v17; // [rsp+78h] [rbp+20h] BYREF

  pcchLength[0] = 0LL;
  v17 = 0LL;
  if ( !a4 )
    return 3221225507LL;
  v8 = RtlStringCchLengthW(pszSrc, 0x7FFFFFFFuLL, pcchLength);
  if ( v8 < 0 )
    goto LABEL_23;
  v8 = RtlStringCchLengthW(v9, v10, &v17);
  if ( v8 < 0 )
    goto LABEL_23;
  if ( pcchLength[0] )
  {
    if ( v17 )
    {
      v12 = v11 + 1;
      v13 = (pszSrc[pcchLength[0] - 1] == 92) + 1;
      if ( *v11 != 92 )
        v13 = pszSrc[pcchLength[0] - 1] == 92;
      if ( v13 <= 1 )
        v12 = v11;
      v8 = RtlStringCchCopyW(a3, a4, pszSrc);
      if ( v8 >= 0 )
      {
        v15 = v14 - 1;
        if ( v14 <= 1 )
          v15 = v14;
        if ( v15 || (v8 = RtlStringCchCatW(a3, a4, L"\\"), v8 >= 0) )
        {
          v8 = RtlStringCchCatW(a3, a4, v12);
          if ( v8 >= 0 )
            return 0;
        }
      }
LABEL_23:
      AslLogCallPrintf(1, (unsigned int)"AslPathCombine", 1420, (unsigned int)"An RtlString API failed [%x]");
      return (unsigned int)v8;
    }
    v11 = pszSrc;
LABEL_11:
    v8 = RtlStringCchCopyW(a3, a4, v11);
    if ( v8 >= 0 )
      return (unsigned int)v8;
    goto LABEL_23;
  }
  if ( v17 )
    goto LABEL_11;
  *a3 = 0;
  return 0;
}
