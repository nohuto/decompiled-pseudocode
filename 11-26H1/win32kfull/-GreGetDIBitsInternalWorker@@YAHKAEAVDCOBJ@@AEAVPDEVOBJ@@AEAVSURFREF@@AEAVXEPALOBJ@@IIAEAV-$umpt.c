/*
 * XREFs of ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1402819CC
 * Callers:
 *     ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1400B4DDC (-GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z.c)
 * Callees:
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14006FAEC (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x140071BDC (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400765D0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 *     ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x14015744C (-vInit256Rainbow@XEPALOBJ@@QEAAXXZ.c)
 *     ?vInit256Default@XEPALOBJ@@QEAAXXZ @ 0x14015755C (-vInit256Default@XEPALOBJ@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x140182D04 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1401B96AC (-vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ?bIdenticalFormat@@YAHVXEPALOBJ@@H@Z @ 0x1401BE930 (-bIdenticalFormat@@YAHVXEPALOBJ@@H@Z.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1401D01A4 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ?EncodeRLE8@@YAHPEAE0III@Z @ 0x1401EEA6C (-EncodeRLE8@@YAHPEAE0III@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x140223E70 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?EncodeRLE4@@YAHPEAE0III@Z @ 0x14026E538 (-EncodeRLE4@@YAHPEAE0III@Z.c)
 *     ?vFill_triples@XEPALOBJ@@QEAAXPEAUtagRGBTRIPLE@@KK@Z @ 0x140295140 (-vFill_triples@XEPALOBJ@@QEAAXPEAUtagRGBTRIPLE@@KK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 *     RtlSetUserMemory @ 0x1403E227C (RtlSetUserMemory.c)
 */

__int64 __fastcall GreGetDIBitsInternalWorker(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        unsigned int a6,
        unsigned int a7,
        __int64 *a8,
        __int64 a9,
        int a10,
        unsigned int a11,
        unsigned int a12)
{
  __int64 v12; // rdi
  __int64 v13; // r12
  unsigned int v14; // ebx
  __int64 v15; // rsi
  unsigned int v16; // r15d
  unsigned int v17; // r11d
  int v18; // ecx
  unsigned int v19; // r9d
  unsigned int v20; // edi
  int v21; // r13d
  int v22; // edx
  unsigned int v23; // r8d
  unsigned int v24; // edi
  bool v25; // zf
  int v26; // r11d
  unsigned int v27; // eax
  int v28; // ecx
  unsigned int v29; // edi
  int v30; // ebx
  int IsCMYKColor; // eax
  int v32; // r10d
  __int64 v33; // rbx
  XLATEOBJ *v34; // r10
  XLATEOBJ *v35; // rdi
  __int64 i; // rcx
  unsigned int v37; // edi
  __int64 *v38; // r12
  unsigned __int16 v39; // dx
  unsigned __int16 v40; // r8
  unsigned int v41; // eax
  XLATEOBJ *v42; // r9
  XLATEOBJ *v43; // rcx
  __int64 v44; // r8
  int v45; // edx
  int v46; // ecx
  unsigned int v47; // edx
  unsigned int v48; // eax
  XLATEOBJ *v49; // r9
  XLATEOBJ *v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // r12
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rcx
  unsigned int v57; // edi
  unsigned int v58; // ebx
  __int64 v59; // rdi
  int v60; // eax
  unsigned int v61; // edi
  __int64 v62; // rdx
  __int64 v63; // r8
  unsigned int v65; // [rsp+64h] [rbp-144h]
  XLATEOBJ *pxlo; // [rsp+70h] [rbp-138h] BYREF
  unsigned int v67; // [rsp+78h] [rbp-130h]
  unsigned int v68; // [rsp+80h] [rbp-128h]
  __int64 v69; // [rsp+88h] [rbp-120h] BYREF
  unsigned int v70; // [rsp+90h] [rbp-118h]
  unsigned int v71; // [rsp+94h] [rbp-114h]
  HSEMAPHORE v72; // [rsp+98h] [rbp-110h] BYREF
  unsigned int v73; // [rsp+A0h] [rbp-108h]
  int v74; // [rsp+A8h] [rbp-100h]
  __int64 *v75; // [rsp+B0h] [rbp-F8h]
  __int64 v76; // [rsp+B8h] [rbp-F0h] BYREF
  char v77; // [rsp+C0h] [rbp-E8h]
  int v78; // [rsp+C4h] [rbp-E4h]
  __int64 v79; // [rsp+C8h] [rbp-E0h] BYREF
  int v80; // [rsp+D0h] [rbp-D8h]
  int v81; // [rsp+D8h] [rbp-D0h] BYREF
  LONG v82; // [rsp+DCh] [rbp-CCh]
  LONG v83; // [rsp+E0h] [rbp-C8h]
  int v84; // [rsp+E4h] [rbp-C4h]
  __int64 v85; // [rsp+E8h] [rbp-C0h]
  __int64 v86; // [rsp+F0h] [rbp-B8h]
  __int64 v87; // [rsp+F8h] [rbp-B0h]
  __int64 v88; // [rsp+100h] [rbp-A8h]
  __int64 *v89; // [rsp+108h] [rbp-A0h]
  __int64 v90; // [rsp+110h] [rbp-98h] BYREF
  int v91; // [rsp+118h] [rbp-90h]
  int v92; // [rsp+11Ch] [rbp-8Ch]
  __int64 v93; // [rsp+120h] [rbp-88h] BYREF
  __int64 v94; // [rsp+128h] [rbp-80h]
  __int64 v95; // [rsp+130h] [rbp-78h]
  POINTL pptlSrc; // [rsp+138h] [rbp-70h] BYREF
  __int64 v97; // [rsp+140h] [rbp-68h]
  __int64 v98; // [rsp+148h] [rbp-60h]
  RECTL prclDest; // [rsp+150h] [rbp-58h] BYREF

  v88 = a4;
  v94 = a3;
  v87 = a2;
  v12 = a1;
  LODWORD(v69) = a1;
  v89 = a8;
  v75 = a5;
  v13 = a9;
  v95 = a9;
  v97 = a9;
  v98 = a4;
  v70 = a6;
  v14 = a7;
  v90 = (__int64)a8;
  v93 = 0LL;
  if ( !(unsigned int)bIsCompatible(
                        &v93,
                        *(_QWORD *)(*(_QWORD *)(a4 + 32) + 128LL),
                        *(_QWORD *)(a4 + 32),
                        *(_QWORD *)(*(_QWORD *)a2 + 48LL)) )
    return 0LL;
  v15 = v93;
  v81 = 0;
  v84 = 0;
  v86 = 0LL;
  if ( (_DWORD)v12 == 12 )
  {
    v16 = 1;
    LODWORD(v72) = 1;
    pxlo = (XLATEOBJ *)(a9 + 12);
    v17 = *(unsigned __int16 *)(a9 + 4);
    v68 = v17;
    v73 = v17;
    v18 = *(unsigned __int16 *)(a9 + 6);
    v65 = v18;
    *(_WORD *)(a9 + 8) = 1;
    v19 = *(unsigned __int16 *)(a9 + 10);
    v71 = v19;
    v20 = ((v17 * v19 + 31) >> 3) & 0x1FFFFFFC;
    v21 = 0;
    if ( v17 && v18 )
    {
      v22 = 2;
      v23 = 3;
      goto LABEL_25;
    }
LABEL_153:
    EngSetLastError(0x57u);
    return 0LL;
  }
  if ( a12 < 0x28 )
    return 0LL;
  if ( (unsigned int)v12 > 0x28 )
    memset_0((void *)(a9 + 40), 0, v12 - 40);
  LODWORD(v72) = 0;
  pxlo = (XLATEOBJ *)(a9 + 40);
  *(_DWORD *)a9 = 40;
  v16 = 1;
  *(_WORD *)(a9 + 12) = 1;
  v19 = *(unsigned __int16 *)(a9 + 14);
  v71 = v19;
  v21 = *(_DWORD *)(a9 + 16);
  v68 = *(_DWORD *)(a9 + 4);
  v24 = v68;
  v73 = v68;
  if ( (int)v68 <= 0 )
    goto LABEL_153;
  v18 = *(_DWORD *)(a9 + 8);
  if ( !v18 )
    goto LABEL_153;
  v23 = 3;
  if ( v18 < 0 )
  {
    LODWORD(v86) = 1;
    if ( v21 && v21 != 3 )
      goto LABEL_153;
    v18 = -v18;
  }
  v65 = v18;
  if ( v21 == 3 )
  {
    v25 = ((v19 - 16) & 0xFFFFFFEF) == 0;
    goto LABEL_19;
  }
  if ( v21 == 1 )
  {
    v25 = v19 == 8;
LABEL_19:
    v22 = 2;
    if ( v25 )
      goto LABEL_21;
    goto LABEL_20;
  }
  v22 = 2;
  if ( v21 != 2 )
  {
    if ( v21 == 10 )
    {
      IsCMYKColor = DC::bIsCMYKColor(*(DC **)v87);
      v18 = v65;
      v22 = v32 - 8;
      v23 = v32 - 7;
      if ( IsCMYKColor )
      {
        *(_DWORD *)(a9 + 16) = v32;
        v21 = v32;
      }
      goto LABEL_21;
    }
    goto LABEL_20;
  }
  if ( v19 != 4 )
  {
LABEL_20:
    v21 = 0;
    *(_DWORD *)(a9 + 16) = 0;
  }
LABEL_21:
  v20 = ((v19 * v24 + 31) >> 3) & 0x1FFFFFFC;
  if ( !v21 || v21 == v23 )
    *(_DWORD *)(a9 + 20) = v18 * v20;
  *(_QWORD *)(a9 + 32) = 0LL;
LABEL_25:
  v26 = v70;
  if ( v18 < v70 )
    v26 = v18;
  v70 = v26;
  v74 = v26;
  if ( v18 - v26 < a7 )
    v14 = v18 - v26;
  v67 = v14;
  if ( (unsigned int)(v21 - 1) > 1 && a11 < v20 * v14 )
    return 0LL;
  v85 = 0LL;
  if ( v21 == v23 && a12 < 0x34 )
    return 0LL;
  if ( v19 == 1 )
  {
    v30 = 1;
    v29 = v22;
    goto LABEL_53;
  }
  v27 = v19 - 1 - v23;
  if ( !v27 )
  {
    v30 = v22;
    v81 = v22;
    v29 = 16;
    v28 = a10;
    goto LABEL_55;
  }
  if ( v27 == 4 )
  {
    v30 = v23;
    v29 = 256;
LABEL_53:
    v28 = a10;
    goto LABEL_54;
  }
  v28 = 0;
  if ( a10 != 1 )
    v28 = a10;
  v29 = 0;
  switch ( v19 )
  {
    case 0x10u:
      v30 = 4;
      goto LABEL_54;
    case 0x18u:
      v30 = 5;
      goto LABEL_54;
    case 0x20u:
      v30 = 6;
LABEL_54:
      v81 = v30;
LABEL_55:
      v80 = 0;
      v79 = 0LL;
      if ( v28 == 1 )
      {
        if ( a12 < (unsigned int)v69 + 2 * (unsigned __int64)v29 )
        {
          EngSetLastError(0x57u);
LABEL_58:
          PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v79);
          return 0LL;
        }
        SEMOBJ<13>::SEMOBJ<13>(&v72, *(_QWORD **)(v87 + 16));
        if ( !v15 && v81 == 3 && *(_QWORD *)(*v75 + 72) )
        {
          v33 = 0LL;
          v34 = pxlo;
          v35 = pxlo;
          for ( i = 256LL; i; --i )
          {
            LOWORD(v35->iUniq) = 0;
            v35 = (XLATEOBJ *)((char *)v35 + 2);
          }
          v37 = 0;
          v38 = v75;
          do
          {
            v39 = 0;
            v40 = *(_WORD *)(*v38 + 28);
            if ( v40 )
            {
              while ( *(unsigned __int8 *)(v39 + *(_QWORD *)(*v38 + 72) + 4LL) != v37 )
              {
                if ( ++v39 >= v40 )
                  goto LABEL_71;
              }
              *((_WORD *)&v34->iUniq + v37) = v39;
            }
LABEL_71:
            ++v37;
          }
          while ( v37 < 0x100 );
          v13 = v95;
        }
        else
        {
          if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v79, 1u, v29, 0LL, 0, 0, 0, 0x200u, 1) )
          {
            SEMOBJ<13>::vUnlock(&v72);
            goto LABEL_58;
          }
          v33 = v79;
          v69 = v79;
          v41 = 0;
          v42 = pxlo;
          if ( v29 )
          {
            v43 = pxlo;
            do
            {
              LOWORD(v43->iUniq) = v41++;
              v43 = (XLATEOBJ *)((char *)v43 + 2);
            }
            while ( v41 < v29 );
          }
          v44 = *(_QWORD *)(*(_QWORD *)v94 + 1792LL);
          if ( v15 )
            v44 = v15;
          XEPALOBJ::vGetEntriesFrom((__int64)&v69, *v75, v44, (__int64)v42, v29);
        }
        SEMOBJ<13>::vUnlock(&v72);
      }
      else
      {
        v45 = *(_DWORD *)(*(_QWORD *)(v88 + 32) + 96LL);
        if ( v28 )
        {
          if ( v30 != v45 )
            goto LABEL_58;
          v33 = v15;
        }
        else
        {
          v46 = 0;
          if ( v45 == v30 && v15 )
          {
            v46 = 1;
            if ( v21 == v23 || ((v30 - 4) & 0xFFFFFFFD) != 0 )
            {
              if ( v30 == 5 && (*(_BYTE *)(v15 + 24) & 4) != 0 )
                v46 = 0;
            }
            else
            {
              v46 = bIdenticalFormat(v15, v30);
            }
          }
          if ( v46 )
          {
            v33 = v15;
            v69 = v15;
          }
          else
          {
            if ( v29 )
            {
              v47 = 1;
            }
            else
            {
              v47 = 8;
              if ( v30 == 4 )
                v47 = 2;
            }
            if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v79, v47, v29, 0LL, 0x7C00u, 0x3E0u, 0x1Fu, 0x200u, 1) )
              goto LABEL_58;
            v33 = v79;
            v69 = v79;
            if ( *(_DWORD *)(*(_QWORD *)(v88 + 32) + 96LL) == v81 && v81 == 3 )
            {
              v48 = 0;
              v49 = pxlo;
              if ( v29 )
              {
                v50 = pxlo;
                do
                {
                  LOWORD(v50->iUniq) = v48++;
                  v50 = (XLATEOBJ *)((char *)v50 + 2);
                }
                while ( v48 < v29 );
              }
              XEPALOBJ::vGetEntriesFrom((__int64)&v69, *v75, *(_QWORD *)(*(_QWORD *)v94 + 1792LL), (__int64)v49, v29);
              XEPALOBJ::vInit256Default((XEPALOBJ *)&v69);
            }
            else
            {
              switch ( v81 )
              {
                case 1:
                  **(_DWORD **)(v79 + 112) = 0;
                  *(_DWORD *)(*(_QWORD *)(v33 + 112) + 4LL) = 0xFFFFFF;
                  break;
                case 2:
                  v51 = 0LL;
                  v52 = 16LL;
                  do
                  {
                    *(_DWORD *)(v51 + *(_QWORD *)(v33 + 112)) = *(_DWORD *)((char *)&unk_140366180 + v51);
                    v51 += 4LL;
                    --v52;
                  }
                  while ( v52 );
                  v13 = v95;
                  break;
                case 3:
                  XEPALOBJ::vInit256Rainbow((XEPALOBJ *)&v69);
                  break;
              }
            }
          }
          if ( (_DWORD)v72 )
          {
            if ( a12 < (unsigned __int64)(3 * v29) + 12 )
              goto LABEL_58;
            if ( ((v71 - 16) & 0xFFFFFFE7) != 0 || v71 == 40 )
              XEPALOBJ::vFill_triples((XEPALOBJ *)&v69, (struct tagRGBTRIPLE *)pxlo, v23, v29);
          }
          else
          {
            if ( v21 == 3 )
              v29 = 3;
            if ( a12 < (unsigned __int64)(4 * v29) + 40 )
              goto LABEL_58;
            if ( (*(_DWORD *)(v33 + 24) & 0x4000) != 0 )
            {
              memmove(pxlo, *(const void **)(v33 + 112), 2LL * v29);
            }
            else if ( v21 == 3 || v71 <= 8 && (v53 = 274, _bittest(&v53, v71)) )
            {
              XEPALOBJ::vFill_rgbquads((XEPALOBJ *)&v69, (struct tagRGBQUAD *)pxlo, 0, v29);
            }
          }
        }
      }
      pxlo = 0LL;
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            (Gre::Base *)&pxlo,
                            *(void **)(*(_QWORD *)(*(_QWORD *)v87 + 976LL) + 248LL),
                            *(_DWORD *)(*(_QWORD *)v87 + 120LL),
                            v15,
                            v33,
                            *v75,
                            (Gre::Base *)*v75,
                            0,
                            0xFFFFFF,
                            0,
                            0) )
        goto LABEL_151;
      v55 = (__int64)v89;
      v56 = *v89;
      if ( !*v89 && (unsigned int)(v21 - 1) > 1 )
        goto LABEL_152;
      v82 = v68;
      v57 = v67;
      v83 = v67;
      v76 = 0LL;
      v77 = 0;
      v78 = 0;
      if ( (unsigned int)(v21 - 1) > 1 )
      {
        SURFMEM::bCreateDIB(
          (SURFMEM *)&v76,
          (struct _DEVBITMAPINFO *)&v81,
          (void *)(v56 + v89[2]),
          0LL,
          0,
          0LL,
          0LL,
          0,
          1,
          0);
        v58 = v65;
      }
      else
      {
        v58 = v65;
        if ( !v67 )
        {
          v70 = 0;
          v74 = 0;
          v57 = v65;
          v67 = v65;
          v83 = v65;
        }
        SURFMEM::bCreateDIB((SURFMEM *)&v76, (struct _DEVBITMAPINFO *)&v81, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0);
      }
      if ( !v76 )
        goto LABEL_150;
      *(_QWORD *)(v76 + 48) = *(_QWORD *)(*(_QWORD *)v87 + 48LL);
      if ( *(_QWORD *)(v76 + 224) || (*(_BYTE *)(v76 + 102) & 8) != 0 )
        RtlSetUserMemory(*(void **)(v76 + 72));
      else
        memset_0(*(void **)(v76 + 72), 0, *(unsigned int *)(v76 + 64));
      *(_QWORD *)&prclDest.left = 0LL;
      prclDest.right = v82;
      prclDest.bottom = v83;
      pptlSrc.x = 0;
      pptlSrc.y = v58 - v57 - v70;
      LODWORD(v90) = 0;
      HIDWORD(v90) = v70 - (v58 - v57);
      v59 = *(_QWORD *)(v88 + 32);
      v91 = *(_DWORD *)(v59 + 56);
      v92 = HIDWORD(v90) + *(_DWORD *)(v59 + 60);
      ERECTL::operator*=(&prclDest.left, (int *)&v90);
      if ( ERECTL::bEmpty((ERECTL *)&prclDest) )
      {
LABEL_150:
        SURFMEM::~SURFMEM((SURFMEM *)&v76);
LABEL_151:
        v16 = 0;
LABEL_152:
        EXLATEOBJ::vAltUnlock((Gre::Base **)&pxlo, v54, v55);
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v79);
        return v16;
      }
      EngCopyBits(
        (SURFOBJ *)((v76 + 24) & -(__int64)(v76 != 0)),
        (SURFOBJ *)((v59 + 24) & -(__int64)(v59 != 0)),
        0LL,
        pxlo,
        &prclDest,
        &pptlSrc);
      if ( (unsigned int)(v21 - 1) > 1 )
      {
LABEL_149:
        v61 = prclDest.bottom - prclDest.top;
        SURFMEM::~SURFMEM((SURFMEM *)&v76);
        EXLATEOBJ::vAltUnlock((Gre::Base **)&pxlo, v62, v63);
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v79);
        return v61;
      }
      if ( v21 == 2 )
      {
        v60 = EncodeRLE4(
                *(unsigned __int8 **)(v76 + 72),
                (unsigned __int8 *)(*v89 + v89[2]),
                v68,
                v67,
                *(_DWORD *)(v13 + 20));
      }
      else
      {
        if ( v21 != 1 )
          goto LABEL_148;
        v60 = EncodeRLE8(
                *(unsigned __int8 **)(v76 + 72),
                (unsigned __int8 *)(*v89 + v89[2]),
                v68,
                v67,
                *(_DWORD *)(v13 + 20));
      }
      *(_DWORD *)(v13 + 20) = v60;
LABEL_148:
      if ( *(_DWORD *)(v13 + 20) )
        goto LABEL_149;
      goto LABEL_150;
  }
  return 0LL;
}
