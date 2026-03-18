/*
 * XREFs of ?GrePolyDraw@@YAHPEAUHDC__@@AEAV?$umptr_r@UtagPOINT@@@@AEAV?$umptr_r@E@@K@Z @ 0x140113090
 * Callers:
 *     NtGdiPolyDraw @ 0x140206AD0 (NtGdiPolyDraw.c)
 * Callees:
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x14006DB98 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??$read@U_POINTL@@@?$umptr_r@UtagPOINT@@@@QEBA_NPEAU_POINTL@@_K_J@Z @ 0x140112FC0 (--$read@U_POINTL@@@-$umptr_r@UtagPOINT@@@@QEBA_NPEAU_POINTL@@_K_J@Z.c)
 *     ??$read@E@?$umptr_r@E@@QEBA_NPEAE_K_J@Z @ 0x140113750 (--$read@E@-$umptr_r@E@@QEBA_NPEAE_K_J@Z.c)
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x140114F08 (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x140117414 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GrePolyDraw(HDC a1, __int64 a2, __int64 a3, int a4)
{
  DC *v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rdx
  int v10; // ebx
  int v11; // ebx
  __int64 v12; // r12
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 *v29; // rax
  DC *v30; // r8
  __int64 v31; // rax
  ULONG v33; // ecx
  unsigned int v34; // ebx
  unsigned __int64 v35; // rcx
  __int64 v36; // rdx
  char v37; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v38[7]; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v39; // [rsp+38h] [rbp-C8h] BYREF
  struct _RECTFX v40; // [rsp+40h] [rbp-C0h] BYREF
  DC *v41[14]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v42[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v43; // [rsp+C8h] [rbp-38h]

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v41, a1);
  v7 = v41[0];
  v8 = 0;
  if ( !v41[0] || (*((_DWORD *)v41[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v41);
    return 0LL;
  }
  v9 = *((_QWORD *)v41[0] + 122);
  v10 = *(_DWORD *)(v9 + 152);
  if ( (v10 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v41[0], *(_QWORD *)(v9 + 160));
    v7 = v41[0];
  }
  if ( (v10 & 0x2000) != 0 )
  {
    GreDCSelectPen(v7, *(_QWORD *)(*((_QWORD *)v7 + 122) + 168LL));
    v7 = v41[0];
  }
  if ( !a4 )
  {
    v34 = 1;
LABEL_92:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v41);
    return v34;
  }
  v11 = *(_DWORD *)(*((_QWORD *)v7 + 122) + 208LL);
  DC::QuickInitXform(v7, &v39, 516LL);
  *(_QWORD *)&v40.xLeft = v39;
  LOBYTE(v40.xRight) = v11 != 2;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v42, v41, 1);
  if ( !v43 )
  {
    v33 = 8;
LABEL_90:
    EngSetLastError(v33);
LABEL_91:
    PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v42);
    v34 = 0;
    goto LABEL_92;
  }
  while ( 1 )
  {
    v12 = *(_QWORD *)(a3 + 16);
    if ( *(_QWORD *)(a3 + 8) == v12 )
      break;
    v38[0] = 0;
    v37 = 0;
    if ( !(unsigned __int8)umptr_r<unsigned char>::read<unsigned char>(a3, v38, 1LL, 0LL) )
      goto LABEL_91;
    v13 = *(_QWORD *)(a3 + 16);
    if ( v13 <= 0x7FFFFFFFFFFFFFFFLL
      && (v14 = v13 + 1,
          v13 >> 63 == v13 + 1 > 0x7FFFFFFFFFFFFFFFLL && v14 >= 0 && (unsigned __int64)v14 <= *(_QWORD *)(a3 + 8)) )
    {
      *(_QWORD *)(a3 + 16) = v14;
    }
    else
    {
      *(_BYTE *)(a3 + 24) = 1;
      v14 = v13;
    }
    switch ( v38[0] )
    {
      case 2:
        while ( *(_QWORD *)(a3 + 8) != v14
             && (unsigned __int8)umptr_r<unsigned char>::read<unsigned char>(a3, &v37, 1LL, 0LL)
             && v37 == 2 )
        {
          v26 = *(_QWORD *)(a3 + 16);
          if ( v26 <= 0x7FFFFFFFFFFFFFFFLL
            && (v14 = v26 + 1,
                v26 >> 63 == v26 + 1 > 0x7FFFFFFFFFFFFFFFLL && v14 >= 0 && (unsigned __int64)v14 <= *(_QWORD *)(a3 + 8)) )
          {
            *(_QWORD *)(a3 + 16) = v14;
          }
          else
          {
            *(_BYTE *)(a3 + 24) = 1;
            v14 = v26;
          }
        }
        if ( *(_QWORD *)(a3 + 8) != *(_QWORD *)(a3 + 16)
          && (unsigned __int8)umptr_r<unsigned char>::read<unsigned char>(a3, &v37, 1LL, 0LL)
          && (v37 & 0xFE) == 2 )
        {
          v24 = *(_QWORD *)(a3 + 16);
          if ( v24 <= 0x7FFFFFFFFFFFFFFFLL
            && (v25 = v24 + 1,
                v24 >> 63 == (unsigned __int64)v25 > 0x7FFFFFFFFFFFFFFFLL
             && v25 >= 0
             && (unsigned __int64)v25 <= *(_QWORD *)(a3 + 8)) )
          {
            *(_QWORD *)(a3 + 16) = v25;
          }
          else
          {
            *(_BYTE *)(a3 + 24) = 1;
          }
        }
        if ( *(_BYTE *)(a3 + 25) || *(_BYTE *)(a3 + 24) )
          goto LABEL_91;
LABEL_46:
        v20 = *(_QWORD *)(a3 + 16) - v12;
        if ( !(unsigned __int8)EPATHOBJ::bPolyLineTo(v42, &v40, a2, (unsigned int)v20) )
          goto LABEL_91;
        v21 = *(_QWORD *)(a2 + 16);
        if ( v21 <= 0x7FFFFFFFFFFFFFFFLL )
        {
          v22 = v21 + v20;
          v23 = v21 >> 63;
          if ( ((_DWORD)v23 != v20 >> 63 || (_DWORD)v23 == (unsigned __int64)v22 > 0x7FFFFFFFFFFFFFFFLL)
            && v22 >= 0
            && (unsigned __int64)v22 <= *(_QWORD *)(a2 + 8) )
          {
            *(_QWORD *)(a2 + 16) = v22;
            goto LABEL_53;
          }
        }
LABEL_58:
        *(_BYTE *)(a2 + 24) = 1;
LABEL_53:
        if ( !(unsigned __int8)umptr_r<unsigned char>::read<unsigned char>(a3, &v37, 1LL, -1LL) )
          goto LABEL_91;
        if ( (v37 & 1) != 0 )
          EPATHOBJ::bCloseFigure((EPATHOBJ *)v42);
        break;
      case 3:
        goto LABEL_46;
      case 4:
        while ( *(_QWORD *)(a3 + 8) != v14
             && (unsigned __int8)umptr_r<unsigned char>::read<unsigned char>(a3, &v37, 1LL, 0LL)
             && v37 == 4 )
        {
          v19 = *(_QWORD *)(a3 + 16);
          if ( v19 <= 0x7FFFFFFFFFFFFFFFLL
            && (v14 = v19 + 1,
                v19 >> 63 == v19 + 1 > 0x7FFFFFFFFFFFFFFFLL && v14 >= 0 && (unsigned __int64)v14 <= *(_QWORD *)(a3 + 8)) )
          {
            *(_QWORD *)(a3 + 16) = v14;
          }
          else
          {
            *(_BYTE *)(a3 + 24) = 1;
            v14 = v19;
          }
        }
        if ( *(_QWORD *)(a3 + 8) != *(_QWORD *)(a3 + 16)
          && (unsigned __int8)umptr_r<unsigned char>::read<unsigned char>(a3, &v37, 1LL, 0LL)
          && (v37 & 0xFE) == 4 )
        {
          v35 = *(_QWORD *)(a3 + 16);
          if ( v35 <= 0x7FFFFFFFFFFFFFFFLL
            && (v36 = v35 + 1,
                v35 >> 63 == (unsigned __int64)v36 > 0x7FFFFFFFFFFFFFFFLL
             && v36 >= 0
             && (unsigned __int64)v36 <= *(_QWORD *)(a3 + 8)) )
          {
            *(_QWORD *)(a3 + 16) = v36;
          }
          else
          {
            *(_BYTE *)(a3 + 24) = 1;
          }
        }
        if ( *(_BYTE *)(a3 + 25) || *(_BYTE *)(a3 + 24) )
          goto LABEL_91;
        v15 = *(_QWORD *)(a3 + 16) - v12;
        if ( v15 != 3 * (v15 / 3) )
        {
LABEL_108:
          v33 = 87;
          goto LABEL_90;
        }
        if ( !(unsigned __int8)EPATHOBJ::bPolyBezierTo(v42, &v40, a2, (unsigned int)v15) )
          goto LABEL_91;
        v16 = *(_QWORD *)(a2 + 16);
        if ( v16 <= 0x7FFFFFFFFFFFFFFFLL )
        {
          v17 = v16 + v15;
          v18 = v16 >> 63;
          if ( ((_DWORD)v18 != v15 >> 63 || (_DWORD)v18 == (unsigned __int64)v17 > 0x7FFFFFFFFFFFFFFFLL)
            && v17 >= 0
            && (unsigned __int64)v17 <= *(_QWORD *)(a2 + 8) )
          {
            *(_QWORD *)(a2 + 16) = v17;
            goto LABEL_53;
          }
        }
        goto LABEL_58;
      case 6:
        if ( !(unsigned __int8)EPATHOBJ::bMoveTo(v42, &v40, a2) )
          goto LABEL_91;
        v27 = *(_QWORD *)(a2 + 16);
        if ( v27 <= 0x7FFFFFFFFFFFFFFFLL
          && (v28 = v27 + 1,
              v27 >> 63 == (unsigned __int64)v28 > 0x7FFFFFFFFFFFFFFFLL
           && v28 >= 0
           && (unsigned __int64)v28 <= *(_QWORD *)(a2 + 8)) )
        {
          *(_QWORD *)(a2 + 16) = v28;
        }
        else
        {
          *(_BYTE *)(a2 + 24) = 1;
        }
        break;
      default:
        goto LABEL_108;
    }
  }
  v39 = 0LL;
  if ( !umptr_r<tagPOINT>::read<_POINTL>(a2, &v39) )
    goto LABEL_91;
  if ( (*(_DWORD *)(v43 + 72) & 1) != 0 )
    v29 = (__int64 *)(v43 + 64);
  else
    v29 = (__int64 *)(*(_QWORD *)(v43 + 40) + 8 * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v43 + 40) + 20LL) - 1) + 3LL));
  v30 = v41[0];
  v31 = *v29;
  *(_DWORD *)(*((_QWORD *)v41[0] + 122) + 152LL) &= 0xFFFFFCFF;
  *(_QWORD *)(*((_QWORD *)v30 + 122) + 216LL) = v39;
  *(_QWORD *)(*((_QWORD *)v30 + 122) + 8LL) = v31;
  if ( (*((_DWORD *)v41[0] + 62) & 1) != 0
    || (unsigned int)EPATHOBJ_bStrokeAndOrFill(
                       (struct EPATHOBJ *)v42,
                       (struct XDCOBJ *)v41,
                       (LINEATTRS *)((char *)v41[0] + 208),
                       &v40,
                       1u) )
  {
    v8 = 1;
  }
  PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v42);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v41);
  return v8;
}
