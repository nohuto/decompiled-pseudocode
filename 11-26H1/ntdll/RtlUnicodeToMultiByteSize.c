/*
 * XREFs of RtlUnicodeToMultiByteSize @ 0x180034070
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x1800363A0 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x18009FFA0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x18010DA90 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     wcstombs @ 0x18012E5A0 (wcstombs.c)
 *     RtlUnicodeStringToCountedOemString @ 0x180140590 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1801406A0 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x180034960 (RtlUnicodeToUTF8N.c)
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
  if ( word_1801C5FD0 == -535 || GlobalRtlNlsState == -535 )
  {
    if ( BytesInUnicodeString )
    {
      RtlUnicodeToUTF8N(0, 0, (_DWORD)BytesInMultiByteString, (_DWORD)UnicodeString, BytesInUnicodeString);
      return 0;
    }
    *BytesInMultiByteString = 0;
    return 0;
  }
  else
  {
    _InterlockedOr(v8, 0);
    v4 = 0;
    if ( !word_1801C5F9C )
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
      v4 += (HIBYTE(*(_WORD *)(qword_1801C5FB8 + 2 * v7)) != 0) + 1;
      --v6;
    }
    while ( v6 );
    *BytesInMultiByteString = v4;
    return 0;
  }
}
