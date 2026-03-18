/*
 * XREFs of wcsrchr @ 0x140538350
 * Callers:
 *     AslPathGetFileNamePart @ 0x1408896A4 (AslPathGetFileNamePart.c)
 *     BiTranslateSymbolicLinkFile @ 0x140892BAC (BiTranslateSymbolicLinkFile.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140899F44 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x14091C280 (DrvDbGetDriverPackageMappedProperty.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x1409D3C04 (PopBcdSetDefaultResumeObjectElements.c)
 *     SdbGetDatabaseMatchEx @ 0x1409E57D4 (SdbGetDatabaseMatchEx.c)
 *     EtwpGenerateFileName @ 0x140A1751C (EtwpGenerateFileName.c)
 *     PiUpdateDriverDBCache @ 0x140A24D48 (PiUpdateDriverDBCache.c)
 *     PiIsDriverBlocked @ 0x140A250AC (PiIsDriverBlocked.c)
 *     PiLookupInDDBCache @ 0x140A25C14 (PiLookupInDDBCache.c)
 *     IopLoadDriver @ 0x140A26FC4 (IopLoadDriver.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A2A8BC (_CmDeleteDeviceRegKeyWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A2D44C (DrvDbDeleteObjectSubKey.c)
 *     PiDqDeleteUserObject @ 0x140A2D7E4 (PiDqDeleteUserObject.c)
 *     _RegRtlDeletePathInternal @ 0x140A2D934 (_RegRtlDeletePathInternal.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140AD3638 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     AslPathSplit @ 0x140B0D03C (AslPathSplit.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140CEAAE4 (CmpGetSystemRelativeRegistryHiveFilePath.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsrchr(const wchar_t *Str, wchar_t Ch)
{
  wchar_t *v3; // rcx
  unsigned int v4; // r9d
  const wchar_t *v5; // rdx
  wchar_t *v8; // rdx
  __m128i v9; // xmm1
  __m128i v10; // xmm0
  int v11; // ecx
  __m128i v12; // xmm1
  __m128i v13; // xmm0
  unsigned __int8 v14; // zf
  int v15; // ecx

  v3 = 0LL;
  v4 = Ch;
  if ( (_isa_info & 8) != 0 )
  {
    v8 = 0LL;
    while ( (((_BYTE)Str + 1) & 0xE) != 0 )
    {
      if ( *Str == (_WORD)v4 )
        v8 = (wchar_t *)Str;
      if ( !*Str )
        return v8;
      ++Str;
    }
    if ( (_WORD)v4 )
    {
      v12 = _mm_cvtsi32_si128(v4);
      while ( 1 )
      {
        v13 = _mm_loadu_si128((const __m128i *)Str);
        v15 = _mm_cmpistri(v12, v13, 65);
        v14 = _mm_cmpistrz(v12, v13, 65);
        if ( _mm_cmpistrc(v12, v13, 65) )
          v8 = (wchar_t *)&Str[v15];
        if ( v14 )
          break;
        Str += 8;
      }
      return v8;
    }
    v9 = _mm_cvtsi32_si128(0xFFFF0001);
    while ( 1 )
    {
      v10 = _mm_loadu_si128((const __m128i *)Str);
      v11 = _mm_cmpistri(v9, v10, 21);
      if ( _mm_cmpistrz(v9, v10, 21) )
        break;
      Str += 8;
    }
    return (wchar_t *)&Str[v11];
  }
  else
  {
    v5 = Str;
    while ( *Str++ )
      ;
    while ( --Str != v5 )
    {
      if ( *Str == (_WORD)v4 )
        return (wchar_t *)Str;
    }
    if ( *Str == (_WORD)v4 )
      return (wchar_t *)Str;
    return v3;
  }
}
