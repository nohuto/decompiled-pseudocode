/*
 * XREFs of RtlUpcaseUnicodeToOemN @ 0x1800A00B0
 * Callers:
 *     RtlUpcaseUnicodeStringToOemString @ 0x18009FFA0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x18010DA90 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x1800832B0 (RtlpIsUtf8Process.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x1800A0250 (UpcaseUnicodeToSingleByteNHelper.c)
 */

__int64 RtlUpcaseUnicodeToOemN()
{
  int v0; // edx
  int v1; // ecx
  _DWORD *v2; // r8
  __int64 v3; // r9
  unsigned int v4; // r10d
  signed __int32 v6[8]; // [rsp+0h] [rbp-48h] BYREF

  if ( RtlpIsUtf8Process() )
    return UpcaseUnicodeToUTF8NHelper(v1, v0, v2, v3, v4);
  _InterlockedOr(v6, 0);
  if ( word_1801C5FDC )
    return UpcaseUnicodeToMultiByteNHelper(v1, v0, (_DWORD)v2, v3, v4);
  else
    return UpcaseUnicodeToSingleByteNHelper(v1, v0, (_DWORD)v2, v3, v4, qword_1801C5FF8, qword_1801C5FF0);
}
