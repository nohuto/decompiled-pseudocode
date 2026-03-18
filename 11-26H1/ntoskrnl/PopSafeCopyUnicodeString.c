/*
 * XREFs of PopSafeCopyUnicodeString @ 0x140439000
 * Callers:
 *     PopCaptureReasonContext @ 0x140438D4C (PopCaptureReasonContext.c)
 * Callees:
 *     RtlStringCbCopyUnicodeString @ 0x1404390A4 (RtlStringCbCopyUnicodeString.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 */

__int64 __fastcall PopSafeCopyUnicodeString(PCUNICODE_STRING SourceString, wchar_t **a2, __int64 a3, char a4)
{
  wchar_t *v4; // rsi
  SIZE_T Length; // rdx
  size_t v8; // rbp
  __int64 v9; // rax

  v4 = *a2;
  Length = SourceString->Length;
  v8 = Length + 2;
  if ( Length + 2 > a3 - (__int64)v4 )
    return 3221225485LL;
  if ( a4 )
    ProbeForRead(SourceString->Buffer, Length, 2u);
  if ( RtlStringCbCopyUnicodeString(v4, v8, SourceString) < 0 )
    return 3221225485LL;
  v9 = -1LL;
  do
    ++v9;
  while ( v4[v9] );
  if ( SourceString->Length != 2 * v9 )
    return 3221225485LL;
  *a2 += v9 + 1;
  return 0LL;
}
