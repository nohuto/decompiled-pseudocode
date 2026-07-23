/*
 * XREFs of RtlUnicodeToMultiByteSize @ 0x18001F1D0
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x180021500 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x18009F0D0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x18010D5E0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     wcstombs @ 0x18012E310 (wcstombs.c)
 *     RtlUnicodeStringToCountedOemString @ 0x180140490 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1801405A0 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x18001FAC0 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __stdcall RtlUnicodeToMultiByteSize(
        PULONG BytesInMultiByteString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  PWCH v3; // r9
  ULONG v4; // edx
  ULONG v6; // r8d
  __int64 v7; // rax
  signed __int32 v8[8]; // [rsp+0h] [rbp-38h] BYREF

  v3 = UnicodeString;
  _InterlockedOr(v8, 0);
  if ( CodePageTable.CodePage == 0xFDE9 || GlobalRtlNlsState.CodePage == 0xFDE9 )
  {
    if ( BytesInUnicodeString )
    {
      RtlUnicodeToUTF8N(0LL, 0, BytesInMultiByteString, UnicodeString, BytesInUnicodeString);
      return 0;
    }
    *BytesInMultiByteString = 0;
    return 0;
  }
  else
  {
    _InterlockedOr(v8, 0);
    v4 = 0;
    if ( !GlobalRtlNlsState.DBCSCodePage )
    {
      v4 = BytesInUnicodeString >> 1;
LABEL_5:
      *BytesInMultiByteString = v4;
      return 0;
    }
    v6 = BytesInUnicodeString >> 1;
    if ( !v6 )
      goto LABEL_5;
    do
    {
      v7 = *v3++;
      v4 += (HIBYTE(*((_WORD *)GlobalRtlNlsState.WideCharTable + v7)) != 0) + 1;
      --v6;
    }
    while ( v6 );
    *BytesInMultiByteString = v4;
    return 0;
  }
}
