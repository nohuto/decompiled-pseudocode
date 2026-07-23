/*
 * XREFs of RtlUnicodeStringPrintfEx @ 0x1404D8620
 * Callers:
 *     PiBuildAndOpenDeviceDirectoryPath @ 0x1407A34A4 (PiBuildAndOpenDeviceDirectoryPath.c)
 *     PiCreateServiceKeyUnderPath @ 0x1407A3B6C (PiCreateServiceKeyUnderPath.c)
 *     PiGetDriverMutableStateDirectory @ 0x1407A3DC4 (PiGetDriverMutableStateDirectory.c)
 *     PiOpenDriverRedirectedStateKey @ 0x140A3FA1C (PiOpenDriverRedirectedStateKey.c)
 *     PiDevCfgBuildIndirectString @ 0x140A42AB8 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140AE8544 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140AEACE8 (PiDevCfgBuildDriverConfigurationId.c)
 * Callees:
 *     _vsnwprintf @ 0x140537830 (_vsnwprintf.c)
 *     RtlUnicodeStringExHandleOtherFlags @ 0x1405DB7E0 (RtlUnicodeStringExHandleOtherFlags.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

NTSTATUS RtlUnicodeStringPrintfEx(
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING RemainingString,
        ULONG dwFlags,
        NTSTRSAFE_PCWSTR pszFormat,
        ...)
{
  const wchar_t *v5; // r10
  size_t v6; // r8
  unsigned __int16 Length; // cx
  NTSTATUS v9; // ebx
  wchar_t *v11; // rax
  size_t v12; // r14
  size_t v13; // rdi
  int v14; // eax
  wchar_t *Buffer; // r15
  size_t v16; // rsi
  unsigned __int64 MaximumLength; // rax
  size_t pcchNewDestLength; // [rsp+40h] [rbp-28h] BYREF
  size_t pcchRemaining; // [rsp+48h] [rbp-20h] BYREF
  wchar_t *ppszDestEnd; // [rsp+50h] [rbp-18h] BYREF
  va_list Args; // [rsp+D0h] [rbp+68h] BYREF

  va_start(Args, pszFormat);
  v5 = pszFormat;
  v6 = 0LL;
  if ( !DestinationString && (dwFlags & 0x100) != 0 )
  {
    Buffer = 0LL;
    v16 = 0LL;
  }
  else
  {
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
    v16 = MaximumLength >> 1;
  }
  ppszDestEnd = Buffer;
  LOWORD(v12) = v16;
  pcchRemaining = v16;
  LOWORD(v13) = 0;
  pcchNewDestLength = 0LL;
  if ( (dwFlags & 0x100) != 0 && !pszFormat )
    v5 = &SourceString;
  v9 = 0;
  if ( (dwFlags & 0xFFFFE000) != 0 )
  {
    v9 = -1073741811;
LABEL_20:
    if ( (dwFlags & 0x1C00) != 0 && v16 )
    {
      RtlUnicodeStringExHandleOtherFlags(Buffer, v16, v6, &pcchNewDestLength, &ppszDestEnd, &pcchRemaining, dwFlags);
      LOWORD(v12) = pcchRemaining;
      LOWORD(v13) = pcchNewDestLength;
    }
    goto LABEL_7;
  }
  if ( v16 )
  {
    ppszDestEnd = 0LL;
    v14 = vsnwprintf(Buffer, v16, v5, Args);
    if ( v14 < 0 || (v13 = v14, v14 > v16) )
    {
      v13 = v16;
      pcchNewDestLength = v16;
      v9 = -2147483643;
    }
    else
    {
      pcchNewDestLength = v14;
    }
    v12 = v16 - v13;
    ppszDestEnd = &Buffer[v13];
    pcchRemaining = v16 - v13;
    if ( v9 >= 0 )
    {
      if ( (dwFlags & 0x200) != 0 && v12 )
        memset_0(&Buffer[v13], (unsigned __int8)dwFlags, 2 * v12);
      goto LABEL_7;
    }
    goto LABEL_20;
  }
  if ( *v5 )
  {
    v9 = Buffer != 0LL ? -2147483643 : -1073741811;
    goto LABEL_20;
  }
LABEL_7:
  if ( DestinationString )
    DestinationString->Length = 2 * v13;
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
  {
    if ( RemainingString )
    {
      v11 = ppszDestEnd;
      RemainingString->MaximumLength = 2 * v12;
      RemainingString->Buffer = v11;
      RemainingString->Length = 0;
    }
  }
  return v9;
}
