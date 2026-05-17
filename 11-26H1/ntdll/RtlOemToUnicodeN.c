/*
 * XREFs of RtlOemToUnicodeN @ 0x18009FCA0
 * Callers:
 *     RtlCreateEnvironmentEx @ 0x18009F070 (RtlCreateEnvironmentEx.c)
 *     RtlOemStringToUnicodeString @ 0x18009FB00 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     RtlCustomCPToUnicodeN @ 0x18003BB10 (RtlCustomCPToUnicodeN.c)
 *     RtlpIsUtf8Process @ 0x1800832B0 (RtlpIsUtf8Process.c)
 */

__int64 __fastcall RtlOemToUnicodeN(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // edx
  char *v6; // r8
  unsigned __int8 *v7; // r9
  _WORD *v8; // r10
  __int16 *v9; // rcx
  signed __int32 v11[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( RtlpIsUtf8Process() )
  {
    v9 = (__int16 *)&Utf8TableInfo;
  }
  else
  {
    _InterlockedOr(v11, 0);
    v9 = &word_1801C5FD0;
    if ( GlobalRtlNlsState == 1 )
      v9 = &GlobalRtlNlsState;
  }
  return RtlCustomCPToUnicodeN((__int64)v9, v8, v5, v6, v7, a5);
}
