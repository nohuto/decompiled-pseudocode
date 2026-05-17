/*
 * XREFs of RtlGetFullPathName_UEx @ 0x1800CD6E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetFullPathName_Ustr @ 0x180047AE0 (RtlGetFullPathName_Ustr.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 */

__int64 __fastcall RtlGetFullPathName_UEx(const wchar_t *a1, unsigned int a2, _WORD *a3, int **a4, _DWORD *a5)
{
  _DWORD *v5; // rbx
  size_t v9; // rax
  int FullPathName_Ustr; // eax
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v5 = a5;
  v13 = 0LL;
  if ( a5 )
    *a5 = 0;
  v12[0] = 0LL;
  v12[1] = a1;
  if ( a1 )
  {
    v9 = wcslen(a1);
    if ( v9 > 0x7FFE )
      return 3221225734LL;
    LOWORD(v12[0]) = 2 * v9;
    WORD1(v12[0]) = 2 * v9 + 2;
  }
  FullPathName_Ustr = RtlGetFullPathName_Ustr((unsigned __int16 *)v12, a2, a3, a4, 0LL, (int *)&v13);
  if ( !FullPathName_Ustr )
    return 3221225523LL;
  if ( v5 )
    *v5 = FullPathName_Ustr;
  return 0LL;
}
