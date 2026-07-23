/*
 * XREFs of inflate_table @ 0x140638558
 * Callers:
 *     inflate @ 0x14062969C (inflate.c)
 * Callees:
 *     __report_rangecheckfailure @ 0x1405246B0 (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall inflate_table(
        int a1,
        unsigned __int16 *a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned int *a5,
        __int64 *a6)
{
  unsigned int v6; // r13d
  unsigned __int64 v7; // r14
  _DWORD **v8; // rsi
  unsigned int i; // r9d
  __int64 v13; // rdi
  unsigned __int16 *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // r8d
  unsigned int v18; // eax
  unsigned int v20; // r9d
  _WORD *v21; // rcx
  unsigned int v22; // r15d
  int v23; // edx
  unsigned int j; // r10d
  __int64 v25; // rdx
  __int64 v26; // r10
  unsigned int v27; // r10d
  unsigned __int16 *v28; // rdx
  __int64 v29; // rax
  unsigned int v30; // r11d
  char v31; // dl
  char v32; // r12
  unsigned int v33; // r10d
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  int v36; // r14d
  int v37; // edx
  __int64 v38; // rbx
  _QWORD *v39; // rsi
  unsigned int k; // edx
  unsigned int v42; // ecx
  int v43; // edx
  unsigned int v44; // ebx
  int v45; // edx
  int v46; // [rsp+20h] [rbp-99h]
  unsigned int v47; // [rsp+24h] [rbp-95h]
  int v48; // [rsp+28h] [rbp-91h]
  int v50; // [rsp+30h] [rbp-89h]
  _DWORD *v51; // [rsp+38h] [rbp-81h]
  int v52; // [rsp+44h] [rbp-75h]
  unsigned int v53; // [rsp+48h] [rbp-71h]
  unsigned __int64 v54; // [rsp+50h] [rbp-69h]
  __int64 *v55; // [rsp+58h] [rbp-61h]
  _WORD v59[16]; // [rsp+82h] [rbp-37h] BYREF
  _WORD v60[15]; // [rsp+A2h] [rbp-17h]

  v6 = 0;
  v7 = (unsigned __int64)a6;
  v8 = (_DWORD **)a4;
  for ( i = 0; i <= 0xF; ++i )
  {
    if ( 2 * (unsigned __int64)i >= 0x20 )
      _report_rangecheckfailure();
    v59[i - 1] = 0;
  }
  v13 = 2LL;
  if ( a3 )
  {
    v14 = a2;
    v15 = a3;
    do
    {
      v16 = *v14++;
      ++v59[v16 - 1];
      --v15;
    }
    while ( v15 );
  }
  v50 = -1;
  v17 = 15;
  do
  {
    if ( v59[v17 - 1] )
      break;
    --v17;
  }
  while ( v17 );
  v18 = v17;
  if ( *a5 <= v17 )
    v18 = *a5;
  if ( !v17 )
  {
    do
    {
      *(*v8)++ = 320;
      --v13;
    }
    while ( v13 );
    *a5 = 1;
    return 0LL;
  }
  v20 = 1;
  if ( v17 > 1 )
  {
    v21 = v59;
    do
    {
      if ( *v21 )
        break;
      ++v20;
      ++v21;
    }
    while ( v20 < v17 );
  }
  v22 = v20;
  if ( v18 >= v20 )
    v22 = v18;
  v23 = 1;
  for ( j = 1; j <= 0xF; ++j )
  {
    v23 = 2 * v23 - (unsigned __int16)v59[j - 1];
    if ( v23 < 0 )
      return 0xFFFFFFFFLL;
  }
  if ( v23 && (!a1 || v17 != 1) )
    return 0xFFFFFFFFLL;
  v60[0] = 0;
  v25 = 0LL;
  v26 = 14LL;
  do
  {
    v60[v25 + 1] = v60[v25] + v59[v25];
    ++v25;
    --v26;
  }
  while ( v26 );
  v27 = 0;
  if ( a3 )
  {
    v28 = a2;
    do
    {
      v29 = *v28;
      if ( (_WORD)v29 )
      {
        *((_WORD *)a6 + (unsigned __int16)v59[v29 + 15]) = v27;
        ++v59[*v28 + 15];
      }
      ++v27;
      ++v28;
    }
    while ( v27 < a3 );
    v8 = (_DWORD **)a4;
  }
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v6 = 257;
      v55 = qword_140037AA0;
      v7 = (unsigned __int64)qword_140037B20;
    }
    else
    {
      v55 = qword_140037AE0;
      v7 = (unsigned __int64)qword_140037B60;
    }
  }
  else
  {
    v55 = a6;
    v6 = 20;
  }
  v54 = v7;
  v30 = 0;
  LODWORD(v7) = 0;
  v48 = 0;
  v31 = 0;
  v47 = 0;
  v51 = *v8;
  v32 = v22;
  v33 = 1 << v22;
  v52 = (1 << v22) - 1;
  if ( a1 == 1 && v33 > 0x534 || a1 == 2 && v33 > 0x250 )
    return 1LL;
  while ( 1 )
  {
    BYTE1(v46) = v20 - v31;
    v34 = *((unsigned __int16 *)a6 + (unsigned int)v7);
    if ( v34 + 1 >= v6 )
    {
      if ( v34 < v6 )
      {
        LOBYTE(v46) = 96;
        HIWORD(v46) = 0;
      }
      else
      {
        v35 = v34 - v6;
        LOBYTE(v46) = *(_BYTE *)(v54 + 2LL * v35);
        HIWORD(v46) = *((_WORD *)v55 + v35);
      }
    }
    else
    {
      LOBYTE(v46) = 0;
      HIWORD(v46) = *((_WORD *)a6 + (unsigned int)v7);
    }
    v36 = 1 << (v20 - v31);
    v37 = 1 << v32;
    LODWORD(v38) = (1 << v32) + (v30 >> v47);
    v53 = 1 << v32;
    do
    {
      v38 = (unsigned int)(v38 - v36);
      v51[v38] = v46;
      v37 -= v36;
    }
    while ( v37 );
    v39 = a4;
    for ( k = 1 << (v20 - 1); (k & v30) != 0; k >>= 1 )
      ;
    if ( k )
      v30 = k + ((k - 1) & v30);
    else
      v30 = 0;
    v7 = (unsigned int)++v48;
    if ( v59[v20 - 1]-- != 1 )
      goto LABEL_67;
    if ( v20 == v17 )
      break;
    v20 = a2[*((unsigned __int16 *)a6 + v7)];
LABEL_67:
    v31 = v47;
    if ( v20 > v22 )
    {
      v7 = v30 & v52;
      if ( (_DWORD)v7 == v50 )
      {
        LODWORD(v7) = v48;
      }
      else
      {
        v42 = v47;
        if ( !v47 )
          v42 = v22;
        v32 = v20 - v42;
        v47 = v42;
        v51 += v53;
        v43 = 1 << (v20 - v42);
        if ( v20 < v17 )
        {
          v44 = v20;
          do
          {
            v45 = v43 - (unsigned __int16)v59[v44 - 1];
            if ( v45 <= 0 )
              break;
            ++v32;
            ++v44;
            v43 = 2 * v45;
          }
          while ( v44 < v17 );
          v39 = a4;
        }
        v33 += 1 << v32;
        if ( a1 == 1 && v33 > 0x534 || a1 == 2 && v33 > 0x250 )
          return 1LL;
        v31 = v42;
        v50 = v30 & v52;
        *(_BYTE *)(*v39 + 4 * v7) = v32;
        *(_BYTE *)(*v39 + 4 * v7 + 1) = v22;
        *(_WORD *)(*v39 + 4 * v7 + 2) = ((__int64)v51 - *v39) >> 2;
        LODWORD(v7) = v48;
      }
    }
  }
  if ( v30 )
  {
    LOBYTE(v46) = 64;
    v51[v30] = (unsigned __int16)v46;
  }
  *a4 += 4LL * v33;
  *a5 = v22;
  return 0LL;
}
