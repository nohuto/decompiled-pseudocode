/*
 * XREFs of punycode_encode @ 0x1800AEE44
 * Callers:
 *     RtlpNameprepAsciiRealWorker @ 0x1800AD6E0 (RtlpNameprepAsciiRealWorker.c)
 * Callees:
 *     ValidateStd3Range @ 0x1800AE060 (ValidateStd3Range.c)
 *     adapt @ 0x1800AE09C (adapt.c)
 *     GetUTF32 @ 0x1800AF3B0 (GetUTF32.c)
 *     FindLabelEnd @ 0x1800AF4B0 (FindLabelEnd.c)
 *     RtlStringCchCopyNExW @ 0x1800AF4EC (RtlStringCchCopyNExW.c)
 *     _wcsnicmp @ 0x180128DF0 (_wcsnicmp.c)
 */

__int64 punycode_encode(wchar_t *String1, int a2, ...)
{
  unsigned __int64 i; // r8
  _DWORD *v3; // r13
  wchar_t *j; // rbx
  wchar_t *v5; // rdi
  wchar_t *v6; // rbp
  wchar_t *v7; // r9
  wchar_t *v8; // r10
  unsigned __int64 v9; // r12
  char v10; // r14
  wchar_t *v11; // r13
  unsigned __int64 LabelEnd; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // r11
  const wchar_t *v15; // r15
  int v16; // eax
  __int64 v17; // rdx
  int v18; // esi
  int v19; // ecx
  __int64 v20; // r12
  int v21; // r15d
  __int64 v22; // r9
  int v23; // r11d
  wchar_t *k; // rax
  int UTF32; // eax
  __int64 v26; // r10
  __int64 v27; // rax
  wchar_t *v28; // rax
  __int64 v29; // r9
  int v30; // eax
  unsigned int v31; // edx
  unsigned int v32; // r9d
  int v33; // r13d
  __int64 v34; // rax
  int v35; // r15d
  int m; // r10d
  int v37; // ecx
  int v38; // r15d
  int v39; // r8d
  int v40; // eax
  __int16 v41; // cx
  __int16 v42; // ax
  wchar_t v43; // ax
  __int64 result; // rax
  wchar_t *v45; // rdx
  wchar_t *v46; // rcx
  int v47; // [rsp+40h] [rbp-88h]
  int v48; // [rsp+44h] [rbp-84h]
  unsigned __int64 v49; // [rsp+48h] [rbp-80h]
  wchar_t *v50; // [rsp+50h] [rbp-78h]
  wchar_t *v51; // [rsp+58h] [rbp-70h]
  wchar_t *v52; // [rsp+60h] [rbp-68h]
  wchar_t *v53; // [rsp+68h] [rbp-60h]
  wchar_t *v54; // [rsp+70h] [rbp-58h]
  int v55; // [rsp+D8h] [rbp+10h]
  wchar_t *v56; // [rsp+E0h] [rbp+18h] BYREF
  va_list va; // [rsp+E0h] [rbp+18h]
  int *v58; // [rsp+E8h] [rbp+20h]
  __int64 v59; // [rsp+F0h] [rbp+28h]
  __int64 v60; // [rsp+F8h] [rbp+30h]
  va_list va1; // [rsp+100h] [rbp+38h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v56 = va_arg(va1, wchar_t *);
  i = (unsigned __int64)v56;
  v58 = va_arg(va1, int *);
  v59 = va_arg(va1, _QWORD);
  v60 = va_arg(va1, _QWORD);
  v3 = v58;
  j = v56;
  v50 = v56;
  v5 = String1;
  v54 = v56;
  v6 = String1;
  v7 = &String1[a2];
  v51 = v7;
  v8 = v56;
  v9 = (unsigned __int64)&v56[*v58];
  v49 = v9;
  if ( a2 > 0 )
  {
    v10 = v59;
    while ( 1 )
    {
      v52 = j;
      v11 = j;
      if ( v5 >= v7 )
        break;
      LOBYTE(i) = v10;
      LabelEnd = FindLabelEnd(v6, v7, i);
      v5 = (wchar_t *)LabelEnd;
      if ( (wchar_t *)LabelEnd == v6 )
      {
        if ( v10 || LabelEnd != v13 )
          goto LABEL_74;
        goto LABEL_64;
      }
      if ( !v10 && (_BYTE)v60 && (*v6 == 45 || LabelEnd > v14 && *(_WORD *)(LabelEnd - 2) == 45) )
        goto LABEL_74;
      v15 = L"xl--";
      if ( !v10 )
        v15 = L"xn--";
      v16 = RtlStringCchCopyNExW((_DWORD)j, (__int64)(v9 - (_QWORD)j) >> 1, (_DWORD)v15, v13, (__int64)va);
      v17 = 0LL;
      if ( v16 < 0 )
      {
LABEL_73:
        *v58 = 0;
        return 3221225507LL;
      }
      j = v56;
      v18 = 0;
      for ( i = (unsigned __int64)v6; i < (unsigned __int64)v5; i += 2LL )
      {
        v19 = *(unsigned __int16 *)i;
        v17 = 128LL;
        if ( (unsigned __int16)v19 < 0x80u )
        {
          if ( !v10 && ((_BYTE)v60 && !ValidateStd3Range(v19) || (_WORD)v19 == 127 || (unsigned __int16)v19 < 0x20u)
            || !(_WORD)v19 )
          {
            goto LABEL_74;
          }
          if ( (unsigned __int64)j >= v9 )
            goto LABEL_73;
          if ( !v10 )
          {
            v17 = 25LL;
            if ( (unsigned __int16)(v19 - 65) <= 0x19u )
              LOWORD(v19) = v19 + 32;
          }
          *j++ = v19;
          v56 = j;
          ++v18;
        }
        else if ( (unsigned __int16)(v19 + 10240) <= 0x3FFu )
        {
          i += 2LL;
        }
      }
      v48 = v18;
      v20 = v5 - v6;
      if ( v18 == v20 )
      {
        v45 = j - 4;
        v46 = v11;
        for ( j = v45; v46 < v45; ++v46 )
          *v46 = v46[4];
        v56 = v45;
      }
      else
      {
        if ( (__int64)(((char *)v51 - (char *)v6) & 0xFFFFFFFFFFFFFFFEuLL) >= 8 && !wcsnicmp(v6, v15, 4uLL) )
          goto LABEL_74;
        v47 = 0;
        v21 = 0;
        if ( v18 > 0 )
        {
          if ( (unsigned __int64)j >= v49 )
            goto LABEL_73;
          *j++ = 45;
          v56 = j;
        }
        i = 128LL;
        v55 = 72;
        v22 = 0LL;
        while ( v18 < v20 )
        {
          v23 = 0x7FFFFFF;
          for ( k = v6; k < v5; k = (wchar_t *)(v26 + v27) )
          {
            UTF32 = GetUTF32(k, v17, i, v22);
            v17 = (unsigned int)UTF32;
            if ( UTF32 >= (int)i && UTF32 < v23 )
              v23 = UTF32;
            v27 = 2LL;
            if ( (int)v17 >= 0x10000 )
              v27 = 4LL;
          }
          v28 = v6;
          v29 = (unsigned int)((v23 - i) * (v18 - v21 + 1) + v22);
          while ( 1 )
          {
            v53 = v28;
            v17 = (unsigned int)(v29 + 1);
            if ( v28 >= v5 )
              break;
            v30 = GetUTF32(v28, v17, i, v29);
            v33 = v30;
            if ( v30 >= v23 )
              v31 = v32;
            v29 = v31;
            if ( v30 == v23 )
            {
              v35 = v31;
              for ( m = 36; ; m += 36 )
              {
                if ( m <= v55 )
                  v37 = 1;
                else
                  v37 = m < v55 + 26 ? m - v55 : 26;
                if ( v35 < v37 )
                  break;
                if ( (unsigned __int64)j >= v49 )
                  goto LABEL_73;
                v38 = v35 - v37;
                v39 = 36 - v37;
                v40 = v38 % (36 - v37) + v37;
                v41 = 22;
                if ( v40 <= 25 )
                  v41 = 97;
                *j++ = v40 + v41;
                v35 = v38 / v39;
              }
              if ( (unsigned __int64)j >= v49 )
                goto LABEL_73;
              v42 = 22;
              if ( v35 <= 25 )
                v42 = 97;
              v43 = v35 + v42;
              v21 = v47;
              *j++ = v43;
              v56 = j;
              v55 = adapt(v31, v18 - v47 + 1, v18 == v48);
              ++v18;
              v29 = 0LL;
              if ( v23 >= 0x10000 )
              {
                ++v18;
                v21 = ++v47;
              }
            }
            v34 = 1LL;
            if ( v33 >= 0x10000 )
              v34 = 2LL;
            v28 = &v53[v34];
          }
          v22 = (unsigned int)v17;
          i = (unsigned int)(v23 + 1);
        }
        v11 = v52;
      }
      if ( !v10 && (__int64)(((char *)j - (char *)v11) & 0xFFFFFFFFFFFFFFFEuLL) > 126 )
        goto LABEL_74;
      v7 = v51;
      v9 = v49;
      if ( v5 == v51 )
        goto LABEL_71;
      if ( (unsigned __int64)j >= v49 )
        goto LABEL_73;
      *j++ = *v5;
      v56 = j;
      if ( v10 && *v5 == 64 )
      {
        v10 = 0;
        v50 = j;
        v8 = j;
      }
      else
      {
LABEL_71:
        v8 = v50;
      }
      v6 = v5 + 1;
    }
    if ( v10 )
      goto LABEL_65;
LABEL_64:
    if ( j - v8 > 255LL - (*(j - 1) != 46) )
      goto LABEL_74;
LABEL_65:
    if ( *(j - 1) != 64 )
    {
      *v58 = j - v54;
      return 0LL;
    }
LABEL_74:
    v3 = v58;
  }
  result = 3221227286LL;
  *v3 = 0;
  return result;
}
