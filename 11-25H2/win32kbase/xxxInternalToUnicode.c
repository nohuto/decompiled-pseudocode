/*
 * XREFs of xxxInternalToUnicode @ 0x1400A04D0
 * Callers:
 *     xxxToUnicodeEx @ 0x1400A03C0 (xxxToUnicodeEx.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     InternalVkKeyScanEx @ 0x14009EF60 (InternalVkKeyScanEx.c)
 *     WPP_RECORDER_AND_TRACE_SF_hDhD @ 0x14009F9B0 (WPP_RECORDER_AND_TRACE_SF_hDhD.c)
 *     ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x14009FAF0 (-ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z.c)
 *     ?NumPadScanCodeToHex@@YAHII@Z @ 0x1400A0238 (-NumPadScanCodeToHex@@YAHII@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_hD @ 0x1400A02A4 (WPP_RECORDER_AND_TRACE_SF_hD.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ApiSetEditionClientCharToWchar @ 0x140194D18 (ApiSetEditionClientCharToWchar.c)
 *     ApiSetEditionMessageBeep @ 0x140195F78 (ApiSetEditionMessageBeep.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 *     ??B?$SGKEYBOARDgfEnableHexNumpad@I@@QEBAIXZ @ 0x1402177FC (--B-$SGKEYBOARDgfEnableHexNumpad@I@@QEBAIXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxInternalToUnicode(
        unsigned int a1,
        __int16 a2,
        __int64 a3,
        unsigned __int16 *a4,
        int a5,
        char a6,
        int *a7,
        __int64 a8)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v11; // rbp
  _QWORD *v12; // rcx
  char v13; // si
  _QWORD *v14; // rdi
  int v15; // ebx
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  _BYTE *v19; // r14
  char v20; // r11
  unsigned __int16 v21; // bp
  unsigned __int8 *v22; // r8
  unsigned __int8 i; // al
  __int64 v24; // rdx
  __int64 v25; // r8
  _BYTE *v26; // r14
  int v27; // r12d
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 result; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  _QWORD *v36; // rax
  unsigned __int16 v37; // cx
  unsigned __int8 v38; // r10
  _BYTE *v39; // rdx
  char v40; // al
  unsigned __int8 **v41; // rcx
  __int64 v42; // r12
  __int16 v43; // bx
  char v44; // bp
  bool v45; // r15
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  struct DEADKEY *v49; // rdx
  bool v50; // bp
  __int16 v51; // bx
  __int64 v52; // rax
  int v53; // r8d
  int v54; // edx
  unsigned __int16 v55; // dx
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdx
  unsigned __int16 v62; // bp
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rdx
  bool v66; // r14
  _UNKNOWN **v67; // rcx
  bool v68; // r13
  __int16 v69; // bx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  int v73; // r8d
  int v74; // edx
  void *v75; // rcx
  char v76; // bp
  char v77; // r15
  __int64 v78; // rax
  __int64 (__fastcall *v79)(__int64); // rax
  __int64 v80; // rdx
  _UNKNOWN **v81; // rcx
  char v82; // bl
  bool v83; // r14
  int v84; // edx
  int v85; // r8d
  __int64 v86; // r9
  __int64 v87; // rax
  unsigned int v88; // eax
  __int64 v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rcx
  unsigned __int16 v92; // bx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int16 v95; // di
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 UserSessionState; // rax
  unsigned __int16 v101; // ax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // rcx
  int v108; // ebp
  int v109; // ebx
  unsigned __int16 *v110; // r14
  unsigned __int16 v111; // dx
  __int16 v112; // bx
  __int64 v113; // rdx
  __int64 v114; // rcx
  bool v115; // r14
  bool v116; // r12
  __int16 v117; // bx
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // rax
  __int16 v123; // bx
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // rax
  int v127; // r8d
  int v128; // edx
  int v129; // eax
  int v130; // [rsp+20h] [rbp-88h]
  int v131; // [rsp+28h] [rbp-80h]
  __int16 v132; // [rsp+30h] [rbp-78h]
  int v133; // [rsp+38h] [rbp-70h]
  __int64 v134; // [rsp+60h] [rbp-48h]

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
  if ( CurrentThreadNonPaged )
    v11 = *CurrentThreadNonPaged;
  else
    v11 = 0LL;
  *a7 = a2 & 0x8000;
  if ( (_BYTE)a1 == 0xFF )
    return 0LL;
  v12 = (_QWORD *)(v11 + 480);
  v13 = 1;
  if ( a8 || (v14 = (_QWORD *)*v12) == 0LL )
  {
    v12 = (_QWORD *)*v12;
    v36 = 0LL;
    if ( !v12 )
      return 0LL;
    v14 = v12;
    if ( a8 )
    {
      if ( a8 == 1 )
      {
        while ( 1 )
        {
          v14 = (_QWORD *)v14[2];
          if ( (v14[4] & 0x20000000) == 0 )
            break;
          if ( v14 == v12 )
            return 0LL;
        }
      }
      else
      {
        if ( (a8 & 0xFFFF0000) != 0 )
        {
          do
          {
            if ( v14[5] == a8 )
            {
              if ( *((int *)v14 + 8) >= 0 )
                goto LABEL_37;
              v36 = v14;
            }
            v14 = (_QWORD *)v14[2];
          }
          while ( v14 != v12 );
        }
        else
        {
          do
          {
            if ( *((_WORD *)v14 + 20) == (_WORD)a8 )
            {
              if ( *((int *)v14 + 8) >= 0 )
                goto LABEL_37;
              v36 = v14;
            }
            v14 = (_QWORD *)v14[2];
          }
          while ( v14 != v12 );
        }
        v14 = v36;
      }
    }
    else
    {
      while ( 1 )
      {
        v14 = (_QWORD *)v14[3];
        if ( (v14[4] & 0x20000000) == 0 )
          break;
        if ( v14 == v12 )
          return 0LL;
      }
    }
LABEL_37:
    if ( !v14 )
      return 0LL;
  }
  v15 = a2 & 0x1FF;
  v16 = *(_QWORD *)(v14[6] + 32LL);
  v134 = v16;
  v19 = (_BYTE *)(W32GetUserSessionState(v12, 0LL) + 14704);
  if ( (*a7 & 0x8000) != 0 )
  {
    if ( a1 == 18 )
    {
      if ( *(_WORD *)(W32GetUserSessionState(v18, v17) + 14506) )
      {
        if ( *(_BYTE *)(W32GetUserSessionState(0LL, v56) + 14510) == 3 )
        {
          v101 = *(_WORD *)(W32GetUserSessionState(v58, v57) + 14506);
        }
        else if ( *(_BYTE *)(W32GetUserSessionState(v58, v57) + 14510)
               || (v60 = 8LL, (_InterlockedCompareExchange((volatile signed __int32 *)(v11 + 528), 0, 0) & 8) == 0) )
        {
          if ( *(_BYTE *)(W32GetUserSessionState(v60, v59) + 14510) )
            v62 = *((_WORD *)v14 + 36);
          else
            v62 = NlsOemCodePage;
          v88 = v62;
          v89 = 18LL;
          if ( (unsigned __int16)(v62 - 932) <= 0x12u
            && (v89 = 393233LL, LOWORD(v88) = v62 - 932, _bittest((const int *)&v89, v88)) )
          {
            v91 = *(unsigned __int16 *)(W32GetUserSessionState(393233LL, v61) + 14506);
            if ( (v91 & 0xFF00) != 0 )
            {
              v92 = *(_WORD *)(W32GetUserSessionState(v91, v90) + 14506);
              v95 = HIBYTE(v92) | (*(unsigned __int8 *)(W32GetUserSessionState(v94, v93) + 14506) << 8);
              *(_WORD *)(W32GetUserSessionState(v97, v96) + 14506) = v95;
            }
            else
            {
              v99 = *(unsigned __int16 *)(W32GetUserSessionState(v91, v90) + 14506);
              if ( v62 != 932 || (v98 = 161LL, (unsigned __int16)(v99 - 161) > 0x3Eu) )
              {
                LOWORD(v99) = v99 - 128;
                if ( (unsigned __int16)v99 <= 0x7Fu )
                  v62 = 1252;
              }
            }
          }
          else
          {
            *(_BYTE *)(W32GetUserSessionState(v89, v61) + 14507) = 0;
          }
          UserSessionState = W32GetUserSessionState(v99, v98);
          v101 = ApiSetEditionClientCharToWchar(v62, *(unsigned __int16 *)(UserSessionState + 14506));
        }
        else
        {
          *a7 |= 0x4000000u;
          v101 = *(_WORD *)(W32GetUserSessionState(8LL, v59) + 14506);
        }
        *a4 = v101;
        *(_WORD *)(W32GetUserSessionState(v103, v102) + 14508) = 0;
        *(_BYTE *)(W32GetUserSessionState(v105, v104) + 14510) = 0;
        *(_WORD *)(W32GetUserSessionState(v107, v106) + 14506) = 0;
        *v19 &= ~2u;
        return 1LL;
      }
      if ( *(_BYTE *)(W32GetUserSessionState(0LL, v56) + 14510) )
        *(_BYTE *)(W32GetUserSessionState(v18, v17) + 14510) = 0;
    }
    else
    {
      v18 = *(unsigned __int16 *)(W32GetUserSessionState(v18, v17) + 14508);
      if ( a1 == (_DWORD)v18 )
        *(_WORD *)(W32GetUserSessionState(v18, v17) + 14508) = 0;
    }
  }
  v20 = a6;
  LOBYTE(v18) = (*a7 & 0x8000) != 0;
  if ( ((unsigned __int8)v18 & ((a6 & 2) == 0)) != 0 )
    return 0LL;
  v21 = 0;
  v22 = **(unsigned __int8 ***)v16;
  for ( i = *v22; *v22; i = *v22 )
  {
    v18 = 2 * (i & 3u);
    v17 = (unsigned int)(1 << (2 * (i & 3)));
    if ( ((unsigned __int8)v17 & *(_BYTE *)(((unsigned __int64)i >> 2) + a3)) != 0 )
      v21 |= v22[1];
    v22 += 2;
  }
  if ( (*a7 & 0x8000) == 0 && (v21 & 0xFFF7u) - 4 <= 1 )
  {
    if ( (a6 & 1) != 0 )
      goto LABEL_30;
    if ( (unsigned int)SGKEYBOARDgfEnableHexNumpad<unsigned int>::operator unsigned int() && v15 == 83 )
    {
      if ( (*v19 & 2) != 0 )
        goto LABEL_30;
      *(_BYTE *)(W32GetUserSessionState(v18, v17) + 14510) = 2;
      *v19 |= 2u;
      v81 = (_UNKNOWN **)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || (v82 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v82 = 0;
      }
      v83 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v82 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v86 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v80) + 69144);
        v132 = 18;
LABEL_133:
        LOBYTE(v85) = v83;
        LOBYTE(v84) = v82;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v84,
          v85,
          v86,
          4,
          7,
          v132,
          (__int64)&WPP_5fbfae4165f0392cbd36d51c18a80319_Traceguids);
      }
    }
    else if ( (unsigned int)SGKEYBOARDgfEnableHexNumpad<unsigned int>::operator unsigned int() && v15 == 78 )
    {
      if ( (*v19 & 2) != 0 )
        goto LABEL_30;
      *(_BYTE *)(W32GetUserSessionState(v18, v17) + 14510) = 3;
      *v19 |= 2u;
      v81 = (_UNKNOWN **)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || (v82 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v82 = 0;
      }
      v83 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v82 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v86 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v80) + 69144);
        v132 = 19;
        goto LABEL_133;
      }
    }
    else
    {
      v27 = NumPadScanCodeToHex(a2 & 0x1FF, a1);
      if ( v27 < 0 )
      {
LABEL_30:
        *(_WORD *)(W32GetUserSessionState(v18, v17) + 14508) = 0;
        *(_BYTE *)(W32GetUserSessionState(v32, v31) + 14510) = 0;
        v35 = W32GetUserSessionState(v34, v33);
        v20 = a6;
        *(_WORD *)(v35 + 14506) = 0;
        v21 &= ~4u;
        *v19 &= ~2u;
        goto LABEL_13;
      }
      v29 = *(unsigned __int16 *)(W32GetUserSessionState(v18, v17) + 14508);
      if ( (_DWORD)v29 == a1 )
        return 0LL;
      v63 = W32GetUserSessionState(v29, v28);
      v65 = (unsigned int)*(unsigned __int8 *)(v63 + 14510) - 2;
      if ( *(_BYTE *)(v63 + 14510) == 2 || *(_BYTE *)(v63 + 14510) == 3 )
      {
        v66 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v67 = &WPP_RECORDER_INITIALIZED;
        v68 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v66 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v69 = *(_WORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v65) + 14506);
          v72 = W32GetUserSessionState(v71, v70);
          LOBYTE(v73) = v68;
          LOBYTE(v74) = v66;
          WPP_RECORDER_AND_TRACE_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v74,
            v73,
            *(_QWORD *)(v72 + 69144),
            4,
            7,
            20,
            (__int64)&WPP_5fbfae4165f0392cbd36d51c18a80319_Traceguids,
            v69);
        }
        v112 = v27 + 16 * *(_WORD *)(W32GetUserSessionState(v67, v65) + 14506);
        *(_WORD *)(W32GetUserSessionState(v114, v113) + 14506) = v112;
        v115 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v81 = &WPP_RECORDER_INITIALIZED;
        v116 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v115 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v123 = *(_WORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v80) + 14506);
          v126 = W32GetUserSessionState(v125, v124);
          LOBYTE(v127) = v116;
          LOBYTE(v128) = v115;
          WPP_RECORDER_AND_TRACE_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v128,
            v127,
            *(_QWORD *)(v126 + 69144),
            4,
            7,
            21,
            (__int64)&WPP_5fbfae4165f0392cbd36d51c18a80319_Traceguids,
            v123);
        }
        v16 = v134;
      }
      else
      {
        v117 = v27 + 10 * *(_WORD *)(W32GetUserSessionState(v64, v65) + 14506);
        *(_WORD *)(W32GetUserSessionState(v119, v118) + 14506) = v117;
        v122 = W32GetUserSessionState(v121, v120);
        v81 = 0LL;
        if ( !*(_WORD *)(v122 + 14506) && !v27 )
          *(_BYTE *)(W32GetUserSessionState(0LL, v80) + 14510) = 1;
      }
    }
    v87 = W32GetUserSessionState(v81, v80);
    LOBYTE(v15) = a2;
    v20 = a6;
    *(_WORD *)(v87 + 14508) = a1;
  }
LABEL_13:
  if ( a1 == 8 && (*(_DWORD *)(v16 + 80) & 4) != 0 )
  {
    v24 = a3;
    v40 = *(_BYTE *)(a3 + 40);
    if ( (v40 & 1) != 0 )
    {
      *a4 = 8206;
      return 1LL;
    }
    if ( (v40 & 4) != 0 )
    {
      *a4 = 8207;
      return 1LL;
    }
  }
  else
  {
    if ( (_WORD)a1 == 231 && !(_BYTE)v15 )
    {
      v37 = *((_WORD *)PtiCurrent() + 461);
      goto LABEL_41;
    }
    v24 = a3;
  }
  v25 = *(_QWORD *)(v16 + 8);
  if ( !v25 )
    return 0LL;
LABEL_17:
  v26 = *(_BYTE **)v25;
  if ( !*(_QWORD *)v25 )
    return 0LL;
  while ( 1 )
  {
    if ( !*v26 )
    {
      v25 += 16LL;
      goto LABEL_17;
    }
    if ( *v26 == (_BYTE)a1 )
      break;
    v26 += *(unsigned __int8 *)(v25 + 9);
  }
  v38 = v26[1];
  v39 = (_BYTE *)(v24 + 5);
  if ( (v38 & 8) != 0 && (*v39 & 8) != 0 )
  {
    v21 |= 8u;
  }
  else if ( (((v21 & 0xFFFE) == 0) & v38) != 0 && (*v39 & 2) != 0
         || ((v38 >> 2) & ((v21 & 6) == 6)) != 0 && (*v39 & 2) != 0 )
  {
    v21 ^= 1u;
  }
  if ( ((v38 >> 1) & ((v21 & 0xFFFE) == 0)) != 0 && (*v39 & 2) != 0 )
    v26 += *(unsigned __int8 *)(v25 + 9);
  v41 = *(unsigned __int8 ***)v16;
  if ( v21 > *(_WORD *)(*(_QWORD *)v16 + 8LL) )
    return 0LL;
  _mm_lfence();
  v42 = *((unsigned __int8 *)v41 + v21 + 10);
  if ( (_DWORD)v42 == 15 )
    return 0LL;
  if ( (unsigned __int16)v42 >= *(unsigned __int8 *)(v25 + 8) || (v43 = *(_WORD *)&v26[2 * v42 + 2], v43 == -4096) )
  {
    if ( ((v21 - 2) & 0xFFF6) == 0 )
    {
      if ( a1 <= 0x5A && a1 >= 0x41 )
      {
        *a4 = a1 & 0x1F;
        return 1LL;
      }
      if ( a1 >= 0xFF61 && a1 <= 0xFF91 )
      {
        *a4 = InternalVkKeyScanEx((unsigned __int16)a1, (_QWORD *)v16) & 0x1F;
        return 1LL;
      }
    }
    return 0LL;
  }
  if ( v43 != -4095 )
  {
    if ( v43 != -4094 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || (v44 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v44 = 0;
      }
      v45 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v44 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v46 = W32GetUserSessionState(WPP_GLOBAL_Control, v39);
        LOBYTE(v47) = v45;
        LOBYTE(v48) = v44;
        WPP_RECORDER_AND_TRACE_SF_hD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v48,
          v47,
          *(_QWORD *)(v46 + 69144),
          v130,
          v131,
          24,
          v133,
          v43,
          v43);
      }
      goto LABEL_64;
    }
    if ( *(_WORD *)(v16 + 82) )
    {
      v41 = *(unsigned __int8 ***)(v16 + 88);
      if ( v41 )
      {
        while ( *(_BYTE *)v41 )
        {
          v108 = 0;
          v109 = 0;
          if ( *(_BYTE *)v41 == *v26 && *((_WORD *)v41 + 1) == (_WORD)v42 )
          {
            if ( *(_BYTE *)(v16 + 84) )
            {
              v110 = (unsigned __int16 *)v41 + 2;
              do
              {
                if ( v109 >= a5 )
                  break;
                v111 = *v110;
                if ( *v110 == 0xF000 )
                  break;
                if ( *((_WORD *)v14 + 37) )
                {
                  v129 = ComposeDeadKeys(
                           (struct tagKL *)v14,
                           *(struct DEADKEY **)(v16 + 16),
                           v111,
                           &a4[v109],
                           a5 - v109,
                           v20,
                           *a7 & 0x8000);
                  if ( v129 > 0 )
                    v109 += v129;
                }
                else
                {
                  a4[v109++] = v111;
                }
                ++v108;
                v20 = a6;
                ++v110;
              }
              while ( v108 < *(unsigned __int8 *)(v16 + 84) );
              if ( v109 )
                *a7 |= 0x8000000u;
            }
            return (unsigned int)v109;
          }
          v41 = (unsigned __int8 **)((char *)v41 + *(unsigned __int8 *)(v16 + 85));
        }
      }
    }
    ApiSetEditionMessageBeep(v41, v39, v25, 0LL);
    return 0LL;
  }
  v26 += *(unsigned __int8 *)(v25 + 9);
  if ( *((_WORD *)v14 + 37) )
  {
    v75 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || (v76 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v76 = 0;
    }
    v77 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v76 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v78 = W32GetUserSessionState(WPP_GLOBAL_Control, v39);
      WPP_RECORDER_AND_TRACE_SF_hDhD(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v76,
        v77,
        *(_QWORD *)(v78 + 69144),
        v130,
        v131,
        0x17u,
        v133);
    }
    v79 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v75, v39) + 48) + 4080LL);
    if ( !v79 || (v79(1024LL) & 0x8000) == 0 )
    {
      v16 = v134;
LABEL_64:
      v49 = *(struct DEADKEY **)(v16 + 16);
      if ( v49 && *((_WORD *)v14 + 37) )
      {
        result = ComposeDeadKeys((struct tagKL *)v14, v49, *(_WORD *)&v26[2 * v42 + 2], a4, a5, a6, *a7 & 0x8000);
        if ( (_DWORD)result )
          *a7 |= 0x8000000u;
        return result;
      }
      v37 = *(_WORD *)&v26[2 * v42 + 2];
LABEL_41:
      *a4 = v37;
      return 1LL;
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v13 = 0;
    }
    v50 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v51 = *(_WORD *)&v26[2 * v42 + 2];
      v52 = W32GetUserSessionState(WPP_GLOBAL_Control, v39);
      LOBYTE(v53) = v50;
      LOBYTE(v54) = v13;
      WPP_RECORDER_AND_TRACE_SF_hD(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v54,
        v53,
        *(_QWORD *)(v52 + 69144),
        v130,
        v131,
        22,
        v133,
        v51,
        v51);
    }
  }
  v55 = *(_WORD *)&v26[2 * v42 + 2];
  *a4 = v55;
  if ( (*a7 & 0x8000) == 0 && (a6 & 4) == 0 )
    *((_WORD *)v14 + 37) = v55;
  return 0xFFFFFFFFLL;
}
