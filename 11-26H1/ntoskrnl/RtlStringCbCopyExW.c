/*
 * XREFs of RtlStringCbCopyExW @ 0x140446CE0
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14095394C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     ConvertDevpropertyToString @ 0x1409F7094 (ConvertDevpropertyToString.c)
 *     _PnpMultiSzAppend @ 0x140A97EF4 (_PnpMultiSzAppend.c)
 *     PiDqConvertQueryFlagsToString @ 0x140B115AC (PiDqConvertQueryFlagsToString.c)
 *     RtlFormatMessageEx @ 0x140B119B0 (RtlFormatMessageEx.c)
 *     ExpressionConvertToString @ 0x140B52CB8 (ExpressionConvertToString.c)
 * Callees:
 *     StringExHandleOtherFlagsW @ 0x1404463B0 (StringExHandleOtherFlagsW.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

NTSTATUS __stdcall RtlStringCbCopyExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cbDest,
        NTSTRSAFE_PCWSTR pszSrc,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcbRemaining,
        ULONG dwFlags)
{
  DWORD v6; // r15d
  size_t v9; // rbp
  NTSTATUS v12; // ebx
  size_t v13; // r8
  NTSTRSAFE_PWSTR v14; // rdi
  NTSTATUS v15; // ebx
  size_t v16; // rax
  signed __int64 v17; // r11
  NTSTRSAFE_PWSTR v18; // rdx
  wchar_t v19; // cx
  NTSTRSAFE_PWSTR v20; // rcx
  size_t v21; // rcx
  NTSTATUS result; // eax
  size_t pcchRemaining[7]; // [rsp+30h] [rbp-38h] BYREF
  STRSAFE_LPWSTR ppszDestEnda; // [rsp+78h] [rbp+10h] BYREF

  v6 = dwFlags;
  v9 = cbDest >> 1;
  v12 = 0;
  v13 = dwFlags & 0x100;
  if ( (dwFlags & 0x100) == 0 )
  {
    if ( v9 - 1 <= 0x7FFFFFFE )
      goto LABEL_3;
    goto LABEL_40;
  }
  if ( !pszDest && v9 || v9 > 0x7FFFFFFF )
LABEL_40:
    v12 = -1073741811;
LABEL_3:
  if ( v12 >= 0 )
  {
    v14 = pszDest;
    ppszDestEnda = pszDest;
    pcchRemaining[0] = cbDest >> 1;
    if ( (dwFlags & 0x100) != 0 && !pszSrc )
      pszSrc = &SourceString;
    v15 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v15 = -1073741811;
      if ( v9 )
        *pszDest = 0;
    }
    else
    {
      if ( v9 )
      {
        v16 = cbDest >> 1;
        v17 = (char *)pszSrc - (char *)pszDest;
        v18 = pszDest;
        v13 = 0LL;
        do
        {
          if ( !(2147483646 - v9 + v16) )
            break;
          v19 = *(NTSTRSAFE_PWSTR)((char *)v18 + v17);
          if ( !v19 )
            break;
          *v18 = v19;
          ++v13;
          ++v18;
          --v16;
        }
        while ( v16 );
        v20 = v18 - 1;
        if ( v16 )
          v20 = v18;
        v15 = -2147483643;
        if ( v16 )
          v15 = 0;
        *v20 = 0;
        v21 = v13 - 1;
        if ( v16 )
          v21 = v13;
        v9 -= v21;
        pcchRemaining[0] = v9;
        v14 = &pszDest[v21];
        ppszDestEnda = v14;
        if ( v16 )
        {
          if ( (v6 & 0x200) != 0 )
          {
            v13 = (cbDest & 1) + 2 * v9;
            if ( v13 > 2 )
              memset_0(v14 + 1, (unsigned __int8)v6, v13 - 2);
          }
        }
      }
      else
      {
        if ( !*pszSrc )
          goto LABEL_19;
        v15 = -1073741811;
        if ( pszDest )
          v15 = -2147483643;
      }
      if ( v15 >= 0 )
      {
LABEL_19:
        if ( ppszDestEnd )
          *ppszDestEnd = v14;
        if ( pcbRemaining )
          *pcbRemaining = (cbDest & 1) + 2 * v9;
        return v15;
      }
    }
    if ( (v6 & 0x1C00) != 0 && cbDest )
    {
      StringExHandleOtherFlagsW(pszDest, cbDest, v13, &ppszDestEnda, pcchRemaining, v6);
      v14 = ppszDestEnda;
      v9 = pcchRemaining[0];
    }
    if ( v15 != -2147483643 )
      return v15;
    goto LABEL_19;
  }
  result = v12;
  if ( v9 )
    *pszDest = 0;
  return result;
}
