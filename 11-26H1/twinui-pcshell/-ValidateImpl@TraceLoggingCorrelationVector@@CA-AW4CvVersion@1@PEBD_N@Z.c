/*
 * XREFs of ?ValidateImpl@TraceLoggingCorrelationVector@@CA?AW4CvVersion@1@PEBD_N@Z @ 0x180168DB4
 * Callers:
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x180168984 (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 *     ?Extend@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x1805F93BC (-Extend@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

char __fastcall TraceLoggingCorrelationVector::ValidateImpl(const char *a1, char a2)
{
  int v4; // ecx
  char *v5; // r8
  char v6; // bp
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  bool v10; // cc
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  char *v13; // rax
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  char String[8]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v20; // [rsp+28h] [rbp-30h]
  char v21; // [rsp+2Ah] [rbp-2Eh]

  v5 = (char *)(strchr(a1, 46) - a1);
  if ( v5 == (char *)22 )
  {
    v6 = 2;
  }
  else
  {
    if ( v5 != (char *)16 )
      return 0;
    v6 = 1;
  }
  if ( a2 )
    return v6;
  v8 = -1LL;
  do
    ++v8;
  while ( a1[v8] );
  v9 = 0LL;
  if ( v6 == 1 )
    v10 = v8 <= 0x41;
  else
    v10 = v8 <= 0x81;
  if ( v10 )
  {
    while ( v9 < (unsigned __int64)v5 )
    {
      LOBYTE(v4) = a1[v9];
      if ( (char)v4 < 48 || (char)v4 > 57 )
      {
        if ( (unsigned __int8)(v4 - 43) > 0x2Fu || (v11 = 0xFFFFFFC00011LL, !_bittest64(&v11, (unsigned int)(v4 - 43))) )
        {
          if ( (unsigned __int8)(v4 - 97) > 0x19u )
            return 0;
        }
      }
      ++v9;
    }
    while ( a1[v9] == 46 )
    {
      v12 = v9 + 1;
      if ( v12 >= v8 )
        break;
      *(_QWORD *)String = 0LL;
      v20 = 0;
      v21 = 0;
      v13 = strchr(&a1[v12], 46);
      v14 = v13 ? v13 - a1 : v8;
      v15 = v14 - v12;
      if ( v15 >= 0xB )
        break;
      _o_strncpy_s(String, 11LL, &a1[v12], v15);
      _o__set_errno(0LL);
      if ( !strtol(String, 0LL, 10) && String[0] != 48 && String[1] )
        break;
      if ( *(_DWORD *)_o__errno(v17, v16, v18) == 34 )
        break;
      v9 = v15 + v12;
      if ( v9 >= v8 )
        return v6;
    }
  }
  return 0;
}
