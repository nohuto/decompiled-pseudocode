/*
 * XREFs of punycode_encode @ 0x14080C970
 * Callers:
 *     RtlpNameprepAsciiRealWorker @ 0x1404F4690 (RtlpNameprepAsciiRealWorker.c)
 * Callees:
 *     RtlStringCchCopyNExW @ 0x14041D2F0 (RtlStringCchCopyNExW.c)
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     FindLabelEnd @ 0x1406214A4 (FindLabelEnd.c)
 *     GetUTF32 @ 0x1406214E0 (GetUTF32.c)
 *     ValidateStd3Range @ 0x1406217F8 (ValidateStd3Range.c)
 *     adapt @ 0x140621834 (adapt.c)
 */

__int64 punycode_encode(wchar_t *Str1, int a2, ...)
{
  _DWORD *v2; // r13
  wchar_t *j; // rbx
  wchar_t *v4; // rdi
  wchar_t *v5; // rbp
  wchar_t *v6; // r9
  NTSTRSAFE_PWSTR v7; // r10
  wchar_t *v8; // r12
  char v9; // r14
  wchar_t *v10; // r13
  wchar_t *LabelEnd; // rax
  wchar_t *v12; // r9
  unsigned __int64 v13; // r11
  const wchar_t *v14; // r15
  int v15; // esi
  wchar_t *i; // r8
  int v17; // ecx
  __int64 v18; // r12
  wchar_t *v19; // rdx
  wchar_t *v20; // rcx
  int v21; // r15d
  int v22; // r10d
  int v23; // r9d
  int v24; // r11d
  unsigned __int16 *v25; // rcx
  unsigned __int16 *v26; // r15
  int UTF32; // eax
  __int64 v28; // rcx
  int v29; // r9d
  unsigned __int16 *k; // rcx
  int v31; // eax
  int v32; // r9d
  int v33; // r10d
  int v34; // r13d
  int v35; // r15d
  int m; // r10d
  int v37; // ecx
  int v38; // r15d
  int v39; // r8d
  int v40; // eax
  __int16 v41; // cx
  __int16 v42; // ax
  wchar_t v43; // ax
  __int64 v44; // rcx
  __int64 result; // rax
  int v46; // [rsp+40h] [rbp-88h]
  int v47; // [rsp+44h] [rbp-84h]
  wchar_t *v48; // [rsp+48h] [rbp-80h]
  NTSTRSAFE_PWSTR v49; // [rsp+50h] [rbp-78h]
  wchar_t *v50; // [rsp+58h] [rbp-70h]
  wchar_t *v51; // [rsp+60h] [rbp-68h]
  unsigned __int16 *v52; // [rsp+68h] [rbp-60h]
  NTSTRSAFE_PWSTR v53; // [rsp+70h] [rbp-58h]
  int v54; // [rsp+D8h] [rbp+10h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+E0h] [rbp+18h] BYREF
  va_list va; // [rsp+E0h] [rbp+18h]
  int *v57; // [rsp+E8h] [rbp+20h]
  __int64 v58; // [rsp+F0h] [rbp+28h]
  __int64 v59; // [rsp+F8h] [rbp+30h]
  va_list va1; // [rsp+100h] [rbp+38h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  ppszDestEnd = va_arg(va1, NTSTRSAFE_PWSTR);
  v57 = va_arg(va1, int *);
  v58 = va_arg(va1, _QWORD);
  v59 = va_arg(va1, _QWORD);
  v2 = v57;
  j = ppszDestEnd;
  v49 = ppszDestEnd;
  v4 = Str1;
  v53 = ppszDestEnd;
  v5 = Str1;
  v6 = &Str1[a2];
  v50 = v6;
  v7 = ppszDestEnd;
  v8 = &ppszDestEnd[*v57];
  v48 = v8;
  if ( a2 <= 0 )
  {
LABEL_88:
    result = 3221227286LL;
    *v2 = 0;
    return result;
  }
  v9 = v58;
  while ( 1 )
  {
    v51 = j;
    v10 = j;
    if ( v4 >= v6 )
    {
      if ( !v9 )
        goto LABEL_90;
      goto LABEL_91;
    }
    LabelEnd = FindLabelEnd(v5, (unsigned __int64)v6, v9);
    v4 = LabelEnd;
    if ( LabelEnd == v5 )
      break;
    if ( !v9 && (_BYTE)v59 && (*v5 == 45 || (unsigned __int64)LabelEnd > v13 && *(LabelEnd - 1) == 45) )
      goto LABEL_87;
    v14 = L"xl--";
    if ( !v9 )
      v14 = L"xn--";
    if ( RtlStringCchCopyNExW(j, v8 - j, v14, 4uLL, (NTSTRSAFE_PWSTR *)va, 0LL, 0) < 0 )
    {
LABEL_84:
      *v57 = 0;
      return 3221225507LL;
    }
    j = ppszDestEnd;
    v15 = 0;
    for ( i = v5; i < v4; ++i )
    {
      v17 = *i;
      if ( (unsigned __int16)v17 >= 0x80u )
      {
        if ( (unsigned __int16)(v17 + 10240) <= 0x3FFu )
          ++i;
      }
      else
      {
        if ( !v9 && ((_BYTE)v59 && !ValidateStd3Range(v17) || (unsigned __int16)v17 < 0x20u || (_WORD)v17 == 127)
          || !(_WORD)v17 )
        {
          goto LABEL_87;
        }
        if ( j >= v8 )
          goto LABEL_84;
        if ( !v9 && (unsigned __int16)(v17 - 65) <= 0x19u )
          LOWORD(v17) = v17 + 32;
        *j++ = v17;
        ppszDestEnd = j;
        ++v15;
      }
    }
    v47 = v15;
    v18 = v4 - v5;
    if ( v15 == v18 )
    {
      v19 = j - 4;
      v20 = v10;
      for ( j = v19; v20 < v19; ++v20 )
        *v20 = v20[4];
      ppszDestEnd = v19;
    }
    else
    {
      if ( (__int64)(((char *)v50 - (char *)v5) & 0xFFFFFFFFFFFFFFFEuLL) >= 8 && !wcsnicmp(v5, v14, 4uLL) )
        goto LABEL_87;
      v54 = 0;
      v21 = 0;
      if ( v15 > 0 )
      {
        if ( j >= v48 )
          goto LABEL_84;
        *j++ = 45;
        ppszDestEnd = j;
      }
      v22 = 128;
      v46 = 72;
      v23 = 0;
      while ( v15 < v18 )
      {
        v24 = 0x7FFFFFF;
        v25 = v5;
        if ( v5 < v4 )
        {
          do
          {
            v26 = v25;
            UTF32 = GetUTF32(v25);
            if ( UTF32 >= v22 && UTF32 < v24 )
              v24 = UTF32;
            v28 = 1LL;
            if ( UTF32 >= 0x10000 )
              v28 = 2LL;
            v25 = &v26[v28];
          }
          while ( v25 < v4 );
          v21 = v54;
        }
        v29 = (v24 - v22) * (v15 - v21 + 1) + v23;
        for ( k = v5; ; k = &v52[v44] )
        {
          v52 = k;
          if ( k >= v4 )
            break;
          v31 = GetUTF32(k);
          v34 = v31;
          if ( v31 >= v24 )
            v33 = v32;
          v29 = v33;
          if ( v31 == v24 )
          {
            v35 = v33;
            for ( m = 36; ; m += 36 )
            {
              if ( m > v46 )
                v37 = m < v46 + 26 ? m - v46 : 26;
              else
                v37 = 1;
              if ( v35 < v37 )
                break;
              if ( j >= v48 )
                goto LABEL_84;
              v38 = v35 - v37;
              v39 = 36 - v37;
              v40 = v38 % (36 - v37) + v37;
              v41 = 22;
              if ( v40 <= 25 )
                v41 = 97;
              *j++ = v40 + v41;
              v35 = v38 / v39;
            }
            if ( j >= v48 )
              goto LABEL_84;
            v42 = 22;
            if ( v35 <= 25 )
              v42 = 97;
            v43 = v35 + v42;
            v21 = v54;
            *j++ = v43;
            ppszDestEnd = j;
            v46 = adapt(v29, v15 - v54 + 1, v15 == v47);
            ++v15;
            v29 = 0;
            if ( v24 >= 0x10000 )
            {
              ++v15;
              v21 = ++v54;
            }
          }
          v44 = 1LL;
          if ( v34 >= 0x10000 )
            v44 = 2LL;
        }
        v23 = v29 + 1;
        v22 = v24 + 1;
      }
      v10 = v51;
    }
    if ( !v9 && (__int64)(((char *)j - (char *)v10) & 0xFFFFFFFFFFFFFFFEuLL) > 126 )
      goto LABEL_87;
    v6 = v50;
    v8 = v48;
    if ( v4 == v50 )
      goto LABEL_82;
    if ( j >= v48 )
      goto LABEL_84;
    *j++ = *v4;
    ppszDestEnd = j;
    if ( v9 && *v4 == 64 )
    {
      v9 = 0;
      v49 = j;
      v7 = j;
    }
    else
    {
LABEL_82:
      v7 = v49;
    }
    v5 = v4 + 1;
  }
  if ( v9 || LabelEnd != v12 )
    goto LABEL_87;
LABEL_90:
  if ( j - v7 > 255LL - (*(j - 1) != 46) )
  {
LABEL_87:
    v2 = v57;
    goto LABEL_88;
  }
LABEL_91:
  if ( *(j - 1) == 64 )
    goto LABEL_87;
  *v57 = j - v53;
  return 0LL;
}
