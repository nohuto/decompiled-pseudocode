/*
 * XREFs of RtlUpcaseUnicodeToOemN @ 0x18009F1E0
 * Callers:
 *     RtlUpcaseUnicodeStringToOemString @ 0x18009F0D0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x18010D5E0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x18007A650 (RtlpIsUtf8Process.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x18009F380 (UpcaseUnicodeToSingleByteNHelper.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v5; // edx
  CHAR *v6; // rcx
  ULONG *v7; // r8
  const WCHAR *v8; // r9
  unsigned int v9; // r10d
  signed __int32 v11[8]; // [rsp+0h] [rbp-48h] BYREF

  if ( RtlpIsUtf8Process() )
    return UpcaseUnicodeToUTF8NHelper(v6, v5, v7, (__int64)v8, v9);
  _InterlockedOr(v11, 0);
  if ( CodePageTable.DBCSCodePage )
    return UpcaseUnicodeToMultiByteNHelper(v6, v5, v7, v8, v9);
  else
    return UpcaseUnicodeToSingleByteNHelper(
             (_DWORD)v6,
             v5,
             (_DWORD)v7,
             (_DWORD)v8,
             v9,
             (__int64)CodePageTable.WideCharTable,
             (__int64)CodePageTable.MultiByteTable);
}
