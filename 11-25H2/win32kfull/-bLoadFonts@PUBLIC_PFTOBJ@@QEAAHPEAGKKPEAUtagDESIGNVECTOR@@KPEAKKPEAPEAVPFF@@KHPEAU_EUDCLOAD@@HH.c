/*
 * XREFs of ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1400B663C
 * Callers:
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1400B61AC (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1400B6530 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     bAddFlEntry @ 0x1400B7140 (bAddFlEntry.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1401470EC (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     ?GrepAddFontResource@@YAHPEAGKKKKPEAUtagDESIGNVECTOR@@K@Z @ 0x1401A2F68 (-GrepAddFontResource@@YAHPEAGKKKKPEAUtagDESIGNVECTOR@@K@Z.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1402309A8 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14001922C (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     EngUnmapFontFileFD @ 0x1400B2490 (EngUnmapFontFileFD.c)
 *     ?chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z @ 0x1400B54CC (-chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z.c)
 *     ?bIsPrivatePFT@PFTOBJ@@QEBAHXZ @ 0x1400B55FC (-bIsPrivatePFT@PFTOBJ@@QEBAHXZ.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1400B59F8 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$0BJ@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B5D5C (--0-$SEMOBJ@$0BJ@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     UmfdLoadFontFileView @ 0x1400B5DE4 (UmfdLoadFontFileView.c)
 *     ??$GreReleaseSemaphoreCommon@$0BJ@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400B614C (--$GreReleaseSemaphoreCommon@$0BJ@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B975C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400B9F50 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x140106FA8 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x140107864 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x140108068 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z @ 0x14010C4A4 (-vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z.c)
 *     ?Remove@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x14010C578 (-Remove@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z @ 0x14010C6E8 (--0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCHECKSUM@@PEAPEAUFONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x14010E08C (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCH.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x14010ED5C (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x14010F6AC (-vSetUniqueness@PFFOBJ@@QEAAXXZ.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1401C2AA4 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ?Contains@TrustedFontFileTable@@SA_NPEBG@Z @ 0x1401C5FD4 (-Contains@TrustedFontFileTable@@SA_NPEBG@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::bLoadFonts(
        PUBLIC_PFTOBJ *this,
        unsigned __int16 *a2,
        __int64 a3,
        unsigned int a4,
        struct tagDESIGNVECTOR *Src,
        size_t a6,
        unsigned int *a7,
        unsigned int a8,
        struct PFF **a9,
        unsigned int a10,
        int a11,
        struct _EUDCLOAD *a12,
        int a13,
        int a14)
{
  unsigned int v14; // edi
  __int64 v15; // r14
  PUBLIC_PFTOBJ *v16; // r13
  unsigned int v17; // ebx
  struct PFF **v18; // r12
  unsigned int *v19; // r15
  struct PFF *v20; // rax
  struct PFF *v21; // rax
  char *v22; // rax
  __int64 v23; // rax
  __int64 v24; // r8
  struct FONTFILEVIEW **v25; // rsi
  WCHAR *v26; // rdx
  _DWORD *v27; // rbx
  __int64 v28; // r12
  char *v29; // r13
  __int64 v30; // r15
  bool v31; // al
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 SessionState; // rax
  __int64 v37; // r8
  HSEMAPHORE v38; // rdx
  unsigned __int64 v39; // rcx
  unsigned int v40; // eax
  struct PFF *v41; // rax
  int v42; // edx
  __int64 v43; // r15
  struct PFT *v44; // rcx
  struct PFF **v45; // rdx
  struct PFF *v46; // rcx
  _WORD *v47; // rcx
  struct FONTFILEVIEW **v48; // rdx
  __int64 v49; // r8
  struct PFF *v51; // rax
  __int64 v52; // rbx
  char v53; // r12
  unsigned int v55; // eax
  struct PFF *v56; // rax
  ULONG_PTR *v57; // rbx
  __int64 v58; // r15
  __int64 v59; // rax
  struct W32_PUSH_LOCK *v60; // rbx
  struct FONTFILEVIEW **v61; // rbx
  struct FONTFILEVIEW *v62; // rcx
  unsigned int v63; // esi
  struct PFF *v64; // rax
  unsigned int v65; // ebx
  __int64 v66; // r14
  int v67; // edx
  struct PFT *v68; // rcx
  struct PFF **v69; // rdx
  struct PFF *v70; // rcx
  __int64 v71; // r12
  struct FONTFILEVIEW **v72; // r15
  __int64 v73; // r14
  unsigned int v74; // eax
  unsigned int v75; // eax
  struct PFF *v76; // rax
  __int64 v77; // rbx
  size_t Size; // [rsp+38h] [rbp-E0h]
  unsigned __int64 v79; // [rsp+40h] [rbp-D8h]
  HDEV v80; // [rsp+48h] [rbp-D0h]
  struct PFT *v81; // [rsp+58h] [rbp-C0h]
  int v82; // [rsp+88h] [rbp-90h]
  char v83; // [rsp+98h] [rbp-80h]
  int v84; // [rsp+9Ch] [rbp-7Ch] BYREF
  unsigned int v85; // [rsp+A0h] [rbp-78h]
  __int64 v86; // [rsp+A8h] [rbp-70h] BYREF
  _QWORD v87[2]; // [rsp+B0h] [rbp-68h] BYREF
  __int16 v88; // [rsp+C0h] [rbp-58h]
  struct PFF **v89; // [rsp+C8h] [rbp-50h] BYREF
  HDEV v90; // [rsp+D0h] [rbp-48h] BYREF
  char v91[8]; // [rsp+D8h] [rbp-40h] BYREF
  char *v92; // [rsp+E0h] [rbp-38h] BYREF
  unsigned int v93[2]; // [rsp+E8h] [rbp-30h] BYREF
  char v94[8]; // [rsp+F0h] [rbp-28h]
  __int64 v95; // [rsp+F8h] [rbp-20h]
  char v96[8]; // [rsp+100h] [rbp-18h] BYREF
  unsigned __int64 v97; // [rsp+108h] [rbp-10h] BYREF
  HSEMAPHORE v98[9]; // [rsp+110h] [rbp-8h] BYREF
  unsigned int v101; // [rsp+178h] [rbp+60h]

  v101 = a3;
  v14 = 0;
  v15 = a4;
  v84 = 0;
  v16 = this;
  v89 = 0LL;
  v83 = 1;
  if ( a2 && a4 <= 3 )
  {
    v95 = *(_QWORD *)(W32GetSessionState(this, a2, a3) + 96) + 4872LL;
    SEMOBJ<17>::SEMOBJ<17>(v96, v95);
    v17 = a10;
    v18 = a9;
    v19 = a7;
    if ( !a11 )
    {
      *a7 = 0;
      v20 = PUBLIC_PFTOBJ::pPFFGet(v16, a2, v101, v15, Src, a6, &v89, a12 != 0LL);
      *a9 = v20;
      if ( v20 )
      {
        v55 = PFTOBJ::chpfeIncrPFF(v16, v20, &v84, a10, a12);
        *a7 = v55;
        if ( v55 )
        {
          if ( (a10 & 0x40) != 0 )
            *a7 = 0;
          v56 = *a9;
          if ( (a10 & 0x400) != 0 )
            *((_DWORD *)v56 + 13) |= 0x400u;
          if ( (a10 & 0x100) != 0 )
            *((_DWORD *)v56 + 13) |= 0x800u;
          goto LABEL_56;
        }
      }
      v21 = PUBLIC_PFTOBJ::pPFFGet(v16, a2, v101, v15, Src, a6, &v89, a12 == 0LL);
      *(_QWORD *)v91 = v21;
      if ( v21 )
      {
        if ( !a14 && !*((_QWORD *)v21 + 20) )
        {
          PFFMEMOBJ::PFFMEMOBJ((PFFMEMOBJ *)v87, v21, a8, a10, *(struct PFT **)v16);
          v63 = 0;
          v84 = 0;
          v85 = *(_DWORD *)(*(_QWORD *)v91 + 216LL);
          SEMOBJ<17>::vUnlock(v96);
          if ( !v87[0] )
          {
LABEL_104:
            PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v87);
            SEMOBJ<17>::vUnlock(v96);
            return v63;
          }
          if ( !PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v87, a2, v85, 0LL, a12) )
          {
            *a7 = 0;
            goto LABEL_104;
          }
          SEMOBJ<17>::SEMOBJ<17>(v91, v95);
          LODWORD(v86) = a12 != 0LL;
          v64 = PUBLIC_PFTOBJ::pPFFGet(v16, a2, v101, v15, Src, a6, &v89, v86);
          *a9 = v64;
          if ( v64 )
          {
            v74 = PFTOBJ::chpfeIncrPFF(v16, v64, &v84, a10, a12);
            v63 = v84;
            v65 = v74;
            if ( v74 )
            {
              *a7 = v74;
LABEL_103:
              SEMOBJ<17>::vUnlock(v91);
              goto LABEL_104;
            }
          }
          else
          {
            v65 = v85;
          }
          v66 = v87[0];
          v67 = v86;
          *a9 = (struct PFF *)v87[0];
          if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v87, v67) )
          {
            v68 = *(struct PFT **)v16;
            if ( (*(_DWORD *)(v66 + 52) & 0x200) == 0 )
              ++*((_DWORD *)v68 + 8);
            ++*((_DWORD *)v68 + 7);
            v69 = v89;
            if ( *v89 )
              *((_QWORD *)*v89 + 2) = *a9;
            v70 = *a9;
            *((_QWORD *)v70 + 1) = *v69;
            *((_QWORD *)v70 + 2) = 0LL;
            *v69 = v70;
            PFFOBJ::vSetUniqueness((PFFOBJ *)v87);
            v88 |= 2u;
            PopThreadGuardedObject(v66 + 168);
            *a7 = v65;
            v63 = 1;
          }
          else
          {
            *a7 = 0;
            PFFOBJ::vRemoveHash((PFFOBJ *)v87);
          }
          goto LABEL_103;
        }
      }
    }
    v97 = 0LL;
    SEMOBJ<17>::vUnlock(v96);
    if ( !(12 * (_DWORD)v15)
      || (v22 = (char *)Win32AllocPoolZInit((unsigned int)(12 * v15), 1886221383LL), (v92 = v22) == 0LL) )
    {
      EngSetLastError(8u);
      goto LABEL_57;
    }
    *(_QWORD *)v91 = &v22[8 * v15];
    if ( (_DWORD)v15 << 7 )
    {
      v23 = Win32AllocPoolZInit((unsigned int)((_DWORD)v15 << 7), 1986422343LL);
      v25 = (struct FONTFILEVIEW **)v23;
      if ( v23 )
      {
        v26 = a2;
        v90 = (HDEV)a2;
        *(_QWORD *)v93 = v23 + (unsigned int)(8 * v15);
        *(_QWORD *)v94 = v92;
        if ( (_DWORD)v15 )
        {
          v27 = *(_DWORD **)v91;
          v28 = *(_QWORD *)v93;
          v29 = &v92[-v23];
          *(_QWORD *)v94 = v92;
          v30 = v23;
          do
          {
            *(_QWORD *)v30 = v28;
            *(_QWORD *)(v28 + 80) = v26;
            v31 = TrustedFontFileTable::Contains(v26);
            v26 = (WCHAR *)v90;
            *(_BYTE *)(*(_QWORD *)v30 + 44LL) = v31;
            *(_QWORD *)&v29[v30] = 0LL;
            *v27 = 0;
            while ( *v26++ )
              ;
            v28 += 120LL;
            v90 = (HDEV)v26;
            v30 += 8LL;
            ++v27;
            --v15;
          }
          while ( v15 );
          v15 = a4;
          v17 = a10;
          v19 = a7;
          v18 = a9;
          v16 = this;
        }
        v90 = 0LL;
        LODWORD(v86) = 0;
        v85 = a13
           || PFTOBJ::bIsPrivatePFT(v16, (__int64)v26, v24)
           || (v17 & 0xFFFFFFFE) != 0
           || (_DWORD)a6
           || !v101
           || Src;
        UmfdHostLifeTimeManager::EnsureUmfdHost();
        SessionState = W32GetSessionState(v34, v33, v35);
        SEMOBJ<25>::SEMOBJ<25>(v98, *(_QWORD *)(SessionState + 96) + 4872LL);
        *(_QWORD *)v93 = 0LL;
        UmfdLoadFontFileView(a2, v101, v25, v15, v94[0], v91[0], Src, a6, (__int64 *)&v97, &v90, v93, v85, (int *)&v86);
        v38 = v98[0];
        if ( v98[0] )
          GreReleaseSemaphoreCommon<25,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
            (__int64)v98[0]);
        v39 = v97;
        if ( v97
          && (v40 = (*((__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))v90 + 386))(v97, 2LL, 0LL),
              v85 = v40,
              (v39 = v40) != 0)
          && v40 != -1 )
        {
          if ( a12 && !*((_QWORD *)a12 + 1) && v40 > 2 )
          {
            AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&v92);
LABEL_56:
            v14 = v84;
LABEL_57:
            SEMOBJ<17>::vUnlock(v96);
            return v14;
          }
          v82 = v86;
          v81 = *(struct PFT **)v16;
          v80 = v90;
          v79 = v97;
          LODWORD(Size) = a6;
          *v19 = v40;
          PFFMEMOBJ::PFFMEMOBJ(
            (PFFMEMOBJ *)v87,
            v40,
            a2,
            v101,
            v15,
            Src,
            Size,
            v79,
            v80,
            0LL,
            v81,
            a8,
            v17,
            (struct FNTCHECKSUM *)v93,
            v25,
            0LL,
            v82);
          if ( v87[0] )
          {
            v83 = 0;
            if ( PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v87, a2, v85, 0LL, a12) )
            {
              SEMOBJ<17>::SEMOBJ<17>(v98, v95);
              LODWORD(v86) = a12 != 0LL;
              v41 = PUBLIC_PFTOBJ::pPFFGet(v16, a2, v101, v15, Src, a6, &v89, v86);
              *v18 = v41;
              if ( v41 && (v75 = PFTOBJ::chpfeIncrPFF(v16, v41, &v84, v17, a12)) != 0 )
              {
                if ( (v17 & 0x40) != 0 )
                  v75 = 0;
                *v19 = v75;
                v76 = *v18;
                if ( (v17 & 0x400) != 0 )
                  *((_DWORD *)v76 + 13) |= 0x400u;
                if ( (v17 & 0x100) != 0 )
                  *((_DWORD *)v76 + 13) |= 0x800u;
              }
              else
              {
                v42 = v86;
                *v18 = (struct PFF *)v87[0];
                if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v87, v42) )
                {
                  v43 = v87[0];
                  v44 = *(struct PFT **)v16;
                  if ( (*(_DWORD *)(v87[0] + 52LL) & 0x200) == 0 )
                    ++*((_DWORD *)v44 + 8);
                  ++*((_DWORD *)v44 + 7);
                  v45 = v89;
                  if ( *v89 )
                    *((_QWORD *)*v89 + 2) = *v18;
                  v46 = *v18;
                  *((_QWORD *)v46 + 1) = *v45;
                  *((_QWORD *)v46 + 2) = 0LL;
                  *v45 = v46;
                  PFFOBJ::vSetUniqueness((PFFOBJ *)v87);
                  v88 |= 2u;
                  PopThreadGuardedObject(v43 + 168);
                  v47 = *(_WORD **)(v43 + 24);
                  if ( (_DWORD)v15 )
                  {
                    v48 = v25;
                    v49 = (unsigned int)v15;
                    do
                    {
                      *((_QWORD *)*v48 + 10) = v47;
                      while ( *v47++ )
                        ;
                      ++v48;
                      --v49;
                    }
                    while ( v49 );
                  }
                  if ( (v17 & 0x40) != 0 )
                    *((_DWORD *)*v18 + 13) |= 0x80u;
                  v51 = *v18;
                  if ( (v17 & 0x400) != 0 )
                    *((_DWORD *)v51 + 13) |= 0x400u;
                  if ( (v17 & 0x100) != 0 )
                    *((_DWORD *)v51 + 13) |= 0x800u;
                  if ( (_DWORD)v15 )
                  {
                    v52 = (unsigned int)v15;
                    do
                    {
                      EngUnmapFontFileFD((ULONG_PTR)*v25++);
                      --v52;
                    }
                    while ( v52 );
                  }
                  v25 = 0LL;
                  v84 = 1;
                }
                else
                {
                  *v19 = 0;
                  PFFOBJ::vRemoveHash((PFFOBJ *)v87);
                }
              }
              SEMOBJ<17>::vUnlock(v98);
            }
            else
            {
              *v19 = 0;
            }
            if ( (v88 & 2) == 0 )
            {
              if ( (_DWORD)v15 )
              {
                v77 = (unsigned int)v15;
                do
                {
                  EngUnmapFontFileFD((ULONG_PTR)*v25++);
                  --v77;
                }
                while ( v77 );
              }
              PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v87);
              goto LABEL_54;
            }
          }
          v53 = v83;
          PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v87);
          if ( !v25 )
          {
LABEL_53:
            if ( v53 )
            {
              v59 = W32GetSessionState(v39, v38, v37);
              v60 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(v59 + 96) + 24248LL);
              if ( *(_QWORD *)(v59 + 96) != -24248LL )
                GreAcquirePushLockExclusive(v60);
              if ( *(_QWORD *)(v95 + 19296) && (_DWORD)v15 )
              {
                v71 = (unsigned int)v15;
                v72 = v25;
                v73 = v95;
                do
                {
                  NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::Remove(*(struct W32_PUSH_LOCK **)(v73 + 19296));
                  ++v72;
                  --v71;
                }
                while ( v71 );
                v15 = a4;
              }
              if ( v60 )
                GreReleasePushLockExclusive(v60);
              if ( (_DWORD)v15 )
              {
                v61 = v25;
                do
                {
                  v62 = *v61;
                  if ( !*((_BYTE *)*v61 + 44) && !*((_QWORD *)v62 + 2) && !*((_QWORD *)v62 + 1) )
                    vUnreferenceFileviewSection(v62);
                  ++v61;
                  --v15;
                }
                while ( v15 );
              }
              Win32FreePool(v25);
            }
LABEL_54:
            if ( v92 )
              Win32FreePool(v92);
            goto LABEL_56;
          }
        }
        else
        {
          v53 = 1;
        }
        if ( (_DWORD)v15 )
        {
          v57 = (ULONG_PTR *)v25;
          v58 = (unsigned int)v15;
          do
          {
            EngUnmapFontFileFD(*v57++);
            --v58;
          }
          while ( v58 );
        }
        goto LABEL_53;
      }
      v22 = v92;
    }
    Win32FreePool(v22);
    goto LABEL_57;
  }
  return 0LL;
}
