/*
 * XREFs of _Stoxflt @ 0x18000C048
 * Callers:
 *     _Stofx @ 0x180004E48 (_Stofx.c)
 *     _Stodx @ 0x1800059B0 (_Stodx.c)
 *     _Stoldx @ 0x180006020 (_Stoldx.c)
 * Callees:
 *     memchr_0 @ 0x180021D1A (memchr_0.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

__int64 __fastcall Stoxflt(unsigned __int8 *a1, unsigned __int8 *a2, unsigned __int8 **a3, _QWORD *a4, int a5)
{
  int v5; // ebp
  int v6; // r13d
  unsigned __int8 *v8; // rbx
  unsigned __int8 v9; // al
  int v10; // r15d
  int v11; // esi
  _BYTE *v12; // rax
  __int64 v13; // r14
  struct lconv *v14; // rax
  unsigned __int8 *v15; // rdx
  unsigned __int8 *v16; // rbx
  int v17; // eax
  _BYTE *v18; // rax
  __int64 v19; // r14
  __int64 v20; // rax
  bool v21; // zf
  signed int v22; // r9d
  __int64 v23; // r10
  __int64 v24; // r8
  int v25; // r11d
  unsigned __int8 *v26; // r12
  char v27; // bp
  unsigned __int8 v28; // al
  int v29; // r14d
  int v30; // esi
  int v31; // eax
  __int64 result; // rax
  unsigned __int8 *v33; // rcx
  unsigned __int8 *v35; // [rsp+30h] [rbp-78h]
  _BYTE v36[40]; // [rsp+38h] [rbp-70h]

  v5 = 7 * a5;
  v6 = 0;
  *a4 = 0LL;
  v8 = a2;
  v35 = a1;
  if ( 7 * a5 > 35 )
    v5 = 35;
  v9 = *a2;
  v10 = 0;
  if ( *a2 == 48 )
  {
    v10 = 1;
    do
      v9 = *++v8;
    while ( *v8 == 48 );
  }
  v11 = 0;
  v12 = memchr_0("0123456789abcdefABCDEF", (char)v9, 0x16uLL);
  if ( v12 )
  {
    v13 = 0LL;
    v10 = 1;
    do
    {
      if ( v13 > v5 )
      {
        ++*(_DWORD *)a4;
      }
      else
      {
        ++v11;
        v36[v13++] = byte_1800E37E8[v12 - "0123456789abcdefABCDEF"];
      }
      v12 = memchr_0("0123456789abcdefABCDEF", (char)*++v8, 0x16uLL);
    }
    while ( v12 );
    v6 = 0;
  }
  v14 = localeconv();
  v15 = v8 + 1;
  if ( *v8 != *v14->decimal_point )
    v15 = v8;
  v16 = v15;
  if ( !v11 && *v15 == 48 )
  {
    v17 = *(_DWORD *)a4;
    v10 = 1;
    do
    {
      --v17;
      ++v16;
      *(_DWORD *)a4 = v17;
    }
    while ( *v16 == 48 );
  }
  v18 = memchr_0("0123456789abcdefABCDEF", (char)*v16, 0x16uLL);
  if ( v18 )
  {
    v19 = v11;
    v10 = 1;
    do
    {
      if ( v19 <= v5 )
      {
        ++v11;
        v36[v19++] = byte_1800E37E8[v18 - "0123456789abcdefABCDEF"];
        --*(_DWORD *)a4;
      }
      v18 = memchr_0("0123456789abcdefABCDEF", (char)*++v16, 0x16uLL);
    }
    while ( v18 );
    v6 = 0;
  }
  if ( v5 < v11 )
  {
    if ( (char)v36[v5] >= 8 )
      ++v36[v5 - 1];
    ++*(_DWORD *)a4;
    v11 = v5;
  }
  v20 = v11;
  v21 = v11 == 0;
  if ( v11 > 0 )
  {
    do
    {
      if ( v36[v20 - 1] )
        break;
      ++*(_DWORD *)a4;
      --v11;
      --v20;
    }
    while ( v20 > 0 );
    v21 = v11 == 0;
  }
  if ( v21 )
  {
    v11 = 1;
    v36[0] = 0;
  }
  *(_DWORD *)a4 *= 4;
  if ( v10 )
  {
    v22 = 7
        * (((int)((unsigned __int64)(2454267027LL * v11) >> 32) >> 2)
         + 1
         + ((unsigned int)((unsigned __int64)(2454267027LL * v11) >> 32) >> 31))
        - v11;
    v6 = v22 != 7 * (v22 / 7);
    if ( v11 > 0 )
    {
      v23 = 0LL;
      v24 = v22 != 7 * (v22 / 7);
      do
      {
        v25 = (char)v36[v23];
        if ( v22 == 7 * (v22 / 7) )
        {
          ++v6;
          ++v24;
          *((_DWORD *)a4 + v24) = v25;
        }
        else
        {
          *((_DWORD *)a4 + v24) = v25 + 16 * *((_DWORD *)a4 + v24);
        }
        ++v22;
        ++v23;
      }
      while ( v23 < v11 );
    }
    if ( *v16 == 112 || *v16 == 80 )
    {
      v26 = v16;
      v27 = 43;
      v28 = *++v16;
      if ( *v16 == 43 || v28 == 45 )
      {
        ++v16;
        v27 = v28;
        v28 = *v16;
      }
      v29 = 0;
      v30 = 0;
      if ( isdigit(v28) )
      {
        v29 = 1;
        do
        {
          if ( v30 < 100000000 )
            v30 = *v16 + 2 * (5 * v30 - 24);
          ++v16;
        }
        while ( isdigit(*v16) );
      }
      v31 = -v30;
      if ( v27 != 45 )
        v31 = v30;
      *(_DWORD *)a4 += v31;
      if ( !v29 )
        v16 = v26;
    }
  }
  result = v6 & (unsigned int)-(v10 != 0);
  if ( a3 )
  {
    v33 = v35;
    if ( v10 )
      v33 = v16;
    *a3 = v33;
  }
  return result;
}
