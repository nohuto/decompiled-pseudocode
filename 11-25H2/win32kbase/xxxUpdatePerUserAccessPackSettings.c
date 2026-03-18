/*
 * XREFs of xxxUpdatePerUserAccessPackSettings @ 0x1400A57B0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1400A6B70 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1400A6CD0 (-AccessTimeOutReset@@YAXXZ.c)
 *     ?CalculateMouseTable@@YAXXZ @ 0x1400A6D40 (-CalculateMouseTable@@YAXXZ.c)
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1400A6E40 (-MKHideMouseCursor@@YAXXZ.c)
 *     FastGetProfileIntW @ 0x1400A96F0 (FastGetProfileIntW.c)
 *     FastGetProfileStringW @ 0x1400A9AF0 (FastGetProfileStringW.c)
 *     OpenCacheKeyEx @ 0x1400A9CE0 (OpenCacheKeyEx.c)
 *     GetProcessLuid @ 0x1400AA270 (GetProcessLuid.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400AA420 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?MKShowMouseCursor@@YAXXZ @ 0x1401A18D0 (-MKShowMouseCursor@@YAXXZ.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1401A2520 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall xxxUpdatePerUserAccessPackSettings(const UNICODE_STRING *a1, __int64 a2)
{
  char v2; // bl
  __int64 UserSessionState; // r13
  int v5; // r14d
  int v6; // r12d
  char v7; // di
  int v8; // edi
  char v9; // si
  int v10; // esi
  int v11; // ebx
  int ProfileStringW; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  volatile signed __int32 *v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  int v77; // ebx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rax
  int v83; // ebx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rax
  int v91; // ebx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rax
  int v98; // ebx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rax
  int v104; // ebx
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // rax
  int v110; // ebx
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // rax
  int v116; // ebx
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rax
  int v122; // ebx
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rax
  unsigned int v126; // eax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  int v132; // ebx
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // rcx
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // rax
  unsigned int v139; // eax
  __int64 v140; // rdx
  __int64 v141; // rcx
  unsigned int v142; // eax
  _DWORD *v143; // rbx
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // rsi
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int16 v149; // bx
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // rax
  unsigned __int64 v153; // rcx
  int v154; // edi
  __int64 v155; // rdx
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // rdx
  __int64 v161; // rcx
  unsigned int v162; // eax
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // rdx
  __int64 v166; // rcx
  unsigned int v167; // eax
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // rcx
  __int64 v173; // rbx
  __int64 v174; // rdx
  __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // rdx
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // rdx
  __int64 v181; // rcx
  unsigned int v182; // eax
  __int64 v183; // rcx
  void *v184; // rdi
  __int64 v185; // rbx
  NTSTATUS ValueKey; // eax
  int v187; // ecx
  int v188; // esi
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
  _QWORD Value[3]; // [rsp+48h] [rbp-C0h] BYREF
  int v205; // [rsp+60h] [rbp-A8h]
  int v206; // [rsp+64h] [rbp-A4h]
  int v207; // [rsp+68h] [rbp-A0h]
  int v208; // [rsp+6Ch] [rbp-9Ch]
  struct _LUID DestinationString[3]; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING String; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v211; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING v212; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING v213; // [rsp+B8h] [rbp-50h] BYREF
  UNICODE_STRING v214; // [rsp+C8h] [rbp-40h] BYREF
  UNICODE_STRING v215; // [rsp+D8h] [rbp-30h] BYREF
  WCHAR v216[40]; // [rsp+E8h] [rbp-20h] BYREF
  WCHAR SourceString[40]; // [rsp+138h] [rbp+30h] BYREF
  WCHAR v218[40]; // [rsp+188h] [rbp+80h] BYREF
  WCHAR v219[40]; // [rsp+1D8h] [rbp+D0h] BYREF
  WCHAR v220[40]; // [rsp+228h] [rbp+120h] BYREF
  WCHAR v221[40]; // [rsp+278h] [rbp+170h] BYREF
  WCHAR v222[40]; // [rsp+2C8h] [rbp+1C0h] BYREF
  WCHAR v223[40]; // [rsp+318h] [rbp+210h] BYREF
  unsigned __int16 v224[128]; // [rsp+368h] [rbp+260h] BYREF

  v2 = 0;
  DestinationString[0] = 0LL;
  LODWORD(Value[0]) = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  GetProcessLuid(0LL, DestinationString);
  if ( DestinationString[0].LowPart != 999 || (v5 = 1, DestinationString[0].HighPart) )
    v5 = 0;
  LODWORD(ResultLength) = 40;
  *(_OWORD *)&DestinationString[1].LowPart = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, SourceString, (unsigned __int64)ResultLength, 0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], SourceString);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&DestinationString[1], 0xAu, (PULONG)Value);
  }
  LODWORD(ResultLengtha) = 40;
  v6 = Value[0] & 1;
  String = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, v218, (unsigned __int64)ResultLengtha, 0) )
  {
    RtlInitUnicodeString(&String, v218);
    RtlUnicodeStringToInteger(&String, 0xAu, (PULONG)Value);
    v7 = Value[0];
  }
  else
  {
    v7 = 0;
    LODWORD(Value[0]) = 0;
  }
  LODWORD(ResultLengthb) = 40;
  v8 = v7 & 1;
  v211 = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, v219, (unsigned __int64)ResultLengthb, 0) )
  {
    RtlInitUnicodeString(&v211, v219);
    RtlUnicodeStringToInteger(&v211, 0xAu, (PULONG)Value);
    v9 = Value[0];
  }
  else
  {
    v9 = 0;
    LODWORD(Value[0]) = 0;
  }
  LODWORD(ResultLengthc) = 40;
  v10 = v9 & 1;
  v212 = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, v220, (unsigned __int64)ResultLengthc, 0) )
  {
    RtlInitUnicodeString(&v212, v220);
    RtlUnicodeStringToInteger(&v212, 0xAu, (PULONG)Value);
    v2 = Value[0];
  }
  else
  {
    LODWORD(Value[0]) = 0;
  }
  LODWORD(ResultLengthd) = 40;
  v11 = v2 & 1;
  v208 = v11;
  v213 = 0LL;
  if ( !(unsigned int)FastGetProfileStringW(a1, v221, (unsigned __int64)ResultLengthd, 0) )
  {
    LODWORD(Value[0]) = 0;
LABEL_17:
    v206 = 0;
    goto LABEL_18;
  }
  RtlInitUnicodeString(&v213, v221);
  RtlUnicodeStringToInteger(&v213, 0xAu, (PULONG)Value);
  if ( !LODWORD(Value[0]) )
    goto LABEL_17;
  v206 = 1;
LABEL_18:
  LODWORD(ResultLengthe) = 40;
  v214 = 0LL;
  if ( !(unsigned int)FastGetProfileStringW(a1, v222, (unsigned __int64)ResultLengthe, 0) )
  {
    LODWORD(Value[0]) = 0;
LABEL_20:
    HIDWORD(Value[0]) = 0;
    goto LABEL_21;
  }
  RtlInitUnicodeString(&v214, v222);
  RtlUnicodeStringToInteger(&v214, 0xAu, (PULONG)Value);
  if ( !LODWORD(Value[0]) )
    goto LABEL_20;
  HIDWORD(Value[0]) = 1;
LABEL_21:
  LODWORD(ResultLengthf) = 40;
  v215 = 0LL;
  ProfileStringW = FastGetProfileStringW(a1, v223, (unsigned __int64)ResultLengthf, 0);
  if ( ProfileStringW )
  {
    RtlInitUnicodeString(&v215, v223);
    RtlUnicodeStringToInteger(&v215, 0xAu, (PULONG)Value);
    LOBYTE(ProfileStringW) = Value[0];
  }
  else
  {
    LODWORD(Value[0]) = 0;
  }
  LODWORD(ResultLengthg) = 40;
  v207 = ProfileStringW & 1;
  *(_OWORD *)&Value[1] = 0LL;
  v13 = FastGetProfileStringW(a1, v216, (unsigned __int64)ResultLengthg, 0);
  if ( v13 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&Value[1], v216);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&Value[1], 0xAu, (PULONG)Value);
    LOBYTE(v13) = Value[0];
  }
  else
  {
    LODWORD(Value[0]) = 0;
  }
  v205 = v13 & 1;
  if ( v5 )
  {
    v16 = W32GetUserSessionState(v15, v14);
    if ( v6 )
    {
      *(_DWORD *)(v16 + 66800) |= 1u;
      v19 = W32GetUserSessionState(v18, v17);
      *(_DWORD *)(v19 + 20468) |= 1u;
    }
    else
    {
      *(_DWORD *)(v16 + 66800) &= ~1u;
      v22 = W32GetUserSessionState(v18, v17);
      *(_DWORD *)(v22 + 20468) &= ~1u;
    }
    v24 = *(unsigned int *)(W32GetUserSessionState(v21, v20) + 20572);
    if ( (v24 & 1) != 0 && !v6 )
      xxxTurnOffStickyKeys();
    v25 = W32GetUserSessionState(v24, v23);
    if ( v8 )
    {
      *(_DWORD *)(v25 + 66800) |= 2u;
      v28 = W32GetUserSessionState(v27, v26);
      *(_DWORD *)(v28 + 20572) |= 1u;
    }
    else
    {
      *(_DWORD *)(v25 + 66800) &= ~2u;
      v31 = W32GetUserSessionState(v27, v26);
      *(_DWORD *)(v31 + 20572) &= ~1u;
    }
    v32 = W32GetUserSessionState(v30, v29);
    if ( v10 )
    {
      *(_DWORD *)(v32 + 66800) |= 4u;
      v35 = W32GetUserSessionState(v34, v33);
      *(_DWORD *)(v35 + 20580) |= 1u;
    }
    else
    {
      *(_DWORD *)(v32 + 66800) &= ~4u;
      v38 = W32GetUserSessionState(v34, v33);
      *(_DWORD *)(v38 + 20580) &= ~1u;
    }
    v39 = W32GetUserSessionState(v37, v36);
    if ( v11 )
    {
      *(_DWORD *)(v39 + 66800) |= 8u;
      v42 = W32GetUserSessionState(v41, v40);
      *(_DWORD *)(v42 + 20916) |= 1u;
    }
    else
    {
      *(_DWORD *)(v39 + 66800) &= ~8u;
      v45 = W32GetUserSessionState(v41, v40);
      *(_DWORD *)(v45 + 20916) &= ~1u;
    }
    v46 = W32GetUserSessionState(v44, v43);
    if ( v207 )
    {
      *(_DWORD *)(v46 + 66800) |= 0x10u;
      v49 = W32GetUserSessionState(v48, v47);
      *(_DWORD *)(v49 + 20892) |= 1u;
    }
    else
    {
      *(_DWORD *)(v46 + 66800) &= ~0x10u;
      v52 = W32GetUserSessionState(v48, v47);
      *(_DWORD *)(v52 + 20892) &= ~1u;
    }
    v53 = W32GetUserSessionState(v51, v50);
    if ( v206 )
    {
      *(_DWORD *)(v53 + 66800) |= 0x20u;
      v56 = W32GetUserSessionState(v55, v54);
      *(_DWORD *)(v56 + 66800) |= 0x20000u;
      v60 = *(volatile signed __int32 **)(W32GetUserSessionState(v58, v57) + 19872);
      _InterlockedOr(v60, 0x80u);
    }
    else
    {
      *(_DWORD *)(v53 + 66800) &= ~0x20u;
      v61 = W32GetUserSessionState(v55, v54);
      *(_DWORD *)(v61 + 66800) &= ~0x20000u;
      v60 = *(volatile signed __int32 **)(W32GetUserSessionState(v63, v62) + 19872);
      _InterlockedAnd(v60, 0xFFFFFF7F);
    }
    v64 = W32GetUserSessionState(v60, v59);
    if ( HIDWORD(Value[0]) )
    {
      *(_DWORD *)(v64 + 66800) |= 0x40u;
      v67 = W32GetUserSessionState(v66, v65);
      *(_DWORD *)(v67 + 66800) |= 0x40000u;
    }
    else
    {
      *(_DWORD *)(v64 + 66800) &= ~0x40u;
      v70 = W32GetUserSessionState(v66, v65);
      *(_DWORD *)(v70 + 66800) &= ~0x40000u;
    }
    v71 = W32GetUserSessionState(v69, v68);
    if ( v205 )
    {
      *(_DWORD *)(v71 + 66800) |= 0x80u;
LABEL_95:
      v125 = W32GetUserSessionState(v73, v72);
      *(_DWORD *)(v125 + 21044) |= 1u;
      goto LABEL_60;
    }
    *(_DWORD *)(v71 + 66800) &= ~0x80u;
LABEL_59:
    v74 = W32GetUserSessionState(v73, v72);
    *(_DWORD *)(v74 + 21044) &= ~1u;
    goto LABEL_60;
  }
  v77 = *(_DWORD *)(W32GetUserSessionState(v15, v14) + 20468) & 1;
  v81 = *(_DWORD *)(W32GetUserSessionState(v79, v78) + 66800) & 1;
  if ( v77 == (_DWORD)v81 )
  {
    v82 = W32GetUserSessionState(v81, v80);
    if ( v6 )
      *(_DWORD *)(v82 + 20468) |= 1u;
    else
      *(_DWORD *)(v82 + 20468) &= ~1u;
  }
  v83 = *(_DWORD *)(W32GetUserSessionState(v81, v80) + 20572) & 1;
  v87 = (*(_DWORD *)(W32GetUserSessionState(v85, v84) + 66800) >> 1) & 1;
  if ( v83 == (_DWORD)v87 )
  {
    v89 = *(unsigned int *)(W32GetUserSessionState(v87, v86) + 20572);
    if ( (v89 & 1) != 0 )
    {
      if ( !v8 )
      {
        xxxTurnOffStickyKeys();
LABEL_70:
        v90 = W32GetUserSessionState(v89, v88);
        *(_DWORD *)(v90 + 20572) &= ~1u;
        goto LABEL_71;
      }
    }
    else if ( !v8 )
    {
      goto LABEL_70;
    }
    v97 = W32GetUserSessionState(v89, v88);
    *(_DWORD *)(v97 + 20572) |= 1u;
  }
LABEL_71:
  v91 = *(_DWORD *)(W32GetUserSessionState(v87, v86) + 20580) & 1;
  v95 = (*(_DWORD *)(W32GetUserSessionState(v93, v92) + 66800) >> 2) & 1;
  if ( v91 == (_DWORD)v95 )
  {
    v96 = W32GetUserSessionState(v95, v94);
    if ( v10 )
      *(_DWORD *)(v96 + 20580) |= 1u;
    else
      *(_DWORD *)(v96 + 20580) &= ~1u;
  }
  v98 = *(_DWORD *)(W32GetUserSessionState(v95, v94) + 20916) & 1;
  v102 = (*(_DWORD *)(W32GetUserSessionState(v100, v99) + 66800) >> 3) & 1;
  if ( v98 == (_DWORD)v102 )
  {
    v103 = W32GetUserSessionState(v102, v101);
    if ( v208 )
      *(_DWORD *)(v103 + 20916) |= 1u;
    else
      *(_DWORD *)(v103 + 20916) &= ~1u;
  }
  v104 = *(_DWORD *)(W32GetUserSessionState(v102, v101) + 20892) & 1;
  v108 = (*(_DWORD *)(W32GetUserSessionState(v106, v105) + 66800) >> 4) & 1;
  if ( v104 == (_DWORD)v108 )
  {
    v109 = W32GetUserSessionState(v108, v107);
    if ( v207 )
      *(_DWORD *)(v109 + 20892) |= 1u;
    else
      *(_DWORD *)(v109 + 20892) &= ~1u;
  }
  v110 = *(_DWORD *)(W32GetUserSessionState(v108, v107) + 66800);
  v114 = (*(_DWORD *)(W32GetUserSessionState(v112, v111) + 66800) >> 5) & 1;
  if ( ((v110 & 0x20000) != 0) == (_DWORD)v114 )
  {
    v115 = W32GetUserSessionState(v114, v113);
    if ( v206 )
      *(_DWORD *)(v115 + 66800) |= 0x20000u;
    else
      *(_DWORD *)(v115 + 66800) &= ~0x20000u;
  }
  v116 = *(_DWORD *)(W32GetUserSessionState(v114, v113) + 66800);
  v120 = (*(_DWORD *)(W32GetUserSessionState(v118, v117) + 66800) >> 6) & 1;
  if ( ((v116 & 0x40000) != 0) == (_DWORD)v120 )
  {
    v121 = W32GetUserSessionState(v120, v119);
    if ( HIDWORD(Value[0]) )
      *(_DWORD *)(v121 + 66800) |= 0x40000u;
    else
      *(_DWORD *)(v121 + 66800) &= ~0x40000u;
  }
  v122 = *(_DWORD *)(W32GetUserSessionState(v120, v119) + 21044) & 1;
  v73 = (*(_DWORD *)(W32GetUserSessionState(v124, v123) + 66800) >> 7) & 1;
  if ( v122 == (_DWORD)v73 )
  {
    if ( v205 )
      goto LABEL_95;
    goto LABEL_59;
  }
LABEL_60:
  LODWORD(ResultLengthh) = 40;
  *(_OWORD *)&Value[1] = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, v216, (unsigned __int64)ResultLengthh, 0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&Value[1], v216);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&Value[1], 0xAu, (PULONG)Value);
  }
  else
  {
    LODWORD(Value[0]) = 82;
  }
  if ( (*(_DWORD *)(W32GetUserSessionState(v76, v75) + 20468) & 1) != 0 )
    v126 = LODWORD(Value[0]) | 1;
  else
    v126 = Value[0] & 0xFFFFFFFE;
  LODWORD(Value[0]) = v126;
  *(_DWORD *)(UserSessionState + 20468) = v126;
  FastGetProfileIntW((int)a1, 15, (int)L"DelayBeforeAcceptance", 1000, (PULONG)(UserSessionState + 20472), 0);
  FastGetProfileIntW((int)a1, 15, (int)L"AutoRepeatRate", 500, (PULONG)(UserSessionState + 20480), 0);
  FastGetProfileIntW((int)a1, 15, (int)L"AutoRepeatDelay", 1000, (PULONG)(UserSessionState + 20476), 0);
  FastGetProfileIntW((int)a1, 15, (int)L"BounceTime", 0, (PULONG)(UserSessionState + 20484), 0);
  FastGetProfileIntW((int)a1, 19, (int)L"Flags", 2, (PULONG)(UserSessionState + 20948), 0);
  FastGetProfileIntW((int)a1, 19, (int)L"FSTextEffect", 0, (PULONG)(UserSessionState + 20952), 0);
  FastGetProfileIntW((int)a1, 19, (int)L"WindowsEffect", 0, (PULONG)(UserSessionState + 20976), 0);
  LODWORD(ResultLengthm) = 40;
  *(_OWORD *)&Value[1] = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, v216, (unsigned __int64)ResultLengthm, 0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&Value[1], v216);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&Value[1], 0xAu, (PULONG)Value);
    if ( LODWORD(Value[0]) )
    {
      v138 = W32GetUserSessionState(v128, v127);
      *(_DWORD *)(v138 + 66800) |= 0x8000u;
      goto LABEL_103;
    }
  }
  else
  {
    LODWORD(Value[0]) = 0;
  }
  v129 = W32GetUserSessionState(v128, v127);
  *(_DWORD *)(v129 + 66800) &= ~0x8000u;
LABEL_103:
  v132 = (*(_DWORD *)(W32GetUserSessionState(v131, v130) + 66800) >> 15) & 1;
  LODWORD(ResultLengthi) = 40;
  v135 = *(_QWORD *)(W32GetUserSessionState(v134, v133) + 19872);
  *(_OWORD *)&Value[1] = 0LL;
  *(_DWORD *)(v135 + 2176) = v132;
  if ( (unsigned int)FastGetProfileStringW(a1, v216, (unsigned __int64)ResultLengthi, 0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&Value[1], v216);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&Value[1], 0xAu, (PULONG)Value);
  }
  else
  {
    LODWORD(Value[0]) = 466;
  }
  if ( (*(_DWORD *)(W32GetUserSessionState(v137, v136) + 20572) & 1) != 0 )
    v139 = LODWORD(Value[0]) | 1;
  else
    v139 = Value[0] & 0xFFFFFFFE;
  LODWORD(Value[0]) = v139;
  *(_DWORD *)(UserSessionState + 20572) = v139;
  LODWORD(ResultLengthj) = 40;
  *(_OWORD *)&Value[1] = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, v216, (unsigned __int64)ResultLengthj, 0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&Value[1], v216);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&Value[1], 0xAu, (PULONG)Value);
  }
  else
  {
    LODWORD(Value[0]) = 18;
  }
  if ( (*(_DWORD *)(W32GetUserSessionState(v141, v140) + 20580) & 1) != 0 )
    v142 = LODWORD(Value[0]) | 1;
  else
    v142 = Value[0] & 0xFFFFFFFE;
  LODWORD(Value[0]) = v142;
  *(_DWORD *)(UserSessionState + 20580) = v142;
  FastGetProfileIntW((int)a1, 16, (int)L"MaximumSpeed", 40, (PULONG)(UserSessionState + 20584), 0);
  v143 = (_DWORD *)(UserSessionState + 20588);
  FastGetProfileIntW((int)a1, 16, (int)L"TimeToMaximumSpeed", 3000, (PULONG)(UserSessionState + 20588), 0);
  if ( (unsigned int)(*(_DWORD *)(UserSessionState + 20584) - 10) > 0x15E )
    *(_DWORD *)(UserSessionState + 20584) = 40;
  if ( (unsigned int)(*v143 - 1000) > 0xFA0 )
    *v143 = 3000;
  CalculateMouseTable();
  v146 = W32GetUserSessionState(v145, v144);
  v149 = *(_WORD *)(W32GetUserSessionState(v148, v147) + 13984);
  v152 = W32GetUserSessionState(v151, v150);
  v153 = (unsigned __int64)(unsigned __int8)v149 >> 2;
  v154 = *(unsigned __int8 *)(v153 + v146 + 14336) & (1 << (2 * (*(_WORD *)(v152 + 13984) & 3) + 1));
  LOBYTE(v149) = (v154 != 0) ^ ((*(_DWORD *)(W32GetUserSessionState(v153, v155) + 20580) & 0x80) != 0);
  *(_BYTE *)(W32GetUserSessionState(v157, v156) + 20887) = v149;
  if ( (*(_DWORD *)(W32GetUserSessionState(v159, v158) + 20580) & 1) != 0 )
    MKShowMouseCursor();
  else
    MKHideMouseCursor();
  LODWORD(ResultLengthk) = 40;
  *(_OWORD *)&Value[1] = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, v216, (unsigned __int64)ResultLengthk, 0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&Value[1], v216);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&Value[1], 0xAu, (PULONG)Value);
  }
  else
  {
    LODWORD(Value[0]) = 18;
  }
  if ( (*(_DWORD *)(W32GetUserSessionState(v161, v160) + 20916) & 1) != 0 )
    v162 = LODWORD(Value[0]) | 1;
  else
    v162 = Value[0] & 0xFFFFFFFE;
  LODWORD(Value[0]) = v162;
  *(_DWORD *)(UserSessionState + 20916) = v162;
  LODWORD(ResultLengthl) = 40;
  *(_OWORD *)&Value[1] = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, v216, (unsigned __int64)ResultLengthl, 0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&Value[1], v216);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&Value[1], 0xAu, (PULONG)Value);
  }
  else
  {
    LODWORD(Value[0]) = 2;
  }
  v166 = *(unsigned int *)(W32GetUserSessionState(v164, v163) + 20892);
  if ( (v166 & 1) != 0 )
    v167 = LODWORD(Value[0]) | 1;
  else
    v167 = Value[0] & 0xFFFFFFFE;
  LODWORD(Value[0]) = v167;
  *(_DWORD *)(UserSessionState + 20892) = v167;
  if ( *(_QWORD *)(W32GetUserSessionState(v166, v165) + 14072) )
  {
    v171 = *(_QWORD *)(W32GetUserSessionState(v169, v168) + 14072);
    if ( *(_DWORD *)(v171 + 16) == 16 )
    {
      v171 = *(_QWORD *)(W32GetUserSessionState(v171, v170) + 14072);
      if ( *(_QWORD *)(v171 + 24) )
      {
        v172 = *(_QWORD *)(W32GetUserSessionState(v171, v170) + 14072);
        v173 = *(_QWORD *)(v172 + 24);
        *(_QWORD *)(W32GetUserSessionState(v172, v174) + 14200) = v173;
      }
    }
    v176 = *(_QWORD *)(W32GetUserSessionState(v171, v170) + 14072);
    if ( (*(_BYTE *)(v176 + 2) & 2) != 0 )
    {
      *(_WORD *)(W32GetUserSessionState(v176, v175) + 13984) = 36;
      *(_WORD *)(W32GetUserSessionState(36LL, v177) + 13986) = 21;
    }
  }
  FastGetProfileIntW((int)a1, 18, (int)L"TimeToWait", 300000, (PULONG)(UserSessionState + 20896), 0);
  LODWORD(ResultLengthn) = 40;
  *(_OWORD *)&Value[1] = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, v216, (unsigned __int64)ResultLengthn, 0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&Value[1], v216);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&Value[1], 0xAu, (PULONG)Value);
  }
  else
  {
    LODWORD(Value[0]) = 82;
  }
  v181 = *(unsigned int *)(W32GetUserSessionState(v179, v178) + 21044);
  if ( (v181 & 1) != 0 )
    v182 = LODWORD(Value[0]) | 1;
  else
    v182 = Value[0] & 0xFFFFFFFE;
  LODWORD(Value[0]) = v182;
  *(_OWORD *)&Value[1] = 0LL;
  *(_DWORD *)(UserSessionState + 21044) = v182;
  HIDWORD(Value[0]) = 0;
  v205 = *(_DWORD *)(W32GetUserSessionState(v181, v180) + 62784);
  while ( 1 )
  {
    v184 = (void *)OpenCacheKeyEx(a1);
    if ( !v184 )
      break;
    HIDWORD(Value[0]) = 268;
    v185 = Win32AllocPoolWithQuotaZInitImpl(v183, 0x10CuLL, 0x72707355u);
    if ( !v185 )
      goto LABEL_157;
    RtlInitUnicodeString((PUNICODE_STRING)&Value[1], L"High Contrast Scheme");
    ValueKey = ZwQueryValueKey(
                 v184,
                 (PUNICODE_STRING)&Value[1],
                 KeyValuePartialInformation,
                 (PVOID)v185,
                 HIDWORD(Value[0]),
                 (PULONG)Value + 1);
    v187 = 0;
    if ( ValueKey != -2147483643 )
      v187 = ValueKey;
    if ( v187 >= 0 )
    {
      v188 = 128;
      if ( *(_DWORD *)(v185 + 8) >> 1 < 0x80u )
        v188 = *(_DWORD *)(v185 + 8) >> 1;
      if ( *(_DWORD *)(v185 + 8) < 2u )
      {
        v224[0] = 0;
      }
      else
      {
        *(_WORD *)(v185 + 2LL * (unsigned int)(v188 - 1) + 12) = 0;
        RtlStringCchCopyW(v224, 0x80uLL, (const unsigned __int16 *)(v185 + 12));
      }
      GreDeleteFastMutex((char *)v185);
      ZwClose(v184);
      if ( v188 )
        RtlStringCchCopyW((unsigned __int16 *)(UserSessionState + 21056), 0x80uLL, v224);
      break;
    }
    if ( !v205 )
    {
      GreDeleteFastMutex((char *)v185);
LABEL_157:
      ZwClose(v184);
      break;
    }
    GreDeleteFastMutex((char *)v185);
    ZwClose(v184);
  }
  *(_DWORD *)(UserSessionState + 21832) = 12;
  FastGetProfileIntW((int)a1, 48, (int)L"On", 0, (PULONG)(UserSessionState + 21836), 0);
  FastGetProfileIntW((int)a1, 48, (int)L"Locale", 0, (PULONG)(UserSessionState + 21840), 0);
  AccessTimeOutReset();
  SetAccessEnabledFlag();
}
