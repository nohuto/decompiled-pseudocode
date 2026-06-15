/*
 * XREFs of sub_14000F730 @ 0x14000F730
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000FEA0 @ 0x14000FEA0 (sub_14000FEA0.c)
 *     sub_14000FEC8 @ 0x14000FEC8 (sub_14000FEC8.c)
 *     sub_14000FF2C @ 0x14000FF2C (sub_14000FF2C.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14008661C @ 0x14008661C (sub_14008661C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_14000F730(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // r9
  _QWORD *v6; // r13
  unsigned __int64 result; // rax
  __int64 v8; // rcx
  unsigned __int64 *v9; // rax
  unsigned __int64 i; // rdx
  _QWORD *m; // rsi
  __int64 v12; // rdi
  int v13; // ebx
  __int64 v14; // rdi
  _QWORD *v15; // rbx
  unsigned __int64 v16; // rsi
  int v17; // r14d
  _QWORD *n; // rbx
  __int64 v19; // rdx
  _QWORD *v20; // rdi
  __int64 v21; // rbx
  unsigned int v22; // eax
  __int64 v23; // r8
  unsigned __int64 ii; // rdx
  unsigned __int64 jj; // rdx
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // r8
  _QWORD *kk; // rdi
  __int64 v29; // rbx
  _QWORD *v30; // rsi
  __int64 v31; // rcx
  _QWORD *mm; // rbx
  __int64 v33; // rcx
  _QWORD *j; // rdi
  __int64 v35; // rbx
  _QWORD *v36; // rdi
  _QWORD *v37; // rbx
  unsigned __int64 v38; // rsi
  unsigned __int64 v39; // r8
  _QWORD *k; // rdi
  __int64 v41; // rbx
  int v42; // eax
  __int64 v43; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v44[16]; // [rsp+38h] [rbp-38h] BYREF
  __int64 *v45; // [rsp+48h] [rbp-28h]
  __int64 v46; // [rsp+50h] [rbp-20h]
  _QWORD *v47; // [rsp+58h] [rbp-18h]
  __int64 v48; // [rsp+60h] [rbp-10h]

  v5 = a1;
  v6 = *(_QWORD **)(a1 + 808);
  result = v6[8];
  if ( !result && !v6[14] )
    return result;
  v8 = a1 - 8;
  if ( result )
  {
    v9 = (unsigned __int64 *)_InterlockedExchange64((volatile __int64 *)(v5 + 312), 0LL);
    *(_QWORD *)(v5 + 320) = v9;
    for ( i = *v9; i; *(_DWORD *)(*(_QWORD *)(v8 + 112) + 32LL) = 0 )
    {
      v8 = *(_QWORD *)(i + 16);
      i = *(_QWORD *)i;
      *(_DWORD *)(*(_QWORD *)(v8 + 112) + 12LL) = 0;
    }
    result = _InterlockedExchange64((volatile __int64 *)(v5 + 312), *(_QWORD *)(v5 + 320));
    *(_QWORD *)(v5 + 320) = 0LL;
  }
  else
  {
    result = sub_14000FF2C(v8, a2, a3, v5);
  }
  if ( *(_DWORD *)(v5 + 72) )
  {
    for ( j = (_QWORD *)v6[6]; j; *(_QWORD *)(v8 + 24) = result )
    {
      v35 = j[2];
      j = (_QWORD *)*j;
      *(_DWORD *)(*(_QWORD *)(v35 + 112) + 8LL) = (int)(*(float *)(v35 + 52) * (double)(int)*a2 / 10000000.0 + 0.5);
      sub_1400B6010(*(_QWORD *)(v35 + 128));
      v8 = *(_QWORD *)(v35 + 112);
      result = *(_QWORD *)(a3 + 24);
    }
    v36 = (_QWORD *)*v6;
    if ( *v6 )
    {
      while ( 1 )
      {
        v37 = (_QWORD *)v36[2];
        v36 = (_QWORD *)*v36;
        v38 = v37[28];
        if ( v38 )
        {
          if ( v37[24] )
            break;
        }
LABEL_65:
        if ( !v36 )
          goto LABEL_66;
      }
      result = sub_1400B6010(v37[1]);
      v39 = 0LL;
      while ( v39 < v37[28] )
      {
        v8 = v37[27];
        i = *(_QWORD *)(v8 + 8 * v39);
        *(_DWORD *)(i + 8) = result;
        if ( ++v39 >= v38 )
          goto LABEL_65;
      }
LABEL_56:
      sub_14004639C(2147942487LL, i);
    }
LABEL_66:
    for ( k = (_QWORD *)v6[12]; k; *(_QWORD *)v8 = result )
    {
      v41 = k[2];
      k = (_QWORD *)*k;
      result = sub_1400B6010(*(_QWORD *)(v41 + 136));
      v8 = *(_QWORD *)(v41 + 112);
    }
  }
  else
  {
    for ( m = (_QWORD *)v6[12]; m; *(_QWORD *)(v8 + 24) = result )
    {
      v12 = m[2];
      m = (_QWORD *)*m;
      v13 = (int)(*(float *)(v12 + 52) * (double)(int)*a2 / 10000000.0 + 0.5);
      **(_QWORD **)(v12 + 112) = sub_1400B6010(*(_QWORD *)(v12 + 136));
      *(_DWORD *)(*(_QWORD *)(v12 + 112) + 8LL) = v13;
      v8 = *(_QWORD *)(v12 + 112);
      result = *(_QWORD *)(a3 + 24);
    }
    v14 = v6[1];
    if ( v14 )
    {
      while ( 1 )
      {
        v15 = *(_QWORD **)(v14 + 16);
        v14 = *(_QWORD *)(v14 + 8);
        v16 = v15[24];
        if ( v16 )
        {
          if ( v15[28] )
            break;
        }
LABEL_20:
        if ( !v14 )
          goto LABEL_21;
      }
      if ( (byte_1400E8401 & 4) != 0 )
      {
        v43 = v15[1];
        v45 = &v43;
        v46 = 8LL;
        v47 = v15 + 39;
        v48 = 16LL;
        sub_14000FEC8(v8, &unk_1400C53C0, a3, 3LL, v44);
      }
      if ( v15[28] )
      {
        v17 = sub_1400B6010(v15[1]);
        if ( (byte_1400E8401 & 4) != 0 )
        {
          v43 = v15[1];
          v45 = &v43;
          v46 = 8LL;
          v47 = v15 + 39;
          v48 = 16LL;
          sub_14000FEC8(v15 + 39, &unk_1400C53D0, a3, 3LL, v44);
        }
        i = 0LL;
        while ( i < v15[24] )
        {
          result = v15[23];
          v8 = *(_QWORD *)(result + 8 * i);
          *(_DWORD *)(v8 + 8) = v17;
          if ( ++i >= v16 )
            goto LABEL_20;
        }
      }
      goto LABEL_56;
    }
LABEL_21:
    for ( n = (_QWORD *)v6[6]; n; result = sub_1400B6010(*(_QWORD *)(v19 + 128)) )
    {
      v19 = n[2];
      n = (_QWORD *)*n;
      *(_DWORD *)(*(_QWORD *)(v19 + 112) + 16LL) = 1094930515;
    }
  }
  v20 = (_QWORD *)*v6;
  if ( *v6 )
  {
    while ( 1 )
    {
      v21 = v20[2];
      v20 = (_QWORD *)*v20;
      v22 = *(_DWORD *)(v21 + 440);
      if ( v22 >= 0x7FFFFFFF )
      {
        v23 = 1094930505LL;
      }
      else
      {
        v23 = 1094930515LL;
        if ( v22 >= 2 )
          v23 = 1094930482LL;
      }
      for ( ii = 0LL; ii < *(_QWORD *)(v21 + 192); ++ii )
      {
        v8 = *(_QWORD *)(*(_QWORD *)(v21 + 184) + 8 * ii);
        *(_DWORD *)(v8 + 16) = v23;
      }
      for ( jj = 0LL; jj < *(_QWORD *)(v21 + 224); ++jj )
      {
        v8 = *(_QWORD *)(*(_QWORD *)(v21 + 216) + 8 * jj);
        *(_DWORD *)(v8 + 16) = v23;
      }
      if ( (byte_1400E8401 & 4) != 0 )
      {
        v43 = *(_QWORD *)(v21 + 8);
        v45 = &v43;
        v46 = 8LL;
        v47 = (_QWORD *)(v21 + 312);
        v48 = 16LL;
        sub_14000FEC8(v8, &unk_1400C53B0, v23, 3LL, v44);
      }
      sub_1400B6010(*(_QWORD *)(v21 + 8));
      result = *(_QWORD *)(v21 + 224);
      v26 = *(_QWORD *)(v21 + 192);
      if ( v26 >= result )
        v26 = *(_QWORD *)(v21 + 224);
      v27 = 0LL;
      if ( v26 )
        break;
LABEL_43:
      if ( (byte_1400E8401 & 4) != 0 )
      {
        v43 = *(_QWORD *)(v21 + 8);
        v45 = &v43;
        v46 = 8LL;
        v47 = (_QWORD *)(v21 + 312);
        v48 = 16LL;
        result = sub_14000FEC8(v8, &unk_1400C53A0, v27, 3LL, v44);
      }
      if ( !v20 )
        goto LABEL_46;
    }
    while ( v27 < *(_QWORD *)(v21 + 192) )
    {
      if ( v27 >= *(_QWORD *)(v21 + 224) )
        break;
      i = *(_QWORD *)(*(_QWORD *)(v21 + 184) + 8 * v27);
      v8 = *(_QWORD *)(*(_QWORD *)(v21 + 216) + 8 * v27);
      *(_QWORD *)(v8 + 24) = *(_QWORD *)(i + 24);
      if ( v27 >= *(_QWORD *)(v21 + 224) )
        break;
      result = *(_QWORD *)(v21 + 216);
      i = *(_QWORD *)(result + 8 * v27);
      if ( !*(_DWORD *)(i + 32) )
      {
        if ( v27 >= *(_QWORD *)(v21 + 192) )
          goto LABEL_56;
        v8 = *(_QWORD *)(*(_QWORD *)(v21 + 184) + 8 * v27);
        result = *(unsigned int *)(v8 + 32);
        *(_DWORD *)(i + 32) = result;
      }
      if ( ++v27 >= v26 )
        goto LABEL_43;
    }
    goto LABEL_56;
  }
LABEL_46:
  for ( kk = (_QWORD *)v6[12]; kk; result = sub_14000FEA0(&v43) )
  {
    v43 = 0LL;
    v29 = kk[2];
    kk = (_QWORD *)*kk;
    v30 = (_QWORD *)(v29 + 136);
    if ( *(_DWORD *)(*(_QWORD *)(v29 + 112) + 8LL) >= (unsigned int)(int)(*(float *)(v29 + 52)
                                                                        * (double)(int)*a2
                                                                        / 10000000.0
                                                                        + 0.5)
      || (int)sub_1400B6010(*v30) < 0
      || !v43
      || (v42 = sub_1400B6010(v43), v31 = v43, !v42) )
    {
      v31 = *v30;
    }
    sub_1400B6010(v31);
    if ( v43 )
      sub_14008661C(&v43);
  }
  for ( mm = (_QWORD *)v6[6]; mm; result = sub_1400B6010(*(_QWORD *)(v33 + 128)) )
  {
    v33 = mm[2];
    mm = (_QWORD *)*mm;
  }
  return result;
}
