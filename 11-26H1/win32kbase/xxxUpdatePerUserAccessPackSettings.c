/*
 * XREFs of xxxUpdatePerUserAccessPackSettings @ 0x1400DFA30
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1400DF460 (-MKHideMouseCursor@@YAXXZ.c)
 *     ?CalculateMouseTable@@YAXXZ @ 0x1400DF500 (-CalculateMouseTable@@YAXXZ.c)
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1400DF600 (-AccessTimeOutReset@@YAXXZ.c)
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1400DF670 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     FastGetProfileIntW @ 0x1400E1740 (FastGetProfileIntW.c)
 *     FastGetProfileStringW @ 0x1400E1B40 (FastGetProfileStringW.c)
 *     OpenCacheKeyEx @ 0x1400E1D30 (OpenCacheKeyEx.c)
 *     GetProcessLuid @ 0x1400E2240 (GetProcessLuid.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400E2300 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?MKShowMouseCursor@@YAXXZ @ 0x1401C5720 (-MKShowMouseCursor@@YAXXZ.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1401C6AA0 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall xxxUpdatePerUserAccessPackSettings(const UNICODE_STRING *a1, int a2, int a3)
{
  char v3; // bl
  __int64 UserSessionState; // r15
  int v6; // esi
  int v7; // r13d
  char v8; // di
  int v9; // edi
  char v10; // r12
  int v11; // r12d
  int v12; // ebx
  char v13; // al
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  char v17; // al
  __int64 v18; // rax
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  __int64 v22; // rax
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  __int64 v26; // rax
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  __int64 v30; // rax
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  __int64 v34; // rax
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  __int64 v38; // rax
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  __int64 v42; // rax
  int v43; // edx
  int v44; // ecx
  int v45; // r8d
  __int64 v46; // rax
  int v47; // edx
  int v48; // ecx
  int v49; // r8d
  __int64 v50; // rax
  int v51; // edx
  int v52; // ecx
  int v53; // r8d
  __int64 v54; // rax
  int v55; // edx
  int v56; // ecx
  int v57; // r8d
  __int64 v58; // rax
  int v59; // edx
  int v60; // ecx
  int v61; // r8d
  __int64 v62; // rax
  int v63; // edx
  int v64; // ecx
  int v65; // r8d
  __int64 v66; // rax
  int v67; // edx
  int v68; // ecx
  int v69; // r8d
  int v70; // edx
  volatile signed __int32 *v71; // rcx
  int v72; // r8d
  __int64 v73; // rax
  int v74; // edx
  int v75; // ecx
  int v76; // r8d
  __int64 v77; // rax
  int v78; // edx
  int v79; // ecx
  int v80; // r8d
  __int64 v81; // rax
  int v82; // edx
  int v83; // ecx
  int v84; // r8d
  __int64 v85; // rax
  int v86; // edx
  int v87; // ecx
  int v88; // r8d
  unsigned int v89; // eax
  int v90; // edx
  int v91; // ecx
  int v92; // r8d
  __int64 v93; // rax
  int v94; // edx
  int v95; // ecx
  int v96; // r8d
  int v97; // ebx
  int v98; // edx
  int v99; // ecx
  int v100; // r8d
  __int64 v101; // rax
  int v102; // edx
  int v103; // ecx
  int v104; // r8d
  unsigned int v105; // eax
  int v106; // edx
  int v107; // ecx
  int v108; // r8d
  unsigned int v109; // eax
  _DWORD *v110; // rbx
  int v111; // edx
  int v112; // ecx
  int v113; // r8d
  int v114; // edx
  int v115; // ecx
  int v116; // r8d
  __int64 v117; // rbx
  int v118; // edx
  int v119; // ecx
  int v120; // r8d
  unsigned __int64 v121; // rcx
  int v122; // edx
  int v123; // r8d
  __int64 v124; // rax
  int v125; // edi
  int v126; // edx
  int v127; // r8d
  int v128; // edx
  int v129; // ecx
  int v130; // r8d
  int v131; // edx
  int v132; // ecx
  int v133; // r8d
  int v134; // edx
  int v135; // ecx
  int v136; // r8d
  int v137; // edx
  int v138; // ecx
  int v139; // r8d
  unsigned int v140; // eax
  int v141; // edx
  int v142; // ecx
  int v143; // r8d
  int v144; // edx
  int v145; // ecx
  int v146; // r8d
  unsigned int v147; // eax
  int v148; // edx
  int v149; // ecx
  int v150; // r8d
  int v151; // edx
  int v152; // ecx
  int v153; // r8d
  int v154; // edx
  int v155; // ecx
  int v156; // r8d
  unsigned int v157; // eax
  int v158; // ecx
  void *v159; // rdi
  __int64 v160; // rbx
  NTSTATUS v161; // eax
  __int64 v162; // rdx
  __int64 v163; // r8
  __int64 v164; // r9
  int v165; // ecx
  int v166; // esi
  int v167; // edx
  int v168; // ecx
  int v169; // r8d
  int v170; // edx
  int v171; // ecx
  int v172; // r8d
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rax
  __int64 v176; // rax
  int v177; // edx
  int v178; // ecx
  int v179; // r8d
  __int64 v180; // rax
  __int64 v181; // rax
  int v182; // ebx
  int v183; // edx
  int v184; // ecx
  int v185; // r8d
  int v186; // edx
  int v187; // ecx
  int v188; // r8d
  int v189; // ebx
  int v190; // edx
  int v191; // ecx
  int v192; // r8d
  int v193; // edx
  int v194; // ecx
  int v195; // r8d
  int v196; // edx
  int v197; // ecx
  int v198; // r8d
  __int64 v199; // rax
  int v200; // ebx
  int v201; // edx
  int v202; // ecx
  int v203; // r8d
  int v204; // edx
  int v205; // ecx
  int v206; // r8d
  int v207; // ebx
  int v208; // edx
  int v209; // ecx
  int v210; // r8d
  int v211; // edx
  int v212; // ecx
  int v213; // r8d
  int v214; // ebx
  int v215; // edx
  int v216; // ecx
  int v217; // r8d
  int v218; // edx
  int v219; // ecx
  int v220; // r8d
  int v221; // ebx
  int v222; // edx
  int v223; // ecx
  int v224; // r8d
  int v225; // edx
  int v226; // ecx
  int v227; // r8d
  __int64 v228; // rax
  int v229; // ebx
  int v230; // edx
  int v231; // ecx
  int v232; // r8d
  int v233; // edx
  int v234; // ecx
  int v235; // r8d
  int v236; // ebx
  int v237; // edx
  int v238; // ecx
  int v239; // r8d
  __int64 v240; // rax
  __int64 v241; // rax
  __int64 v242; // rax
  __int64 v243; // rax
  __int64 v244; // rax
  __int64 v245; // rax
  __int64 v246; // rax
  __int64 v247; // rax
  int v248; // edx
  __int64 v249; // rcx
  int v250; // r8d
  __int64 v251; // rcx
  __int64 v252; // rbx
  int v253; // edx
  int v254; // r8d
  int v255; // edx
  __int64 v256; // rcx
  int v257; // r8d
  int v258; // edx
  int v259; // r8d
  PULONG ResultLength; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengtha; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengthb; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengthc; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengthd; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengthe; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengthf; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengthg; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengthh; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengthm; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengthi; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengthj; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengthk; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengthl; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengthn; // [rsp+30h] [rbp-D8h]
  _QWORD DestinationString[3]; // [rsp+48h] [rbp-C0h] BYREF
  ULONG Length; // [rsp+60h] [rbp-A8h] BYREF
  int v277; // [rsp+64h] [rbp-A4h]
  int v278; // [rsp+68h] [rbp-A0h]
  int v279; // [rsp+6Ch] [rbp-9Ch]
  __int64 v280; // [rsp+70h] [rbp-98h]
  struct _LUID AuthenticationId; // [rsp+78h] [rbp-90h] BYREF
  WCHAR SourceString[40]; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int16 v283[128]; // [rsp+D8h] [rbp-30h] BYREF

  v3 = 0;
  AuthenticationId = 0LL;
  LODWORD(DestinationString[0]) = 0;
  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
  GetProcessLuid(0LL, &AuthenticationId);
  if ( AuthenticationId.LowPart != 999 || (v6 = 1, AuthenticationId.HighPart) )
    v6 = 0;
  LODWORD(ResultLength) = 40;
  *(_OWORD *)&DestinationString[1] = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, SourceString, (unsigned __int64)ResultLength, 0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], SourceString);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&DestinationString[1], 0xAu, (PULONG)DestinationString);
  }
  LODWORD(ResultLengtha) = 40;
  v7 = DestinationString[0] & 1;
  *(_OWORD *)&DestinationString[1] = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, SourceString, (unsigned __int64)ResultLengtha, 0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], SourceString);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&DestinationString[1], 0xAu, (PULONG)DestinationString);
    v8 = DestinationString[0];
  }
  else
  {
    v8 = 0;
    LODWORD(DestinationString[0]) = 0;
  }
  LODWORD(ResultLengthb) = 40;
  v9 = v8 & 1;
  *(_OWORD *)&DestinationString[1] = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, SourceString, (unsigned __int64)ResultLengthb, 0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], SourceString);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&DestinationString[1], 0xAu, (PULONG)DestinationString);
    v10 = DestinationString[0];
  }
  else
  {
    v10 = 0;
    LODWORD(DestinationString[0]) = 0;
  }
  LODWORD(ResultLengthc) = 40;
  v11 = v10 & 1;
  *(_OWORD *)&DestinationString[1] = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, SourceString, (unsigned __int64)ResultLengthc, 0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], SourceString);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&DestinationString[1], 0xAu, (PULONG)DestinationString);
    v3 = DestinationString[0];
  }
  else
  {
    LODWORD(DestinationString[0]) = 0;
  }
  LODWORD(ResultLengthd) = 40;
  v12 = v3 & 1;
  LODWORD(v280) = v12;
  *(_OWORD *)&DestinationString[1] = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, SourceString, (unsigned __int64)ResultLengthd, 0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], SourceString);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&DestinationString[1], 0xAu, (PULONG)DestinationString);
    v278 = 1;
    if ( LODWORD(DestinationString[0]) )
      goto LABEL_14;
  }
  else
  {
    LODWORD(DestinationString[0]) = 0;
  }
  v278 = 0;
LABEL_14:
  LODWORD(ResultLengthe) = 40;
  *(_OWORD *)&DestinationString[1] = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, SourceString, (unsigned __int64)ResultLengthe, 0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], SourceString);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&DestinationString[1], 0xAu, (PULONG)DestinationString);
    Length = 1;
    if ( LODWORD(DestinationString[0]) )
      goto LABEL_16;
  }
  else
  {
    LODWORD(DestinationString[0]) = 0;
  }
  Length = 0;
LABEL_16:
  LODWORD(ResultLengthf) = 40;
  *(_OWORD *)&DestinationString[1] = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, SourceString, (unsigned __int64)ResultLengthf, 0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], SourceString);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&DestinationString[1], 0xAu, (PULONG)DestinationString);
    v13 = DestinationString[0];
  }
  else
  {
    v13 = 0;
    LODWORD(DestinationString[0]) = 0;
  }
  v279 = v13 & 1;
  LODWORD(ResultLengthg) = 40;
  *(_OWORD *)&DestinationString[1] = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, SourceString, (unsigned __int64)ResultLengthg, 0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], SourceString);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&DestinationString[1], 0xAu, (PULONG)DestinationString);
    v17 = DestinationString[0];
  }
  else
  {
    v17 = 0;
    LODWORD(DestinationString[0]) = 0;
  }
  v277 = v17 & 1;
  if ( v6 )
  {
    v18 = W32GetUserSessionState(v15, v14, v16);
    if ( v7 )
    {
      *(_DWORD *)(v18 + 66792) |= 1u;
      v26 = W32GetUserSessionState(v20, v19, v21);
      *(_DWORD *)(v26 + 20500) |= 1u;
    }
    else
    {
      *(_DWORD *)(v18 + 66792) &= ~1u;
      v22 = W32GetUserSessionState(v20, v19, v21);
      *(_DWORD *)(v22 + 20500) &= ~1u;
    }
    v28 = *(_DWORD *)(W32GetUserSessionState(v24, v23, v25) + 20604);
    if ( (v28 & 1) != 0 && !v7 )
      xxxTurnOffStickyKeys();
    v30 = W32GetUserSessionState(v28, v27, v29);
    if ( v9 )
    {
      *(_DWORD *)(v30 + 66792) |= 2u;
      v240 = W32GetUserSessionState(v32, v31, v33);
      *(_DWORD *)(v240 + 20604) |= 1u;
    }
    else
    {
      *(_DWORD *)(v30 + 66792) &= ~2u;
      v34 = W32GetUserSessionState(v32, v31, v33);
      *(_DWORD *)(v34 + 20604) &= ~1u;
    }
    v38 = W32GetUserSessionState(v36, v35, v37);
    if ( v11 )
    {
      *(_DWORD *)(v38 + 66792) |= 4u;
      v241 = W32GetUserSessionState(v40, v39, v41);
      *(_DWORD *)(v241 + 20612) |= 1u;
    }
    else
    {
      *(_DWORD *)(v38 + 66792) &= ~4u;
      v42 = W32GetUserSessionState(v40, v39, v41);
      *(_DWORD *)(v42 + 20612) &= ~1u;
    }
    v46 = W32GetUserSessionState(v44, v43, v45);
    if ( v12 )
    {
      *(_DWORD *)(v46 + 66792) |= 8u;
      v50 = W32GetUserSessionState(v48, v47, v49);
      *(_DWORD *)(v50 + 20948) |= 1u;
    }
    else
    {
      *(_DWORD *)(v46 + 66792) &= ~8u;
      v174 = W32GetUserSessionState(v48, v47, v49);
      *(_DWORD *)(v174 + 20948) &= ~1u;
    }
    v54 = W32GetUserSessionState(v52, v51, v53);
    if ( v279 )
    {
      *(_DWORD *)(v54 + 66792) |= 0x10u;
      v58 = W32GetUserSessionState(v56, v55, v57);
      *(_DWORD *)(v58 + 20924) |= 1u;
    }
    else
    {
      *(_DWORD *)(v54 + 66792) &= ~0x10u;
      v175 = W32GetUserSessionState(v56, v55, v57);
      *(_DWORD *)(v175 + 20924) &= ~1u;
    }
    v62 = W32GetUserSessionState(v60, v59, v61);
    if ( v278 )
    {
      *(_DWORD *)(v62 + 66792) |= 0x20u;
      v66 = W32GetUserSessionState(v64, v63, v65);
      *(_DWORD *)(v66 + 66792) |= 0x20000u;
      v71 = *(volatile signed __int32 **)(W32GetUserSessionState(v68, v67, v69) + 19904);
      _InterlockedOr(v71, 0x80u);
    }
    else
    {
      *(_DWORD *)(v62 + 66792) &= ~0x20u;
      v176 = W32GetUserSessionState(v64, v63, v65);
      *(_DWORD *)(v176 + 66792) &= ~0x20000u;
      v71 = *(volatile signed __int32 **)(W32GetUserSessionState(v178, v177, v179) + 19904);
      _InterlockedAnd(v71, 0xFFFFFF7F);
    }
    v73 = W32GetUserSessionState((_DWORD)v71, v70, v72);
    if ( Length )
    {
      *(_DWORD *)(v73 + 66792) |= 0x40u;
      v77 = W32GetUserSessionState(v75, v74, v76);
      *(_DWORD *)(v77 + 66792) |= 0x40000u;
    }
    else
    {
      *(_DWORD *)(v73 + 66792) &= ~0x40u;
      v180 = W32GetUserSessionState(v75, v74, v76);
      *(_DWORD *)(v180 + 66792) &= ~0x40000u;
    }
    v81 = W32GetUserSessionState(v79, v78, v80);
    if ( v277 )
    {
      *(_DWORD *)(v81 + 66792) |= 0x80u;
LABEL_41:
      v85 = W32GetUserSessionState(v83, v82, v84);
      *(_DWORD *)(v85 + 21076) |= 1u;
      goto LABEL_42;
    }
    *(_DWORD *)(v81 + 66792) &= ~0x80u;
    goto LABEL_102;
  }
  v182 = *(_DWORD *)(W32GetUserSessionState(v15, v14, v16) + 20500) & 1;
  v187 = *(_DWORD *)(W32GetUserSessionState(v184, v183, v185) + 66792) & 1;
  if ( v182 == v187 )
  {
    v242 = W32GetUserSessionState(v187, v186, v188);
    if ( v7 )
      *(_DWORD *)(v242 + 20500) |= 1u;
    else
      *(_DWORD *)(v242 + 20500) &= ~1u;
  }
  v189 = *(_DWORD *)(W32GetUserSessionState(v187, v186, v188) + 20604) & 1;
  v194 = (*(_DWORD *)(W32GetUserSessionState(v191, v190, v192) + 66792) >> 1) & 1;
  if ( v189 == v194 )
  {
    v197 = *(_DWORD *)(W32GetUserSessionState(v194, v193, v195) + 20604);
    if ( (v197 & 1) != 0 )
    {
      if ( v9 )
        goto LABEL_119;
      xxxTurnOffStickyKeys();
    }
    else if ( v9 )
    {
LABEL_119:
      v199 = W32GetUserSessionState(v197, v196, v198);
      *(_DWORD *)(v199 + 20604) |= 1u;
      goto LABEL_120;
    }
    v243 = W32GetUserSessionState(v197, v196, v198);
    *(_DWORD *)(v243 + 20604) &= ~1u;
  }
LABEL_120:
  v200 = *(_DWORD *)(W32GetUserSessionState(v194, v193, v195) + 20612) & 1;
  v205 = (*(_DWORD *)(W32GetUserSessionState(v202, v201, v203) + 66792) >> 2) & 1;
  if ( v200 == v205 )
  {
    v244 = W32GetUserSessionState(v205, v204, v206);
    if ( v11 )
      *(_DWORD *)(v244 + 20612) |= 1u;
    else
      *(_DWORD *)(v244 + 20612) &= ~1u;
  }
  v207 = *(_DWORD *)(W32GetUserSessionState(v205, v204, v206) + 20948) & 1;
  v212 = (*(_DWORD *)(W32GetUserSessionState(v209, v208, v210) + 66792) >> 3) & 1;
  if ( v207 == v212 )
  {
    v245 = W32GetUserSessionState(v212, v211, v213);
    if ( (_DWORD)v280 )
      *(_DWORD *)(v245 + 20948) |= 1u;
    else
      *(_DWORD *)(v245 + 20948) &= ~1u;
  }
  v214 = *(_DWORD *)(W32GetUserSessionState(v212, v211, v213) + 20924) & 1;
  v219 = (*(_DWORD *)(W32GetUserSessionState(v216, v215, v217) + 66792) >> 4) & 1;
  if ( v214 == v219 )
  {
    v246 = W32GetUserSessionState(v219, v218, v220);
    if ( v279 )
      *(_DWORD *)(v246 + 20924) |= 1u;
    else
      *(_DWORD *)(v246 + 20924) &= ~1u;
  }
  v221 = *(_DWORD *)(W32GetUserSessionState(v219, v218, v220) + 66792);
  v226 = (*(_DWORD *)(W32GetUserSessionState(v223, v222, v224) + 66792) >> 5) & 1;
  if ( ((v221 & 0x20000) != 0) == v226 )
  {
    v228 = W32GetUserSessionState(v226, v225, v227);
    if ( v278 )
      *(_DWORD *)(v228 + 66792) |= 0x20000u;
    else
      *(_DWORD *)(v228 + 66792) &= ~0x20000u;
  }
  v229 = *(_DWORD *)(W32GetUserSessionState(v226, v225, v227) + 66792);
  v234 = (*(_DWORD *)(W32GetUserSessionState(v231, v230, v232) + 66792) >> 6) & 1;
  if ( ((v229 & 0x40000) != 0) == v234 )
  {
    v247 = W32GetUserSessionState(v234, v233, v235);
    if ( Length )
      *(_DWORD *)(v247 + 66792) |= 0x40000u;
    else
      *(_DWORD *)(v247 + 66792) &= ~0x40000u;
  }
  v236 = *(_DWORD *)(W32GetUserSessionState(v234, v233, v235) + 21076) & 1;
  v83 = (*(_DWORD *)(W32GetUserSessionState(v238, v237, v239) + 66792) >> 7) & 1;
  if ( v236 == v83 )
  {
    if ( v277 )
      goto LABEL_41;
LABEL_102:
    v181 = W32GetUserSessionState(v83, v82, v84);
    *(_DWORD *)(v181 + 21076) &= ~1u;
  }
LABEL_42:
  LODWORD(ResultLengthh) = 40;
  *(_OWORD *)&DestinationString[1] = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, SourceString, (unsigned __int64)ResultLengthh, 0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], SourceString);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&DestinationString[1], 0xAu, (PULONG)DestinationString);
  }
  else
  {
    LODWORD(DestinationString[0]) = 82;
  }
  if ( (*(_DWORD *)(W32GetUserSessionState(v87, v86, v88) + 20500) & 1) != 0 )
    v89 = LODWORD(DestinationString[0]) | 1;
  else
    v89 = DestinationString[0] & 0xFFFFFFFE;
  LODWORD(DestinationString[0]) = v89;
  *(_DWORD *)(UserSessionState + 20500) = v89;
  FastGetProfileIntW((int)a1, 15, (int)L"DelayBeforeAcceptance", 1000, (PULONG)(UserSessionState + 20504), 0);
  FastGetProfileIntW((int)a1, 15, (int)L"AutoRepeatRate", 500, (PULONG)(UserSessionState + 20512), 0);
  FastGetProfileIntW((int)a1, 15, (int)L"AutoRepeatDelay", 1000, (PULONG)(UserSessionState + 20508), 0);
  FastGetProfileIntW((int)a1, 15, (int)L"BounceTime", 0, (PULONG)(UserSessionState + 20516), 0);
  FastGetProfileIntW((int)a1, 19, (int)L"Flags", 2, (PULONG)(UserSessionState + 20980), 0);
  FastGetProfileIntW((int)a1, 19, (int)L"FSTextEffect", 0, (PULONG)(UserSessionState + 20984), 0);
  FastGetProfileIntW((int)a1, 19, (int)L"WindowsEffect", 0, (PULONG)(UserSessionState + 21008), 0);
  LODWORD(ResultLengthm) = 40;
  *(_OWORD *)&DestinationString[1] = 0LL;
  if ( !(unsigned int)FastGetProfileStringW(a1, SourceString, (unsigned __int64)ResultLengthm, 0) )
  {
    LODWORD(DestinationString[0]) = 0;
    goto LABEL_94;
  }
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], SourceString);
  RtlUnicodeStringToInteger((PCUNICODE_STRING)&DestinationString[1], 0xAu, (PULONG)DestinationString);
  if ( !LODWORD(DestinationString[0]) )
  {
LABEL_94:
    v173 = W32GetUserSessionState(v91, v90, v92);
    *(_DWORD *)(v173 + 66792) &= ~0x8000u;
    goto LABEL_49;
  }
  v93 = W32GetUserSessionState(v91, v90, v92);
  *(_DWORD *)(v93 + 66792) |= 0x8000u;
LABEL_49:
  v97 = (*(_DWORD *)(W32GetUserSessionState(v95, v94, v96) + 66792) >> 15) & 1;
  v101 = W32GetUserSessionState(v99, v98, v100);
  *(_OWORD *)&DestinationString[1] = 0LL;
  *(_DWORD *)(*(_QWORD *)(v101 + 19904) + 2176LL) = v97;
  LODWORD(ResultLengthi) = 40;
  if ( (unsigned int)FastGetProfileStringW(a1, SourceString, (unsigned __int64)ResultLengthi, 0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], SourceString);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&DestinationString[1], 0xAu, (PULONG)DestinationString);
  }
  else
  {
    LODWORD(DestinationString[0]) = 466;
  }
  if ( (*(_DWORD *)(W32GetUserSessionState(v103, v102, v104) + 20604) & 1) != 0 )
    v105 = LODWORD(DestinationString[0]) | 1;
  else
    v105 = DestinationString[0] & 0xFFFFFFFE;
  LODWORD(DestinationString[0]) = v105;
  *(_DWORD *)(UserSessionState + 20604) = v105;
  LODWORD(ResultLengthj) = 40;
  *(_OWORD *)&DestinationString[1] = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, SourceString, (unsigned __int64)ResultLengthj, 0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], SourceString);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&DestinationString[1], 0xAu, (PULONG)DestinationString);
  }
  else
  {
    LODWORD(DestinationString[0]) = 18;
  }
  if ( (*(_DWORD *)(W32GetUserSessionState(v107, v106, v108) + 20612) & 1) != 0 )
    v109 = LODWORD(DestinationString[0]) | 1;
  else
    v109 = DestinationString[0] & 0xFFFFFFFE;
  LODWORD(DestinationString[0]) = v109;
  *(_DWORD *)(UserSessionState + 20612) = v109;
  FastGetProfileIntW((int)a1, 16, (int)L"MaximumSpeed", 40, (PULONG)(UserSessionState + 20616), 0);
  v110 = (_DWORD *)(UserSessionState + 20620);
  FastGetProfileIntW((int)a1, 16, (int)L"TimeToMaximumSpeed", 3000, (PULONG)(UserSessionState + 20620), 0);
  if ( *(_DWORD *)(UserSessionState + 20616) < 0xAu || *(_DWORD *)(UserSessionState + 20616) > 0x168u )
    *(_DWORD *)(UserSessionState + 20616) = 40;
  if ( *v110 < 0x3E8u || *v110 > 0x1388u )
    *v110 = 3000;
  CalculateMouseTable(v112, v111, v113);
  v117 = W32GetUserSessionState(v115, v114, v116);
  v121 = (unsigned __int64)*(unsigned __int8 *)(W32GetUserSessionState(v119, v118, v120) + 13976) >> 2;
  LODWORD(v117) = *(unsigned __int8 *)(v121 + v117 + 14328);
  v124 = W32GetUserSessionState(v121, v122, v123);
  v125 = v117 & (1 << (2 * (*(_BYTE *)(v124 + 13976) & 3) + 1));
  LOBYTE(v117) = (v125 != 0) ^ ((*(_DWORD *)(W32GetUserSessionState(2 * (*(_BYTE *)(v124 + 13976) & 3u) + 1, v126, v127)
                                           + 20612) & 0x80) != 0);
  *(_BYTE *)(W32GetUserSessionState(v129, v128, v130) + 20919) = v117;
  v135 = *(_DWORD *)(W32GetUserSessionState(v132, v131, v133) + 20612);
  if ( (v135 & 1) != 0 )
    MKShowMouseCursor();
  else
    MKHideMouseCursor(v135, v134, v136);
  LODWORD(ResultLengthk) = 40;
  *(_OWORD *)&DestinationString[1] = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, SourceString, (unsigned __int64)ResultLengthk, 0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], SourceString);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&DestinationString[1], 0xAu, (PULONG)DestinationString);
  }
  else
  {
    LODWORD(DestinationString[0]) = 18;
  }
  if ( (*(_DWORD *)(W32GetUserSessionState(v138, v137, v139) + 20948) & 1) != 0 )
    v140 = LODWORD(DestinationString[0]) | 1;
  else
    v140 = DestinationString[0] & 0xFFFFFFFE;
  LODWORD(DestinationString[0]) = v140;
  *(_DWORD *)(UserSessionState + 20948) = v140;
  LODWORD(ResultLengthl) = 40;
  *(_OWORD *)&DestinationString[1] = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, SourceString, (unsigned __int64)ResultLengthl, 0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], SourceString);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&DestinationString[1], 0xAu, (PULONG)DestinationString);
  }
  else
  {
    LODWORD(DestinationString[0]) = 2;
  }
  v145 = *(_DWORD *)(W32GetUserSessionState(v142, v141, v143) + 20924);
  if ( (v145 & 1) != 0 )
    v147 = LODWORD(DestinationString[0]) | 1;
  else
    v147 = DestinationString[0] & 0xFFFFFFFE;
  LODWORD(DestinationString[0]) = v147;
  *(_DWORD *)(UserSessionState + 20924) = v147;
  if ( *(_QWORD *)(W32GetUserSessionState(v145, v144, v146) + 14064) )
  {
    v249 = *(_QWORD *)(W32GetUserSessionState(v149, v148, v150) + 14064);
    if ( *(_DWORD *)(v249 + 16) == 16 )
    {
      v249 = *(_QWORD *)(W32GetUserSessionState(v249, v248, v250) + 14064);
      if ( *(_QWORD *)(v249 + 24) )
      {
        v251 = *(_QWORD *)(W32GetUserSessionState(v249, v248, v250) + 14064);
        v252 = *(_QWORD *)(v251 + 24);
        *(_QWORD *)(W32GetUserSessionState(v251, v253, v254) + 14192) = v252;
      }
    }
    v256 = *(_QWORD *)(W32GetUserSessionState(v249, v248, v250) + 14064);
    if ( (*(_BYTE *)(v256 + 2) & 2) != 0 )
    {
      *(_WORD *)(W32GetUserSessionState(v256, v255, v257) + 13976) = 36;
      *(_WORD *)(W32GetUserSessionState(36, v258, v259) + 13978) = 21;
    }
  }
  FastGetProfileIntW((int)a1, 18, (int)L"TimeToWait", 300000, (PULONG)(UserSessionState + 20928), 0);
  LODWORD(ResultLengthn) = 40;
  *(_OWORD *)&DestinationString[1] = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, SourceString, (unsigned __int64)ResultLengthn, 0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], SourceString);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&DestinationString[1], 0xAu, (PULONG)DestinationString);
  }
  else
  {
    LODWORD(DestinationString[0]) = 82;
  }
  v155 = *(_DWORD *)(W32GetUserSessionState(v152, v151, v153) + 21076);
  if ( (v155 & 1) != 0 )
    v157 = LODWORD(DestinationString[0]) | 1;
  else
    v157 = DestinationString[0] & 0xFFFFFFFE;
  LODWORD(DestinationString[0]) = v157;
  *(_OWORD *)&DestinationString[1] = 0LL;
  *(_DWORD *)(UserSessionState + 21076) = v157;
  Length = 0;
  v277 = *(_DWORD *)(W32GetUserSessionState(v155, v154, v156) + 62776);
  while ( 1 )
  {
    v159 = (void *)OpenCacheKeyEx(a1);
    if ( !v159 )
      break;
    Length = 268;
    v160 = Win32AllocPoolWithQuotaZInitImpl(v158, 0x10CuLL, 0x72707355u);
    if ( !v160 )
      goto LABEL_84;
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"High Contrast Scheme");
    v161 = ZwQueryValueKey(
             v159,
             (PUNICODE_STRING)&DestinationString[1],
             KeyValuePartialInformation,
             (PVOID)v160,
             Length,
             &Length);
    v165 = 0;
    if ( v161 != -2147483643 )
      v165 = v161;
    if ( v165 >= 0 )
    {
      v166 = 128;
      if ( *(_DWORD *)(v160 + 8) >> 1 < 0x80u )
        v166 = *(_DWORD *)(v160 + 8) >> 1;
      if ( *(_DWORD *)(v160 + 8) < 2u )
      {
        v283[0] = 0;
      }
      else
      {
        *(_WORD *)(v160 + 2LL * (unsigned int)(v166 - 1) + 12) = 0;
        RtlStringCchCopyW(v283, 0x80uLL, (const unsigned __int16 *)(v160 + 12));
      }
      GreDeleteFastMutex((char *)v160, v162, v163, v164);
      ZwClose(v159);
      if ( v166 )
        RtlStringCchCopyW((unsigned __int16 *)(UserSessionState + 21088), 0x80uLL, v283);
      break;
    }
    if ( !v277 )
    {
      GreDeleteFastMutex((char *)v160, v162, v163, v164);
LABEL_84:
      ZwClose(v159);
      break;
    }
    GreDeleteFastMutex((char *)v160, v162, v163, v164);
    ZwClose(v159);
  }
  *(_DWORD *)(UserSessionState + 21864) = 12;
  FastGetProfileIntW((int)a1, 48, (int)L"On", 0, (PULONG)(UserSessionState + 21868), 0);
  FastGetProfileIntW((int)a1, 48, (int)L"Locale", 0, (PULONG)(UserSessionState + 21872), 0);
  AccessTimeOutReset(v168, v167, v169);
  SetAccessEnabledFlag(v171, v170, v172);
}
