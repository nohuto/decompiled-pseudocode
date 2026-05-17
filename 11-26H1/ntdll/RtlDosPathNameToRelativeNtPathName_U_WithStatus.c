/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x180043940
 * Callers:
 *     <none>
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180044540 (RtlpDosPathNameToRelativeNtPathName.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 */

__int64 __fastcall RtlDosPathNameToRelativeNtPathName_U_WithStatus(const wchar_t *a1, int a2, __int64 a3, __int64 a4)
{
  size_t v7; // rax
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF

  v9[1] = a1;
  v9[0] = 0LL;
  if ( !a1 )
    return RtlpDosPathNameToRelativeNtPathName(2, (unsigned int)v9, 0, a2, 0LL, a3, a4);
  v7 = wcslen(a1);
  if ( v7 <= 0x7FFE )
  {
    LOWORD(v9[0]) = 2 * v7;
    WORD1(v9[0]) = 2 * v7 + 2;
    return RtlpDosPathNameToRelativeNtPathName(2, (unsigned int)v9, 0, a2, 0LL, a3, a4);
  }
  return 3221225734LL;
}
