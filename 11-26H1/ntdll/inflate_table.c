/*
 * XREFs of inflate_table @ 0x180155F90
 * Callers:
 *     inflate @ 0x1801530B0 (inflate.c)
 * Callees:
 *     __report_rangecheckfailure @ 0x1801268D0 (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall inflate_table(
        int a1,
        unsigned __int16 *a2,
        unsigned int a3,
        _DWORD **a4,
        unsigned int *a5,
        _WORD *a6)
{
  __int64 v6; // r14
  unsigned int v7; // r13d
  unsigned int *v9; // rdx
  unsigned int v12; // r10d
  unsigned int i; // r9d
  __int64 v15; // rdi
  unsigned __int16 *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // r8d
  unsigned int v20; // eax
  unsigned int v22; // r9d
  _WORD *v23; // rcx
  unsigned int v24; // r15d
  int v25; // edx
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // r10d
  unsigned __int16 *v29; // rdx
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
  unsigned int j; // edx
  unsigned int v42; // ecx
  int v43; // edx
  unsigned int v44; // ebx
  int v45; // edx
  int v46; // [rsp+20h] [rbp-89h]
  unsigned int v47; // [rsp+24h] [rbp-85h]
  int v48; // [rsp+28h] [rbp-81h]
  int v49; // [rsp+2Ch] [rbp-7Dh]
  _DWORD *v50; // [rsp+30h] [rbp-79h]
  int v51; // [rsp+3Ch] [rbp-6Dh]
  unsigned int v52; // [rsp+40h] [rbp-69h]
  __int64 v54; // [rsp+48h] [rbp-61h]
  _WORD *v55; // [rsp+50h] [rbp-59h]
  _WORD v59[16]; // [rsp+7Ah] [rbp-2Fh] BYREF
  _WORD v60[15]; // [rsp+9Ah] [rbp-Fh]

  v6 = (__int64)a6;
  v7 = 0;
  v9 = a5;
  v12 = 1;
  for ( i = 0; i <= 0xF; ++i )
  {
    if ( 2 * (unsigned __int64)i >= 0x20 )
      _report_rangecheckfailure();
    v59[i - 1] = 0;
  }
  v15 = 2LL;
  if ( a3 )
  {
    v16 = a2;
    v17 = a3;
    do
    {
      v18 = *v16++;
      ++v59[v18 - 1];
      --v17;
    }
    while ( v17 );
    v9 = a5;
  }
  v19 = 15;
  v49 = -1;
  do
  {
    if ( v59[v19 - 1] )
      break;
    --v19;
  }
  while ( v19 );
  v20 = v19;
  if ( *v9 <= v19 )
    v20 = *v9;
  if ( !v19 )
  {
    do
    {
      *(*a4)++ = 320;
      --v15;
    }
    while ( v15 );
    *v9 = 1;
    return 0LL;
  }
  v22 = 1;
  if ( v19 > 1 )
  {
    v23 = v59;
    do
    {
      if ( *v23 )
        break;
      ++v22;
      ++v23;
    }
    while ( v22 < v19 );
  }
  v24 = v22;
  v25 = 1;
  if ( v20 >= v22 )
    v24 = v20;
  while ( v12 <= 0xF )
  {
    v25 = 2 * v25 - (unsigned __int16)v59[v12 - 1];
    if ( v25 < 0 )
      return 0xFFFFFFFFLL;
    ++v12;
  }
  if ( v25 && (!a1 || v19 != 1) )
    return 0xFFFFFFFFLL;
  v26 = 14LL;
  v60[0] = 0;
  v27 = 0LL;
  do
  {
    v60[v27 + 1] = v60[v27] + v59[v27];
    ++v27;
    --v26;
  }
  while ( v26 );
  v28 = 0;
  if ( a3 )
  {
    v29 = a2;
    do
    {
      if ( *v29 )
        a6[(unsigned __int16)v59[*v29 + 15]++] = v28;
      ++v28;
      ++v29;
    }
    while ( v28 < a3 );
  }
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v7 = 257;
      v55 = &unk_180191500;
      v6 = (__int64)&unk_1801914C0;
    }
    else
    {
      v55 = &unk_180191480;
      v6 = (__int64)&unk_180191440;
    }
  }
  else
  {
    v55 = a6;
    v7 = 20;
  }
  v30 = 0;
  v48 = 0;
  v31 = 0;
  v47 = 0;
  v54 = v6;
  LODWORD(v6) = 0;
  v50 = *a4;
  v32 = v24;
  v33 = 1 << v24;
  v51 = (1 << v24) - 1;
  if ( a1 == 1 && v33 > 0x534 || a1 == 2 && v33 > 0x250 )
    return 1LL;
  while ( 1 )
  {
    BYTE1(v46) = v22 - v31;
    v34 = (unsigned __int16)a6[(unsigned int)v6];
    if ( v34 + 1 >= v7 )
    {
      if ( v34 < v7 )
      {
        LOBYTE(v46) = 96;
        HIWORD(v46) = 0;
      }
      else
      {
        v35 = v34 - v7;
        LOBYTE(v46) = *(_BYTE *)(v54 + 2LL * v35);
        HIWORD(v46) = v55[v35];
      }
    }
    else
    {
      LOBYTE(v46) = 0;
      HIWORD(v46) = a6[(unsigned int)v6];
    }
    v36 = 1 << (v22 - v31);
    v37 = 1 << v32;
    LODWORD(v38) = (1 << v32) + (v30 >> v47);
    v52 = 1 << v32;
    do
    {
      v38 = (unsigned int)(v38 - v36);
      v50[v38] = v46;
      v37 -= v36;
    }
    while ( v37 );
    v39 = a4;
    for ( j = 1 << (v22 - 1); (j & v30) != 0; j >>= 1 )
      ;
    if ( j )
      v30 = j + ((j - 1) & v30);
    else
      v30 = 0;
    v6 = (unsigned int)++v48;
    if ( v59[v22 - 1]-- != 1 )
      goto LABEL_66;
    if ( v22 == v19 )
      break;
    v22 = a2[(unsigned __int16)a6[v6]];
LABEL_66:
    v31 = v47;
    if ( v22 > v24 )
    {
      v6 = v30 & v51;
      if ( (_DWORD)v6 == v49 )
      {
        LODWORD(v6) = v48;
      }
      else
      {
        v42 = v47;
        if ( !v47 )
          v42 = v24;
        v32 = v22 - v42;
        v47 = v42;
        v50 += v52;
        v43 = 1 << (v22 - v42);
        if ( v22 < v19 )
        {
          v44 = v22;
          do
          {
            v45 = v43 - (unsigned __int16)v59[v44 - 1];
            if ( v45 <= 0 )
              break;
            ++v32;
            ++v44;
            v43 = 2 * v45;
          }
          while ( v44 < v19 );
          v39 = a4;
        }
        v33 += 1 << v32;
        if ( a1 == 1 && v33 > 0x534 || a1 == 2 && v33 > 0x250 )
          return 1LL;
        v31 = v42;
        v49 = v30 & v51;
        *(_BYTE *)(*v39 + 4 * v6) = v32;
        *(_BYTE *)(*v39 + 4 * v6 + 1) = v24;
        *(_WORD *)(*v39 + 4 * v6 + 2) = ((__int64)v50 - *v39) >> 2;
        LODWORD(v6) = v48;
      }
    }
  }
  if ( v30 )
  {
    LOBYTE(v46) = 64;
    v50[v30] = (unsigned __int16)v46;
  }
  *a4 += v33;
  *a5 = v24;
  return 0LL;
}
