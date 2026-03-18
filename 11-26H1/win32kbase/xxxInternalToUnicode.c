/*
 * XREFs of xxxInternalToUnicode @ 0x1400E7610
 * Callers:
 *     xxxToUnicodeEx @ 0x1400E74C0 (xxxToUnicodeEx.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HKLtoPKL @ 0x1400870A0 (HKLtoPKL.c)
 *     InternalVkKeyScanEx @ 0x140087DB0 (InternalVkKeyScanEx.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIGH@Z @ 0x1400E6EB4 (-ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIGH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_hDhD @ 0x1400E7394 (WPP_RECORDER_AND_TRACE_SF_hDhD.c)
 *     Feature_IPS44834473__private_IsEnabledDeviceUsageNoInline @ 0x1400E85E0 (Feature_IPS44834473__private_IsEnabledDeviceUsageNoInline.c)
 *     GetModificationNumber @ 0x1400E861C (GetModificationNumber.c)
 *     GetModifierBits @ 0x1400E863C (GetModifierBits.c)
 *     WPP_RECORDER_AND_TRACE_SF_hD @ 0x1400E869C (WPP_RECORDER_AND_TRACE_SF_hD.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?NumPadScanCodeToHex@@YAHII@Z @ 0x140156144 (-NumPadScanCodeToHex@@YAHII@Z.c)
 *     ApiSetEditionMessageBeep @ 0x1401C16AC (ApiSetEditionMessageBeep.c)
 *     ApiSetEditionClientCharToWchar @ 0x1402273FC (ApiSetEditionClientCharToWchar.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxInternalToUnicode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        int a5,
        __int16 a6,
        char a7,
        int *a8,
        __int64 a9)
{
  __int16 v9; // bp
  unsigned int v10; // r15d
  struct tagTHREADINFO *v11; // rbx
  char v12; // si
  __int16 v13; // di
  int *v14; // r13
  __int64 v15; // r8
  _QWORD *v16; // r12
  __int64 v17; // rax
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  unsigned int v21; // edi
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  _BYTE *v25; // r14
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  unsigned __int16 v32; // ax
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  unsigned __int16 *v39; // rsi
  unsigned __int16 v40; // si
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  int v44; // edx
  int v45; // ecx
  int v46; // r8d
  __int16 v47; // bx
  int v48; // edx
  int v49; // ecx
  int v50; // r8d
  __int16 v51; // di
  int v52; // edx
  int v53; // ecx
  int v54; // r8d
  __int64 UserSessionState; // rax
  int v56; // edx
  int v57; // ecx
  int v58; // r8d
  int v59; // edx
  int v60; // ecx
  int v61; // r8d
  __int64 result; // rax
  int v63; // edx
  int v64; // ecx
  int v65; // r8d
  int v66; // edx
  int v67; // ecx
  int v68; // r8d
  int v69; // ebx
  __int64 v70; // rdx
  int v71; // ecx
  int v72; // r8d
  int ModifierBits; // r12d
  char v74; // bp
  int v75; // edx
  int v76; // r8d
  char v77; // bl
  _UNKNOWN **v78; // rcx
  bool v79; // di
  __int64 v80; // rax
  int v81; // edx
  int v82; // r8d
  int v83; // r13d
  int v84; // edx
  int v85; // ecx
  int v86; // r8d
  __int64 v87; // rax
  int v88; // ecx
  int v89; // r8d
  int v90; // edx
  __int16 v91; // bx
  int v92; // edx
  int v93; // ecx
  int v94; // r8d
  int v95; // edx
  int v96; // ecx
  int v97; // r8d
  int v98; // ecx
  char v99; // di
  bool v100; // si
  __int16 v101; // bx
  int v102; // edx
  int v103; // ecx
  int v104; // r8d
  __int64 v105; // rax
  int v106; // r8d
  int v107; // edx
  __int16 v108; // bx
  int v109; // edx
  int v110; // ecx
  int v111; // r8d
  bool v112; // di
  bool v113; // si
  __int16 v114; // bx
  int v115; // edx
  int v116; // ecx
  int v117; // r8d
  __int64 v118; // rax
  int v119; // r8d
  int v120; // edx
  int v121; // edx
  int v122; // ecx
  int v123; // r8d
  int v124; // edx
  int v125; // ecx
  int v126; // r8d
  __int64 v127; // rbx
  char v128; // al
  unsigned __int16 v129; // cx
  __int64 v130; // r8
  _BYTE *v131; // rdi
  unsigned __int8 v132; // r10
  _BYTE *v133; // rdx
  unsigned __int16 ModificationNumber; // ax
  int v135; // edx
  __int64 v136; // r8
  int v137; // r9d
  _QWORD *v138; // r11
  __int64 v139; // rsi
  __int16 v140; // ax
  bool v141; // r14
  __int16 v142; // bx
  __int64 v143; // rax
  int v144; // r8d
  int v145; // edx
  CTouchProcessor *v146; // rcx
  char v147; // r14
  char v148; // r15
  __int64 v149; // rax
  __int64 (__fastcall *v150)(__int64); // rax
  unsigned __int16 v151; // dx
  __int64 v152; // rcx
  int v153; // r14d
  int v154; // ebx
  unsigned __int16 *v155; // rdi
  unsigned __int16 v156; // dx
  int v157; // eax
  char v158; // r14
  bool v159; // r15
  __int16 v160; // bx
  __int64 v161; // rax
  int v162; // r8d
  int v163; // edx
  struct DEADKEY *v164; // rdx
  __int64 v165; // [rsp+20h] [rbp-A8h]
  __int64 v166; // [rsp+28h] [rbp-A0h]
  unsigned __int16 v167; // [rsp+30h] [rbp-98h]
  __int64 v168; // [rsp+38h] [rbp-90h]
  char v169; // [rsp+60h] [rbp-68h]
  _QWORD *v170; // [rsp+68h] [rbp-60h]
  struct tagKL *v171; // [rsp+70h] [rbp-58h]
  unsigned __int16 v172; // [rsp+D0h] [rbp+8h]
  __int16 v173; // [rsp+D8h] [rbp+10h]

  v173 = a2;
  v9 = a2;
  v10 = a1;
  v11 = PtiCurrent(a1, a2);
  v12 = a7 & 0xF7;
  if ( (unsigned int)Feature_IPS44834473__private_IsEnabledDeviceUsageNoInline() )
  {
    v13 = a6;
    if ( a6 )
      v12 = a7;
  }
  else
  {
    v13 = 0;
  }
  v14 = a8;
  v169 = v12;
  *a8 = v9 & 0x8000;
  if ( (_BYTE)v10 == 0xFF )
    return 0LL;
  if ( a9 || (v15 = *((_QWORD *)v11 + 59), (v171 = (struct tagKL *)v15) == 0LL) )
  {
    v17 = HKLtoPKL((__int64)v11, a9);
    v171 = (struct tagKL *)v17;
    v15 = v17;
    if ( !v17 )
      return 0LL;
    v16 = *(_QWORD **)(*(_QWORD *)(v17 + 48) + 32LL);
  }
  else
  {
    v16 = *(_QWORD **)(*(_QWORD *)(v15 + 48) + 32LL);
  }
  v172 = *(_WORD *)(v15 + 74);
  v170 = v16;
  if ( (unsigned int)Feature_IPS44834473__private_IsEnabledDeviceUsageNoInline() && (v12 & 8) != 0 )
  {
    v12 |= 4u;
    v172 = v13;
    v169 = v12;
  }
  v21 = v173 & 0x1FF;
  v25 = (_BYTE *)(W32GetUserSessionState(v19, v18, v20) + 14696);
  if ( (*a8 & 0x8000) != 0 )
  {
    if ( v10 == 18 )
    {
      if ( *(_WORD *)(W32GetUserSessionState(v23, v22, v24) + 14498) )
      {
        if ( *(_BYTE *)(W32GetUserSessionState(v27, v26, v28) + 14502) != 3 )
        {
          if ( *(_BYTE *)(W32GetUserSessionState(v30, v29, v31) + 14502)
            || (_InterlockedCompareExchange((volatile signed __int32 *)v11 + 130, 0, 0) & 8) == 0 )
          {
            if ( *(_BYTE *)(W32GetUserSessionState(v30, v29, v31) + 14502) )
              v39 = (unsigned __int16 *)((char *)v171 + 72);
            else
              v39 = (unsigned __int16 *)NlsOemCodePage;
            v40 = *v39;
            if ( v40 == 932 || v40 == 936 || (v37 = 949, (unsigned __int16)(v40 - 949) <= 1u) )
            {
              v45 = *(unsigned __int16 *)(W32GetUserSessionState(v37, v36, v38) + 14498);
              if ( (v45 & 0xFF00) != 0 )
              {
                v47 = *(unsigned __int8 *)(W32GetUserSessionState(v45, v44, v46) + 14499);
                v51 = v47 | (*(unsigned __int8 *)(W32GetUserSessionState(v49, v48, v50) + 14498) << 8);
                *(_WORD *)(W32GetUserSessionState(v53, v52, v54) + 14498) = v51;
              }
              else
              {
                v42 = *(unsigned __int16 *)(W32GetUserSessionState(v45, v44, v46) + 14498);
                if ( v40 != 932 || (v41 = 161, (unsigned __int16)(v42 - 161) > 0x3Eu) )
                {
                  LOWORD(v42) = v42 - 128;
                  if ( (unsigned __int16)v42 <= 0x7Fu )
                    v40 = 1252;
                }
              }
            }
            else
            {
              *(_BYTE *)(W32GetUserSessionState(949, v36, v38) + 14499) = 0;
            }
            UserSessionState = W32GetUserSessionState(v42, v41, v43);
            v32 = ApiSetEditionClientCharToWchar(v40, *(unsigned __int16 *)(UserSessionState + 14498));
            goto LABEL_37;
          }
          *a8 |= 0x4000000u;
        }
        v32 = *(_WORD *)(W32GetUserSessionState(v30, v29, v31) + 14498);
LABEL_37:
        *a4 = v32;
        *(_WORD *)(W32GetUserSessionState(v34, v33, v35) + 14500) = 0;
        *(_BYTE *)(W32GetUserSessionState(v57, v56, v58) + 14502) = 0;
        *(_WORD *)(W32GetUserSessionState(v60, v59, v61) + 14498) = 0;
        *v25 &= ~2u;
        return 1LL;
      }
      if ( *(_BYTE *)(W32GetUserSessionState(v27, v26, v28) + 14502) )
        *(_BYTE *)(W32GetUserSessionState(v64, v63, v65) + 14502) = 0;
    }
    else
    {
      v67 = *(unsigned __int16 *)(W32GetUserSessionState(v23, v22, v24) + 14500);
      if ( v10 == v67 )
        *(_WORD *)(W32GetUserSessionState(v67, v66, v68) + 14500) = 0;
    }
  }
  v69 = *a8 & 0x8000;
  if ( v69 && (v12 & 2) == 0 )
    return 0LL;
  ModifierBits = (unsigned __int16)GetModifierBits(*v16, a3);
  v74 = 1;
  if ( !v69 && ((ModifierBits & 0xFFFFFFF7) == 4 || (ModifierBits & 0xFFFFFFF7) == 5) )
  {
    if ( (v12 & 1) == 0 )
    {
      if ( *(_DWORD *)(W32GetUserSessionState(v71, v70, v72) + 14700) && v21 == 83 )
      {
        if ( (*v25 & 2) == 0 )
        {
          *(_BYTE *)(W32GetUserSessionState(v71, v70, v72) + 14502) = 2;
          *v25 |= 2u;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
            || (v77 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v77 = 0;
          }
          v78 = &WPP_RECORDER_INITIALIZED;
          v79 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v77 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_94;
          v80 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v75, v76);
          v167 = 18;
          goto LABEL_59;
        }
      }
      else if ( *(_DWORD *)(W32GetUserSessionState(v71, v70, v72) + 14700) && v21 == 78 )
      {
        if ( (*v25 & 2) == 0 )
        {
          *(_BYTE *)(W32GetUserSessionState(v71, v70, v72) + 14502) = 3;
          *v25 |= 2u;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
            || (v77 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v77 = 0;
          }
          v78 = &WPP_RECORDER_INITIALIZED;
          v79 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v77 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_94;
          v80 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v75, v76);
          v167 = 19;
LABEL_59:
          LOBYTE(v82) = v79;
          LOBYTE(v81) = v77;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v81,
            v82,
            *(_QWORD *)(v80 + 69136),
            4,
            7,
            v167,
            (__int64)&WPP_412b550d638d31fe2003a5feccdb05d1_Traceguids);
          goto LABEL_94;
        }
      }
      else
      {
        v83 = NumPadScanCodeToHex(v21, v10);
        if ( v83 >= 0 )
        {
          v85 = *(unsigned __int16 *)(W32GetUserSessionState(v71, v70, v72) + 14500);
          if ( v85 == v10 )
            return 0LL;
          v87 = W32GetUserSessionState(v85, v84, v86);
          v90 = *(unsigned __int8 *)(v87 + 14502) - 2;
          if ( *(_BYTE *)(v87 + 14502) != 2 && *(_BYTE *)(v87 + 14502) != 3 )
          {
            v91 = v83 + 10 * *(_WORD *)(W32GetUserSessionState(v88, v90, v89) + 14498);
            *(_WORD *)(W32GetUserSessionState(v93, v92, v94) + 14498) = v91;
            if ( !*(_WORD *)(W32GetUserSessionState(v96, v95, v97) + 14498) && !v83 )
              *(_BYTE *)(W32GetUserSessionState((_DWORD)v78, v75, v76) + 14502) = 1;
            v14 = a8;
            goto LABEL_95;
          }
          v98 = (int)WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
            || (v99 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v99 = 0;
          }
          v100 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v99 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v101 = *(_WORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v90, v89) + 14498);
            v105 = W32GetUserSessionState(v103, v102, v104);
            LOBYTE(v106) = v100;
            LOBYTE(v107) = v99;
            WPP_RECORDER_AND_TRACE_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v107,
              v106,
              *(_QWORD *)(v105 + 69136),
              4,
              7,
              20,
              (__int64)&WPP_412b550d638d31fe2003a5feccdb05d1_Traceguids,
              v101);
          }
          v108 = v83 + 16 * *(_WORD *)(W32GetUserSessionState(v98, v90, v89) + 14498);
          *(_WORD *)(W32GetUserSessionState(v110, v109, v111) + 14498) = v108;
          v112 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v78 = &WPP_RECORDER_INITIALIZED;
          v113 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v112 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v114 = *(_WORD *)(W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v75, v76) + 14498);
            v118 = W32GetUserSessionState(v116, v115, v117);
            LOBYTE(v119) = v113;
            LOBYTE(v120) = v112;
            WPP_RECORDER_AND_TRACE_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v120,
              v119,
              *(_QWORD *)(v118 + 69136),
              4,
              7,
              21,
              (__int64)&WPP_412b550d638d31fe2003a5feccdb05d1_Traceguids,
              v114);
          }
          v14 = a8;
LABEL_94:
          LOBYTE(v21) = v173;
LABEL_95:
          *(_WORD *)(W32GetUserSessionState((_DWORD)v78, v75, v76) + 14500) = v10;
          goto LABEL_98;
        }
        v14 = a8;
      }
    }
    *(_WORD *)(W32GetUserSessionState(v71, v70, v72) + 14500) = 0;
    *(_BYTE *)(W32GetUserSessionState(v122, v121, v123) + 14502) = 0;
    *(_WORD *)(W32GetUserSessionState(v125, v124, v126) + 14498) = 0;
    LOWORD(ModifierBits) = ModifierBits & 0xFFFB;
    *v25 &= ~2u;
  }
LABEL_98:
  if ( v10 == 8 && (v170[10] & 4) != 0 )
  {
    v127 = a3;
    v128 = *(_BYTE *)(a3 + 40);
    if ( (v128 & 1) != 0 )
    {
      *a4 = 8206;
      return 1LL;
    }
    if ( (v128 & 4) != 0 )
    {
      *a4 = 8207;
      return 1LL;
    }
  }
  else
  {
    if ( (_WORD)v10 == 231 && !(_BYTE)v21 )
    {
      v129 = *((_WORD *)PtiCurrent(8LL, v70) + 457);
LABEL_107:
      *a4 = v129;
      return 1LL;
    }
    v127 = a3;
  }
  v130 = v170[1];
  if ( !v130 )
    return 0LL;
LABEL_110:
  v131 = *(_BYTE **)v130;
  if ( !*(_QWORD *)v130 )
    return 0LL;
  while ( 1 )
  {
    if ( !*v131 )
    {
      v130 += 16LL;
      goto LABEL_110;
    }
    if ( *v131 == (_BYTE)v10 )
      break;
    v131 += *(unsigned __int8 *)(v130 + 9);
  }
  v132 = v131[1];
  v133 = (_BYTE *)(v127 + 5);
  if ( (v132 & 8) != 0 && (*v133 & 8) != 0 )
  {
    LOWORD(ModifierBits) = ModifierBits | 8;
    goto LABEL_124;
  }
  if ( (((ModifierBits & 0xFFFE) == 0) & v132) != 0 && (*v133 & 2) != 0 )
  {
LABEL_123:
    LOWORD(ModifierBits) = ModifierBits ^ 1;
    goto LABEL_124;
  }
  if ( ((v132 >> 2) & ((ModifierBits & 6) == 6)) != 0 && (*v133 & 2) != 0 )
  {
    v133 = (_BYTE *)(v127 + 5);
    goto LABEL_123;
  }
LABEL_124:
  if ( (v132 & 2) != 0 && (ModifierBits & 0xFFFE) == 0 && (*v133 & 2) != 0 )
    v131 += *(unsigned __int8 *)(v130 + 9);
  ModificationNumber = GetModificationNumber(*v170, (unsigned __int16)ModifierBits);
  v139 = ModificationNumber;
  if ( ModificationNumber == 15 )
    return 0LL;
  if ( ModificationNumber >= *(unsigned __int8 *)(v136 + 8)
    || (v140 = *(_WORD *)&v131[2 * ModificationNumber + 2], v140 == -4096) )
  {
    if ( (((_WORD)ModifierBits - 2) & 0xFFF6) == 0 )
    {
      if ( v10 - 65 <= 0x19 )
      {
        *a4 = v10 & 0x1F;
        return 1LL;
      }
      if ( v10 - 65377 <= 0x30 )
      {
        *a4 = InternalVkKeyScanEx(v10, v138, v136) & 0x1F;
        return 1LL;
      }
    }
    return 0LL;
  }
  if ( v140 != -4095 )
  {
    if ( v140 != -4094 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || (v158 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v158 = v137;
      }
      v159 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v158 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v160 = *(_WORD *)&v131[2 * v139 + 2];
        v161 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v135, v136);
        LOBYTE(v162) = v159;
        LOBYTE(v163) = v158;
        WPP_RECORDER_AND_TRACE_SF_hD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v163,
          v162,
          *(_QWORD *)(v161 + 69136),
          v165,
          v166,
          24,
          v168,
          v160,
          v160);
      }
      goto LABEL_181;
    }
    if ( *((_WORD *)v138 + 41) != (_WORD)v137 )
    {
      v152 = v138[11];
      if ( v152 )
      {
        while ( *(_BYTE *)v152 )
        {
          v153 = v137;
          v154 = v137;
          if ( *(_BYTE *)v152 == *v131 && *(_WORD *)(v152 + 2) == (_WORD)v139 )
          {
            if ( *((_BYTE *)v138 + 84) > (unsigned __int8)v137 )
            {
              v155 = (unsigned __int16 *)(v152 + 4);
              do
              {
                if ( v154 >= a5 )
                  break;
                v156 = *v155;
                if ( *v155 == 0xF000 )
                  break;
                if ( v172 )
                {
                  v157 = ComposeDeadKeys(
                           v171,
                           (struct DEADKEY *)v138[2],
                           v156,
                           &a4[v154],
                           a5 - v154,
                           v169,
                           v172,
                           *v14 & 0x8000);
                  v138 = v170;
                  if ( v157 > 0 )
                    v154 += v157;
                }
                else
                {
                  a4[v154++] = v156;
                }
                ++v153;
                ++v155;
              }
              while ( v153 < *((unsigned __int8 *)v138 + 84) );
              if ( v154 )
                *v14 |= 0x8000000u;
            }
            return (unsigned int)v154;
          }
          v152 += *((unsigned __int8 *)v138 + 85);
        }
      }
    }
    ApiSetEditionMessageBeep();
    return 0LL;
  }
  v131 += *(unsigned __int8 *)(v136 + 9);
  if ( !v172 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v74 = v137;
    }
    v141 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v74 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v142 = *(_WORD *)&v131[2 * v139 + 2];
      v143 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v135, v136);
      LOBYTE(v144) = v141;
      LOBYTE(v145) = v74;
      WPP_RECORDER_AND_TRACE_SF_hD(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v145,
        v144,
        *(_QWORD *)(v143 + 69136),
        v165,
        v166,
        22,
        v168,
        v142,
        v142);
    }
LABEL_149:
    v151 = *(_WORD *)&v131[2 * v139 + 2];
    *a4 = v151;
    if ( (*v14 & 0x8000) == 0 && (v169 & 4) == 0 )
      *((_WORD *)v171 + 37) = v151;
    return 0xFFFFFFFFLL;
  }
  v146 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || (v147 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v147 = v137;
  }
  v148 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v147 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v149 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v135, v136);
    WPP_RECORDER_AND_TRACE_SF_hDhD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v147,
      v148,
      *(_QWORD *)(v149 + 69136),
      v165,
      v166,
      0x17u,
      v168);
  }
  v150 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v146) + 48) + 3632LL);
  if ( v150 && (v150(1024LL) & 0x8000) != 0 )
    goto LABEL_149;
LABEL_181:
  v164 = (struct DEADKEY *)v170[2];
  if ( !v164 || !v172 )
  {
    v129 = *(_WORD *)&v131[2 * v139 + 2];
    goto LABEL_107;
  }
  result = ComposeDeadKeys(v171, v164, *(_WORD *)&v131[2 * v139 + 2], a4, a5, v169, v172, *v14 & 0x8000);
  if ( (_DWORD)result )
    *v14 |= 0x8000000u;
  return result;
}
