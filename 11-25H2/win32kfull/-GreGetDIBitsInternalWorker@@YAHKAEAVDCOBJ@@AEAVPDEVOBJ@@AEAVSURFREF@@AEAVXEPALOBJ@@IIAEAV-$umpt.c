/*
 * XREFs of ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1400716E4
 * Callers:
 *     ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x14008952C (-GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z.c)
 * Callees:
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x140070570 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     EngCopyBits @ 0x140070750 (EngCopyBits.c)
 *     ?bSearchCache@EXLATEOBJ@@QEAAHVXEPALOBJ@@000KKKK@Z @ 0x140071360 (-bSearchCache@EXLATEOBJ@@QEAAHVXEPALOBJ@@000KKKK@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x140073040 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x140077E90 (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x14009868C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x1400CEEA8 (-vInit256Rainbow@XEPALOBJ@@QEAAXXZ.c)
 *     ?vInit256Default@XEPALOBJ@@QEAAXXZ @ 0x1400CEFC8 (-vInit256Default@XEPALOBJ@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D7D10 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x140160B04 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ?EncodeRLE8@@YAHPEAE0III@Z @ 0x14021A9A4 (-EncodeRLE8@@YAHPEAE0III@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x14022FCCC (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?EncodeRLE4@@YAHPEAE0III@Z @ 0x140231554 (-EncodeRLE4@@YAHPEAE0III@Z.c)
 *     ?vFill_triples@XEPALOBJ@@QEAAXPEAUtagRGBTRIPLE@@KK@Z @ 0x14026D9A8 (-vFill_triples@XEPALOBJ@@QEAAXPEAUtagRGBTRIPLE@@KK@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
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
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rsi
  unsigned int v15; // r12d
  unsigned int v16; // r9d
  int v17; // r13d
  signed int v18; // r11d
  int v19; // edx
  bool v20; // zf
  unsigned int v21; // r10d
  unsigned int v22; // ecx
  int v23; // r8d
  unsigned int v24; // eax
  unsigned int v25; // edx
  int v26; // edx
  unsigned int v27; // edi
  unsigned __int64 v28; // rcx
  unsigned int v29; // r8d
  int v30; // edx
  int v31; // eax
  int v32; // r10d
  int v33; // r9d
  int v34; // ebx
  int v35; // r11d
  int v36; // eax
  __int64 v37; // rbx
  int v38; // eax
  __int64 v39; // rsi
  DC *v40; // rax
  unsigned int v41; // r8d
  __int64 v42; // rdi
  __int64 v43; // rax
  int v44; // edx
  __int64 v45; // rax
  __int64 v46; // rdx
  Gre::Base *v47; // rcx
  __int64 v48; // r8
  XLATEOBJ *XlateObject; // rdi
  int v50; // eax
  __int64 v51; // rcx
  unsigned int v52; // esi
  __int64 v53; // rbx
  LONG v54; // r11d
  LONG v55; // r10d
  LONG v56; // r9d
  unsigned int v57; // esi
  __int64 v58; // rax
  int v59; // edx
  signed int v60; // r8d
  LONG v61; // eax
  int v62; // eax
  unsigned int v63; // ebx
  __int64 v64; // rdx
  Gre::Base *v65; // rcx
  __int64 v66; // r8
  int v67; // eax
  int cEntries; // eax
  unsigned int v70; // r11d
  int v71; // r8d
  int v72; // eax
  unsigned int *v73; // rax
  unsigned int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rdi
  unsigned int v77; // eax
  unsigned int v78; // edx
  __int64 v79; // rdx
  __int64 v80; // r14
  int IsCMYKColor; // eax
  _WORD *v82; // rdi
  __int64 i; // rcx
  unsigned int v84; // edi
  __int64 *v85; // r14
  unsigned __int16 j; // dx
  unsigned int v87; // eax
  _WORD *v88; // rcx
  __int64 v89; // r8
  unsigned int v90; // eax
  _WORD *v91; // rcx
  POINTL *pptlSrc; // [rsp+28h] [rbp-170h]
  __int64 v93; // [rsp+30h] [rbp-168h]
  __int64 v94; // [rsp+38h] [rbp-160h]
  __int64 v95; // [rsp+40h] [rbp-158h]
  XLATEOBJ *v96; // [rsp+68h] [rbp-130h] BYREF
  unsigned int v97; // [rsp+70h] [rbp-128h]
  unsigned int v98; // [rsp+74h] [rbp-124h]
  int v99; // [rsp+78h] [rbp-120h]
  unsigned int v100; // [rsp+7Ch] [rbp-11Ch]
  int v101; // [rsp+80h] [rbp-118h]
  unsigned int v102; // [rsp+84h] [rbp-114h]
  unsigned int v103; // [rsp+88h] [rbp-110h]
  __int64 v104; // [rsp+90h] [rbp-108h] BYREF
  unsigned int v105; // [rsp+98h] [rbp-100h]
  int v106; // [rsp+A0h] [rbp-F8h]
  __int64 *v107; // [rsp+A8h] [rbp-F0h]
  __int64 v108; // [rsp+B0h] [rbp-E8h]
  __int64 v109; // [rsp+B8h] [rbp-E0h] BYREF
  char v110; // [rsp+C0h] [rbp-D8h]
  int v111; // [rsp+C4h] [rbp-D4h]
  __int64 v112; // [rsp+C8h] [rbp-D0h] BYREF
  __int64 v113; // [rsp+D0h] [rbp-C8h]
  __int64 v114; // [rsp+D8h] [rbp-C0h]
  __int64 v115; // [rsp+E0h] [rbp-B8h]
  __int64 v116; // [rsp+E8h] [rbp-B0h]
  __int64 *v117; // [rsp+F0h] [rbp-A8h]
  __int64 v118; // [rsp+F8h] [rbp-A0h] BYREF
  int v119; // [rsp+100h] [rbp-98h]
  __int64 v120; // [rsp+108h] [rbp-90h] BYREF
  char v121[8]; // [rsp+110h] [rbp-88h] BYREF
  __int64 v122; // [rsp+118h] [rbp-80h]
  __int64 v123; // [rsp+120h] [rbp-78h]
  POINTL v124; // [rsp+128h] [rbp-70h] BYREF
  __int64 v125; // [rsp+130h] [rbp-68h]
  __int64 v126; // [rsp+138h] [rbp-60h]
  __int64 v127; // [rsp+140h] [rbp-58h]
  RECTL prclDest; // [rsp+148h] [rbp-50h] BYREF

  v108 = a4;
  v122 = a3;
  v116 = a2;
  v12 = a1;
  LODWORD(v96) = a1;
  v126 = a4;
  v107 = a5;
  v102 = a6;
  v98 = a7;
  v117 = a8;
  v125 = a9;
  v127 = a9;
  v120 = 0LL;
  if ( !(unsigned int)bIsCompatible(
                        &v120,
                        *(_QWORD *)(*(_QWORD *)(a4 + 32) + 128LL),
                        *(_QWORD *)(a4 + 32),
                        *(_QWORD *)(*(_QWORD *)a2 + 48LL)) )
    return 0LL;
  v13 = v120;
  v123 = v120;
  v112 = 0LL;
  v113 = 0LL;
  v115 = 0LL;
  if ( (_DWORD)v12 == 12 )
  {
    v15 = 1;
    v101 = 1;
    v14 = a9 + 12;
    v70 = *(unsigned __int16 *)(a9 + 4);
    v103 = v70;
    v19 = *(unsigned __int16 *)(a9 + 6);
    v97 = v19;
    *(_WORD *)(a9 + 8) = 1;
    v16 = *(unsigned __int16 *)(a9 + 10);
    v100 = v16;
    v22 = ((v70 * v16 + 31) >> 3) & 0x1FFFFFFC;
    v17 = 0;
    v99 = 0;
    if ( v70 && v19 )
    {
      v21 = 2;
      goto LABEL_15;
    }
    goto LABEL_129;
  }
  if ( a12 < 0x28 )
    return 0LL;
  if ( (unsigned int)v12 > 0x28 )
    memset_0((void *)(a9 + 40), 0, v12 - 40);
  v101 = 0;
  v14 = a9 + 40;
  *(_DWORD *)a9 = 40;
  v15 = 1;
  *(_WORD *)(a9 + 12) = 1;
  v16 = *(unsigned __int16 *)(a9 + 14);
  v100 = v16;
  v17 = *(_DWORD *)(a9 + 16);
  v99 = v17;
  v18 = *(_DWORD *)(a9 + 4);
  v103 = v18;
  if ( v18 <= 0 )
    goto LABEL_129;
  v19 = *(_DWORD *)(a9 + 8);
  if ( !v19 )
    goto LABEL_129;
  if ( v19 >= 0 )
    goto LABEL_9;
  LODWORD(v115) = 1;
  if ( v17 )
  {
    if ( v17 != 3 )
    {
LABEL_129:
      EngSetLastError(0x57u);
      return 0LL;
    }
  }
  v19 = -v19;
LABEL_9:
  v97 = v19;
  if ( v17 == 3 )
  {
    v20 = ((v16 - 16) & 0xFFFFFFEF) == 0;
    goto LABEL_11;
  }
  if ( v17 == 1 )
  {
    v20 = v16 == 8;
LABEL_11:
    v21 = 2;
    if ( v20 )
      goto LABEL_12;
    goto LABEL_54;
  }
  v21 = 2;
  if ( v17 != 2 )
  {
    if ( v17 == 10 )
    {
      IsCMYKColor = DC::bIsCMYKColor(*(DC **)v116);
      v19 = v97;
      if ( IsCMYKColor )
      {
        v17 = 10;
        *(_DWORD *)(a9 + 16) = 10;
        v99 = 10;
      }
      goto LABEL_12;
    }
    goto LABEL_54;
  }
  if ( v16 != 4 )
  {
LABEL_54:
    v99 = 0;
    v17 = 0;
    *(_DWORD *)(a9 + 16) = 0;
  }
LABEL_12:
  v22 = ((v18 * v16 + 31) >> 3) & 0x1FFFFFFC;
  if ( !v17 || v17 == 3 )
    *(_DWORD *)(a9 + 20) = v19 * v22;
  *(_QWORD *)(a9 + 32) = 0LL;
LABEL_15:
  v23 = v102;
  if ( v19 < v102 )
    v23 = v19;
  v102 = v23;
  v106 = v23;
  v24 = v19 - v23;
  v25 = v98;
  if ( v24 < v98 )
    v25 = v24;
  v98 = v25;
  v105 = v25;
  if ( (unsigned int)(v17 - 1) > 1 && a11 < v22 * v25 )
    return 0LL;
  v114 = 0LL;
  if ( v17 == 3 && a12 < 0x34 )
    return 0LL;
  if ( v16 == 1 )
  {
    v28 = 1LL;
    v27 = v21;
LABEL_126:
    v26 = a10;
    goto LABEL_31;
  }
  if ( v16 == 4 )
  {
    v28 = v21;
    v27 = 16;
    goto LABEL_126;
  }
  if ( v16 != 8 )
  {
    v26 = 0;
    if ( a10 != 1 )
      v26 = a10;
    v27 = 0;
    switch ( v16 )
    {
      case 0x18u:
        v28 = 5LL;
        goto LABEL_31;
      case 0x10u:
        v28 = 4LL;
        goto LABEL_31;
      case 0x20u:
        v28 = 6LL;
LABEL_31:
        LODWORD(v112) = v28;
        goto LABEL_32;
    }
    return 0LL;
  }
  v28 = 3LL;
  LODWORD(v112) = 3;
  v27 = 256;
  v26 = a10;
LABEL_32:
  v119 = 0;
  v118 = 0LL;
  if ( v26 == 1 )
  {
    if ( a12 < (unsigned int)v96 + 2 * (unsigned __int64)v27 )
    {
      EngSetLastError(0x57u);
LABEL_205:
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v118);
      return 0LL;
    }
    SEMOBJ<13>::SEMOBJ<13>(v121, *(_QWORD *)(v116 + 16));
    if ( !v13 && (_DWORD)v112 == 3 && *(_QWORD *)(*v107 + 72) )
    {
      v37 = 0LL;
      v104 = 0LL;
      v82 = (_WORD *)v14;
      for ( i = 256LL; i; --i )
        *v82++ = 0;
      v84 = 0;
      v85 = v107;
      do
      {
        for ( j = 0; j < *(_WORD *)(*v85 + 28); ++j )
        {
          if ( *(unsigned __int8 *)(j + *(_QWORD *)(*v85 + 72) + 4LL) == v84 )
          {
            *(_WORD *)(v14 + 2LL * v84) = j;
            break;
          }
        }
        ++v84;
      }
      while ( v84 < 0x100 );
      v13 = v123;
    }
    else
    {
      if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v118, 1u, v27, 0LL, 0, 0, 0, 0x200u, 1) )
      {
        SEMOBJ<13>::vUnlock(v121);
        goto LABEL_205;
      }
      v37 = v118;
      v104 = v118;
      v87 = 0;
      if ( v27 )
      {
        v88 = (_WORD *)v14;
        do
          *v88++ = v87++;
        while ( v87 < v27 );
      }
      v89 = *(_QWORD *)(*(_QWORD *)v122 + 1792LL);
      if ( v13 )
        v89 = v13;
      XEPALOBJ::vGetEntriesFrom(&v104, *v107, v89, v14, v27);
    }
    SEMOBJ<13>::vUnlock(v121);
    goto LABEL_66;
  }
  v29 = *(_DWORD *)(*(_QWORD *)(v108 + 32) + 96LL);
  if ( v26 )
  {
    if ( (_DWORD)v28 != v29 )
    {
LABEL_114:
      v15 = 0;
LABEL_115:
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v118);
      return v15;
    }
    v37 = v13;
    v104 = v13;
  }
  else
  {
    v30 = 0;
    if ( v29 == (_DWORD)v28 && v13 )
    {
      v30 = 1;
      if ( v17 == 3 || (((_DWORD)v28 - 4) & 0xFFFFFFFD) != 0 )
      {
        if ( (_DWORD)v28 == 5 && (*(_BYTE *)(v13 + 24) & 4) != 0 )
          v30 = 0;
      }
      else
      {
        v31 = *(_DWORD *)(v13 + 24);
        if ( ((unsigned __int8)v31 & (unsigned __int8)v21) != 0 )
        {
          v73 = *(unsigned int **)(v13 + 112);
          v29 = *v73;
          v32 = v73[1];
          v33 = v73[2];
          LODWORD(v96) = 16711680;
        }
        else
        {
          v32 = 65280;
          if ( (v31 & 4) != 0 )
          {
            v29 = 255;
            v33 = 16711680;
            LODWORD(v96) = 16711680;
          }
          else
          {
            LODWORD(v96) = 16711680;
            v29 = 16711680;
            v33 = 255;
          }
        }
        v34 = 31;
        if ( (_DWORD)v28 != 4 )
          v34 = 255;
        v35 = 992;
        if ( (_DWORD)v28 != 4 )
          v35 = 65280;
        v36 = 31744;
        if ( (_DWORD)v28 != 4 )
          v36 = (int)v96;
        if ( v29 != v36 || v32 != v35 || v33 != v34 )
          v30 = 0;
      }
    }
    if ( v30 )
    {
      v37 = v13;
      v104 = v13;
    }
    else
    {
      if ( v27 )
      {
        v78 = 1;
      }
      else
      {
        v78 = 8;
        if ( (_DWORD)v28 == 4 )
          v78 = 2;
      }
      if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v118, v78, v27, 0LL, 0x7C00u, 0x3E0u, 0x1Fu, 0x200u, 1) )
        goto LABEL_114;
      v37 = v118;
      v104 = v118;
      if ( *(_DWORD *)(*(_QWORD *)(v108 + 32) + 96LL) == (_DWORD)v112 && (_DWORD)v112 == 3 )
      {
        v90 = 0;
        if ( v27 )
        {
          v91 = (_WORD *)v14;
          do
            *v91++ = v90++;
          while ( v90 < v27 );
        }
        XEPALOBJ::vGetEntriesFrom(&v104, *v107, *(_QWORD *)(*(_QWORD *)v122 + 1792LL), v14, v27);
        XEPALOBJ::vInit256Default((XEPALOBJ *)&v104);
      }
      else
      {
        switch ( (_DWORD)v112 )
        {
          case 1:
            **(_DWORD **)(v118 + 112) = 0;
            *(_DWORD *)(*(_QWORD *)(v37 + 112) + 4LL) = 0xFFFFFF;
            break;
          case 2:
            v79 = 0LL;
            v80 = 16LL;
            do
            {
              *(_DWORD *)(v79 + *(_QWORD *)(v37 + 112)) = *(_DWORD *)((char *)&unk_140350F30 + v79);
              v79 += 4LL;
              --v80;
            }
            while ( v80 );
            v13 = v123;
            break;
          case 3:
            XEPALOBJ::vInit256Rainbow((XEPALOBJ *)&v104);
            break;
        }
      }
    }
    if ( v101 )
    {
      if ( a12 < (unsigned __int64)(3 * v27) + 12 )
        goto LABEL_114;
      v28 = v100;
      if ( ((v100 - 16) & 0xFFFFFFE7) != 0 || v100 == 40 )
        XEPALOBJ::vFill_triples((XEPALOBJ *)&v104, (struct tagRGBTRIPLE *)v14, v29, v27);
    }
    else
    {
      if ( v17 == 3 )
        v27 = 3;
      v28 = 4 * v27 + 40LL;
      if ( a12 < v28 )
        goto LABEL_114;
      v38 = *(_DWORD *)(v37 + 24);
      if ( (v38 & 0x4000) != 0 )
      {
        memmove((void *)v14, *(const void **)(v37 + 112), 2LL * v27);
      }
      else if ( v17 == 3 || (v28 = v100, v100 <= 8) && (v71 = 274, _bittest(&v71, v100)) )
      {
        if ( (v38 & 8) != 0 )
        {
          *(_DWORD *)v14 = 16711680;
          *(_DWORD *)(v14 + 4) = 65280;
          *(_DWORD *)(v14 + 8) = 255;
        }
        else if ( (v38 & 2) != 0 && v27 == 3 )
        {
          *(_DWORD *)v14 = **(_DWORD **)(v37 + 112);
          *(_DWORD *)(v14 + 4) = *(_DWORD *)(*(_QWORD *)(v37 + 112) + 4LL);
          v28 = *(unsigned int *)(*(_QWORD *)(v37 + 112) + 8LL);
          *(_DWORD *)(v14 + 8) = v28;
        }
        else if ( (v38 & 4) != 0 )
        {
          *(_DWORD *)v14 = 255;
          *(_DWORD *)(v14 + 4) = 65280;
          *(_DWORD *)(v14 + 8) = 16711680;
        }
        else
        {
          v74 = *(_DWORD *)(v37 + 28);
          if ( v27 < v74 )
            v74 = v27;
          if ( v74 )
          {
            BYTE3(v96) = 0;
            v75 = 0LL;
            v76 = v74;
            do
            {
              v77 = *(_DWORD *)(v75 + *(_QWORD *)(v37 + 112));
              BYTE2(v96) = v77;
              v28 = HIWORD(v77);
              LOBYTE(v96) = BYTE2(v77);
              BYTE1(v96) = BYTE1(v77);
              *(_DWORD *)v14 = (_DWORD)v96;
              v14 += 4LL;
              v75 += 4LL;
              --v76;
            }
            while ( v76 );
          }
        }
      }
    }
  }
LABEL_66:
  v96 = 0LL;
  v39 = *v107;
  v40 = *(DC **)v116;
  v41 = *(_DWORD *)(*(_QWORD *)v116 + 120LL);
  v100 = v41;
  v42 = *(_QWORD *)(*((_QWORD *)v40 + 122) + 248LL);
  if ( !v13
    && (!v37
     || (*(_DWORD *)(v37 + 24) & 0x800) != 0 && ((v28 = *(_QWORD *)(v39 + 80)) == 0 || v28 == *(_QWORD *)(v39 + 72)))
    || !v37
    && (*(_DWORD *)(v13 + 24) & 0x800) != 0
    && ((v28 = *(_QWORD *)(v39 + 80)) == 0 || v28 == *(_QWORD *)(v39 + 72))
    || v13
    && v37
    && ((v43 = *(_QWORD *)(v13 + 120), v43 != v13) ? (v44 = *(_DWORD *)(v43 + 32)) : (v44 = *(_DWORD *)(v13 + 32)),
        (v45 = *(_QWORD *)(v37 + 120), v45 != v37)
      ? (v28 = *(unsigned int *)(v45 + 32))
      : (v28 = *(unsigned int *)(v37 + 32)),
        v44 == (_DWORD)v28) )
  {
    XlateObject = (XLATEOBJ *)((char *)Gre::Base::Globals((Gre::Base *)v28) + 4552);
    v96 = XlateObject;
LABEL_85:
    v50 = 1;
    goto LABEL_86;
  }
  v101 = 1;
  if ( (v41 & 7) != 0 && v42 )
  {
    v101 = 0;
  }
  else if ( v13 )
  {
    if ( v37 )
    {
      LODWORD(v95) = 0;
      LODWORD(v94) = 0;
      LODWORD(v93) = 0xFFFFFF;
      LODWORD(pptlSrc) = 0;
      if ( (unsigned int)EXLATEOBJ::bSearchCache((Gre::Base *)&v96, v13, v37, v39, v39, pptlSrc, v93, v94, v95) )
      {
        v50 = 1;
        XlateObject = v96;
        goto LABEL_86;
      }
    }
  }
  XlateObject = (XLATEOBJ *)CreateXlateObject(v42, v100, v13, v37, v39, v39, 0, 0xFFFFFF, 0, 0);
  v96 = XlateObject;
  if ( XlateObject )
  {
    if ( v101 && v13 && v37 && (XlateObject[3].flXlate & 0x200) == 0 )
      EXLATEOBJ::vAddToCache((Gre::Base *)&v96, v13, v37, v39, v39);
    goto LABEL_85;
  }
  v50 = 0;
LABEL_86:
  if ( !v50 )
  {
    if ( XlateObject )
    {
      cEntries = XlateObject[1].cEntries;
      if ( cEntries >= 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)Gre::Base::Globals(v47) + 8 * (int)XlateObject[1].cEntries
                                                                                 + 1072);
      }
      else if ( cEntries == -1 )
      {
        FreeThreadBufferWithTag(XlateObject, v46, v48);
      }
    }
    goto LABEL_114;
  }
  v51 = *v117;
  if ( !*v117 && (unsigned int)(v17 - 1) > 1 )
  {
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v96);
    goto LABEL_115;
  }
  HIDWORD(v112) = v103;
  LODWORD(v113) = v98;
  v109 = 0LL;
  v110 = 0;
  v111 = 0;
  if ( (unsigned int)(v17 - 1) <= 1 )
  {
    v52 = v97;
    if ( !v98 )
    {
      v102 = 0;
      v106 = 0;
      v98 = v97;
      v105 = v97;
      LODWORD(v113) = v97;
    }
    SURFMEM::bCreateDIB((SURFMEM *)&v109, (struct _DEVBITMAPINFO *)&v112, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  }
  else
  {
    SURFMEM::bCreateDIB(
      (SURFMEM *)&v109,
      (struct _DEVBITMAPINFO *)&v112,
      (void *)(v51 + v117[2]),
      0LL,
      0,
      0LL,
      0LL,
      0,
      1,
      0,
      0);
    v52 = v97;
  }
  if ( !v109 )
    goto LABEL_138;
  *(_QWORD *)(v109 + 48) = *(_QWORD *)(*(_QWORD *)v116 + 48LL);
  memset_0(*(void **)(v109 + 72), 0, *(unsigned int *)(v109 + 64));
  v53 = v125;
  v54 = 0;
  *(_QWORD *)&prclDest.left = 0LL;
  v55 = HIDWORD(v112);
  prclDest.right = HIDWORD(v112);
  v56 = v113;
  prclDest.bottom = v113;
  v124.x = 0;
  v57 = v52 - v102;
  v124.y = v57 - v98;
  v58 = *(_QWORD *)(v108 + 32);
  v59 = *(_DWORD *)(v58 + 56);
  v60 = v98 - v57 + *(_DWORD *)(v58 + 60);
  v61 = 0;
  if ( (int)(v98 - v57) > 0 )
    v61 = v98 - v57;
  prclDest.top = v61;
  if ( v59 < SHIDWORD(v112) )
    v55 = v59;
  prclDest.right = v55;
  if ( v60 < (int)v113 )
    v56 = v60;
  prclDest.bottom = v56;
  if ( v55 < 0 )
  {
    v54 = v55;
    prclDest.left = v55;
  }
  else
  {
    if ( v56 < v61 )
      v61 = v56;
    prclDest.top = v61;
  }
  if ( v54 == v55 || (v20 = v61 == v56, v62 = 0, v20) )
    v62 = 1;
  if ( v62 )
    goto LABEL_138;
  EngCopyBits(
    (SURFOBJ *)((v109 + 24) & -(__int64)(v109 != 0)),
    (SURFOBJ *)((*(_QWORD *)(v108 + 32) + 24LL) & -(__int64)(*(_QWORD *)(v108 + 32) != 0LL)),
    0LL,
    XlateObject,
    &prclDest,
    &v124);
  if ( (unsigned int)(v17 - 1) <= 1 )
  {
    if ( v17 == 2 )
    {
      v72 = EncodeRLE4(
              *(unsigned __int8 **)(v109 + 72),
              (unsigned __int8 *)(*v117 + v117[2]),
              v103,
              v98,
              *(_DWORD *)(v53 + 20));
    }
    else
    {
      if ( v17 != 1 )
      {
LABEL_137:
        if ( *(_DWORD *)(v53 + 20) )
          goto LABEL_105;
LABEL_138:
        SURFMEM::~SURFMEM((SURFMEM *)&v109);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v96);
        goto LABEL_114;
      }
      v72 = EncodeRLE8(
              *(unsigned __int8 **)(v109 + 72),
              (unsigned __int8 *)(*v117 + v117[2]),
              v103,
              v98,
              *(_DWORD *)(v53 + 20));
    }
    *(_DWORD *)(v53 + 20) = v72;
    goto LABEL_137;
  }
LABEL_105:
  v63 = prclDest.bottom - prclDest.top;
  SURFMEM::~SURFMEM((SURFMEM *)&v109);
  if ( XlateObject )
  {
    v67 = XlateObject[1].cEntries;
    if ( v67 >= 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)Gre::Base::Globals(v65) + 8 * (int)XlateObject[1].cEntries + 1072);
    }
    else if ( v67 == -1 )
    {
      FreeThreadBufferWithTag(XlateObject, v64, v66);
    }
  }
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v118);
  return v63;
}
