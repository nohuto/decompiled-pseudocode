/*
 * XREFs of RtlFormatMessageEx @ 0x140B119B0
 * Callers:
 *     PiGetDeviceRegistryProperty @ 0x1407A2E2C (PiGetDeviceRegistryProperty.c)
 *     RtlFormatMessage @ 0x140807F30 (RtlFormatMessage.c)
 *     PiGetDeviceRegProperty @ 0x140955DCC (PiGetDeviceRegProperty.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     RtlStringCbCopyExW @ 0x140446CE0 (RtlStringCbCopyExW.c)
 *     RtlStringCchCopyW @ 0x140464504 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
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
  PWSTR v12; // r8
  ULONG v14; // r9d
  PWSTR v15; // rbx
  signed int v16; // edi
  unsigned __int16 v17; // kr02_2
  unsigned int v18; // edx
  char *v19; // r13
  WCHAR v20; // ax
  PWSTR v21; // rcx
  char *v22; // rdx
  PULONG v23; // rcx
  _WORD *v25; // rbx
  int v26; // ecx
  PWSTR v27; // r8
  unsigned int v28; // r14d
  unsigned int v29; // edx
  unsigned int v30; // eax
  unsigned int v31; // r15d
  __int64 v32; // r14
  unsigned int v33; // r12d
  char v34; // r8
  wchar_t *v35; // rcx
  wchar_t *v36; // rax
  PWSTR i; // rsi
  WCHAR v38; // dx
  unsigned int v39; // eax
  int v40; // ecx
  NTSTATUS v41; // eax
  va_list *v42; // r15
  wchar_t *v43; // r9
  __int16 v44; // ax
  unsigned int v45; // eax
  int v46; // ecx
  const wchar_t *v47; // r8
  unsigned int v48; // eax
  int v49; // ecx
  unsigned int v50; // ecx
  unsigned int v51; // edx
  __int64 v52; // r8
  __int64 v53; // rax
  _QWORD *v54; // rcx
  wchar_t *v55; // r11
  va_list v56; // r9
  va_list v57; // r8
  __int64 v58; // rax
  unsigned int v59; // ecx
  va_list *v60; // rcx
  __int64 v61; // r10
  va_list *v62; // rcx
  __int64 v63; // rax
  char *v64; // rcx
  __int16 v65; // ax
  __int64 v66; // rax
  __int64 v67; // rbx
  char *v68; // rbx
  __int64 v69; // [rsp+38h] [rbp-D0h]
  unsigned __int16 v70; // [rsp+58h] [rbp-B0h]
  unsigned int v71; // [rsp+5Ch] [rbp-ACh]
  unsigned int v72; // [rsp+60h] [rbp-A8h]
  unsigned int v73; // [rsp+68h] [rbp-A0h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+78h] [rbp-90h] BYREF
  NTSTRSAFE_PWSTR v76; // [rsp+80h] [rbp-88h] BYREF
  va_list *v77; // [rsp+88h] [rbp-80h]
  PWSTR v78; // [rsp+90h] [rbp-78h]
  int v79; // [rsp+98h] [rbp-70h]
  __int64 v80; // [rsp+A0h] [rbp-68h]
  PWSTR v81; // [rsp+A8h] [rbp-60h]
  PULONG v82; // [rsp+B0h] [rbp-58h]
  _QWORD v83[200]; // [rsp+B8h] [rbp-50h]
  wchar_t pszDest; // [rsp+6F8h] [rbp+5F0h] BYREF
  _WORD v85[30]; // [rsp+6FAh] [rbp+5F2h] BYREF
  wchar_t v86[9]; // [rsp+736h] [rbp+62Eh] BYREF

  LOBYTE(v70) = IgnoreInserts;
  v12 = Buffer;
  HIBYTE(v70) = ArgumentsAreAnsi;
  v14 = MaximumWidth;
  v77 = Arguments;
  v15 = Buffer;
  v78 = Buffer;
  v82 = ReturnLength;
  ppszDestEnd = 0LL;
  v76 = 0LL;
  v72 = 0;
  v16 = Length >> 1;
  v79 = 37;
  v80 = 8LL;
  v17 = __PAIR16__(ArgumentsAreAnsi, IgnoreInserts);
LABEL_2:
  v18 = 0;
LABEL_3:
  v19 = 0LL;
  v73 = v18;
  while ( 1 )
  {
    v20 = *MessageFormat;
    if ( !*MessageFormat )
      goto LABEL_16;
    v21 = ++MessageFormat;
    if ( v20 != (_WORD)v79 )
    {
      if ( v20 == 13 )
      {
        if ( *MessageFormat != 10 )
          goto LABEL_117;
      }
      else
      {
        if ( v20 != 10 )
        {
LABEL_8:
          if ( --v16 < 0 )
            return -2147483643;
          *v15 = v20;
          if ( v20 == 32 )
            v19 = (char *)v15;
          ++v15;
          ++v18;
          goto LABEL_12;
        }
        if ( *MessageFormat != 13 )
        {
LABEL_117:
          if ( !v14 )
          {
            v16 -= 2;
            if ( v16 >= 0 )
            {
              *v15 = 13;
              v25 = v15 + 1;
              *v25 = 10;
              v15 = v25 + 1;
              goto LABEL_2;
            }
            return -2147483643;
          }
          v19 = (char *)v15;
          v20 = 32;
          goto LABEL_8;
        }
      }
      ++MessageFormat;
      goto LABEL_117;
    }
    v26 = *v21;
    v27 = v15;
    v81 = v15;
    if ( (unsigned __int16)(v26 - 49) <= (unsigned __int16)v80 )
    {
      ++MessageFormat;
      v28 = v26 - 48;
      v29 = *MessageFormat;
      LOWORD(v30) = v29;
      if ( (unsigned __int16)v29 >= 0x30u && v29 <= 0x39 )
      {
        ++MessageFormat;
        v28 = v29 + 2 * (5 * v28 - 24);
        v30 = *MessageFormat;
        if ( (unsigned __int16)v30 >= 0x30u && v30 <= 0x39 )
        {
          ++MessageFormat;
          v28 = v30 + 2 * (5 * v28 - 24);
          LOWORD(v30) = *MessageFormat;
          if ( *MessageFormat >= 0x30u && (unsigned __int16)v30 <= 0x39u )
            return -1073741811;
        }
      }
      v31 = v28;
      v32 = v28 - 1;
      v71 = 0;
      v33 = 0;
      if ( (_WORD)v30 == 33 )
      {
        v34 = 0;
        pszDest = 37;
        v35 = v85;
        v36 = v85;
        for ( i = MessageFormat + 1; ; ++i )
        {
          v38 = *i;
          ppszDestEnd = v35;
          if ( v38 == 33 )
            break;
          if ( !v38 )
            return -1073741811;
          if ( v36 >= v86 )
            return -1073741811;
          if ( v38 == 42 )
          {
            v39 = v33++;
            v71 = v33;
            if ( v39 > 1 )
              return -1073741811;
          }
          *v35++ = v38;
          v36 = v35;
        }
        MessageFormat = i + 1;
        *v35 = 0;
      }
      else
      {
        RtlStringCbCopyExW(&pszDest, 0x40uLL, L"%s", &ppszDestEnd, 0LL, 0);
        v35 = ppszDestEnd;
        v34 = 1;
        v17 = v70;
      }
      if ( (_BYTE)v17 )
      {
        if ( v34 == 1 )
          goto LABEL_51;
        v40 = pszDest - 37;
        if ( pszDest == 37 )
        {
          v40 = v85[0] - 115;
          if ( v85[0] == 115 )
            v40 = v85[1];
        }
        if ( !v40 )
        {
LABEL_51:
          LODWORD(v69) = v31;
          v41 = RtlStringCchPrintfExW(v15, v16, &v76, 0LL, 0, L"%%%u", v69);
        }
        else
        {
          LODWORD(v69) = v31;
          v41 = RtlStringCchPrintfExW(v15, v16, &v76, 0LL, 0, L"%%%u!%s!", v69, v85);
        }
LABEL_85:
        if ( v41 < 0 )
          return -2147483643;
        v63 = v76 - v15;
        v16 -= v63;
        if ( v16 < 0 )
          return -2147483643;
        v18 = v73;
        v27 = v81;
        v14 = MaximumWidth;
        v17 = v70;
        v15 += (int)v63;
        goto LABEL_114;
      }
      v42 = v77;
      if ( !v77 || v33 + (unsigned int)v32 >= 0xC8 )
        return -1073741811;
      if ( HIBYTE(v17) )
      {
        v43 = v35 - 1;
        v44 = *(v35 - 1);
        if ( v44 == 99 )
        {
          v45 = *(v35 - 2);
          LOWORD(v45) = v45 - 104;
          if ( (unsigned __int16)v45 <= 0xFu )
          {
            v46 = 32785;
            if ( _bittest(&v46, v45) )
              goto LABEL_69;
          }
          v47 = L"hc";
          goto LABEL_60;
        }
        if ( v44 != 115 )
        {
          if ( v44 == 83 )
          {
            *v43 = 115;
          }
          else if ( v44 == 67 )
          {
            *v43 = 99;
          }
          goto LABEL_69;
        }
        v48 = *(v35 - 2);
        LOWORD(v48) = v48 - 104;
        if ( (unsigned __int16)v48 > 0xFu || (v49 = 32785, !_bittest(&v49, v48)) )
        {
          v47 = L"hs";
LABEL_60:
          RtlStringCchCopyW(v43, 3uLL, v47);
        }
      }
LABEL_69:
      v50 = v72;
      if ( (unsigned int)v32 >= v72 )
      {
        do
        {
          v51 = v50 + 1;
          v52 = v50;
          if ( ArgumentsAreAnArray )
          {
            v53 = (__int64)*v42++;
          }
          else
          {
            v54 = *v42;
            *v42 += 8;
            v53 = *v54;
          }
          v83[v52] = v53;
          v50 = v51;
        }
        while ( v51 <= (unsigned int)v32 );
        v33 = v71;
        v77 = v42;
        v72 = v51;
      }
      v55 = (wchar_t *)v83[v32];
      ppszDestEnd = v55;
      v56 = 0LL;
      v57 = 0LL;
      if ( v33 )
      {
        if ( ArgumentsAreAnArray )
        {
          v56 = *v42;
          v58 = v50;
          v59 = v50 + 1;
          v72 = v59;
          v83[v58] = *v42++;
          v77 = v42;
        }
        else
        {
          v60 = (va_list *)*v42;
          *v42 += 8;
          v56 = *v60;
          v59 = v72;
        }
        if ( v33 > 1 )
        {
          v61 = v59;
          v72 = v59 + 1;
          if ( ArgumentsAreAnArray )
          {
            v57 = *v42;
            v77 = v42 + 1;
          }
          else
          {
            v62 = (va_list *)*v42;
            *v42 += 8;
            v57 = *v62;
          }
          v83[v61] = v57;
        }
      }
      v41 = RtlStringCchPrintfExW(v15, v16, &v76, 0LL, 0, &pszDest, v55, v56, v57);
      goto LABEL_85;
    }
    if ( (_WORD)v26 == 48 )
      break;
    if ( !(_WORD)v26 )
      return -1073741811;
    switch ( v26 )
    {
      case 'r':
        if ( --v16 < 0 )
          return -2147483643;
        *v15 = 13;
LABEL_93:
        ++v15;
        ++MessageFormat;
        goto LABEL_94;
      case 'n':
        v16 -= 2;
        if ( v16 < 0 )
          return -2147483643;
        *v15++ = 13;
        *v15 = 10;
        goto LABEL_93;
      case 't':
        if ( --v16 < 0 )
          return -2147483643;
        if ( (v18 & 7) != 0 )
          v18 = (v18 + 7) & 0xFFFFFFF8;
        else
          v18 += 8;
        v19 = (char *)v15;
        *v15 = 9;
        break;
      case 'b':
        if ( --v16 < 0 )
          return -2147483643;
        v19 = (char *)v15;
        *v15 = 32;
        break;
      default:
        if ( (_BYTE)v17 )
        {
          v16 -= 2;
          if ( v16 < 0 )
            return -2147483643;
          *v15++ = 37;
          *v15 = *MessageFormat;
        }
        else
        {
          if ( --v16 < 0 )
            return -2147483643;
          *v15 = v26;
        }
        break;
    }
    ++v15;
    ++MessageFormat;
LABEL_114:
    if ( v27 )
    {
      v18 += v15 - v27;
      goto LABEL_95;
    }
LABEL_94:
    v19 = 0LL;
    v18 = 0;
LABEL_95:
    v12 = v78;
LABEL_12:
    v73 = v18;
    if ( v14 - 1 <= 0xFFFFFFFD && v18 >= v14 )
    {
      if ( v19 )
      {
        v22 = v19;
        do
        {
          if ( *(_WORD *)v22 != 32 && *(_WORD *)v22 != 9 )
            break;
          v22 += 2;
        }
        while ( v22 != (char *)v15 );
        if ( v19 > (char *)v12 )
        {
          do
          {
            v64 = v19 - 2;
            v65 = *((_WORD *)v19 - 1);
            if ( v65 != 32 && v65 != 9 )
              break;
            v19 -= 2;
          }
          while ( v64 > (char *)v12 );
        }
        v66 = (v22 - v19) >> 1;
        if ( (_DWORD)v66 == 1 )
        {
          if ( --v16 >= 0 )
            goto LABEL_131;
          return -2147483643;
        }
        if ( (unsigned int)v66 > 2 )
          v16 = v66 + v16 - 2;
LABEL_131:
        v67 = ((char *)v15 - v22) >> 1;
        memmove(v19 + 4, v22, 2 * v67);
        v14 = MaximumWidth;
        v18 = v67;
        *(_DWORD *)v19 = 655373;
        v68 = &v19[2 * (unsigned int)v67 + 2];
      }
      else
      {
        v16 -= 2;
        if ( v16 < 0 )
          return -2147483643;
        *v15 = 13;
        v18 = 0;
        v68 = (char *)(v15 + 1);
        *(_WORD *)v68 = 10;
      }
      v12 = v78;
      v15 = (PWSTR)(v68 + 2);
      v17 = v70;
      goto LABEL_3;
    }
  }
  v12 = v78;
LABEL_16:
  if ( v16 < 1 )
    return -2147483643;
  v23 = v82;
  *v15 = 0;
  if ( v23 )
    *v23 = 2 * (((char *)v15 - (char *)v12 + 2) >> 1);
  return 0;
}
