/*
 * XREFs of RtlUnicodeStringCopyStringEx @ 0x1405DAFD8
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x140AE8544 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140AEACE8 (PiDevCfgBuildDriverConfigurationId.c)
 *     PipInitComputerIds @ 0x140D0B980 (PipInitComputerIds.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCopyStringEx(
        PUNICODE_STRING DestinationString,
        NTSTRSAFE_PCWSTR pszSrc,
        PUNICODE_STRING RemainingString,
        ULONG dwFlags)
{
  __int16 v4; // r15
  wchar_t *Buffer; // r14
  unsigned __int64 v7; // rsi
  wchar_t *v8; // r12
  unsigned __int64 v9; // rdi
  __int64 v10; // rbp
  unsigned __int16 Length; // cx
  unsigned __int64 MaximumLength; // rax
  const wchar_t *v13; // rax
  NTSTATUS v14; // ebx
  wchar_t *v15; // rax
  __int16 v16; // ax
  __int16 v17; // ax
  __int64 v18; // rax
  signed __int64 v19; // r8
  unsigned __int64 v20; // rcx

  v4 = dwFlags;
  if ( !DestinationString && (dwFlags & 0x100) != 0 )
  {
    Buffer = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    LOWORD(v9) = 0;
    LOWORD(v10) = 0;
LABEL_12:
    v13 = &SourceString;
    if ( pszSrc )
      v13 = pszSrc;
    pszSrc = v13;
    goto LABEL_15;
  }
  Length = DestinationString->Length;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return -1073741811;
  if ( Length > (unsigned __int16)MaximumLength )
    return -1073741811;
  if ( (_WORD)MaximumLength == 0xFFFF )
    return -1073741811;
  Buffer = DestinationString->Buffer;
  if ( !Buffer && (Length || (_WORD)MaximumLength) )
    return -1073741811;
  v8 = DestinationString->Buffer;
  v7 = MaximumLength >> 1;
  LOWORD(v10) = 0;
  v9 = MaximumLength >> 1;
  if ( (dwFlags & 0x100) != 0 )
    goto LABEL_12;
LABEL_15:
  v14 = 0;
  if ( (dwFlags & 0xFFFFE000) != 0 )
    goto LABEL_16;
  if ( v7 )
  {
    v18 = 0x7FFFLL;
    v19 = (char *)Buffer - (char *)pszSrc;
    v20 = v7;
    v10 = 0LL;
    while ( v18 )
    {
      if ( *pszSrc )
      {
        *(NTSTRSAFE_PCWSTR)((char *)pszSrc + v19) = *pszSrc;
        --v18;
        ++pszSrc;
        ++v10;
        if ( --v20 )
          continue;
      }
      if ( !v20 && v18 && *pszSrc )
        v14 = -2147483643;
      break;
    }
    v8 = &Buffer[v10];
    v9 = v7 - v10;
    if ( v14 >= 0 )
    {
      if ( (dwFlags & 0x200) != 0 && v9 )
        memset_0(&Buffer[v10], (unsigned __int8)dwFlags, 2 * v9);
      goto LABEL_33;
    }
    goto LABEL_21;
  }
  if ( *pszSrc )
  {
    if ( Buffer )
    {
      v14 = -2147483643;
      goto LABEL_21;
    }
LABEL_16:
    v14 = -1073741811;
LABEL_21:
    if ( (dwFlags & 0x1C00) != 0 && v7 )
    {
      v15 = Buffer;
      if ( (dwFlags & 0x1000) == 0 )
        v15 = v8;
      v8 = v15;
      v16 = v7;
      if ( (dwFlags & 0x1000) == 0 )
        v16 = v9;
      LOWORD(v9) = v16;
      v17 = 0;
      if ( (dwFlags & 0x1000) == 0 )
        v17 = v10;
      LOWORD(v10) = v17;
      if ( (dwFlags & 0x400) != 0 )
      {
        memset_0(Buffer, (unsigned __int8)dwFlags, 2 * v7);
        v8 = Buffer;
        LOWORD(v10) = 0;
        LOWORD(v9) = v7;
      }
      if ( (v4 & 0x800) != 0 )
      {
        v8 = Buffer;
        LOWORD(v9) = v7;
        LOWORD(v10) = 0;
      }
    }
  }
LABEL_33:
  if ( DestinationString )
    DestinationString->Length = 2 * v10;
  if ( (int)(v14 + 0x80000000) < 0 || v14 == -2147483643 )
  {
    if ( RemainingString )
    {
      RemainingString->Length = 0;
      RemainingString->MaximumLength = 2 * v9;
      RemainingString->Buffer = v8;
    }
  }
  return v14;
}
