/*
 * XREFs of RtlFormatMessageEx @ 0x140B0FF70
 * Callers:
 *     PiGetDeviceRegistryProperty @ 0x1407A02EC (PiGetDeviceRegistryProperty.c)
 *     RtlFormatMessage @ 0x140802490 (RtlFormatMessage.c)
 *     PiGetDeviceRegProperty @ 0x14099536C (PiGetDeviceRegProperty.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x14044E030 (RtlStringCchPrintfExW.c)
 *     RtlStringCbCopyExW @ 0x14044EBB0 (RtlStringCbCopyExW.c)
 *     RtlStringCchCopyW @ 0x14046AD84 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

__int64 __fastcall RtlFormatMessageEx(
        __int16 *a1,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        char a5,
        __int64 a6,
        NTSTRSAFE_PWSTR a7,
        unsigned int a8,
        __int64 a9)
{
  NTSTRSAFE_PWSTR v11; // r8
  unsigned int v13; // r9d
  NTSTRSAFE_PWSTR v14; // rbx
  signed int v15; // edi
  unsigned __int16 v16; // kr02_2
  unsigned int v17; // edx
  char *v18; // r13
  __int16 v19; // ax
  unsigned __int16 *v20; // rcx
  char *v21; // rdx
  _DWORD *v22; // rcx
  _WORD *v24; // rbx
  int v25; // ecx
  NTSTRSAFE_PWSTR v26; // r8
  unsigned int v27; // r14d
  unsigned int v28; // edx
  unsigned int v29; // eax
  unsigned int v30; // r15d
  __int64 v31; // r14
  unsigned int v32; // r12d
  char v33; // r8
  wchar_t *v34; // rcx
  wchar_t *v35; // rax
  _WORD *i; // rsi
  wchar_t v37; // dx
  unsigned int v38; // eax
  int v39; // ecx
  NTSTATUS v40; // eax
  __int64 *v41; // r15
  wchar_t *v42; // r9
  __int16 v43; // ax
  unsigned int v44; // eax
  int v45; // ecx
  const wchar_t *v46; // r8
  unsigned int v47; // eax
  int v48; // ecx
  unsigned int v49; // ecx
  unsigned int v50; // edx
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 *v53; // rcx
  wchar_t *v54; // r11
  __int64 *v55; // r9
  __int64 *v56; // r8
  __int64 v57; // rax
  unsigned int v58; // ecx
  __int64 *v59; // rcx
  __int64 v60; // r10
  __int64 *v61; // rcx
  __int64 v62; // rax
  char *v63; // rcx
  __int16 v64; // ax
  __int64 v65; // rax
  __int64 v66; // rbx
  char *v67; // rbx
  __int64 v68; // [rsp+38h] [rbp-D0h]
  unsigned __int16 v69; // [rsp+58h] [rbp-B0h]
  unsigned int v70; // [rsp+5Ch] [rbp-ACh]
  unsigned int v71; // [rsp+60h] [rbp-A8h]
  unsigned int v72; // [rsp+68h] [rbp-A0h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+78h] [rbp-90h] BYREF
  NTSTRSAFE_PWSTR v75; // [rsp+80h] [rbp-88h] BYREF
  __int64 v76; // [rsp+88h] [rbp-80h]
  NTSTRSAFE_PWSTR v77; // [rsp+90h] [rbp-78h]
  int v78; // [rsp+98h] [rbp-70h]
  __int64 v79; // [rsp+A0h] [rbp-68h]
  NTSTRSAFE_PWSTR v80; // [rsp+A8h] [rbp-60h]
  __int64 v81; // [rsp+B0h] [rbp-58h]
  _QWORD v82[200]; // [rsp+B8h] [rbp-50h]
  wchar_t pszDest; // [rsp+6F8h] [rbp+5F0h] BYREF
  _WORD v84[30]; // [rsp+6FAh] [rbp+5F2h] BYREF
  wchar_t v85[9]; // [rsp+736h] [rbp+62Eh] BYREF

  LOBYTE(v69) = a3;
  v11 = a7;
  HIBYTE(v69) = a4;
  v13 = a2;
  v76 = a6;
  v14 = a7;
  v77 = a7;
  v81 = a9;
  ppszDestEnd = 0LL;
  v75 = 0LL;
  v71 = 0;
  v15 = a8 >> 1;
  v78 = 37;
  v79 = 8LL;
  v16 = __PAIR16__(a4, a3);
LABEL_2:
  v17 = 0;
LABEL_3:
  v18 = 0LL;
  v72 = v17;
  while ( 1 )
  {
    v19 = *a1;
    if ( !*a1 )
      goto LABEL_16;
    v20 = (unsigned __int16 *)++a1;
    if ( v19 != (_WORD)v78 )
    {
      if ( v19 == 13 )
      {
        if ( *a1 != 10 )
          goto LABEL_117;
      }
      else
      {
        if ( v19 != 10 )
        {
LABEL_8:
          if ( --v15 < 0 )
            return 2147483653LL;
          *v14 = v19;
          if ( v19 == 32 )
            v18 = (char *)v14;
          ++v14;
          ++v17;
          goto LABEL_12;
        }
        if ( *a1 != 13 )
        {
LABEL_117:
          if ( !v13 )
          {
            v15 -= 2;
            if ( v15 >= 0 )
            {
              *v14 = 13;
              v24 = v14 + 1;
              *v24 = 10;
              v14 = v24 + 1;
              goto LABEL_2;
            }
            return 2147483653LL;
          }
          v18 = (char *)v14;
          v19 = 32;
          goto LABEL_8;
        }
      }
      ++a1;
      goto LABEL_117;
    }
    v25 = *v20;
    v26 = v14;
    v80 = v14;
    if ( (unsigned __int16)(v25 - 49) <= (unsigned __int16)v79 )
    {
      ++a1;
      v27 = v25 - 48;
      v28 = (unsigned __int16)*a1;
      LOWORD(v29) = v28;
      if ( (unsigned __int16)v28 >= 0x30u && v28 <= 0x39 )
      {
        ++a1;
        v27 = v28 + 2 * (5 * v27 - 24);
        v29 = (unsigned __int16)*a1;
        if ( (unsigned __int16)v29 >= 0x30u && v29 <= 0x39 )
        {
          ++a1;
          v27 = v29 + 2 * (5 * v27 - 24);
          LOWORD(v29) = *a1;
          if ( (unsigned __int16)*a1 >= 0x30u && (unsigned __int16)v29 <= 0x39u )
            return 3221225485LL;
        }
      }
      v30 = v27;
      v31 = v27 - 1;
      v70 = 0;
      v32 = 0;
      if ( (_WORD)v29 == 33 )
      {
        v33 = 0;
        pszDest = 37;
        v34 = v84;
        v35 = v84;
        for ( i = a1 + 1; ; ++i )
        {
          v37 = *i;
          ppszDestEnd = v34;
          if ( v37 == 33 )
            break;
          if ( !v37 )
            return 3221225485LL;
          if ( v35 >= v85 )
            return 3221225485LL;
          if ( v37 == 42 )
          {
            v38 = v32++;
            v70 = v32;
            if ( v38 > 1 )
              return 3221225485LL;
          }
          *v34++ = v37;
          v35 = v34;
        }
        a1 = i + 1;
        *v34 = 0;
      }
      else
      {
        RtlStringCbCopyExW(&pszDest, 0x40uLL, L"%s", &ppszDestEnd, 0LL, 0);
        v34 = ppszDestEnd;
        v33 = 1;
        v16 = v69;
      }
      if ( (_BYTE)v16 )
      {
        if ( v33 == 1 )
          goto LABEL_51;
        v39 = pszDest - 37;
        if ( pszDest == 37 )
        {
          v39 = v84[0] - 115;
          if ( v84[0] == 115 )
            v39 = v84[1];
        }
        if ( !v39 )
        {
LABEL_51:
          LODWORD(v68) = v30;
          v40 = RtlStringCchPrintfExW(v14, v15, &v75, 0LL, 0, L"%%%u", v68);
        }
        else
        {
          LODWORD(v68) = v30;
          v40 = RtlStringCchPrintfExW(v14, v15, &v75, 0LL, 0, L"%%%u!%s!", v68, v84);
        }
LABEL_85:
        if ( v40 < 0 )
          return 2147483653LL;
        v62 = v75 - v14;
        v15 -= v62;
        if ( v15 < 0 )
          return 2147483653LL;
        v17 = v72;
        v26 = v80;
        v13 = a2;
        v16 = v69;
        v14 += (int)v62;
        goto LABEL_114;
      }
      v41 = (__int64 *)v76;
      if ( !v76 || v32 + (unsigned int)v31 >= 0xC8 )
        return 3221225485LL;
      if ( HIBYTE(v16) )
      {
        v42 = v34 - 1;
        v43 = *(v34 - 1);
        if ( v43 == 99 )
        {
          v44 = *(v34 - 2);
          LOWORD(v44) = v44 - 104;
          if ( (unsigned __int16)v44 <= 0xFu )
          {
            v45 = 32785;
            if ( _bittest(&v45, v44) )
              goto LABEL_69;
          }
          v46 = L"hc";
          goto LABEL_60;
        }
        if ( v43 != 115 )
        {
          if ( v43 == 83 )
          {
            *v42 = 115;
          }
          else if ( v43 == 67 )
          {
            *v42 = 99;
          }
          goto LABEL_69;
        }
        v47 = *(v34 - 2);
        LOWORD(v47) = v47 - 104;
        if ( (unsigned __int16)v47 > 0xFu || (v48 = 32785, !_bittest(&v48, v47)) )
        {
          v46 = L"hs";
LABEL_60:
          RtlStringCchCopyW(v42, 3uLL, v46);
        }
      }
LABEL_69:
      v49 = v71;
      if ( (unsigned int)v31 >= v71 )
      {
        do
        {
          v50 = v49 + 1;
          v51 = v49;
          if ( a5 )
          {
            v52 = *v41++;
          }
          else
          {
            v53 = (__int64 *)*v41;
            *v41 += 8LL;
            v52 = *v53;
          }
          v82[v51] = v52;
          v49 = v50;
        }
        while ( v50 <= (unsigned int)v31 );
        v32 = v70;
        v76 = (__int64)v41;
        v71 = v50;
      }
      v54 = (wchar_t *)v82[v31];
      ppszDestEnd = v54;
      v55 = 0LL;
      v56 = 0LL;
      if ( v32 )
      {
        if ( a5 )
        {
          v55 = (__int64 *)*v41;
          v57 = v49;
          v58 = v49 + 1;
          v71 = v58;
          v82[v57] = *v41++;
          v76 = (__int64)v41;
        }
        else
        {
          v59 = (__int64 *)*v41;
          *v41 += 8LL;
          v55 = (__int64 *)*v59;
          v58 = v71;
        }
        if ( v32 > 1 )
        {
          v60 = v58;
          v71 = v58 + 1;
          if ( a5 )
          {
            v56 = (__int64 *)*v41;
            v76 = (__int64)(v41 + 1);
          }
          else
          {
            v61 = (__int64 *)*v41;
            *v41 += 8LL;
            v56 = (__int64 *)*v61;
          }
          v82[v60] = v56;
        }
      }
      v40 = RtlStringCchPrintfExW(v14, v15, &v75, 0LL, 0, &pszDest, v54, v55, v56);
      goto LABEL_85;
    }
    if ( (_WORD)v25 == 48 )
      break;
    if ( !(_WORD)v25 )
      return 3221225485LL;
    switch ( v25 )
    {
      case 'r':
        if ( --v15 < 0 )
          return 2147483653LL;
        *v14 = 13;
LABEL_93:
        ++v14;
        ++a1;
        goto LABEL_94;
      case 'n':
        v15 -= 2;
        if ( v15 < 0 )
          return 2147483653LL;
        *v14++ = 13;
        *v14 = 10;
        goto LABEL_93;
      case 't':
        if ( --v15 < 0 )
          return 2147483653LL;
        if ( (v17 & 7) != 0 )
          v17 = (v17 + 7) & 0xFFFFFFF8;
        else
          v17 += 8;
        v18 = (char *)v14;
        *v14 = 9;
        break;
      case 'b':
        if ( --v15 < 0 )
          return 2147483653LL;
        v18 = (char *)v14;
        *v14 = 32;
        break;
      default:
        if ( (_BYTE)v16 )
        {
          v15 -= 2;
          if ( v15 < 0 )
            return 2147483653LL;
          *v14++ = 37;
          *v14 = *a1;
        }
        else
        {
          if ( --v15 < 0 )
            return 2147483653LL;
          *v14 = v25;
        }
        break;
    }
    ++v14;
    ++a1;
LABEL_114:
    if ( v26 )
    {
      v17 += v14 - v26;
      goto LABEL_95;
    }
LABEL_94:
    v18 = 0LL;
    v17 = 0;
LABEL_95:
    v11 = v77;
LABEL_12:
    v72 = v17;
    if ( v13 - 1 <= 0xFFFFFFFD && v17 >= v13 )
    {
      if ( v18 )
      {
        v21 = v18;
        do
        {
          if ( *(_WORD *)v21 != 32 && *(_WORD *)v21 != 9 )
            break;
          v21 += 2;
        }
        while ( v21 != (char *)v14 );
        if ( v18 > (char *)v11 )
        {
          do
          {
            v63 = v18 - 2;
            v64 = *((_WORD *)v18 - 1);
            if ( v64 != 32 && v64 != 9 )
              break;
            v18 -= 2;
          }
          while ( v63 > (char *)v11 );
        }
        v65 = (v21 - v18) >> 1;
        if ( (_DWORD)v65 == 1 )
        {
          if ( --v15 >= 0 )
            goto LABEL_131;
          return 2147483653LL;
        }
        if ( (unsigned int)v65 > 2 )
          v15 = v65 + v15 - 2;
LABEL_131:
        v66 = ((char *)v14 - v21) >> 1;
        memmove(v18 + 4, v21, 2 * v66);
        v13 = a2;
        v17 = v66;
        *(_DWORD *)v18 = 655373;
        v67 = &v18[2 * (unsigned int)v66 + 2];
      }
      else
      {
        v15 -= 2;
        if ( v15 < 0 )
          return 2147483653LL;
        *v14 = 13;
        v17 = 0;
        v67 = (char *)(v14 + 1);
        *(_WORD *)v67 = 10;
      }
      v11 = v77;
      v14 = (NTSTRSAFE_PWSTR)(v67 + 2);
      v16 = v69;
      goto LABEL_3;
    }
  }
  v11 = v77;
LABEL_16:
  if ( v15 < 1 )
    return 2147483653LL;
  v22 = (_DWORD *)v81;
  *v14 = 0;
  if ( v22 )
    *v22 = 2 * (((char *)v14 - (char *)v11 + 2) >> 1);
  return 0LL;
}
