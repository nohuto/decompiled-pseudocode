/*
 * XREFs of ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x140102C2C
 * Callers:
 *     bAddAllFlEntry @ 0x1400CAAB4 (bAddAllFlEntry.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1400CB52C (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x140102B20 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     bAddFlEntry @ 0x140103490 (bAddFlEntry.c)
 *     ?GrepAddFontResource@@YAHPEAGKKKKPEAUtagDESIGNVECTOR@@K@Z @ 0x1401041B8 (-GrepAddFontResource@@YAHPEAGKKKKPEAUtagDESIGNVECTOR@@K@Z.c)
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1401EEDEC (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x14026C658 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1400C2BE0 (EngUnmapFontFileFD.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400C6908 (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x1400CAA20 (-vSetUniqueness@PFFOBJ@@QEAAXXZ.c)
 *     ?Remove@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1400D2C78 (-Remove@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z @ 0x1400D3DA0 (-vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1401020EC (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x140104D2C (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x140104F04 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KAEAIH@Z @ 0x140106418 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KAEAIH@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCHECKSUM@@PEAPEAUFONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x14013F72C (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCH.c)
 *     ?chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z @ 0x140173C4C (-chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z.c)
 *     ?bIsPrivatePFT@PFTOBJ@@QEBAHXZ @ 0x140173DA8 (-bIsPrivatePFT@PFTOBJ@@QEBAHXZ.c)
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x140186E18 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x140187408 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401AB8AC (-vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z.c)
 *     ?Contains@TrustedFontFileTable@@SA_NPEBG@Z @ 0x1401F44A0 (-Contains@TrustedFontFileTable@@SA_NPEBG@Z.c)
 *     ??0AutoExclusiveUmfdLookupLock@@QEAA@XZ @ 0x1401FF22C (--0AutoExclusiveUmfdLookupLock@@QEAA@XZ.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x140213954 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x140214E4C (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x14021A5BC (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ?InsertBucketHead@PFT@@QEAAXKPEAVPFF@@@Z @ 0x140326D30 (-InsertBucketHead@PFT@@QEAAXKPEAVPFF@@@Z.c)
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAUFONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAUHDEV__@@PEAUFNTCHECKSUM@@HPEAH@Z @ 0x140327830 (-vLoadFontFileView@@YAXPEAGKPEAPEAUFONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAUH.c)
 *     ??0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z @ 0x14032968C (--0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::bLoadFonts(
        PUBLIC_PFTOBJ *this,
        unsigned __int16 *a2,
        __int64 a3,
        unsigned int a4,
        struct tagDESIGNVECTOR *a5,
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
  __int64 v15; // rsi
  PUBLIC_PFTOBJ *v17; // r13
  unsigned int v18; // r15d
  unsigned int *v19; // r12
  struct _EUDCLOAD *v20; // r14
  unsigned int v21; // r8d
  bool v22; // zf
  struct PFF *v23; // rax
  struct PFF **v24; // rbx
  unsigned int v25; // eax
  struct PFF *v26; // rax
  struct PFF *v27; // rax
  struct PFF *v28; // r14
  unsigned int v29; // r14d
  unsigned int v30; // ebx
  struct PFF *v31; // rax
  struct PFF **v32; // rsi
  unsigned int v33; // eax
  __int64 v34; // r15
  int v35; // edx
  struct PFT *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r8
  void **v40; // rbx
  struct FONTFILEVIEW **v41; // r14
  WCHAR *v42; // rcx
  struct FONTFILEVIEW **v43; // r15
  __int64 v44; // r12
  void **v45; // rax
  unsigned int *v46; // rbx
  signed __int64 v47; // r13
  int IsPrivatePFT; // eax
  unsigned int v50; // ecx
  struct tagDESIGNVECTOR *v51; // r8
  unsigned int v52; // edx
  int v53; // eax
  unsigned int FontFile; // eax
  unsigned int v55; // ebx
  unsigned int v56; // r9d
  const unsigned __int16 *v57; // r8
  unsigned int v58; // r8d
  const unsigned __int16 *v59; // rbx
  struct PFF *v60; // rax
  struct PFF **v61; // rbx
  unsigned int v62; // eax
  struct PFF *v63; // rax
  int v64; // edx
  struct PFT *v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // r8
  _WORD *v68; // rcx
  struct FONTFILEVIEW **v69; // rdx
  __int64 v70; // r8
  struct PFF *v72; // rax
  __int64 v73; // rbx
  __int64 v74; // rbx
  char v75; // r12
  ULONG_PTR *v76; // rbx
  __int64 v77; // r15
  __int64 v78; // r15
  struct FONTFILEVIEW **v79; // rbx
  __int64 v80; // rsi
  struct NETWORKED_FONT_FILE_NODE *v81; // rdx
  struct FONTFILEVIEW **v82; // rbx
  struct FONTFILEVIEW *v83; // rcx
  struct tagDESIGNVECTOR *Src; // [rsp+30h] [rbp-E8h]
  size_t Size; // [rsp+38h] [rbp-E0h]
  unsigned __int64 v86; // [rsp+40h] [rbp-D8h]
  HDEV v87; // [rsp+48h] [rbp-D0h]
  struct PFT *v88; // [rsp+58h] [rbp-C0h]
  unsigned int v89; // [rsp+60h] [rbp-B8h]
  int v90; // [rsp+88h] [rbp-90h]
  char v91; // [rsp+98h] [rbp-80h]
  int v92; // [rsp+9Ch] [rbp-7Ch] BYREF
  unsigned int v93; // [rsp+A0h] [rbp-78h] BYREF
  int v94[2]; // [rsp+A8h] [rbp-70h] BYREF
  _QWORD v95[2]; // [rsp+B0h] [rbp-68h] BYREF
  char v96; // [rsp+C0h] [rbp-58h]
  HDEV v97; // [rsp+C8h] [rbp-50h] BYREF
  void **v98; // [rsp+D0h] [rbp-48h] BYREF
  HDEV v99; // [rsp+D8h] [rbp-40h] BYREF
  __int64 v100; // [rsp+E0h] [rbp-38h]
  HSEMAPHORE v101; // [rsp+E8h] [rbp-30h] BYREF
  HSEMAPHORE v102; // [rsp+F0h] [rbp-28h] BYREF
  unsigned __int64 v103; // [rsp+F8h] [rbp-20h] BYREF
  unsigned int *v104; // [rsp+100h] [rbp-18h]
  unsigned int *v105; // [rsp+108h] [rbp-10h]
  PCWSTR SourceString; // [rsp+170h] [rbp+58h] BYREF
  unsigned int v108; // [rsp+178h] [rbp+60h]
  unsigned int v109; // [rsp+180h] [rbp+68h]

  v109 = a4;
  v108 = a3;
  SourceString = a2;
  v14 = 0;
  v15 = a4;
  v92 = 0;
  v93 = 0;
  v17 = this;
  v102 = 0LL;
  v91 = 1;
  if ( !a2 || a4 > 3 )
    return 0LL;
  v100 = *(_QWORD *)(W32GetSessionState(this, a2, a3) + 96) + 4864LL;
  SEMOBJ<17>::SEMOBJ<17>(&v101, v100);
  v18 = a10;
  v19 = a7;
  if ( a11 )
    goto LABEL_28;
  v20 = a12;
  v21 = v108;
  v22 = a12 == 0LL;
  *a7 = 0;
  v94[0] = !v22;
  v23 = PUBLIC_PFTOBJ::pPFFGet(v17, a2, v21, v15, a5, a6, &v93, v94[0]);
  v24 = a9;
  *a9 = v23;
  if ( v23 )
  {
    v25 = PFTOBJ::chpfeIncrPFF(v17, v23, &v92, v18, v20);
    *v19 = v25;
    if ( v25 )
    {
      if ( (v18 & 0x40) != 0 )
        *v19 = 0;
      v26 = *v24;
      if ( (v18 & 0x400) != 0 )
        *((_DWORD *)v26 + 13) |= 0x400u;
      if ( (v18 & 0x100) != 0 )
        *((_DWORD *)v26 + 13) |= 0x800u;
      goto LABEL_88;
    }
  }
  v27 = PUBLIC_PFTOBJ::pPFFGet(v17, SourceString, v108, v15, a5, a6, &v93, v20 == 0LL);
  v28 = v27;
  if ( !v27 || a14 || *((_QWORD *)v27 + 20) )
  {
LABEL_28:
    v103 = 0LL;
    SEMOBJ<17>::vUnlock(&v101);
    MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v98, 12 * v15);
    v40 = v98;
    if ( !v98
      || (v104 = (unsigned int *)&v98[v15],
          (v41 = (struct FONTFILEVIEW **)PALLOCMEM((unsigned int)((_DWORD)v15 << 7), 1986422343LL)) == 0LL) )
    {
      AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&v98);
      goto LABEL_110;
    }
    v42 = (WCHAR *)SourceString;
    v97 = (HDEV)SourceString;
    *(_QWORD *)v94 = (char *)v41 + (unsigned int)(8 * v15);
    if ( (_DWORD)v15 )
    {
      v43 = v41;
      v44 = *(_QWORD *)v94;
      v105 = v104;
      v45 = v40;
      v46 = v104;
      v47 = (char *)v45 - (char *)v41;
      do
      {
        *v43 = (struct FONTFILEVIEW *)v44;
        *(_QWORD *)(v44 + 80) = v42;
        *((_BYTE *)*v43 + 44) = TrustedFontFileTable::Contains(v42);
        v42 = (WCHAR *)v97;
        *(struct FONTFILEVIEW **)((char *)v43 + v47) = 0LL;
        *v46 = 0;
        while ( *v42++ )
          ;
        v44 += 120LL;
        v97 = (HDEV)v42;
        ++v43;
        ++v46;
        --v15;
      }
      while ( v15 );
      v40 = v98;
      v15 = v109;
      v18 = a10;
      v19 = a7;
      v17 = this;
    }
    v97 = 0LL;
    v94[0] = 0;
    if ( a13 )
    {
      v50 = v108;
      v52 = a6;
      v51 = a5;
    }
    else
    {
      IsPrivatePFT = PFTOBJ::bIsPrivatePFT(v17);
      v50 = v108;
      v51 = a5;
      v52 = a6;
      if ( !IsPrivatePFT && (v18 & 0xFFFFFFFE) == 0 && v108 && !a5 && !(_DWORD)a6 )
      {
        v53 = 0;
LABEL_45:
        vLoadFontFileView(
          (unsigned __int16 *)SourceString,
          v50,
          v41,
          v15,
          v40,
          v104,
          v51,
          v52,
          &v103,
          &v97,
          (struct FNTCHECKSUM *)&v102,
          v53,
          v94);
        v99 = v97;
        if ( v103
          && (FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v99, v103, 2u, 0, 0LL), (v55 = FontFile) != 0)
          && FontFile != -1 )
        {
          if ( a12 && !*((_QWORD *)a12 + 1) && FontFile > 2 )
          {
LABEL_87:
            AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&v98);
LABEL_88:
            v14 = v92;
LABEL_110:
            SEMOBJ<17>::vUnlock(&v101);
            return v14;
          }
          v56 = v108;
          v57 = SourceString;
          v90 = v94[0];
          v89 = a8;
          v88 = *(struct PFT **)v17;
          v87 = v97;
          v86 = v103;
          LODWORD(Size) = a6;
          Src = a5;
          *v19 = FontFile;
          PFFMEMOBJ::PFFMEMOBJ(
            (PFFMEMOBJ *)v95,
            FontFile,
            v57,
            v56,
            v15,
            Src,
            Size,
            v86,
            v87,
            0LL,
            v88,
            v89,
            v18,
            (struct FNTCHECKSUM *)&v102,
            v41,
            0LL,
            v90);
          if ( v95[0] )
          {
            v58 = v55;
            v91 = 0;
            v59 = SourceString;
            if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v95, SourceString, v58, 0LL, a12) )
            {
              SEMOBJ<17>::SEMOBJ<17>((HSEMAPHORE *)&v99, v100);
              LODWORD(SourceString) = a12 != 0LL;
              v60 = PUBLIC_PFTOBJ::pPFFGet(v17, v59, v108, v15, a5, a6, &v93, (int)SourceString);
              v61 = a9;
              *a9 = v60;
              if ( v60 && (v62 = PFTOBJ::chpfeIncrPFF(v17, v60, &v92, v18, a12)) != 0 )
              {
                if ( (v18 & 0x40) != 0 )
                  v62 = 0;
                *v19 = v62;
                v63 = *v61;
                if ( (v18 & 0x400) != 0 )
                  *((_DWORD *)v63 + 13) |= 0x400u;
                if ( (v18 & 0x100) != 0 )
                  *((_DWORD *)v63 + 13) |= 0x800u;
              }
              else
              {
                v64 = (int)SourceString;
                *v61 = (struct PFF *)v95[0];
                if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v95, v64) )
                {
                  v65 = *(struct PFT **)v17;
                  if ( (*(_DWORD *)(v95[0] + 52LL) & 0x200) == 0 )
                    ++*((_DWORD *)v65 + 8);
                  ++*((_DWORD *)v65 + 7);
                  PFT::InsertBucketHead(*(PFT **)v17, v93, *v61);
                  PFFOBJ::vSetUniqueness((PFFOBJ *)v95, v66, v67);
                  PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v95);
                  v68 = *(_WORD **)(v95[0] + 24LL);
                  if ( (_DWORD)v15 )
                  {
                    v69 = v41;
                    v70 = (unsigned int)v15;
                    do
                    {
                      *((_QWORD *)*v69 + 10) = v68;
                      while ( *v68++ )
                        ;
                      ++v69;
                      --v70;
                    }
                    while ( v70 );
                  }
                  if ( (v18 & 0x40) != 0 )
                    *((_DWORD *)*v61 + 13) |= 0x80u;
                  v72 = *v61;
                  if ( (v18 & 0x400) != 0 )
                    *((_DWORD *)v72 + 13) |= 0x400u;
                  if ( (v18 & 0x100) != 0 )
                    *((_DWORD *)v72 + 13) |= 0x800u;
                  if ( (_DWORD)v15 )
                  {
                    v73 = (unsigned int)v15;
                    do
                    {
                      EngUnmapFontFileFD((ULONG_PTR)*v41++);
                      --v73;
                    }
                    while ( v73 );
                  }
                  v41 = 0LL;
                  v92 = 1;
                }
                else
                {
                  *v19 = 0;
                  PFFOBJ::vRemoveHash((PFFOBJ *)v95);
                }
              }
              SEMOBJ<17>::vUnlock((HSEMAPHORE *)&v99);
            }
            else
            {
              *v19 = 0;
            }
            if ( (v96 & 2) == 0 )
            {
              if ( (_DWORD)v15 )
              {
                v74 = (unsigned int)v15;
                do
                {
                  EngUnmapFontFileFD((ULONG_PTR)*v41++);
                  --v74;
                }
                while ( v74 );
              }
              PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v95);
              goto LABEL_87;
            }
          }
          v75 = v91;
          PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v95);
          if ( !v41 )
          {
LABEL_95:
            if ( v75 )
            {
              AutoExclusiveUmfdLookupLock::AutoExclusiveUmfdLookupLock((AutoExclusiveUmfdLookupLock *)&a12);
              if ( *(_QWORD *)(v100 + 19288) && (_DWORD)v15 )
              {
                v78 = (unsigned int)v15;
                v79 = v41;
                v80 = v100;
                do
                {
                  LODWORD(SourceString) = *((_DWORD *)*v79 + 16);
                  NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::Remove(
                    *(NSInstrumentation::CPlatformReaderWriterLock **)(v80 + 19288),
                    (unsigned int *)&SourceString);
                  ++v79;
                  --v78;
                }
                while ( v78 );
                v15 = v109;
              }
              Gre::PUSHLOCKEX::vUnlock((Gre::PUSHLOCKEX *)&a12, 0);
              if ( (_DWORD)v15 )
              {
                v82 = v41;
                do
                {
                  v83 = *v82;
                  if ( !*((_BYTE *)*v82 + 44) && !*((_QWORD *)v83 + 2) && !*((_QWORD *)v83 + 1) )
                    vUnreferenceFileviewSection(v83, v81);
                  ++v82;
                  --v15;
                }
                while ( v15 );
              }
              Win32FreePool(v41);
            }
            goto LABEL_87;
          }
        }
        else
        {
          v75 = 1;
        }
        if ( (_DWORD)v15 )
        {
          v76 = (ULONG_PTR *)v41;
          v77 = (unsigned int)v15;
          do
          {
            EngUnmapFontFileFD(*v76++);
            --v77;
          }
          while ( v77 );
        }
        goto LABEL_95;
      }
    }
    v53 = 1;
    goto LABEL_45;
  }
  PFFMEMOBJ::PFFMEMOBJ((PFFMEMOBJ *)v95, v27, a8, v18, *(struct PFT **)v17);
  v29 = *((_DWORD *)v28 + 54);
  v30 = 0;
  v92 = 0;
  SEMOBJ<17>::vUnlock(&v101);
  if ( v95[0] )
  {
    if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v95, SourceString, v29, 0LL, a12) )
    {
      SEMOBJ<17>::SEMOBJ<17>(&v102, v100);
      v93 = 0;
      v31 = PUBLIC_PFTOBJ::pPFFGet(v17, SourceString, v108, v15, a5, a6, &v93, v94[0]);
      v32 = a9;
      *a9 = v31;
      if ( v31 && (v33 = PFTOBJ::chpfeIncrPFF(v17, v31, &v92, v18, a12), v30 = v92, (v29 = v33) != 0) )
      {
        *v19 = v33;
      }
      else
      {
        v34 = v95[0];
        v35 = v94[0];
        *v32 = (struct PFF *)v95[0];
        if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v95, v35) )
        {
          v36 = *(struct PFT **)v17;
          if ( (*(_DWORD *)(v34 + 52) & 0x200) == 0 )
            ++*((_DWORD *)v36 + 8);
          ++*((_DWORD *)v36 + 7);
          PFT::InsertBucketHead(*(PFT **)v17, v93, *v32);
          PFFOBJ::vSetUniqueness((PFFOBJ *)v95, v37, v38);
          PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v95);
          *v19 = v29;
          v30 = 1;
        }
        else
        {
          *v19 = 0;
          PFFOBJ::vRemoveHash((PFFOBJ *)v95);
        }
      }
      SEMOBJ<17>::vUnlock(&v102);
    }
    else
    {
      *v19 = 0;
    }
  }
  PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v95);
  SEMOBJ<17>::vUnlock(&v101);
  return v30;
}
