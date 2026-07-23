/*
 * XREFs of RtlStringCchCopyNExW @ 0x14041D2F0
 * Callers:
 *     punycode_encode @ 0x14080C970 (punycode_encode.c)
 *     EtwpQueryTokenPackageInfo @ 0x1408FBFFC (EtwpQueryTokenPackageInfo.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x1409AA8E4 (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x140ADFF30 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     _CmSplitDevicePanelId @ 0x140B5FC88 (_CmSplitDevicePanelId.c)
 * Callees:
 *     RtlStringExHandleOtherFlagsW @ 0x14041D560 (RtlStringExHandleOtherFlagsW.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

NTSTATUS __stdcall RtlStringCchCopyNExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  NTSTATUS v10; // r11d
  size_t v11; // r8
  NTSTRSAFE_PWSTR v12; // rsi
  size_t v13; // rdi
  NTSTATUS v14; // ebx
  size_t v15; // r9
  size_t v16; // rax
  signed __int64 v17; // r10
  NTSTRSAFE_PWSTR v18; // rdx
  wchar_t v19; // cx
  NTSTRSAFE_PWSTR v20; // rcx
  size_t v21; // rcx
  NTSTATUS result; // eax
  NTSTRSAFE_PWSTR v23; // [rsp+30h] [rbp-28h] BYREF
  size_t v24[4]; // [rsp+38h] [rbp-20h] BYREF

  v10 = 0;
  v11 = dwFlags & 0x100;
  if ( (dwFlags & 0x100) == 0 )
  {
    if ( cchDest - 1 <= 0x7FFFFFFE )
      goto LABEL_3;
    goto LABEL_38;
  }
  if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
LABEL_38:
    v10 = -1073741811;
LABEL_3:
  if ( v10 >= 0 )
  {
    v12 = pszDest;
    v13 = cchDest;
    v23 = pszDest;
    v24[0] = cchDest;
    if ( cchToCopy >= 0x7FFFFFFF )
    {
      v14 = -1073741811;
      if ( cchDest )
        *pszDest = 0;
    }
    else
    {
      if ( (dwFlags & 0x100) != 0 && !pszSrc )
      {
        pszSrc = &SourceString;
        cchToCopy = 0LL;
      }
      v14 = 0;
      if ( (dwFlags & 0xFFFFE000) != 0 )
      {
        v14 = -1073741811;
        if ( cchDest )
          *pszDest = 0;
      }
      else
      {
        if ( cchDest )
        {
          v15 = cchToCopy - cchDest;
          v16 = cchDest;
          v17 = (char *)pszSrc - (char *)pszDest;
          v18 = pszDest;
          v11 = 0LL;
          do
          {
            if ( !(v15 + v16) )
              break;
            v19 = *(NTSTRSAFE_PWSTR)((char *)v18 + v17);
            if ( !v19 )
              break;
            *v18 = v19;
            ++v11;
            ++v18;
            --v16;
          }
          while ( v16 );
          v20 = v18 - 1;
          v14 = -2147483643;
          if ( v16 )
          {
            v20 = v18;
            v14 = 0;
          }
          *v20 = 0;
          v21 = v11 - 1;
          if ( v16 )
            v21 = v11;
          v13 = cchDest - v21;
          v24[0] = cchDest - v21;
          v12 = &pszDest[v21];
          v23 = v12;
          if ( !v16 )
            goto LABEL_17;
          if ( (dwFlags & 0x200) != 0 && v13 > 1 && 2 * v13 > 2 )
            memset_0(v12 + 1, (unsigned __int8)dwFlags, 2 * v13 - 2);
LABEL_24:
          if ( ppszDestEnd )
            *ppszDestEnd = v12;
          if ( pcchRemaining )
            *pcchRemaining = v13;
          return v14;
        }
        if ( !cchToCopy || !*pszSrc )
          goto LABEL_24;
        v14 = -2147483643;
        if ( !pszDest )
          v14 = -1073741811;
      }
    }
LABEL_17:
    if ( (dwFlags & 0x1C00) != 0 && cchDest )
    {
      RtlStringExHandleOtherFlagsW(pszDest, 2 * cchDest, v11, &v23, v24, dwFlags);
      v12 = v23;
      v13 = v24[0];
    }
    if ( v14 != -2147483643 )
      return v14;
    goto LABEL_24;
  }
  result = v10;
  if ( cchDest )
    *pszDest = 0;
  return result;
}
