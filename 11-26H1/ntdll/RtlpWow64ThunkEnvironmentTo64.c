/*
 * XREFs of RtlpWow64ThunkEnvironmentTo64 @ 0x18009E490
 * Callers:
 *     RtlpInitEnvironmentBlock @ 0x1800A0498 (RtlpInitEnvironmentBlock.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x18009CD10 (RtlQueryEnvironmentVariable.c)
 *     RtlSetEnvironmentVar @ 0x18009E600 (RtlSetEnvironmentVar.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 RtlpWow64ThunkEnvironmentTo64()
{
  _BYTE *v0; // rbx
  __int64 v1; // rsi
  const wchar_t *v2; // rdi
  size_t v3; // rax
  size_t v4; // r14
  __int64 result; // rax
  unsigned __int16 v6; // bp
  const wchar_t *v7; // rdi
  size_t v8; // rax
  __int128 v9; // [rsp+30h] [rbp-248h] BYREF
  _WORD v10[264]; // [rsp+40h] [rbp-238h] BYREF

  v0 = &unk_180171B70;
  v1 = 3LL;
  do
  {
    v2 = (const wchar_t *)*((_QWORD *)v0 - 2);
    LOWORD(v3) = 0;
    v9 = 0LL;
    if ( v2 )
    {
      v3 = 2 * wcslen(v2);
      if ( v3 >= 0xFFFE )
        LOWORD(v3) = -4;
    }
    v4 = (unsigned __int64)(unsigned __int16)v3 >> 1;
    *(_QWORD *)&v9 = 0LL;
    result = RtlQueryEnvironmentVariable(0LL, v2, v4, v10, 0x104uLL, (unsigned __int64 *)&v9);
    if ( (unsigned __int64)v9 <= 0x7FFF && (_DWORD)result != -1073741789 )
    {
      v6 = 2 * v9;
      if ( (int)result >= 0 )
      {
        if ( !*v0 )
          RtlSetEnvironmentVar(0LL, v2, v4, 0LL, 0LL);
        v7 = (const wchar_t *)*((_QWORD *)v0 - 4);
        LOWORD(v8) = 0;
        v9 = 0LL;
        if ( v7 )
        {
          v8 = 2 * wcslen(v7);
          if ( v8 >= 0xFFFE )
            LOWORD(v8) = -4;
        }
        result = RtlSetEnvironmentVar(
                   0LL,
                   v7,
                   (unsigned __int64)(unsigned __int16)v8 >> 1,
                   v10,
                   (unsigned __int64)v6 >> 1);
      }
    }
    v0 += 40;
    --v1;
  }
  while ( v1 );
  return result;
}
