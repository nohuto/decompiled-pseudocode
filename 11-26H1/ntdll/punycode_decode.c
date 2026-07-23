/*
 * XREFs of punycode_decode @ 0x1800AC740
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x1800AC330 (RtlpIdnToUnicodeWorker.c)
 * Callees:
 *     ValidateStd3Range @ 0x1800AE060 (ValidateStd3Range.c)
 *     adapt @ 0x1800AE09C (adapt.c)
 *     _wcsnicmp @ 0x180128DF0 (_wcsnicmp.c)
 */

__int64 __fastcall punycode_decode(
        wchar_t *String1,
        int a2,
        wchar_t *a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        _BYTE *a7,
        _QWORD *a8)
{
  _BYTE *v8; // r15
  __int64 v10; // r8
  char v11; // bp
  wchar_t *v12; // r11
  wchar_t *v13; // r10
  wchar_t *i; // rbx
  wchar_t *v15; // r14
  wchar_t *v16; // rdi
  char v17; // r13
  wchar_t *v18; // r9
  const wchar_t *v19; // rdx
  wchar_t *j; // r8
  wchar_t v21; // ax
  bool v22; // zf
  wchar_t *v24; // r14
  wchar_t *k; // r8
  __int64 v26; // r10
  unsigned __int64 v27; // r11
  wchar_t *v28; // r9
  int v29; // eax
  wchar_t *v30; // r9
  __int64 v31; // r11
  int v32; // ebp
  wchar_t *v33; // r15
  int v34; // r14d
  int v35; // r12d
  int v36; // r13d
  int v37; // r10d
  int m; // r9d
  unsigned int v39; // ecx
  __int64 v40; // r8
  int v41; // ecx
  __int64 v42; // r11
  __int64 v43; // r11
  __int64 v44; // rax
  __int64 v45; // rbp
  wchar_t *v46; // r8
  wchar_t *kk; // rcx
  __int64 v48; // rcx
  int n; // eax
  wchar_t *ii; // rdx
  wchar_t *v51; // r8
  __int16 v52; // cx
  wchar_t *v53; // rdx
  wchar_t jj; // cx
  wchar_t v55; // cx
  int v56; // [rsp+20h] [rbp-78h]
  wchar_t *v57; // [rsp+28h] [rbp-70h]
  unsigned __int64 v58; // [rsp+30h] [rbp-68h]
  __int64 v59; // [rsp+38h] [rbp-60h]
  wchar_t *v60; // [rsp+40h] [rbp-58h]
  wchar_t *v61; // [rsp+48h] [rbp-50h]
  wchar_t *v62; // [rsp+50h] [rbp-48h]
  wchar_t *v63; // [rsp+58h] [rbp-40h]
  wchar_t *v64; // [rsp+A0h] [rbp+8h]
  int v65; // [rsp+A8h] [rbp+10h]

  v64 = String1;
  v8 = a7;
  v10 = *a4;
  *a4 = 0;
  *a7 = 1;
  if ( a2 <= 0 )
    return 3221227286LL;
  v11 = a6;
  v12 = String1 - 1;
  v13 = &a3[v10];
  i = String1;
  v15 = String1;
  v61 = String1 - 1;
  v63 = a3;
  v16 = &String1[a2];
  v58 = (unsigned __int64)v13;
  *a8 = a3 - 1;
  while ( 1 )
  {
    v17 = a5;
    v18 = a3;
    v57 = a3;
    if ( i >= v16 )
      goto LABEL_30;
    i = v15;
    if ( (_BYTE)a5 )
    {
      for ( i = v16 - 1; i >= v15; --i )
      {
        if ( *i == 64 )
          goto LABEL_9;
      }
    }
    else
    {
      while ( i < v16 )
      {
        if ( *i == 46 )
          goto LABEL_9;
        ++i;
      }
    }
    i = v16;
LABEL_9:
    if ( i == v15 )
      break;
    if ( !(_BYTE)a5
      && (v11 && (*v15 == 45 || i > String1 && *(i - 1) == 45)
       || (__int64)(((char *)i - (char *)v15) & 0xFFFFFFFFFFFFFFFEuLL) > 126) )
    {
      return 3221227286LL;
    }
    if ( (__int64)(((char *)v16 - (char *)v15) & 0xFFFFFFFFFFFFFFFEuLL) < 8 )
      goto LABEL_18;
    v19 = L"xl--";
    if ( !(_BYTE)a5 )
      v19 = L"xn--";
    if ( wcsnicmp(v15, v19, 4uLL) )
    {
      v18 = a3;
      v13 = (wchar_t *)v58;
LABEL_18:
      if ( (__int64)(((char *)v13 - (char *)a3) & 0xFFFFFFFFFFFFFFFEuLL) < (__int64)(((char *)i - (char *)v15) & 0xFFFFFFFFFFFFFFFEuLL) )
        return 3221227286LL;
      for ( j = v15; j < i; ++j )
      {
        if ( (_BYTE)a5 )
        {
          v21 = *j;
          v22 = *j == 0;
        }
        else
        {
          if ( v11 && !(unsigned __int8)ValidateStd3Range(*j) )
            return 3221227286LL;
          v21 = *j;
          if ( *j < 0x20u )
            return 3221227286LL;
          v22 = v21 == 127;
        }
        if ( v22 || v21 >= 0x80u )
          return 3221227286LL;
        *a3++ = v21;
      }
      goto LABEL_36;
    }
    v24 = v15 + 4;
    *v8 = 0;
    v62 = v24;
    for ( k = i - 1; k >= v24; --k )
    {
      if ( *k == 45 )
        goto LABEL_50;
    }
    k = 0LL;
LABEL_50:
    if ( k == i - 1 )
      return 3221227286LL;
    if ( k && k > v24 )
    {
      v27 = v58;
      v28 = v24;
      v26 = k - v24;
      while ( v28 != k )
      {
        if ( (unsigned __int64)a3 >= v27 )
          return 3221227286LL;
        if ( (_BYTE)a5 )
        {
          v55 = *v28;
          if ( !*v28 )
            return 3221227286LL;
        }
        else
        {
          if ( v11 && !(unsigned __int8)ValidateStd3Range(*v28) || *v28 < 0x20u || *v28 == 127 )
            return 3221227286LL;
          v55 = *v28;
        }
        if ( v55 >= 0x80u )
          return 3221227286LL;
        if ( !(_BYTE)a5 && (unsigned __int16)(v55 - 65) <= 0x19u )
          v55 += 32;
        *a3++ = v55;
        ++v28;
      }
    }
    else
    {
      LODWORD(v26) = 0;
    }
    v65 = 72;
    v29 = v26 + 1;
    v56 = 0;
    if ( (int)v26 <= 0 )
      v29 = 0;
    v30 = a3 - 1;
    v31 = (char *)a3 - (char *)v57;
    v32 = 0;
    v33 = &v24[v29];
    v34 = 128;
    while ( 2 )
    {
      v59 = v31;
      v60 = v30;
      if ( v33 < i )
      {
        v35 = v32;
        v36 = v32;
        v37 = 1;
        for ( m = 36; ; m += 36 )
        {
          if ( v33 >= i )
            return 3221227286LL;
          v39 = *v33;
          if ( v39 < 0x30 || v39 > 0x39 )
          {
            if ( (unsigned __int16)(v39 - 97) > 0x19u )
            {
              if ( (unsigned __int16)(v39 - 65) > 0x19u )
                return 3221227286LL;
              v40 = v39 - 65;
            }
            else
            {
              v40 = v39 - 97;
            }
          }
          else
          {
            v40 = v39 - 22;
          }
          ++v33;
          if ( (int)v40 < 0 || (int)v40 > (0x7FFFFFF - v32) / v37 )
            return 3221227286LL;
          v32 += v37 * v40;
          if ( m <= v65 )
          {
            v41 = 1;
          }
          else
          {
            v41 = m - v65;
            if ( m >= v65 + 26 )
              v41 = 26;
          }
          if ( (int)v40 < v41 )
            break;
          if ( v37 > 0x7FFFFFF / (36 - v41) )
            return 3221227286LL;
          v37 *= 36 - v41;
        }
        LOBYTE(v40) = v36 == 0;
        v65 = adapt((unsigned int)(v32 - v35), (unsigned int)(v31 >> 1) - v56 + 1, v40);
        v43 = v42 - v56 + 1;
        v44 = v32 / v43;
        v45 = v32 % v43;
        if ( v44 <= 0x7FFFFFF - v34 )
        {
          v34 += v44;
          if ( (unsigned int)(v34 - 128) <= 0x10FF7F && (unsigned int)(v34 - 55296) > 0x7FF )
          {
            if ( v56 > 0 )
            {
              v46 = v57;
              for ( n = v45; n > 0; --n )
              {
                if ( v46 >= a3 )
                  return 3221227286LL;
                if ( *v46 >= 0xD800u && *v46 <= 0xDFFFu )
                  ++v46;
                ++v46;
              }
            }
            else
            {
              v46 = &v57[(int)v45];
            }
            if ( v34 >= 0x10000 )
            {
              if ( v46 <= a3 && (unsigned __int64)a3 < v58 - 2 )
              {
                for ( ii = v60; ii >= v46; --ii )
                  ii[1] = *ii;
                *v46 = (v34 - 0x10000) / 1024 - 10240;
                v51 = v46 + 1;
                v52 = v34 & 0x3FF;
                if ( v34 - 0x10000 < 0 )
                  v52 = ((v52 - 1) | 0xFC00) + 1;
                v53 = a3;
                for ( jj = v52 - 9216; v53 >= v51; --v53 )
                  v53[1] = *v53;
                v31 = v59 + 4;
                *v51 = jj;
                a3 += 2;
                ++v56;
                v30 = v60 + 2;
                goto LABEL_82;
              }
            }
            else if ( v46 <= a3 && (unsigned __int64)a3 < v58 )
            {
              for ( kk = v60; kk >= v46; --kk )
                kk[1] = *kk;
              ++a3;
              v31 = v59 + 2;
              *v46 = v34;
              v30 = v60 + 1;
LABEL_82:
              v32 = v45 + 1;
              continue;
            }
          }
        }
        return 3221227286LL;
      }
      break;
    }
    v15 = v62;
    v17 = a5;
    v8 = a7;
    v11 = a6;
    v18 = v57;
    v13 = (wchar_t *)v58;
LABEL_36:
    if ( !v17 && (a3 == v18 || (__int64)(((char *)i - (char *)v15) & 0xFFFFFFFFFFFFFFFEuLL) > 126) )
      return 3221227286LL;
    if ( i != v16 )
    {
      if ( a3 >= v13 )
        return 3221227286LL;
      *a3++ = *i;
    }
    if ( v17 )
    {
      LOBYTE(a5) = 0;
      v61 = i;
      v48 = 0LL;
      v12 = i;
      if ( i != v16 )
        v48 = 2LL;
      *a8 = &a3[v48 / 0xFFFFFFFFFFFFFFFEuLL];
      if ( i == v16 - 1 )
        return 3221227286LL;
    }
    else
    {
      v12 = v61;
    }
    String1 = v64;
    v15 = i + 1;
  }
  if ( !(_BYTE)a5 && i == v16 )
  {
LABEL_30:
    if ( a3 != v63 && ((_BYTE)a5 || v16 - v12 <= (*(v16 - 1) == 46) + 255LL) )
    {
      *a4 = a3 - v63;
      return 0LL;
    }
  }
  return 3221227286LL;
}
