/*
 * XREFs of RtlpDosPathNameToRelativeNtPathName_U @ 0x1800438A0
 * Callers:
 *     RtlDosLongPathNameToNtPathName_U_WithStatus @ 0x180100D50 (RtlDosLongPathNameToNtPathName_U_WithStatus.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1801143AC (LdrpCnvrtShortToLongFileName.c)
 *     RtlDosLongPathNameToRelativeNtPathName_U_WithStatus @ 0x18015C610 (RtlDosLongPathNameToRelativeNtPathName_U_WithStatus.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180044540 (RtlpDosPathNameToRelativeNtPathName.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 */

__int64 __fastcall RtlpDosPathNameToRelativeNtPathName_U(int a1, const wchar_t *a2, int a3, __int64 a4, __int64 a5)
{
  size_t v8; // rax
  _QWORD v10[3]; // [rsp+40h] [rbp-18h] BYREF

  v10[1] = a2;
  v10[0] = 0LL;
  if ( !a2 )
    return RtlpDosPathNameToRelativeNtPathName(a1, (unsigned int)v10, 0, a3, 0LL, a4, a5);
  v8 = wcslen(a2);
  if ( v8 <= 0x7FFE )
  {
    LOWORD(v10[0]) = 2 * v8;
    WORD1(v10[0]) = 2 * v8 + 2;
    return RtlpDosPathNameToRelativeNtPathName(a1, (unsigned int)v10, 0, a3, 0LL, a4, a5);
  }
  return 3221225734LL;
}
