/*
 * XREFs of RtlFormatMessageEx @ 0x1800B9360
 * Callers:
 *     RtlFormatMessage @ 0x1801473B0 (RtlFormatMessage.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x180033C60 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS __cdecl RtlFormatMessageEx(
        PWSTR MessageFormat,
        ULONG MaximumWidth,
        BOOLEAN IgnoreInserts,
        BOOLEAN ArgumentsAreAnsi,
        BOOLEAN ArgumentsAreAnArray,
        va_list *Arguments,
        PWSTR Buffer,
        ULONG Length,
        PULONG ReturnLength,
        PPARSE_MESSAGE_CONTEXT ParseContext)
{
  PPARSE_MESSAGE_CONTEXT v10; // r13
  PWSTR v11; // r11
  PWSTR v12; // r10
  ULONG v13; // r9d
  signed int v14; // r14d
  PWSTR v15; // rdi
  WCHAR *v16; // rsi
  ULONG cwSavColumn; // r15d
  PWSTR v18; // rbx
  PWSTR v19; // r8
  __int16 v20; // ax
  WCHAR *v21; // rcx
  int v23; // edx
  PWSTR v24; // r13
  unsigned int v25; // eax
  unsigned int v26; // r9d
  unsigned int v27; // ecx
  __int64 v28; // r10
  unsigned int v29; // r11d
  __int64 v30; // r9
  unsigned int v31; // r12d
  __int64 v32; // rcx
  wchar_t *p_Format; // rdx
  wchar_t v34; // ax
  wchar_t *v35; // rax
  char v36; // dl
  __int64 v37; // rax
  WCHAR *v38; // r8
  int v39; // eax
  __int64 v40; // rax
  va_list *v41; // r11
  unsigned int v42; // ecx
  __int64 v43; // r8
  unsigned int v44; // edx
  _QWORD *v45; // rcx
  __int64 v46; // rax
  __int64 v47; // r10
  va_list v48; // r9
  __int64 v49; // r8
  WCHAR *i; // rax
  WCHAR v51; // cx
  int v52; // ecx
  SIZE_T iwDst; // rcx
  SIZE_T iwDstSpace; // rax
  __int16 v55; // ax
  char *v56; // rcx
  _WORD *v57; // rdi
  BOOLEAN v58; // cl
  __int64 v59; // rax
  __int64 v60; // rax
  WCHAR *v61; // rdx
  __int16 v62; // ax
  WCHAR *v63; // rcx
  unsigned int v64; // eax
  int v65; // edx
  __int64 v66; // rdx
  signed __int64 v67; // r8
  __int16 v68; // ax
  __int64 v69; // rax
  __int64 v70; // rdi
  WCHAR *v71; // rdi
  unsigned int v72; // eax
  int v73; // edx
  signed __int64 v74; // r8
  __int16 v75; // ax
  char *v76; // rax
  __int64 *v77; // rcx
  va_list *v78; // rcx
  unsigned int v79; // eax
  char Args[8]; // [rsp+30h] [rbp-D0h]
  unsigned int v83; // [rsp+54h] [rbp-ACh]
  PWSTR v84; // [rsp+60h] [rbp-A0h]
  va_list *v85; // [rsp+68h] [rbp-98h]
  wchar_t *v86; // [rsp+70h] [rbp-90h] BYREF
  ULONG v87; // [rsp+78h] [rbp-88h]
  PWSTR v88; // [rsp+80h] [rbp-80h]
  PPARSE_MESSAGE_CONTEXT v89; // [rsp+88h] [rbp-78h]
  PWSTR v90; // [rsp+90h] [rbp-70h]
  PULONG v91; // [rsp+98h] [rbp-68h]
  char v92[8]; // [rsp+A0h] [rbp-60h]
  wchar_t Format; // [rsp+6E0h] [rbp+5E0h] BYREF
  _WORD v94[30]; // [rsp+6E2h] [rbp+5E2h] BYREF
  WCHAR v95[9]; // [rsp+71Eh] [rbp+61Eh] BYREF

  v10 = ParseContext;
  v11 = MessageFormat;
  v12 = Buffer;
  v87 = MaximumWidth;
  v13 = MaximumWidth;
  v91 = ReturnLength;
  v14 = Length >> 1;
  v90 = MessageFormat;
  v89 = ParseContext;
  v85 = Arguments;
  v88 = Buffer;
  v86 = 0LL;
  v83 = 0;
  if ( ParseContext && (ParseContext->fFlags & 1) != 0 )
  {
    cwSavColumn = ParseContext->cwSavColumn;
    ParseContext->fFlags &= ~1u;
    v16 = 0LL;
    v18 = &MessageFormat[ParseContext->iwSrc];
    iwDst = ParseContext->iwDst;
    iwDstSpace = ParseContext->iwDstSpace;
    v19 = v18;
    v84 = v18;
    v15 = &Buffer[iwDst];
    if ( iwDstSpace != -1LL )
      v16 = &Buffer[iwDstSpace];
    v14 -= iwDst;
    if ( !ArgumentsAreAnArray && Arguments )
      *Arguments = ParseContext->lpvArgStart;
    if ( (ParseContext->fFlags & 2) != 0 )
    {
      ParseContext->fFlags &= ~2u;
      goto LABEL_16;
    }
  }
  else
  {
    v15 = Buffer;
    v16 = 0LL;
    cwSavColumn = 0;
    v18 = MessageFormat;
    v19 = MessageFormat;
    v84 = MessageFormat;
    if ( !ArgumentsAreAnArray && Arguments && ParseContext )
      ParseContext->lpvArgStart = *Arguments;
  }
  while ( 1 )
  {
    v20 = *v18;
    if ( !*v18 )
      break;
    v21 = ++v18;
    switch ( v20 )
    {
      case 37:
        v23 = *v21;
        v24 = v15;
        if ( (unsigned __int16)(v23 - 49) <= 8u )
        {
          v25 = v18[1];
          v26 = v23 - 48;
          ++v18;
          LOWORD(v27) = v25;
          if ( v25 >= 0x30 && v25 <= 0x39 )
          {
            ++v18;
            v26 = v25 + 2 * (v23 - 48 + 4 * (v23 - 54));
            v27 = *v18;
            if ( v27 >= 0x30 && *v18 <= 0x39u )
            {
              ++v18;
              v26 = v27 + 2 * (5 * v26 - 24);
              LOWORD(v27) = *v18;
              if ( *v18 <= 0x39u && (unsigned __int16)v27 >= 0x30u )
                return -1073741811;
            }
          }
          v28 = 0LL;
          v29 = v26;
          v30 = v26 - 1;
          v31 = 0;
          if ( (_WORD)v27 == 33 )
          {
            v38 = v94;
            Format = 37;
            v36 = 0;
            for ( i = v94; ; i = v38 )
            {
              v51 = v18[1];
              ++v18;
              if ( v51 == 33 )
                break;
              if ( !v51 )
                return -1073741811;
              if ( i >= v95 )
                return -1073741811;
              if ( v51 == 42 )
              {
                v79 = v31++;
                if ( v79 > 1 )
                  return -1073741811;
              }
              *v38++ = v51;
            }
            ++v18;
            *v38 = 0;
          }
          else
          {
            v32 = 32LL;
            p_Format = &Format;
            do
            {
              if ( v32 == -2147483614 )
                break;
              v34 = *(wchar_t *)((char *)p_Format + (char *)L"%s" - (char *)&Format);
              if ( !v34 )
                break;
              *p_Format = v34;
              ++v28;
              ++p_Format;
              --v32;
            }
            while ( v32 );
            v35 = p_Format - 1;
            if ( v32 )
              v35 = p_Format;
            v36 = 1;
            *v35 = 0;
            v37 = v28 - 1;
            if ( v32 )
              v37 = v28;
            v38 = &v94[v37 - 1];
          }
          if ( IgnoreInserts )
          {
            if ( v36 == 1 )
              goto LABEL_42;
            v52 = Format - 37;
            if ( Format == 37 )
            {
              v52 = v94[0] - 115;
              if ( v94[0] == 115 )
                v52 = v94[1];
            }
            if ( !v52 )
            {
LABEL_42:
              *(_DWORD *)Args = v29;
              v39 = RtlStringCchPrintfExW(v15, v14, &v86, 0LL, 0, (wchar_t *)L"%%%u", *(_QWORD *)Args);
            }
            else
            {
              *(_DWORD *)Args = v29;
              v39 = RtlStringCchPrintfExW(v15, v14, &v86, 0LL, 0, (wchar_t *)L"%%%u!%s!", *(_QWORD *)Args, v94);
            }
LABEL_43:
            v12 = v88;
            if ( v39 < 0 || (v40 = v86 - v15, v14 -= v40, v14 < 0) )
            {
              v19 = v84;
LABEL_49:
              v10 = v89;
              if ( !v89 )
                return -2147483643;
              v11 = v90;
LABEL_98:
              v10->cwSavColumn = cwSavColumn;
              v10->iwSrc = v19 - v11;
              v10->iwDst = v15 - v12;
              v10->fFlags |= 1u;
              if ( v16 )
                v10->iwDstSpace = v16 - v12;
              else
                v10->iwDstSpace = -1LL;
              return -2147483643;
            }
            v13 = v87;
            v15 += (int)v40;
            goto LABEL_46;
          }
          v41 = v85;
          if ( !v85 || v31 + (unsigned int)v30 >= 0xC8 )
            return -1073741811;
          if ( !ArgumentsAreAnsi )
            goto LABEL_68;
          v55 = *(v38 - 1);
          v56 = (char *)(v38 - 1);
          if ( v55 == 99 )
          {
            v64 = *(v38 - 2);
            LOWORD(v64) = v64 - 104;
            if ( (unsigned __int16)v64 <= 0xFu )
            {
              v65 = 32785;
              if ( _bittest(&v65, v64) )
                goto LABEL_68;
            }
            v66 = 3LL;
            v67 = (char *)L"hc" - v56;
            while ( v66 != -2147483643 )
            {
              v68 = *(_WORD *)&v56[v67];
              if ( !v68 )
                break;
              *(_WORD *)v56 = v68;
              v56 += 2;
              if ( !--v66 )
              {
                *((_WORD *)v56 - 1) = 0;
                goto LABEL_68;
              }
            }
          }
          else
          {
            if ( v55 != 115 )
            {
              if ( v55 == 83 )
              {
                *(_WORD *)v56 = 115;
              }
              else if ( v55 == 67 )
              {
                *(_WORD *)v56 = 99;
              }
              goto LABEL_68;
            }
            v72 = *(v38 - 2);
            LOWORD(v72) = v72 - 104;
            if ( (unsigned __int16)v72 <= 0xFu )
            {
              v73 = 32785;
              if ( _bittest(&v73, v72) )
              {
LABEL_68:
                v42 = v83;
                if ( (unsigned int)v30 < v83 )
                {
                  v44 = v83;
                }
                else
                {
                  do
                  {
                    v43 = v42;
                    v44 = v42 + 1;
                    if ( ArgumentsAreAnArray )
                    {
                      v46 = (__int64)*v41++;
                    }
                    else
                    {
                      v45 = *v41;
                      *v41 += 8;
                      v46 = *v45;
                    }
                    *(_QWORD *)&v92[8 * v43] = v46;
                    v42 = v44;
                  }
                  while ( v44 <= (unsigned int)v30 );
                  v85 = v41;
                  v24 = v15;
                  v83 = v44;
                }
                v47 = *(_QWORD *)&v92[8 * v30];
                v48 = 0LL;
                v49 = 0LL;
                if ( v31 )
                {
                  v58 = ArgumentsAreAnArray;
                  if ( ArgumentsAreAnArray )
                  {
                    v48 = *v41;
                    v59 = v44++;
                    v83 = v44;
                    v85 = v41 + 1;
                    *(_QWORD *)&v92[8 * v59] = *v41;
                  }
                  else
                  {
                    v78 = (va_list *)*v41;
                    *v41 += 8;
                    v48 = *v78;
                    v58 = 0;
                  }
                  if ( v31 > 1 )
                  {
                    v60 = v83;
                    v83 = v44 + 1;
                    if ( v58 )
                    {
                      v49 = (__int64)*v85++;
                    }
                    else
                    {
                      v77 = (__int64 *)*v85;
                      *v85 += 8;
                      v49 = *v77;
                    }
                    *(_QWORD *)&v92[8 * v60] = v49;
                  }
                }
                v39 = RtlStringCchPrintfExW(v15, v14, &v86, 0LL, 0, &Format, v47, v48, v49);
                goto LABEL_43;
              }
            }
            v66 = 3LL;
            v74 = (char *)L"hs" - v56;
            do
            {
              if ( v66 == -2147483643 )
                break;
              v75 = *(_WORD *)&v56[v74];
              if ( !v75 )
                break;
              *(_WORD *)v56 = v75;
              v56 += 2;
              --v66;
            }
            while ( v66 );
          }
          v76 = v56 - 2;
          if ( v66 )
            v76 = v56;
          *(_WORD *)v76 = 0;
          goto LABEL_68;
        }
        if ( v23 == 48 )
          goto LABEL_20;
        if ( !(_WORD)v23 )
          return -1073741811;
        switch ( v23 )
        {
          case 'r':
            if ( --v14 < 0 )
              goto LABEL_49;
            *v15 = 13;
            ++v18;
            ++v15;
            v16 = 0LL;
            cwSavColumn = 0;
            goto LABEL_13;
          case 'n':
            v14 -= 2;
            if ( v14 < 0 )
              goto LABEL_49;
            *(_DWORD *)v15 = 655373;
            v15 += 2;
            ++v18;
            goto LABEL_77;
          case 't':
            if ( --v14 < 0 )
              goto LABEL_49;
            if ( (cwSavColumn & 7) != 0 )
              cwSavColumn = (cwSavColumn + 7) & 0xFFFFFFF8;
            else
              cwSavColumn += 8;
            v16 = v15;
            *v15 = 9;
LABEL_60:
            ++v15;
            ++v18;
            break;
          case 'b':
            if ( --v14 < 0 )
              goto LABEL_49;
            v16 = v15;
            *v15++ = 32;
            ++v18;
            break;
          default:
            if ( !IgnoreInserts )
            {
              if ( --v14 < 0 )
                goto LABEL_49;
              *v15 = v23;
              goto LABEL_60;
            }
            v14 -= 2;
            if ( v14 < 0 )
              goto LABEL_49;
            *v15 = 37;
            v15[1] = *v21;
            v15 += 2;
            ++v18;
            break;
        }
LABEL_46:
        if ( v24 )
        {
          cwSavColumn += v15 - v24;
          goto LABEL_13;
        }
LABEL_77:
        v16 = 0LL;
        cwSavColumn = 0;
LABEL_13:
        v84 = v18;
        v19 = v18;
        if ( v13 - 1 <= 0xFFFFFFFD && cwSavColumn >= v13 )
        {
          v10 = v89;
          v11 = v90;
LABEL_16:
          if ( v16 )
          {
            v61 = v16;
            do
            {
              if ( *v61 != 32 && *v61 != 9 )
                break;
              ++v61;
            }
            while ( v61 != v15 );
            if ( v16 > v12 )
            {
              do
              {
                v62 = *(v16 - 1);
                v63 = v16 - 1;
                if ( v62 != 9 && v62 != 32 )
                  break;
                --v16;
              }
              while ( v63 > v12 );
            }
            v69 = v61 - v16;
            if ( (_DWORD)v69 == 1 )
            {
              if ( --v14 < 0 )
              {
LABEL_18:
                if ( !v10 )
                  return -2147483643;
                v10->fFlags |= 2u;
                goto LABEL_98;
              }
            }
            else if ( (unsigned int)v69 > 2 )
            {
              v14 = v69 + v14 - 2;
            }
            v70 = v15 - v61;
            memmove(v16 + 2, v61, 2 * v70);
            v13 = v87;
            v19 = v84;
            v12 = v88;
            cwSavColumn = v70;
            *(_DWORD *)v16 = 655373;
            v71 = &v16[(unsigned int)v70 + 1];
            v16 = 0LL;
            v15 = v71 + 1;
          }
          else
          {
            v14 -= 2;
            if ( v14 < 0 )
              goto LABEL_18;
            v19 = v84;
            cwSavColumn = 0;
            v12 = v88;
            v16 = 0LL;
            *v15 = 13;
            v57 = v15 + 1;
            *v57 = 10;
            v15 = v57 + 1;
          }
        }
        break;
      case 13:
        if ( *v21 != 10 )
          goto LABEL_26;
LABEL_25:
        ++v18;
        goto LABEL_26;
      case 10:
        if ( *v21 == 13 )
          goto LABEL_25;
LABEL_26:
        if ( v13 )
        {
          v16 = v15;
          v20 = 32;
LABEL_9:
          if ( --v14 < 0 )
            goto LABEL_49;
          *v15 = v20;
          if ( v20 == 32 )
            v16 = v15;
          ++v15;
          ++cwSavColumn;
          goto LABEL_13;
        }
        v14 -= 2;
        if ( v14 < 0 )
          goto LABEL_49;
        *(_DWORD *)v15 = 655373;
        v16 = 0LL;
        v15 += 2;
        v84 = v18;
        cwSavColumn = 0;
        v19 = v18;
        break;
      default:
        goto LABEL_9;
    }
  }
LABEL_20:
  if ( v14 < 1 )
    goto LABEL_49;
  *v15 = 0;
  if ( v91 )
    *v91 = 2 * (((char *)v15 - (char *)v12 + 2) >> 1);
  return 0;
}
