/*
 * XREFs of ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x140073040
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1400716E4 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV-$umpt.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140072810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     GreAlphaBlend @ 0x140073C58 (GreAlphaBlend.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x14007695C (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x140084FB0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1400962F4 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ?GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x14009DE84 (-GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@K.c)
 *     ?iCheckPassthroughImage@@YAHAEAVXDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x140327DC8 (-iCheckPassthroughImage@@YAHAEAVXDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x14016BED0 (-bIsMonochrome@XEPALOBJ@@QEBAHXZ.c)
 *     ?bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z @ 0x1401A0434 (-bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z.c)
 *     ?vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z @ 0x14026D05C (-vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x140312C80 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

_DWORD *CreateXlateObject(void *a1, int a2, ...)
{
  __int64 v2; // rbx
  unsigned int v4; // r12d
  _DWORD *result; // rax
  Gre::Base *v6; // rcx
  _DWORD *v7; // r14
  unsigned int v8; // r13d
  int v9; // eax
  _DWORD *v10; // rax
  int v11; // eax
  HSEMAPHORE v12; // r15
  _QWORD *ThreadWin32Thread; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  char v16; // cl
  BOOL v17; // r9d
  __int64 v18; // rsi
  char v19; // r11
  struct Gre::Base::SESSION_GLOBALS *v20; // rcx
  __int16 v21; // dx
  struct _TRANSLATE *v22; // r10
  struct _TRANSLATE *v23; // r8
  unsigned int v24; // eax
  _DWORD *v25; // rcx
  _DWORD *v26; // rdi
  int v27; // r12d
  __int64 v28; // rcx
  unsigned int v29; // edx
  __int64 v30; // rax
  int v31; // eax
  int v32; // eax
  __int64 v33; // rdi
  int v34; // eax
  int v35; // eax
  unsigned int v36; // edx
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // edx
  int v40; // r9d
  int v41; // r8d
  int v42; // ebx
  int v43; // r11d
  int v44; // r10d
  int v45; // ecx
  int v46; // eax
  struct _KTHREAD *v47; // rdi
  __int64 *v48; // rax
  __int64 v49; // rax
  int *v50; // rdx
  int *v51; // rcx
  unsigned int v52; // eax
  _DWORD *v53; // rcx
  __int64 v54; // rdx
  int v55; // ecx
  int v56; // eax
  __int64 v57; // rcx
  int v58; // eax
  __int64 v59; // rax
  struct _TRANSLATE *v60; // rdx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  __int64 v64; // rax
  int v65; // ebx
  __int64 v66; // rax
  int v67; // r8d
  unsigned __int64 i; // rcx
  int v69; // eax
  int v70; // ebx
  int NearestIndexFromColorref; // eax
  unsigned int v72; // edi
  int v73; // eax
  int v74; // edi
  size_t v75; // r8
  int v76; // edi
  __int64 v77; // rax
  int v79; // ecx
  int v80; // eax
  __int64 v81; // r8
  int v82; // eax
  unsigned int v83; // eax
  _DWORD *v84; // rcx
  unsigned int j; // edx
  __int64 v86; // rax
  __int64 v87; // rdx
  _DWORD *v88; // r12
  _DWORD *v89; // r15
  __int64 v90; // r13
  __int64 v91; // rbx
  unsigned int v92; // esi
  __int64 v93; // rdi
  unsigned int m; // r12d
  int v95; // eax
  __int64 v96; // rcx
  char v97; // [rsp+20h] [rbp-69h]
  struct _TRANSLATE *v98; // [rsp+28h] [rbp-61h]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-59h]
  struct _TRANSLATE *v100; // [rsp+30h] [rbp-59h]
  struct Gre::Base::SESSION_GLOBALS *v101; // [rsp+38h] [rbp-51h]
  BOOL v102; // [rsp+40h] [rbp-49h]
  HSEMAPHORE v103; // [rsp+48h] [rbp-41h]
  _BYTE v104[32]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v105; // [rsp+70h] [rbp-19h]
  __int64 k; // [rsp+D0h] [rbp+47h] BYREF
  va_list va; // [rsp+D0h] [rbp+47h]
  __int64 v109; // [rsp+D8h] [rbp+4Fh] BYREF
  va_list va1; // [rsp+D8h] [rbp+4Fh]
  __int64 v111; // [rsp+E0h] [rbp+57h]
  __int64 v112; // [rsp+E8h] [rbp+5Fh]
  __int64 v113; // [rsp+F0h] [rbp+67h]
  __int64 v114; // [rsp+F8h] [rbp+6Fh]
  __int64 v115; // [rsp+100h] [rbp+77h]
  __int64 v116; // [rsp+108h] [rbp+7Fh]
  va_list va2; // [rsp+110h] [rbp+87h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  k = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v109 = va_arg(va2, _QWORD);
  v111 = va_arg(va2, _QWORD);
  v112 = va_arg(va2, _QWORD);
  v113 = va_arg(va2, _QWORD);
  v114 = va_arg(va2, _QWORD);
  v115 = va_arg(va2, _QWORD);
  v116 = va_arg(va2, _QWORD);
  v2 = k;
  if ( k )
    v4 = *(_DWORD *)(k + 28);
  else
    v4 = 256;
  result = (_DWORD *)AllocThreadBufferWithTag(4 * v4 + 88, 1953265735LL, 0LL);
  v7 = result;
  if ( !result )
    return result;
  v8 = 0;
  *result = _InterlockedIncrement((volatile signed __int32 *)Gre::Base::Globals(v6) + 918);
  v9 = 2;
  if ( !v4 )
    v9 = 0;
  v7[1] = v9;
  v10 = v7 + 21;
  if ( !v4 )
    v10 = 0LL;
  *((_QWORD *)v7 + 2) = v10;
  v11 = 0;
  if ( !v4 )
    v11 = 512;
  v7[19] = v11;
  v7[2] = 0;
  v7[3] = v4;
  v7[9] = -1;
  *((_QWORD *)v7 + 5) = 0LL;
  *((_QWORD *)v7 + 6) = 0LL;
  *((_QWORD *)v7 + 7) = 0LL;
  v101 = Gre::Base::Globals((Gre::Base *)0x200);
  v12 = (HSEMAPHORE)(*(_QWORD *)v101 + 312LL);
  v103 = v12;
  GreAcquireSemaphoreInternal(v12);
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      if ( *ThreadWin32Thread )
      {
        v14 = *ThreadWin32Thread + 8LL;
        if ( *ThreadWin32Thread != -8LL )
        {
          v15 = *(_QWORD *)v14;
          if ( (*(_QWORD *)v14 & 0xFFFFFFFFFFFFE000uLL) != 0 && (*(_QWORD *)v14 & 0x2000LL) == 0 )
          {
            v67 = 37;
            for ( i = 0LL; i < 0x40; ++i )
            {
              v69 = i;
              if ( !_bittest64(&v15, i) )
                v69 = v67;
              v67 = v69;
            }
            if ( v69 > 13 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(i, v15, (unsigned int)v69);
          }
          v16 = *(_BYTE *)(v14 + 21);
          *(_BYTE *)(v14 + 21) = v16 + 1;
          if ( !v16 )
            *(_QWORD *)v14 |= 0x2000uLL;
        }
      }
    }
  }
  v7[18] = 0;
  *((_QWORD *)v7 + 8) = 0LL;
  if ( (a2 & 7) != 0 )
  {
    if ( (a2 & 3) != 0 )
    {
      *((_QWORD *)v7 + 8) = a1;
      v7[18] = a2;
      if ( (a2 & 2) != 0 )
      {
        COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v104, a1);
        if ( v105 )
          v7[1] |= 0x10u;
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v104);
      }
      else if ( (a2 & 1) != 0 )
      {
        v79 = v7[1] | 0x20;
        v7[1] = v79;
        if ( (a2 & 0x10000000) != 0 )
        {
          if ( a1 )
            v7[1] = v79 | 8;
        }
      }
    }
    else if ( (a2 & 4) != 0 )
    {
      v7[1] |= 0x20u;
      v7[18] = a2;
    }
  }
  v17 = (v7[1] & 8) != 0;
  v102 = v17;
  if ( !v109 || (*(_DWORD *)(v109 + 24) & 0x800) != 0 )
  {
    v18 = v112;
    v19 = 1;
    v20 = v101;
    v97 = 1;
    if ( !*(_QWORD *)(v112 + 72) )
      v18 = *((_QWORD *)v101 + 471);
    v21 = v116;
    if ( (v116 & 0x2000) == 0 )
    {
      v80 = v7[19] | 0x800;
      v7[19] = v80;
      if ( v109 )
        v7[19] = v80 | 0x1000;
    }
  }
  else
  {
    v18 = v112;
    v19 = 0;
    v20 = v101;
    v21 = v116;
    v97 = 0;
  }
  *((_QWORD *)v7 + 5) = v2;
  *((_QWORD *)v7 + 6) = v109;
  *((_QWORD *)v7 + 7) = v18;
  v22 = *(struct _TRANSLATE **)(v18 + 72);
  v23 = *(struct _TRANSLATE **)(v18 + 80);
  v100 = v22;
  v98 = v23;
  if ( v2 )
  {
    v32 = *(_DWORD *)(v2 + 24);
    if ( (v32 & 0x800) == 0 || v22 != v23 && (v21 & 0x4000) == 0 )
    {
      v33 = v109;
      if ( (v32 & 0x8000) != 0 )
      {
        if ( !v109 )
          goto LABEL_189;
        v34 = *(_DWORD *)(v109 + 24);
        if ( (v34 & 0x8000) != 0 )
        {
          LODWORD(v54) = *(_DWORD *)(v109 + 28);
          if ( (_DWORD)v54 == 256 && *(_DWORD *)(v2 + 28) == 256 )
          {
            if ( (v34 & 0x100) == 0 )
            {
LABEL_85:
              v55 = *(_DWORD *)(v109 + 28);
              while ( 1 )
              {
                v56 = v55;
                v57 = (unsigned int)(v55 - 1);
                LODWORD(k) = v57;
                if ( !v56 )
                  goto LABEL_79;
                v58 = *(_DWORD *)(*(_QWORD *)(v109 + 112) + 4 * v57) ^ *(_DWORD *)(*(_QWORD *)(v2 + 112) + 4 * v57);
                v55 = k;
                if ( (v58 & 0xFFFFFF) != 0 )
                  goto LABEL_88;
              }
            }
            v81 = *(_QWORD *)(v109 + 72);
            if ( v81 )
            {
              do
              {
                v82 = v54;
                v54 = (unsigned int)(v54 - 1);
                if ( !v82 )
                  goto LABEL_85;
              }
              while ( *(unsigned __int8 *)(v54 + v81 + 4) == (_DWORD)v54 );
            }
LABEL_88:
            v23 = v98;
          }
        }
        if ( !v109 || (*(_DWORD *)(v109 + 24) & 0x800) != 0 && v22 == v23 )
        {
LABEL_189:
          if ( (unsigned int)bEqualRGB_In_Palette(v2, v18) )
          {
LABEL_79:
            v52 = 0;
            v53 = v7 + 21;
            do
              *v53++ = v52++;
            while ( v52 < 0x100 );
            goto LABEL_81;
          }
          v17 = v102;
          v22 = v100;
          v19 = v97;
        }
      }
      v35 = *(_DWORD *)(v2 + 24);
      if ( (v35 & 0x800) != 0 && !v33 )
      {
        v83 = 0;
        v84 = v7 + 21;
        do
          *v84++ = v83++;
        while ( v83 < 0x100 );
        for ( j = 0;
              j < *(_DWORD *)(v18 + 28);
              v7[*((unsigned __int8 *)v98 + v86 + 4) + 21] = *((unsigned __int8 *)v22 + v86 + 4) )
        {
          v86 = j++;
        }
        v31 = *(_DWORD *)(v2 + 24);
LABEL_38:
        if ( (v31 & 0x1000) != 0 )
        {
          v7[21] = 0;
          v7[276] = 255;
        }
        else if ( (v31 & 0x10000) == 0 )
        {
          v7[21] = 0;
          v7[267] = 246;
          v7[22] = 1;
          v7[268] = 247;
          v7[23] = 2;
          v7[269] = 248;
          v7[24] = 3;
          v7[270] = 249;
          v7[25] = 4;
          v7[271] = 250;
          v7[26] = 5;
          v7[272] = 251;
          v7[27] = 6;
          v7[273] = 252;
          v7[28] = 7;
          v7[274] = 253;
          v7[29] = 8;
          v7[275] = 254;
          v7[30] = 9;
          v7[276] = 255;
        }
        goto LABEL_52;
      }
      if ( (v35 & 0x2000) != 0 )
      {
        if ( v33 && (*(_DWORD *)(v33 + 24) & 0x2000) != 0 )
        {
          v7[21] = 0;
          v7[22] = 1;
        }
        else
        {
          v70 = v113;
          if ( v17 )
          {
            v72 = v114;
            v73 = v114;
            v7[21] = v113;
          }
          else
          {
            NearestIndexFromColorref = ulGetNearestIndexFromColorref(v33, v18, (unsigned int)v113, 1LL);
            v72 = v114;
            v7[21] = NearestIndexFromColorref;
            v73 = ulGetNearestIndexFromColorref(v109, v18, v72, 1LL);
          }
          v7[22] = v73;
          v7[19] |= 0x100u;
          v7[7] = v70;
          v7[8] = v72;
        }
        goto LABEL_52;
      }
      if ( !v4 )
      {
        if ( v33 && (*(_DWORD *)(v33 + 24) & 0x2000) != 0 )
        {
          v74 = v115;
          v7[21] = ulGetNearestIndexFromColorref(v2, v111, (unsigned int)v115, 1LL);
          v7[1] |= 4u;
          v7[6] = v74;
          *((_QWORD *)v7 + 2) = v7 + 21;
        }
        goto LABEL_52;
      }
      if ( !v33 || (*(_DWORD *)(v33 + 24) & 0x2000) == 0 )
      {
        if ( v17 )
        {
          v87 = v4;
          do
          {
            --v87;
            v7[v87 + 21] = *(_DWORD *)(v87 * 4 + *(_QWORD *)(v2 + 112));
            --v4;
          }
          while ( v4 );
        }
        else
        {
          if ( !v19 || (v116 & 0x2000) != 0 )
          {
            v18 = v33;
            if ( (v116 & 0x2000) != 0 )
              v7[19] |= 0x2000u;
          }
          for ( k = v18; ; v18 = k )
          {
            v7[--v4 + 21] = XEPALOBJ::ulDispatchGFPEFunction((__int64 *)va, *(unsigned int *)(v18 + 96));
            if ( !v4 )
              break;
          }
          if ( v97 && (v116 & 0x2000) == 0 )
          {
            v60 = v100;
            if ( v109 )
              v60 = v98;
            XLATE::vMapNewXlate((XLATE *)v7, v60);
          }
        }
        goto LABEL_52;
      }
      v75 = 4LL * v4;
LABEL_135:
      memset_0(v7 + 21, 0, v75);
      v76 = v115;
      v7[(unsigned int)ulGetNearestIndexFromColorref(v2, v111, (unsigned int)v115, 1LL) + 21] = 1;
      v7[1] |= 4u;
      v7[6] = v76;
      goto LABEL_52;
    }
  }
  if ( !v22 )
  {
    v18 = *((_QWORD *)v20 + 471);
    v22 = (struct _TRANSLATE *)&defaultTranslate;
    *((_QWORD *)v7 + 7) = v18;
    v23 = (struct _TRANSLATE *)&defaultTranslate;
    v100 = (struct _TRANSLATE *)&defaultTranslate;
    v98 = (struct _TRANSLATE *)&defaultTranslate;
  }
  v24 = 0;
  v25 = v7 + 21;
  do
    *v25++ = v24++;
  while ( v24 < 0x100 );
  v26 = (_DWORD *)v109;
  if ( !v109 )
    goto LABEL_81;
  v27 = *(_DWORD *)(v109 + 24);
  if ( (v27 & 0x8000) != 0 )
  {
    if ( (unsigned int)bEqualRGB_In_Palette(v109, v18) || v2 && (unsigned int)bEqualRGB_In_Palette(v28, v2) )
      goto LABEL_81;
    v23 = v98;
    v22 = v100;
  }
  if ( (v27 & 0x800) != 0 )
  {
    if ( v23 != v22 )
    {
      v29 = 0;
      if ( *(_DWORD *)(v18 + 28) )
      {
        do
        {
          v30 = v29++;
          v7[*((unsigned __int8 *)v22 + v30 + 4) + 21] = *((unsigned __int8 *)v23 + v30 + 4);
        }
        while ( v29 < *(_DWORD *)(v18 + 28) );
        v26 = (_DWORD *)v109;
      }
      v31 = v26[6];
      goto LABEL_38;
    }
LABEL_81:
    v7[1] |= 1u;
    goto LABEL_52;
  }
  if ( (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va1) )
  {
    v75 = 1024LL;
    goto LABEL_135;
  }
  if ( v26[7] != 256 )
  {
    memset_0(v7 + 21, 0, 0x400uLL);
    v26 = (_DWORD *)v109;
  }
  v88 = v7 + 21;
  v89 = v7 + 267;
  v90 = 10LL;
  while ( 1 )
  {
    *v88 = XEPALOBJ::ulDispatchGFPEFunction((__int64 *)va1, (unsigned int)v26[24]);
    *v89++ = XEPALOBJ::ulDispatchGFPEFunction((__int64 *)va1, *(unsigned int *)(v109 + 96));
    ++v88;
    if ( !--v90 )
      break;
    v26 = (_DWORD *)v109;
  }
  v8 = 0;
  v91 = k;
  v12 = v103;
  if ( (v116 & 0x2000) != 0 )
  {
    v92 = 0;
    if ( *(_DWORD *)(k + 28) )
    {
      do
      {
        v93 = v92++;
        v7[v93 + 21] = XEPALOBJ::ulDispatchGFPEFunction((__int64 *)va1, *(unsigned int *)(v109 + 96));
      }
      while ( v92 < *(_DWORD *)(v91 + 28) );
    }
    v7[19] |= 0x2000u;
  }
  else if ( v100 )
  {
    for ( m = 0; m < *(_DWORD *)(v18 + 28); v7[v96 + 21] = v95 )
    {
      v95 = XEPALOBJ::ulDispatchGFPEFunction((__int64 *)va1, *(unsigned int *)(v109 + 96));
      v96 = *((unsigned __int8 *)v100 + m++ + 4);
    }
  }
LABEL_52:
  if ( (v7[1] & 9) == 0 )
  {
    v36 = v7[3];
    v37 = *((_QWORD *)v7 + 5);
    if ( v36 )
    {
      if ( v37 )
      {
        v59 = *((_QWORD *)v7 + 6);
        if ( v59 )
        {
          if ( *(_DWORD *)(v37 + 28) != *(_DWORD *)(v59 + 28) )
            goto LABEL_67;
        }
      }
      while ( v8 < v36 )
      {
        if ( *(_DWORD *)(*((_QWORD *)v7 + 2) + 4LL * v8) != v8 )
          goto LABEL_67;
        ++v8;
      }
    }
    else
    {
      v38 = *((_QWORD *)v7 + 6);
      if ( !v37 || !v38 || *(_DWORD *)(v38 + 28) )
        goto LABEL_67;
      v39 = *(_DWORD *)(v37 + 24);
      v40 = 65280;
      v41 = 16711680;
      if ( (v39 & 2) != 0 )
      {
        v50 = *(int **)(v37 + 112);
        v43 = *v50;
        v42 = v50[1];
        v44 = v50[2];
      }
      else
      {
        v42 = 65280;
        if ( (v39 & 4) != 0 )
        {
          v43 = 255;
          v44 = 16711680;
        }
        else
        {
          v43 = 16711680;
          v44 = 255;
        }
      }
      v45 = *(_DWORD *)(v38 + 24);
      if ( (v45 & 2) != 0 )
      {
        v51 = *(int **)(v38 + 112);
        v46 = *v51;
        v40 = v51[1];
        v41 = v51[2];
      }
      else if ( (v45 & 4) != 0 )
      {
        v46 = 255;
      }
      else
      {
        v46 = 16711680;
        v41 = 255;
      }
      if ( v43 != v46 || v42 != v40 || v44 != v41 )
        goto LABEL_67;
    }
    v7[1] |= 1u;
  }
LABEL_67:
  if ( v12 )
  {
    EtwTraceGreLockReleaseSemaphore(L"Palette", v12);
    v47 = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v64 = PsGetCurrentProcess(),
          v65 = PsGetProcessSessionIdEx(v64),
          v66 = PsGetCurrentThreadProcess(),
          v65 == (unsigned int)PsGetProcessSessionIdEx(v66)) )
    {
      v48 = (__int64 *)PsGetThreadWin32Thread(v47);
      if ( v48 )
      {
        v49 = *v48;
        if ( v49 )
        {
          v77 = v49 + 8;
          if ( v77 )
          {
            if ( (*(_BYTE *)(v77 + 21))-- == 1 )
              *(_QWORD *)v77 &= ~0x2000uLL;
            if ( !*(_QWORD *)v77 )
              GrepOnAllLocksReleased();
          }
        }
      }
    }
    GreReleaseSemaphoreExclusiveInternal(v12);
  }
  return v7;
}
