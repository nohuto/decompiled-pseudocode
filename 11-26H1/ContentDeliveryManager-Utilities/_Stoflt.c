/*
 * XREFs of _Stoflt @ 0x18000BDAC
 * Callers:
 *     _Stofx @ 0x180004E48 (_Stofx.c)
 *     _Stodx @ 0x1800059B0 (_Stodx.c)
 *     _Stoldx @ 0x180006020 (_Stoldx.c)
 * Callees:
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

__int64 __fastcall Stoflt(unsigned __int8 *a1, unsigned __int8 *a2, unsigned __int8 **a3, _QWORD *a4, int a5)
{
  unsigned int v5; // r13d
  unsigned __int8 *v7; // rbx
  __int64 v8; // rbp
  unsigned __int8 v9; // al
  int v10; // r15d
  int v11; // edi
  __int64 v12; // r14
  struct lconv *v13; // rax
  unsigned __int8 *v14; // rdx
  unsigned __int8 *v15; // rbx
  int v16; // eax
  __int64 v17; // r14
  __int64 v18; // rax
  bool v19; // zf
  signed int v20; // r10d
  __int64 v21; // r9
  __int64 v22; // r8
  int v23; // r11d
  unsigned __int8 *v24; // r12
  char v25; // bp
  unsigned __int8 v26; // al
  int v27; // r14d
  int v28; // edi
  int v29; // eax
  __int64 result; // rax
  unsigned __int8 *v31; // rcx
  unsigned __int8 *v33; // [rsp+28h] [rbp-80h]
  _BYTE v34[48]; // [rsp+30h] [rbp-78h]

  v5 = 0;
  *a4 = 0LL;
  v7 = a2;
  v33 = a1;
  v8 = (unsigned int)(9 * a5);
  if ( (int)v8 > 45 )
    v8 = 45LL;
  v9 = *a2;
  v10 = 0;
  if ( *a2 == 48 )
  {
    v10 = 1;
    do
      v9 = *++v7;
    while ( *v7 == 48 );
  }
  v11 = 0;
  if ( isdigit(v9) )
  {
    v12 = 0LL;
    v10 = 1;
    do
    {
      if ( v12 > (int)v8 )
      {
        ++*(_DWORD *)a4;
      }
      else
      {
        ++v11;
        v34[v12++] = *v7 - 48;
      }
      ++v7;
    }
    while ( isdigit(*v7) );
  }
  v13 = localeconv();
  v14 = v7 + 1;
  if ( *v7 != *v13->decimal_point )
    v14 = v7;
  v15 = v14;
  if ( !v11 && *v14 == 48 )
  {
    v16 = *(_DWORD *)a4;
    v10 = 1;
    do
    {
      --v16;
      ++v15;
      *(_DWORD *)a4 = v16;
    }
    while ( *v15 == 48 );
  }
  if ( isdigit(*v15) )
  {
    v17 = v11;
    v10 = 1;
    do
    {
      if ( v17 <= (int)v8 )
      {
        ++v11;
        v34[v17++] = *v15 - 48;
        --*(_DWORD *)a4;
      }
      ++v15;
    }
    while ( isdigit(*v15) );
  }
  if ( (int)v8 < v11 )
  {
    if ( (char)v34[v8] >= 5 )
      ++v34[(unsigned int)(v8 - 1)];
    ++*(_DWORD *)a4;
    v11 = v8;
  }
  v18 = v11;
  v19 = v11 == 0;
  if ( v11 > 0 )
  {
    do
    {
      if ( v34[v18 - 1] )
        break;
      ++*(_DWORD *)a4;
      --v11;
      --v18;
    }
    while ( v18 > 0 );
    v19 = v11 == 0;
  }
  if ( v19 )
  {
    v11 = 1;
    v34[0] = 0;
  }
  if ( v10 )
  {
    v20 = 9
        * (((int)((unsigned __int64)(954437177LL * v11) >> 32) >> 1)
         + 1
         + ((unsigned int)((unsigned __int64)(954437177LL * v11) >> 32) >> 31))
        - v11;
    LOBYTE(v5) = v20 != 9 * (v20 / 9);
    if ( v11 > 0 )
    {
      v21 = 0LL;
      v22 = v5;
      do
      {
        v23 = (char)v34[v21];
        if ( v20 == 9 * (v20 / 9) )
        {
          ++v5;
          ++v22;
          *((_DWORD *)a4 + v22) = v23;
        }
        else
        {
          *((_DWORD *)a4 + v22) = v23 + 10 * *((_DWORD *)a4 + v22);
        }
        ++v20;
        ++v21;
      }
      while ( v21 < v11 );
    }
    if ( *v15 == 101 || *v15 == 69 )
    {
      v24 = v15;
      v25 = 43;
      v26 = *++v15;
      if ( *v15 == 43 || v26 == 45 )
      {
        ++v15;
        v25 = v26;
        v26 = *v15;
      }
      v27 = 0;
      v28 = 0;
      if ( isdigit(v26) )
      {
        v27 = 1;
        do
        {
          if ( v28 < 100000000 )
            v28 = *v15 + 2 * (5 * v28 - 24);
          ++v15;
        }
        while ( isdigit(*v15) );
      }
      v29 = -v28;
      if ( v25 != 45 )
        v29 = v28;
      *(_DWORD *)a4 += v29;
      if ( !v27 )
        v15 = v24;
    }
  }
  result = v10 != 0 ? v5 : 0;
  if ( a3 )
  {
    v31 = v33;
    if ( v10 )
      v31 = v15;
    *a3 = v31;
  }
  return result;
}
