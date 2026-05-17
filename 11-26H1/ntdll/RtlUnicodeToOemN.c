/*
 * XREFs of RtlUnicodeToOemN @ 0x180036620
 * Callers:
 *     RtlUnicodeStringToCountedOemString @ 0x180140590 (RtlUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlUnicodeToCustomCPN @ 0x180034800 (RtlUnicodeToCustomCPN.c)
 *     RtlpIsUtf8Process @ 0x1800832B0 (RtlpIsUtf8Process.c)
 */

__int64 __fastcall RtlUnicodeToOemN(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // edx
  unsigned int *v6; // r8
  unsigned __int16 *v7; // r9
  _BYTE *v8; // r10
  __int16 *v9; // rcx
  signed __int32 v11[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( (unsigned __int8)RtlpIsUtf8Process(a1, a2, a3) )
  {
    v9 = (__int16 *)&Utf8TableInfo;
  }
  else
  {
    _InterlockedOr(v11, 0);
    v9 = &GlobalRtlNlsState;
  }
  return RtlUnicodeToCustomCPN((__int64)v9, v8, v5, v6, v7, a5);
}
