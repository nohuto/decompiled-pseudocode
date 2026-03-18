/*
 * XREFs of GreGradientFill @ 0x1400A0CB0
 * Callers:
 *     NtGdiGradientFill @ 0x1400A0A80 (NtGdiGradientFill.c)
 *     ?FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z @ 0x1400C2060 (-FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z.c)
 * Callees:
 *     ??0XCLIPOBJ@@QEAA@XZ @ 0x140013B48 (--0XCLIPOBJ@@QEAA@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140072810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400782E4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x14007A090 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007A2CC (--0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14008026C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x140086C60 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x140087A98 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x14009868C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x14009B348 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     bCvtPts1 @ 0x1400A0334 (bCvtPts1.c)
 *     ?bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z @ 0x1400A13B8 (-bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400A1960 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     PALLOCNOZ @ 0x1400FD16C (PALLOCNOZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreGradientFill(
        Gre::Base *a1,
        struct _TRIVERTEX *a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        unsigned __int8 a6)
{
  unsigned int v6; // edi
  struct _TRIVERTEX *v7; // r14
  void *v8; // r13
  __int64 v9; // r15
  __int64 v12; // rcx
  unsigned int v13; // esi
  unsigned __int64 v14; // r10
  struct _TRIVERTEX *v15; // rbx
  LONG x; // edx
  int v17; // eax
  LONG y; // r9d
  char *v19; // rcx
  int v20; // esi
  struct REGION *v21; // rdx
  struct ECLIPOBJ *v22; // rdx
  DC *v23; // r13
  __int64 v24; // r13
  _DWORD *v25; // rcx
  __int64 v26; // rbx
  Gre::Base *v27; // r8
  DC *v28; // rdx
  char *v29; // rax
  __int64 v30; // rax
  BOOL (__stdcall *v31)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rax
  struct ECLIPOBJ *v33; // rdx
  unsigned __int64 v34; // rax
  ULONG v35; // ecx
  int inited; // eax
  unsigned __int64 v37; // rcx
  unsigned int v38; // eax
  unsigned __int64 v39; // rbx
  unsigned int v40; // eax
  struct _TRIVERTEX *v41; // rax
  unsigned int v42; // r9d
  char *v43; // r8
  unsigned int i; // r10d
  __int64 v45; // r11
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r11
  __int64 v49; // rbx
  COLOR16 Alpha; // ax
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned int v53; // r11d
  __int64 v54; // rax
  __int64 v55; // rdx
  int v56; // [rsp+60h] [rbp-A0h] BYREF
  int v57; // [rsp+64h] [rbp-9Ch]
  unsigned int v58; // [rsp+68h] [rbp-98h]
  unsigned __int64 v59; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v60; // [rsp+78h] [rbp-88h]
  __int64 v61; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v62; // [rsp+88h] [rbp-78h]
  __m128i v63; // [rsp+90h] [rbp-70h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v64; // [rsp+A0h] [rbp-60h]
  DC *v65[14]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v66[352]; // [rsp+120h] [rbp+20h] BYREF
  struct _RECTL si128; // [rsp+280h] [rbp+180h] BYREF
  _BYTE v68[4]; // [rsp+290h] [rbp+190h] BYREF
  _BYTE v69[156]; // [rsp+294h] [rbp+194h] BYREF

  v6 = 0;
  v7 = 0LL;
  v58 = a6;
  v8 = a4;
  v62 = a4;
  v9 = a3;
  v64 = Gre::Base::Globals(a1);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v65, (HDC)a1, v64);
  if ( !v65[0] || (*((_DWORD *)v65[0] + 9) & 0x10000) != 0 )
  {
    v20 = 0;
    goto LABEL_34;
  }
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v66);
  if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v66, (struct XDCOBJ *)v65) )
  {
    v20 = XDCOBJ::bFullScreen((XDCOBJ *)v65);
    goto LABEL_32;
  }
  DC::QuickInitXform(v65[0], &v61, 516LL);
  v12 = v61;
  if ( (*(_BYTE *)(v61 + 32) & 1) == 0 && a6 <= 1u )
  {
    v34 = 2LL * a5;
    if ( v34 > 0xFFFFFFFF
      || (v37 = 12LL * (unsigned int)v34, v37 > 0xFFFFFFFF)
      || (v13 = 2 * a5, v38 = v9 + 2 * a5, v60 = 2 * a5, v38 < 2 * a5)
      || (v39 = 16LL * v38, v39 > 0xFFFFFFFF)
      || (v40 = v39 + v37, (int)v39 + (int)v37 < (unsigned int)v37) )
    {
      v35 = 534;
    }
    else
    {
      if ( v40 <= 0x2710000 )
      {
        v41 = (struct _TRIVERTEX *)PALLOCNOZ(v40, 1886221383LL);
        v7 = v41;
        if ( v41 )
        {
          v42 = 0;
          v43 = (char *)v41 + (unsigned int)v39;
          if ( (_DWORD)v9 )
          {
            v55 = v9;
            v42 = v9;
            do
            {
              *v41 = *(struct _TRIVERTEX *)((char *)v41 + (char *)a2 - (char *)v7);
              ++v41;
              --v55;
            }
            while ( v55 );
          }
          for ( i = 0; i < a5; ++i )
          {
            v45 = (unsigned int)v62[2 * i];
            v46 = (unsigned int)v62[2 * i + 1];
            v56 = v62[2 * i + 1];
            v58 = v45;
            if ( (unsigned int)v45 >= (unsigned int)v9 || (unsigned int)v46 >= (unsigned int)v9 )
            {
              EngSetLastError(0x57u);
              Win32FreePool(v7);
              DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v66);
              goto LABEL_35;
            }
            v47 = v42;
            v48 = v45;
            v49 = v42 + 1;
            v7[v47].x = a2[v46].x;
            v7[v47].y = a2[v48].y;
            v7[v49].x = a2[v48].x;
            v7[v49].y = a2[v46].y;
            if ( a6 == 1 )
            {
              v7[v42].Red = a2[v48].Red;
              v7[v42].Green = a2[v48].Green;
              v7[v42].Blue = a2[v48].Blue;
              v7[v42].Alpha = a2[v48].Alpha;
              v7[v42 + 1].Red = a2[v46].Red;
              v7[v42 + 1].Green = a2[v46].Green;
              v7[v42 + 1].Blue = a2[v46].Blue;
              Alpha = a2[v46].Alpha;
            }
            else
            {
              v7[v42].Red = a2[v46].Red;
              v7[v42].Green = a2[v46].Green;
              v7[v42].Blue = a2[v46].Blue;
              v7[v42].Alpha = a2[v46].Alpha;
              v7[v42 + 1].Red = a2[v48].Red;
              v7[v42 + 1].Green = a2[v48].Green;
              v7[v42 + 1].Blue = a2[v48].Blue;
              Alpha = a2[v48].Alpha;
            }
            v7[v42 + 1].Alpha = Alpha;
            v51 = 2 * i;
            v52 = 3 * v51;
            *(_DWORD *)&v43[4 * v52] = v58;
            v53 = v42 + 1;
            *(_DWORD *)&v43[4 * v52 + 4] = v42;
            *(_DWORD *)&v43[4 * v52 + 8] = v42 + 1;
            LODWORD(v52) = v56;
            v54 = 3LL * (unsigned int)(v51 + 1);
            *(_DWORD *)&v43[4 * v54 + 4] = v42;
            v42 += 2;
            *(_DWORD *)&v43[4 * v54] = v52;
            *(_DWORD *)&v43[4 * v54 + 8] = v53;
          }
          v12 = v61;
          v8 = v43;
          v62 = v43;
          a2 = v7;
          v58 = 2;
          LODWORD(v9) = v42;
          goto LABEL_6;
        }
      }
      v35 = 8;
    }
    EngSetLastError(v35);
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v66);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v65);
    return 0LL;
  }
  v13 = a5;
  v60 = a5;
LABEL_6:
  si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
  if ( (_DWORD)v9 )
  {
    v14 = (unsigned int)v9;
    v15 = a2;
    v59 = (unsigned int)v9;
    while ( 1 )
    {
      x = v15->x;
      v17 = *(_DWORD *)(v12 + 32) & 0x43;
      y = v15->y;
      v56 = v15->x;
      v57 = y;
      if ( (_BYTE)v17 != 67 )
      {
        bCvtPts1(v12, (__int64)&v56, 1LL);
        y = v57;
        x = v56;
        v14 = v59;
      }
      if ( (*(_DWORD *)(*((_QWORD *)v65[0] + 122) + 108LL) & 1) != 0 )
        ++x;
      v19 = (char *)v65[0] + 1024;
      if ( (*((_DWORD *)v65[0] + 10) & 1) == 0 )
        v19 = (char *)v65[0] + 1016;
      v15->x = x + *(_DWORD *)v19;
      v15->y = y + *((_DWORD *)v65[0] + 2 * (*((_DWORD *)v65[0] + 10) & 1) + 255);
      ++v15;
      v59 = --v14;
      if ( !v14 )
        break;
      v12 = v61;
    }
  }
  v20 = bCalcMeshExtent(a2, v9, v8, v13, v58, &si128);
  if ( !v20 )
    goto LABEL_32;
  XDCOBJ::prgnEffRao(v65);
  XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)v68);
  XCLIPOBJ::vSetup((XCLIPOBJ *)v68, v21, (const struct ERECTL *)&si128, 0);
  if ( !ERECTL::bEmpty((ERECTL *)v69) )
  {
    v23 = v65[0];
    if ( (*((_DWORD *)v65[0] + 9) & 0xE0) != 0 )
    {
      v63 = (__m128i)si128;
      XDCOBJ::vAccumulate((XDCOBJ *)v65, v22, &v63);
      XDCOBJ::vAccumulateTight((XDCOBJ *)v65, v33, (struct ERECTL *)&v63);
      v23 = v65[0];
    }
    v24 = *((_QWORD *)v23 + 62);
    if ( v24 )
    {
      ++*(_DWORD *)(v24 + 92);
      v25 = (_DWORD *)(v24 + 96);
      v26 = *(_QWORD *)(v24 + 48);
      v59 = 0LL;
      v63.m128i_i64[0] = v24 + 96;
      if ( (*(_DWORD *)(v26 + 40) & 0x80u) != 0 )
      {
        v63.m128i_i64[0] = v24 + 96;
      }
      else if ( *v25 > 3u )
      {
        v27 = 0LL;
LABEL_24:
        v28 = v65[0];
        v29 = (char *)v65[0] + 1024;
        if ( (*((_DWORD *)v65[0] + 10) & 1) == 0 )
          v29 = (char *)v65[0] + 1016;
        v30 = *(_QWORD *)v29;
        v56 = -(int)v30;
        v57 = -HIDWORD(v30);
        if ( *v25 != 3 && (*(_DWORD *)(v24 + 112) & 0x20000) != 0 )
          v31 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(v26 + 3224);
        else
          v31 = EngGradientFill;
        if ( !v20
          || (v20 = 1,
              !((unsigned int (__fastcall *)(__int64, _BYTE *, Gre::Base *, struct _TRIVERTEX *, _DWORD, _DWORD *, unsigned int, struct _RECTL *, int *, unsigned int))v31)(
                 v24 + 24,
                 v68,
                 v27,
                 a2,
                 v9,
                 v62,
                 v60,
                 &si128,
                 &v56,
                 v58)) )
        {
          v20 = 0;
        }
        EXLATEOBJ::vAltUnlock((Gre::Base **)&v59, (__int64)v28, (__int64)v27);
        goto LABEL_32;
      }
      inited = EXLATEOBJ::bInitXlateObj(
                 (Gre::Base *)&v59,
                 *(_QWORD *)(*((_QWORD *)v65[0] + 122) + 248LL),
                 *((_DWORD *)v65[0] + 30),
                 *((_QWORD *)v64 + 472),
                 *(_QWORD *)(v24 + 128),
                 *((_QWORD *)v65[0] + 11),
                 *((_QWORD *)v65[0] + 11),
                 *(_DWORD *)(*((_QWORD *)v65[0] + 122) + 184LL),
                 *(_DWORD *)(*((_QWORD *)v65[0] + 122) + 176LL),
                 0,
                 0);
      v27 = (Gre::Base *)v59;
      v20 = inited;
      v25 = (_DWORD *)v63.m128i_i64[0];
      goto LABEL_24;
    }
  }
  v20 = 1;
LABEL_32:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v66);
  if ( v7 )
    Win32FreePool(v7);
LABEL_34:
  v6 = v20;
LABEL_35:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v65);
  return v6;
}
