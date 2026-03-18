/*
 * XREFs of ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1400702E0
 * Callers:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1400790D0 (-GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@K.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x14007C6DC (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     GreAlphaBlend @ 0x1400B0E88 (GreAlphaBlend.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94 (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x1400B75A0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVXDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x140311298 (-iCheckPassthroughImage@@YAHAEAVXDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x14019CB48 (-bIsMonochrome@XEPALOBJ@@QEBAHXZ.c)
 *     ?bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z @ 0x1401CFCF0 (-bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1402931A8 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 *     ?vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z @ 0x140294854 (-vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

_DWORD *CreateXlateObject(void *a1, int a2, ...)
{
  __int64 v2; // rdi
  unsigned int v5; // r12d
  _DWORD *result; // rax
  Gre::Base *v7; // rcx
  _DWORD *v8; // r14
  __int64 v9; // r15
  int v10; // eax
  _DWORD *v11; // rax
  int v12; // eax
  struct _GRETHREAD *v13; // rax
  struct _GRETHREAD *v14; // rbx
  __int64 v15; // r8
  char v16; // cl
  int v17; // r13d
  __int64 v18; // rsi
  char v19; // r10
  __int16 v20; // cx
  struct Gre::Base::SESSION_GLOBALS *v21; // rdx
  struct _TRANSLATE *v22; // r11
  struct _TRANSLATE *v23; // r8
  int v24; // eax
  __int64 v25; // rbx
  int v26; // eax
  int v27; // eax
  unsigned int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // edx
  int v32; // r9d
  int v33; // r8d
  int v34; // ebx
  int v35; // r11d
  int v36; // r10d
  int v37; // ecx
  int v38; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v40; // rdi
  __int64 v41; // rcx
  __int64 *ThreadWin32Thread; // rax
  unsigned int v44; // eax
  _DWORD *v45; // rcx
  _DWORD *v46; // rbx
  int *v47; // rdx
  int *v48; // rcx
  unsigned int v49; // eax
  _DWORD *v50; // rcx
  __int64 v51; // r9
  int v52; // eax
  __int64 v53; // rax
  unsigned int n; // r8d
  __int16 v55; // r13
  int v56; // r13d
  struct _TRANSLATE *v57; // rdx
  int v58; // edx
  unsigned __int64 i; // rcx
  int v60; // eax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v64; // r12d
  __int64 v65; // rcx
  int v66; // edi
  int NearestIndexFromColorref; // eax
  unsigned int v68; // ebx
  int v69; // eax
  int v70; // ebx
  size_t v71; // r8
  int v72; // ebx
  int v73; // eax
  int v74; // eax
  __int64 v75; // r8
  __int64 v76; // rdx
  int v77; // eax
  unsigned int v78; // eax
  _DWORD *v79; // rcx
  unsigned int k; // edx
  __int64 v81; // rax
  int v82; // eax
  __int64 v83; // rdx
  unsigned int v84; // edx
  __int64 v85; // rax
  _DWORD *v86; // r12
  _DWORD *v87; // r13
  __int64 v88; // r15
  __int64 v89; // rdi
  unsigned int v90; // esi
  __int64 v91; // rbx
  unsigned int j; // edi
  int v93; // eax
  __int64 v94; // rcx
  char v95; // [rsp+20h] [rbp-58h]
  struct _TRANSLATE *v96; // [rsp+28h] [rbp-50h]
  struct _TRANSLATE *v97; // [rsp+30h] [rbp-48h]
  struct Gre::Base::SESSION_GLOBALS *v98; // [rsp+38h] [rbp-40h]
  HSEMAPHORE v99; // [rsp+40h] [rbp-38h]
  _BYTE v100[32]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v101; // [rsp+68h] [rbp-10h]
  __int64 m; // [rsp+C0h] [rbp+48h] BYREF
  va_list va; // [rsp+C0h] [rbp+48h]
  __int64 v104; // [rsp+C8h] [rbp+50h] BYREF
  va_list va1; // [rsp+C8h] [rbp+50h]
  __int64 v106; // [rsp+D0h] [rbp+58h]
  __int64 v107; // [rsp+D8h] [rbp+60h]
  __int64 v108; // [rsp+E0h] [rbp+68h]
  __int64 v109; // [rsp+E8h] [rbp+70h]
  __int64 v110; // [rsp+F0h] [rbp+78h]
  __int64 v111; // [rsp+F8h] [rbp+80h]
  va_list va2; // [rsp+100h] [rbp+88h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  m = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v104 = va_arg(va2, _QWORD);
  v106 = va_arg(va2, _QWORD);
  v107 = va_arg(va2, _QWORD);
  v108 = va_arg(va2, _QWORD);
  v109 = va_arg(va2, _QWORD);
  v110 = va_arg(va2, _QWORD);
  v111 = va_arg(va2, _QWORD);
  v2 = m;
  if ( m )
    v5 = *(_DWORD *)(m + 28);
  else
    v5 = 256;
  result = (_DWORD *)AllocThreadBufferWithTag(4 * v5 + 88, 1953265735LL, 0LL);
  v8 = result;
  if ( !result )
    return result;
  v9 = 0LL;
  *result = _InterlockedIncrement((volatile signed __int32 *)Gre::Base::Globals(v7) + 944);
  v10 = 2;
  if ( !v5 )
    v10 = 0;
  v8[1] = v10;
  v11 = v8 + 21;
  if ( !v5 )
    v11 = 0LL;
  *((_QWORD *)v8 + 2) = v11;
  v12 = 0;
  if ( !v5 )
    v12 = 512;
  v8[19] = v12;
  v8[2] = 0;
  v8[3] = v5;
  v8[9] = -1;
  *((_QWORD *)v8 + 5) = 0LL;
  *((_QWORD *)v8 + 6) = 0LL;
  *((_QWORD *)v8 + 7) = 0LL;
  v98 = Gre::Base::Globals((Gre::Base *)0x200);
  v99 = (HSEMAPHORE)(*(_QWORD *)v98 + 312LL);
  GreAcquireSemaphoreInternal(v99);
  v13 = GreGetCurrentThreadCrossSessionCheck();
  v14 = v13;
  if ( v13 )
  {
    v15 = *(_QWORD *)v13;
    if ( (*(_QWORD *)v13 & 0xFFFFFFDFFFFFE000uLL) != 0 && (*(_QWORD *)v13 & 0x2000LL) == 0 )
    {
      v58 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v60 = i;
        if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v15) == 0 )
          v60 = v58;
        v58 = v60;
      }
      if ( v60 > 13 && v60 != 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v60);
    }
    v16 = *((_BYTE *)v14 + 21);
    *((_BYTE *)v14 + 21) = v16 + 1;
    if ( !v16 )
      *(_QWORD *)v14 |= 0x2000uLL;
  }
  v8[18] = 0;
  *((_QWORD *)v8 + 8) = 0LL;
  if ( (a2 & 7) != 0 )
  {
    if ( (a2 & 3) != 0 )
    {
      v8[18] = a2;
      *((_QWORD *)v8 + 8) = a1;
      if ( (a2 & 2) != 0 )
      {
        COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v100, a1);
        if ( v101 )
          v8[1] |= 0x10u;
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v100);
      }
      else if ( (a2 & 1) != 0 )
      {
        v73 = v8[1] | 0x20;
        v8[1] = v73;
        if ( (a2 & 0x10000000) != 0 )
        {
          if ( a1 )
            v8[1] = v73 | 8;
        }
      }
    }
    else if ( (a2 & 4) != 0 )
    {
      v8[1] |= 0x20u;
      v8[18] = a2;
    }
  }
  v17 = v8[1] & 8;
  if ( !v104 || (*(_DWORD *)(v104 + 24) & 0x800) != 0 )
  {
    v18 = v107;
    v19 = 1;
    v21 = v98;
    v95 = 1;
    if ( !*(_QWORD *)(v107 + 72) )
      v18 = *((_QWORD *)v98 + 484);
    v20 = v111;
    if ( (v111 & 0x2000) == 0 )
    {
      v74 = v8[19] | 0x800;
      v8[19] = v74;
      if ( v104 )
        v8[19] = v74 | 0x1000;
    }
  }
  else
  {
    v18 = v107;
    v19 = 0;
    v20 = v111;
    v21 = v98;
    v95 = 0;
  }
  *((_QWORD *)v8 + 5) = v2;
  *((_QWORD *)v8 + 6) = v104;
  *((_QWORD *)v8 + 7) = v18;
  v22 = *(struct _TRANSLATE **)(v18 + 72);
  v23 = *(struct _TRANSLATE **)(v18 + 80);
  v97 = v22;
  v96 = v23;
  if ( !v2 || (v24 = *(_DWORD *)(v2 + 24), (v24 & 0x800) != 0) && (v22 == v23 || (v20 & 0x4000) != 0) )
  {
    if ( !v22 )
    {
      v18 = *((_QWORD *)v21 + 484);
      v22 = (struct _TRANSLATE *)&defaultTranslate;
      *((_QWORD *)v8 + 7) = v18;
      v23 = (struct _TRANSLATE *)&defaultTranslate;
      v97 = (struct _TRANSLATE *)&defaultTranslate;
      v96 = (struct _TRANSLATE *)&defaultTranslate;
    }
    v44 = 0;
    v45 = v8 + 21;
    do
      *v45++ = v44++;
    while ( v44 < 0x100 );
    v46 = (_DWORD *)v104;
    if ( !v104 )
    {
      v8[1] |= 1u;
      goto LABEL_30;
    }
    v64 = *(_DWORD *)(v104 + 24);
    if ( (v64 & 0x8000) != 0 )
    {
      if ( (unsigned int)bEqualRGB_In_Palette(v104, v18) )
      {
        v8[1] |= 1u;
        goto LABEL_30;
      }
      if ( v2 && (unsigned int)bEqualRGB_In_Palette(v65, v2) )
      {
        v8[1] |= 1u;
        goto LABEL_30;
      }
      v23 = v96;
      v22 = v97;
    }
    if ( (v64 & 0x800) != 0 )
    {
      if ( v23 == v22 )
      {
        v8[1] |= 1u;
        goto LABEL_30;
      }
      v84 = 0;
      if ( *(_DWORD *)(v18 + 28) )
      {
        do
        {
          v85 = v84++;
          v8[*((unsigned __int8 *)v22 + v85 + 4) + 21] = *((unsigned __int8 *)v23 + v85 + 4);
        }
        while ( v84 < *(_DWORD *)(v18 + 28) );
        v46 = (_DWORD *)v104;
      }
      v82 = v46[6];
      if ( (v82 & 0x1000) != 0 )
        goto LABEL_172;
LABEL_156:
      if ( (v82 & 0x10000) == 0 )
      {
        v8[21] = 0;
        v8[267] = 246;
        v8[22] = 1;
        v8[268] = 247;
        v8[23] = 2;
        v8[269] = 248;
        v8[24] = 3;
        v8[270] = 249;
        v8[25] = 4;
        v8[271] = 250;
        v8[26] = 5;
        v8[272] = 251;
        v8[27] = 6;
        v8[273] = 252;
        v8[28] = 7;
        v8[274] = 253;
        v8[29] = 8;
        v8[275] = 254;
        v8[30] = 9;
        v8[276] = 255;
      }
      goto LABEL_30;
    }
    if ( (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va1) )
    {
      v71 = 1024LL;
      goto LABEL_130;
    }
    if ( v46[7] != 256 )
    {
      memset_0(v8 + 21, 0, 0x400uLL);
      v46 = (_DWORD *)v104;
    }
    v86 = v8 + 21;
    v87 = v8 + 267;
    v88 = 10LL;
    while ( 1 )
    {
      *v86 = XEPALOBJ::ulDispatchGFPEFunction((__int64 *)va1, (unsigned int)v46[24]);
      *v87++ = XEPALOBJ::ulDispatchGFPEFunction((__int64 *)va1, *(unsigned int *)(v104 + 96));
      ++v86;
      if ( !--v88 )
        break;
      v46 = (_DWORD *)v104;
    }
    v9 = 0LL;
    v89 = m;
    if ( (v111 & 0x2000) != 0 )
    {
      v90 = 0;
      if ( *(_DWORD *)(m + 28) )
      {
        do
        {
          v91 = v90++;
          v8[v91 + 21] = XEPALOBJ::ulDispatchGFPEFunction((__int64 *)va1, *(unsigned int *)(v104 + 96));
        }
        while ( v90 < *(_DWORD *)(v89 + 28) );
      }
      v8[19] |= 0x2000u;
    }
    else if ( v97 )
    {
      for ( j = 0; j < *(_DWORD *)(v18 + 28); v8[v94 + 21] = v93 )
      {
        v93 = XEPALOBJ::ulDispatchGFPEFunction((__int64 *)va1, *(unsigned int *)(v104 + 96));
        v94 = *((unsigned __int8 *)v97 + j++ + 4);
      }
    }
    goto LABEL_30;
  }
  v25 = v104;
  if ( (v24 & 0x8000) != 0 )
  {
    if ( !v104 )
      goto LABEL_191;
    v26 = *(_DWORD *)(v104 + 24);
    if ( (v26 & 0x8000) != 0 && *(_DWORD *)(v104 + 28) == 256 && *(_DWORD *)(v2 + 28) == 256 )
    {
      if ( (v26 & 0x100) == 0 )
      {
LABEL_77:
        LODWORD(v51) = *(_DWORD *)(v104 + 28);
        while ( 1 )
        {
          v52 = v51;
          v51 = (unsigned int)(v51 - 1);
          if ( !v52 )
            goto LABEL_71;
          if ( ((*(_DWORD *)(*(_QWORD *)(v104 + 112) + 4 * v51) ^ *(_DWORD *)(*(_QWORD *)(v2 + 112) + 4 * v51)) & 0xFFFFFF) != 0 )
            goto LABEL_80;
        }
      }
      v75 = *(_QWORD *)(v104 + 72);
      if ( v75 )
      {
        LODWORD(v76) = 256;
        do
        {
          v77 = v76;
          v76 = (unsigned int)(v76 - 1);
          if ( !v77 )
            goto LABEL_77;
        }
        while ( *(unsigned __int8 *)(v76 + v75 + 4) == (_DWORD)v76 );
      }
LABEL_80:
      v23 = *(struct _TRANSLATE **)(v18 + 80);
    }
    if ( (*(_DWORD *)(v104 + 24) & 0x800) != 0 && v22 == v23 )
    {
LABEL_191:
      if ( (unsigned int)bEqualRGB_In_Palette(v2, v18) )
      {
LABEL_71:
        v49 = 0;
        v50 = v8 + 21;
        do
          *v50++ = v49++;
        while ( v49 < 0x100 );
        v8[1] |= 1u;
        goto LABEL_30;
      }
      v19 = v95;
      v22 = v97;
    }
  }
  v27 = *(_DWORD *)(v2 + 24);
  if ( (v27 & 0x800) != 0 && !v25 )
  {
    v78 = 0;
    v79 = v8 + 21;
    do
      *v79++ = v78++;
    while ( v78 < 0x100 );
    for ( k = 0;
          k < *(_DWORD *)(v18 + 28);
          v8[*((unsigned __int8 *)v96 + v81 + 4) + 21] = *((unsigned __int8 *)v22 + v81 + 4) )
    {
      v81 = k++;
    }
    v82 = *(_DWORD *)(v2 + 24);
    if ( (v82 & 0x1000) != 0 )
    {
LABEL_172:
      v8[21] = 0;
      v8[276] = 255;
      goto LABEL_30;
    }
    goto LABEL_156;
  }
  if ( (v27 & 0x2000) != 0 )
  {
    if ( v25 && (*(_DWORD *)(v25 + 24) & 0x2000) != 0 )
    {
      v8[21] = 0;
      v8[22] = 1;
    }
    else
    {
      v66 = v108;
      if ( v17 )
      {
        v68 = v109;
        v69 = v109;
        v8[21] = v108;
      }
      else
      {
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(v25, v18, (unsigned int)v108, 1LL);
        v68 = v109;
        v8[21] = NearestIndexFromColorref;
        v69 = ulGetNearestIndexFromColorref(v104, v18, v68, 1LL);
      }
      v8[22] = v69;
      v8[19] |= 0x100u;
      v8[7] = v66;
      v8[8] = v68;
    }
    goto LABEL_30;
  }
  if ( v5 )
  {
    if ( v25 && (*(_DWORD *)(v25 + 24) & 0x2000) != 0 )
    {
      v71 = 4LL * v5;
LABEL_130:
      memset_0(v8 + 21, 0, v71);
      v72 = v110;
      v8[(unsigned int)ulGetNearestIndexFromColorref(v2, v106, (unsigned int)v110, 1LL) + 21] = 1;
      v8[1] |= 4u;
      v8[6] = v72;
      goto LABEL_30;
    }
    if ( v17 )
    {
      v83 = v5;
      do
      {
        --v83;
        v8[v83 + 21] = *(_DWORD *)(v83 * 4 + *(_QWORD *)(v2 + 112));
        --v5;
      }
      while ( v5 );
    }
    else
    {
      v55 = v111;
      if ( !v19 || (v111 & 0x2000) != 0 )
      {
        v18 = v25;
        if ( (v111 & 0x2000) != 0 )
          v8[19] |= 0x2000u;
      }
      for ( m = v18; ; v18 = m )
      {
        v8[--v5 + 21] = XEPALOBJ::ulDispatchGFPEFunction((__int64 *)va, *(unsigned int *)(v18 + 96));
        if ( !v5 )
          break;
      }
      v56 = v55 & 0x2000;
      if ( v95 && !v56 )
      {
        v57 = v97;
        if ( v104 )
          v57 = v96;
        XLATE::vMapNewXlate((XLATE *)v8, v57);
      }
    }
  }
  else if ( v25 && (*(_DWORD *)(v25 + 24) & 0x2000) != 0 )
  {
    v70 = v110;
    v8[21] = ulGetNearestIndexFromColorref(v2, v106, (unsigned int)v110, 1LL);
    v8[1] |= 4u;
    v8[6] = v70;
    *((_QWORD *)v8 + 2) = v8 + 21;
  }
LABEL_30:
  if ( (v8[1] & 9) == 0 )
  {
    v28 = v8[3];
    v29 = *((_QWORD *)v8 + 5);
    if ( v28 )
    {
      if ( v29 )
      {
        v53 = *((_QWORD *)v8 + 6);
        if ( v53 )
        {
          if ( *(_DWORD *)(v29 + 28) != *(_DWORD *)(v53 + 28) )
            goto LABEL_45;
        }
      }
      for ( n = 0; n < v28; ++n )
      {
        if ( *(_DWORD *)(*((_QWORD *)v8 + 2) + 4LL * n) != n )
          goto LABEL_45;
      }
    }
    else
    {
      v30 = *((_QWORD *)v8 + 6);
      if ( !v29 || !v30 || *(_DWORD *)(v30 + 28) )
        goto LABEL_45;
      v31 = *(_DWORD *)(v29 + 24);
      v32 = 65280;
      v33 = 16711680;
      if ( (v31 & 2) != 0 )
      {
        v47 = *(int **)(v29 + 112);
        v35 = *v47;
        v34 = v47[1];
        v36 = v47[2];
      }
      else
      {
        v34 = 65280;
        if ( (v31 & 4) != 0 )
        {
          v35 = 255;
          v36 = 16711680;
        }
        else
        {
          v35 = 16711680;
          v36 = 255;
        }
      }
      v37 = *(_DWORD *)(v30 + 24);
      if ( (v37 & 2) != 0 )
      {
        v48 = *(int **)(v30 + 112);
        v38 = *v48;
        v32 = v48[1];
        v33 = v48[2];
      }
      else if ( (v37 & 4) != 0 )
      {
        v38 = 255;
      }
      else
      {
        v38 = 16711680;
        v33 = 255;
      }
      if ( v35 != v38 || v34 != v32 || v36 != v33 )
        goto LABEL_45;
    }
    v8[1] |= 1u;
  }
LABEL_45:
  if ( v99 )
  {
    EtwTraceGreLockReleaseSemaphore(L"Palette", v99);
    CurrentThread = KeGetCurrentThread();
    v40 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentProcess = PsGetCurrentProcess(v41),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v40 = *ThreadWin32Thread;
    }
    if ( v40 )
      v9 = v40 + 8;
    if ( v9 )
    {
      if ( (*(_BYTE *)(v9 + 21))-- == 1 )
        *(_QWORD *)v9 &= ~0x2000uLL;
      if ( !*(_QWORD *)v9 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v99);
  }
  return v8;
}
