/*
 * XREFs of sub_140022EC0 @ 0x140022EC0
 * Callers:
 *     sub_140022AC0 @ 0x140022AC0 (sub_140022AC0.c)
 *     DeferredRoutine @ 0x140022C70 (DeferredRoutine.c)
 * Callees:
 *     sub_140001A2C @ 0x140001A2C (sub_140001A2C.c)
 *     sub_140001CE8 @ 0x140001CE8 (sub_140001CE8.c)
 *     sub_140003400 @ 0x140003400 (sub_140003400.c)
 *     sub_14000C6B0 @ 0x14000C6B0 (sub_14000C6B0.c)
 *     sub_14000F84C @ 0x14000F84C (sub_14000F84C.c)
 *     sub_140010F80 @ 0x140010F80 (sub_140010F80.c)
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140017A20 @ 0x140017A20 (sub_140017A20.c)
 *     sub_14001F6B0 @ 0x14001F6B0 (sub_14001F6B0.c)
 *     sub_140025E00 @ 0x140025E00 (sub_140025E00.c)
 *     sub_140027440 @ 0x140027440 (sub_140027440.c)
 *     sub_140027C30 @ 0x140027C30 (sub_140027C30.c)
 *     sub_14002B390 @ 0x14002B390 (sub_14002B390.c)
 *     sub_140036524 @ 0x140036524 (sub_140036524.c)
 *     sub_1400416C8 @ 0x1400416C8 (sub_1400416C8.c)
 *     sub_140041AB0 @ 0x140041AB0 (sub_140041AB0.c)
 *     sub_140051260 @ 0x140051260 (sub_140051260.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140053A04 @ 0x140053A04 (sub_140053A04.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_140056004 @ 0x140056004 (sub_140056004.c)
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14006AD74 @ 0x14006AD74 (sub_14006AD74.c)
 *     sub_14006CFBC @ 0x14006CFBC (sub_14006CFBC.c)
 *     sub_140090C24 @ 0x140090C24 (sub_140090C24.c)
 *     sub_140090FB4 @ 0x140090FB4 (sub_140090FB4.c)
 *     sub_1400911A0 @ 0x1400911A0 (sub_1400911A0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

char __fastcall sub_140022EC0(_QWORD *a1)
{
  _QWORD *v1; // rdi
  IRP *v2; // rcx
  int v3; // r12d
  __int64 v4; // r13
  __int64 v5; // rsi
  unsigned int v6; // eax
  unsigned int v7; // r9d
  __int64 v8; // rax
  PIO_SECURITY_CONTEXT SecurityContext; // rcx
  PSECURITY_QUALITY_OF_SERVICE SecurityQos; // rbx
  int *v11; // r14
  __int64 v12; // rdi
  __int64 *v13; // rbx
  char *v14; // rdi
  KIRQL CurrentIrql; // al
  KSPIN_LOCK *v16; // rcx
  char v17; // al
  int v18; // r9d
  __int64 *v19; // rcx
  __int64 *v20; // r8
  __int64 **v21; // rax
  __int64 *v22; // rcx
  __int64 *v23; // rdx
  __int64 **v24; // rax
  char v25; // al
  int v26; // r9d
  __int64 *v27; // rcx
  __int64 *v28; // r8
  __int64 **v29; // rax
  __int64 *v30; // rcx
  __int64 *v31; // rdx
  __int64 **v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r9
  unsigned __int8 *v37; // r14
  unsigned int v38; // r11d
  unsigned int i; // r10d
  __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  __int64 v42; // r9
  __int64 v43; // r8
  int v44; // ecx
  int v45; // ecx
  unsigned __int64 v46; // rcx
  int v47; // ecx
  __int64 v48; // rdx
  __int64 v49; // rdx
  char v50; // al
  char v51; // bl
  unsigned int v52; // r11d
  _BYTE *v53; // r14
  unsigned __int8 v54; // r15
  char v55; // di
  unsigned int v56; // r11d
  __int64 v57; // r9
  __int64 v58; // rcx
  unsigned __int64 v59; // rdx
  __int64 v60; // r10
  __int64 v61; // r8
  int v62; // ecx
  int v63; // ecx
  unsigned __int64 v64; // rcx
  unsigned int v65; // ebx
  __int64 v66; // r10
  __int64 v67; // rcx
  unsigned __int64 v68; // rdx
  __int64 v69; // r9
  __int64 v70; // r8
  int v71; // ecx
  int v72; // ecx
  PIRP v73; // rbx
  _QWORD *v74; // r15
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned __int8 v76; // bl
  __int64 v77; // rdi
  _QWORD *v78; // rcx
  __int64 v79; // rax
  unsigned int HighestNodeNumber; // r8d
  __int64 v81; // rcx
  unsigned __int64 v82; // rcx
  int v83; // ecx
  bool v84; // zf
  unsigned int v85; // r11d
  unsigned int v86; // r9d
  __int64 v87; // rcx
  unsigned __int64 v88; // rdx
  __int64 v89; // r10
  __int64 v90; // r8
  int v91; // ecx
  int v92; // ecx
  unsigned __int64 v93; // rcx
  bool v94; // di
  _BYTE *v95; // rbx
  ULONG_PTR v96; // rax
  PIO_SECURITY_CONTEXT v97; // rdi
  __int64 v98; // r14
  int *v99; // r12
  __int64 v100; // rbx
  int *v101; // r15
  KIRQL v102; // al
  KSPIN_LOCK *v103; // rcx
  char v104; // al
  int v105; // r9d
  __int64 v106; // rcx
  __int64 v107; // r8
  _QWORD *v108; // rax
  __int64 v109; // rcx
  __int64 v110; // rdx
  _QWORD *v111; // rax
  char v112; // al
  int v113; // r9d
  __int64 v114; // rcx
  __int64 v115; // r8
  _QWORD *v116; // rax
  __int64 v117; // rcx
  __int64 v118; // rdx
  _QWORD *v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r9
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rcx
  __int64 v126; // rdx
  __int64 v127; // rax
  __int64 v128; // r15
  LARGE_INTEGER v129; // rax
  LARGE_INTEGER v130; // rbx
  unsigned int AccessState; // r9d
  unsigned int v132; // edx
  __int64 v133; // rcx
  unsigned __int64 DesiredAccess; // rax
  char *v135; // r8
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v137; // rdx
  DWORD LowPart; // ecx
  unsigned __int64 v139; // r8
  char v140; // r9
  LONGLONG v141; // r9
  unsigned int v142; // r11d
  unsigned int v143; // edx
  __int64 v144; // rcx
  unsigned __int64 v145; // r10
  char *v146; // r8
  int v147; // eax
  int AccessState_high; // eax
  int v149; // eax
  unsigned __int64 v150; // r8
  signed __int32 v151; // eax
  signed __int32 v152; // ett
  __int64 v153; // rbx
  PIO_WORKITEM WorkItem; // rax
  unsigned __int8 v155; // dl
  int v156; // eax
  __int64 v158; // rcx
  const int *v159; // r10
  int v160; // eax
  __int64 v161; // r8
  char v162; // r9
  unsigned __int8 *v163; // rdx
  __int64 v164; // rdi
  unsigned __int8 v165; // cl
  int v166; // edx
  __int64 v167; // rbx
  unsigned int v168; // r8d
  int j; // ecx
  unsigned __int8 v170; // cl
  int k; // ecx
  const int *v172; // r14
  int v173; // eax
  int v174; // eax
  const int *v175; // r14
  unsigned __int8 *v176; // rcx
  int v177; // edx
  char v178; // r8
  __int64 v179; // r15
  __int64 v180; // rbx
  unsigned int v181; // ecx
  int m; // eax
  int n; // eax
  const int *v184; // r8
  unsigned int v185; // eax
  __int64 v186; // rcx
  __int64 v187; // r9
  const int *v188; // r14
  int v189; // eax
  int v190; // eax
  _BYTE *v191; // rcx
  char v192; // al
  int v193; // edx
  _BYTE *v194; // rbx
  __int64 v195; // rax
  __int64 v196; // rdi
  __int64 v197; // rcx
  __int64 v198; // rax
  __int64 v199; // rcx
  const int *v200; // r8
  unsigned int v201; // eax
  __int64 v202; // r9
  const int *v203; // r14
  const char *v204; // r14
  unsigned __int8 v205; // cl
  int v206; // eax
  unsigned __int8 v207; // al
  __int64 v208; // rax
  __int64 v209; // rcx
  __int64 v210; // r8
  unsigned __int8 *v211; // rdx
  unsigned __int8 v212; // cl
  int kk; // ecx
  unsigned __int8 v214; // cl
  int mm; // ecx
  unsigned __int8 *v216; // rcx
  int ii; // eax
  int jj; // eax
  _BYTE *v219; // rcx
  char v220; // al
  int v221; // edx
  _BYTE *v222; // rbx
  __int64 v223; // rax
  __int64 v224; // rdi
  __int64 v225; // rax
  ULONG *v226; // rax
  void *v227; // rcx
  PIO_SECURITY_CONTEXT v228; // rdi
  __int64 v229; // r14
  __int64 v230; // r15
  int *v231; // r13
  __int64 v232; // rbx
  int *v233; // r12
  KIRQL v234; // al
  KSPIN_LOCK *v235; // rcx
  char v236; // al
  int v237; // r9d
  __int64 v238; // rcx
  __int64 v239; // r8
  _QWORD *v240; // rax
  __int64 v241; // rcx
  __int64 v242; // rdx
  _QWORD *v243; // rax
  char v244; // al
  int v245; // r9d
  __int64 v246; // rcx
  __int64 v247; // r8
  _QWORD *v248; // rax
  __int64 v249; // rcx
  __int64 v250; // rdx
  _QWORD *v251; // rax
  __int64 v252; // rdx
  __int64 v253; // rcx
  __int64 v254; // r9
  __int64 v255; // rdx
  __int64 v256; // rcx
  __int64 v257; // rcx
  __int64 v258; // rdx
  __int64 v259; // rax
  __int64 v260; // r13
  LARGE_INTEGER v261; // rax
  LARGE_INTEGER v262; // rbx
  unsigned int v263; // r8d
  unsigned int v264; // edx
  __int64 v265; // rcx
  unsigned __int64 v266; // rax
  char *v267; // r9
  LARGE_INTEGER v268; // rax
  LARGE_INTEGER v269; // rdx
  DWORD v270; // ecx
  unsigned __int64 v271; // r8
  char v272; // r9
  LONGLONG v273; // r9
  unsigned int v274; // r11d
  unsigned int v275; // edx
  __int64 v276; // rcx
  unsigned __int64 v277; // r9
  char *v278; // r8
  int v279; // eax
  int v280; // eax
  int v281; // eax
  unsigned __int64 v282; // r8
  signed __int32 v283; // eax
  signed __int32 v284; // ett
  __int64 v285; // rdi
  __int64 v286; // rcx
  __int64 v287; // rdx
  int *v288; // rax
  void *v289; // rdx
  __int64 v290; // rdx
  char v291; // r13
  unsigned __int8 v292; // r11
  char v293; // bl
  char v294; // r12
  char v295; // r15
  unsigned __int8 *v296; // rdi
  unsigned int v297; // r14d
  _BYTE *v298; // r10
  __int64 v299; // rcx
  unsigned __int64 v300; // r8
  __int64 v301; // r9
  int v302; // ecx
  int v303; // ecx
  unsigned __int64 v304; // rcx
  char *v305; // rcx
  char v306; // r8
  char *v307; // rax
  unsigned int v308; // eax
  unsigned __int64 v309; // r8
  char v310; // cl
  char result; // al
  char v312; // bl
  char v313; // al
  __int64 v314; // rcx
  char v315; // [rsp+80h] [rbp-80h]
  char v316; // [rsp+80h] [rbp-80h]
  unsigned int v317; // [rsp+84h] [rbp-7Ch]
  int v318; // [rsp+84h] [rbp-7Ch]
  bool v319; // [rsp+88h] [rbp-78h]
  int v320; // [rsp+88h] [rbp-78h]
  unsigned int v321; // [rsp+8Ch] [rbp-74h]
  int v322; // [rsp+8Ch] [rbp-74h]
  __int64 v324; // [rsp+90h] [rbp-70h]
  unsigned __int8 *v325; // [rsp+98h] [rbp-68h]
  __int64 v326; // [rsp+98h] [rbp-68h]
  PIRP Irp; // [rsp+A0h] [rbp-60h]
  char v328; // [rsp+A8h] [rbp-58h]
  int v329; // [rsp+ACh] [rbp-54h]
  unsigned int v330; // [rsp+ACh] [rbp-54h]
  unsigned int v331; // [rsp+B0h] [rbp-50h]
  BOOL v332; // [rsp+B0h] [rbp-50h]
  unsigned int v333; // [rsp+B4h] [rbp-4Ch]
  unsigned int v334; // [rsp+B8h] [rbp-48h]
  unsigned int v335; // [rsp+BCh] [rbp-44h]
  unsigned int v336; // [rsp+C0h] [rbp-40h]
  unsigned int v337; // [rsp+C4h] [rbp-3Ch]
  unsigned int v338; // [rsp+C8h] [rbp-38h]
  unsigned int v339; // [rsp+CCh] [rbp-34h]
  __int64 v340; // [rsp+D0h] [rbp-30h]
  __int64 v341; // [rsp+D8h] [rbp-28h]
  __int64 v342; // [rsp+E0h] [rbp-20h]
  __int64 v343; // [rsp+E8h] [rbp-18h]
  __int64 v344; // [rsp+F0h] [rbp-10h]
  __int64 v345; // [rsp+F8h] [rbp-8h]
  PVOID VirtualAddress; // [rsp+100h] [rbp+0h]
  __int64 v347; // [rsp+108h] [rbp+8h]
  __int64 v348; // [rsp+110h] [rbp+10h]
  __int64 v349; // [rsp+118h] [rbp+18h]
  __int64 v350; // [rsp+120h] [rbp+20h]
  __int64 v351; // [rsp+128h] [rbp+28h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+130h] [rbp+30h] BYREF
  union _LARGE_INTEGER v353; // [rsp+138h] [rbp+38h] BYREF
  __int64 v354; // [rsp+140h] [rbp+40h] BYREF
  __int64 v355; // [rsp+148h] [rbp+48h] BYREF
  __int64 v356; // [rsp+150h] [rbp+50h]
  _QWORD *v357; // [rsp+158h] [rbp+58h]
  _QWORD *v358; // [rsp+160h] [rbp+60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+168h] [rbp+68h] BYREF
  struct _KLOCK_QUEUE_HANDLE v360; // [rsp+180h] [rbp+80h] BYREF
  struct _KLOCK_QUEUE_HANDLE v361; // [rsp+198h] [rbp+98h] BYREF
  __int128 v362; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v363; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v364; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 v365; // [rsp+1E0h] [rbp+E0h] BYREF

  v1 = a1;
  v2 = (IRP *)a1[20];
  LOBYTE(v3) = 0;
  v355 = 0LL;
  v357 = v1;
  v4 = v1[21];
  v5 = v1[28];
  v328 = *((_BYTE *)v1 + 16);
  v6 = *(unsigned __int8 *)(v4 + 2);
  v354 = 0LL;
  Irp = v2;
  *(_QWORD *)&v362 = v4;
  if ( (_BYTE)v6 == 40 )
  {
    v7 = *(_DWORD *)(v4 + 20);
    v356 = *(_QWORD *)(v4 + 104);
    v358 = v1 + 110;
    v8 = *(_QWORD *)(v5 + 24);
    v329 = *(_DWORD *)(v4 + 24);
    v317 = v7;
    v331 = *(_DWORD *)(v4 + 32);
    v321 = *(_DWORD *)(v4 + 60);
    if ( *(_DWORD *)v8 == 1094997074 && (*(_BYTE *)(v8 + 111) & 4) != 0 && (*(_BYTE *)(v4 + 3) & 0x3F) == 1 )
      *(_DWORD *)(v4 + 44) = 0;
  }
  else
  {
    v317 = v6;
    v356 = *(_QWORD *)(v4 + 56);
    v358 = *(_QWORD **)(v4 + 32);
    v331 = *(unsigned __int8 *)(v4 + 8);
    v329 = *(_DWORD *)(v4 + 12);
    v321 = *(_DWORD *)(v4 + 16);
  }
  SecurityContext = v2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( BYTE2(SecurityContext->SecurityQos) == 40 )
    SecurityQos = SecurityContext[4].SecurityQos;
  else
    SecurityQos = SecurityContext[2].SecurityQos;
  if ( (SecurityQos[1].ImpersonationLevel & 2) == 0 )
  {
    v33 = (__int64)Irp;
LABEL_47:
    if ( byte_140168DAA )
    {
      if ( (byte_1401694F1 & 1) != 0 )
        sub_140041AB0(v1, 0LL, 0LL);
      if ( *(_DWORD *)(v5 + 1940) && (byte_1401694F3 & 2) != 0 )
        sub_1400416C8(v1, 0LL, 0LL);
    }
    goto LABEL_53;
  }
  v11 = *(int **)(v5 + 560);
  v12 = (SecurityQos[7].Length + 1LL) << 6;
  v13 = (__int64 *)&SecurityQos[4];
  v14 = (char *)v11 + v12;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  v16 = (KSPIN_LOCK *)(v14 + 40);
  if ( CurrentIrql == 2 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v16, &LockHandle);
    v17 = *((_BYTE *)v13 - 32);
    v18 = *v11;
    if ( (v17 & 2) != 0 )
    {
      *((_BYTE *)v13 - 32) = v17 & 0xFD;
      v19 = (__int64 *)*v13;
      v20 = *(__int64 **)v14;
      if ( *(__int64 **)(*v13 + 8) != v13 )
        goto LABEL_602;
      v21 = (__int64 **)v13[1];
      if ( *v21 != v13 )
        goto LABEL_602;
      *v21 = v19;
      v19[1] = (__int64)v21;
      if ( (v13[6] & 1) != 0 )
      {
        v22 = v13 + 2;
        if ( *((__int64 **)v14 + 4) == v13 + 2 )
          *((_QWORD *)v14 + 4) = *v22;
        v23 = (__int64 *)*v22;
        if ( *(__int64 **)(*v22 + 8) != v22 )
          goto LABEL_602;
        v24 = (__int64 **)v13[3];
        if ( *v24 != v22 )
          goto LABEL_602;
        *v24 = v23;
        v23[1] = (__int64)v24;
        *((_DWORD *)v13 + 12) &= ~1u;
      }
      if ( (v18 & 4) == 0 && v20 == v13 )
      {
        if ( *(char **)v14 == v14 )
          *((_DWORD *)v14 + 12) = -1;
        else
          *((_DWORD *)v14 + 12) = *(_DWORD *)(*(_QWORD *)v14 + 32LL);
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(v16, &LockHandle);
    v25 = *((_BYTE *)v13 - 32);
    v26 = *v11;
    if ( (v25 & 2) != 0 )
    {
      *((_BYTE *)v13 - 32) = v25 & 0xFD;
      v27 = (__int64 *)*v13;
      v28 = *(__int64 **)v14;
      if ( *(__int64 **)(*v13 + 8) != v13 )
        goto LABEL_602;
      v29 = (__int64 **)v13[1];
      if ( *v29 != v13 )
        goto LABEL_602;
      *v29 = v27;
      v27[1] = (__int64)v29;
      if ( (v13[6] & 1) != 0 )
      {
        v30 = v13 + 2;
        if ( *((__int64 **)v14 + 4) == v13 + 2 )
          *((_QWORD *)v14 + 4) = *v30;
        v31 = (__int64 *)*v30;
        if ( *(__int64 **)(*v30 + 8) != v30 )
          goto LABEL_602;
        v32 = (__int64 **)v13[3];
        if ( *v32 != v30 )
          goto LABEL_602;
        *v32 = v31;
        v31[1] = (__int64)v32;
        *((_DWORD *)v13 + 12) &= ~1u;
      }
      if ( (v26 & 4) == 0 && v28 == v13 )
      {
        if ( *(char **)v14 == v14 )
          *((_DWORD *)v14 + 12) = -1;
        else
          *((_DWORD *)v14 + 12) = *(_DWORD *)(*(_QWORD *)v14 + 32LL);
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  v33 = (__int64)Irp;
  if ( byte_140168DAA )
  {
    v363 = 0LL;
    IoGetActivityIdIrp(Irp, &v363);
    if ( byte_1401694F2 < 0 )
      sub_140001CE8(v35, v34, (__int64)&v363, v36, 4);
    v1 = a1;
    goto LABEL_47;
  }
LABEL_53:
  if ( *(_BYTE *)(v4 + 2) != 40 )
  {
    v37 = (unsigned __int8 *)(v4 + 72);
    goto LABEL_72;
  }
  v37 = 0LL;
  v325 = 0LL;
  if ( !*(_DWORD *)(v4 + 20) )
  {
    v38 = *(_DWORD *)(v4 + 56);
    for ( i = 0; i < v38; ++i )
    {
      v40 = *(unsigned int *)(v4 + 4LL * i + 120);
      if ( (unsigned int)v40 < 0x80 )
        continue;
      v41 = *(unsigned int *)(v4 + 16);
      if ( (unsigned int)v40 >= (unsigned int)v41 )
        continue;
      v42 = v40 + v4;
      v43 = (unsigned int)v40;
      v44 = *(_DWORD *)(v40 + v4) - 64;
      if ( v44 )
      {
        v45 = v44 - 1;
        if ( v45 )
        {
          if ( v45 == 1 && v43 + 40 <= v41 )
          {
            if ( !*(_DWORD *)(v42 + 12) )
              break;
            v37 = (unsigned __int8 *)(v42 + 32);
            goto LABEL_72;
          }
          continue;
        }
        v46 = v43 + 56;
      }
      else
      {
        v46 = v43 + 40;
      }
      if ( v46 <= v41 )
      {
        if ( !*(_BYTE *)(v42 + 10) )
          break;
        v37 = (unsigned __int8 *)(v42 + 24);
LABEL_72:
        v325 = v37;
        break;
      }
    }
  }
  if ( *(_DWORD *)(v5 + 2372) )
  {
    if ( v37 )
    {
      v47 = *v37;
      if ( !v317 )
      {
        if ( (unsigned __int8)(v47 - 8) <= 0x3Au
          && (v48 = 0x400200500000005LL, _bittest64(&v48, (unsigned int)(v47 - 8)))
          || (unsigned __int8)(v47 + 120) <= 0x22u && (v49 = 0x500000205LL, _bittest64(&v49, (unsigned int)(v47 + 120))) )
        {
          sub_140010F80(a1, v4, v5, v33, v47);
        }
      }
    }
  }
  if ( !dword_140168478 || !v37 )
  {
LABEL_118:
    v73 = Irp;
    v74 = a1;
    goto LABEL_119;
  }
  v50 = *(_BYTE *)(v4 + 2);
  v51 = 0;
  v52 = *(unsigned __int8 *)(v4 + 3);
  v53 = 0LL;
  v54 = 0;
  v315 = *(_BYTE *)(v4 + 3);
  v55 = 0;
  if ( v50 != 40 )
  {
    v55 = *(_BYTE *)(v4 + 4);
    LOBYTE(v52) = v52 & 0x3F;
    if ( !v50 )
    {
      v53 = *(_BYTE **)(v4 + 32);
      v54 = *(_BYTE *)(v4 + 11);
    }
    goto LABEL_109;
  }
  if ( *(_DWORD *)(v4 + 20) )
    goto LABEL_98;
  v56 = *(_DWORD *)(v4 + 56);
  v57 = 0LL;
  if ( !v56 )
    goto LABEL_97;
  while ( 1 )
  {
    v58 = *(unsigned int *)(v4 + 4 * v57 + 120);
    if ( (unsigned int)v58 < 0x80 )
      goto LABEL_93;
    v59 = *(unsigned int *)(v4 + 16);
    if ( (unsigned int)v58 >= (unsigned int)v59 )
      goto LABEL_93;
    v60 = v58 + v4;
    v61 = (unsigned int)v58;
    v62 = *(_DWORD *)(v58 + v4) - 64;
    if ( !v62 )
    {
LABEL_91:
      v64 = v61 + 40;
      goto LABEL_92;
    }
    v63 = v62 - 1;
    if ( !v63 )
      break;
    if ( v63 == 1 )
      goto LABEL_91;
LABEL_93:
    v57 = (unsigned int)(v57 + 1);
    if ( (unsigned int)v57 >= v56 )
      goto LABEL_97;
  }
  v64 = v61 + 56;
LABEL_92:
  if ( v64 > v59 )
    goto LABEL_93;
  v55 = *(_BYTE *)(v60 + 8);
LABEL_97:
  v52 = (unsigned __int8)v315;
LABEL_98:
  LOBYTE(v52) = v52 & 0x3F;
  if ( *(_DWORD *)(v4 + 20) )
    goto LABEL_109;
  v65 = *(_DWORD *)(v4 + 56);
  v66 = 0LL;
  if ( !v65 )
    goto LABEL_108;
  while ( 2 )
  {
    v67 = *(unsigned int *)(v4 + 4 * v66 + 120);
    if ( (unsigned int)v67 < 0x80 )
      goto LABEL_141;
    v68 = *(unsigned int *)(v4 + 16);
    if ( (unsigned int)v67 >= (unsigned int)v68 )
      goto LABEL_141;
    v69 = v67 + v4;
    v70 = (unsigned int)v67;
    v71 = *(_DWORD *)(v67 + v4) - 64;
    if ( v71 )
    {
      v72 = v71 - 1;
      if ( v72 )
      {
        if ( v72 == 1 && v70 + 40 <= v68 )
        {
          v53 = *(_BYTE **)(v69 + 24);
          goto LABEL_107;
        }
        goto LABEL_141;
      }
      v82 = v70 + 56;
    }
    else
    {
      v82 = v70 + 40;
    }
    if ( v82 > v68 )
    {
LABEL_141:
      v66 = (unsigned int)(v66 + 1);
      if ( (unsigned int)v66 >= v65 )
        goto LABEL_108;
      continue;
    }
    break;
  }
  v53 = *(_BYTE **)(v69 + 16);
LABEL_107:
  v54 = *(_BYTE *)(v69 + 9);
LABEL_108:
  v51 = 0;
LABEL_109:
  if ( v315 >= 0 )
  {
    if ( v55 != 2 && (unsigned __int8)v52 <= 0x12u )
    {
      v83 = 262211;
      if ( _bittest(&v83, v52) )
        goto LABEL_117;
    }
  }
  else
  {
    if ( v53 && v54 >= 0x12u && (unsigned __int8)((*v53 & 0x7F) - 112) <= 1u )
    {
      v51 = v53[12];
      LOBYTE(v3) = v53[2] & 0xF;
    }
    if ( (_BYTE)v52 == 1 && !(_BYTE)v3 && !v51 )
    {
LABEL_117:
      v37 = v325;
      LOBYTE(v3) = 0;
      goto LABEL_118;
    }
  }
  v74 = a1;
  v73 = Irp;
  sub_140003400(v5, (int)Irp, (int)a1, v4);
  v37 = v325;
  LOBYTE(v3) = 0;
LABEL_119:
  if ( (*((_BYTE *)v74 + 17) & 2) != 0 )
  {
    sub_14001F6B0(v5, *((_DWORD *)v74 + 187));
    *((_BYTE *)v74 + 17) &= ~2u;
  }
  CurrentStackLocation = v73->Tail.Overlay.CurrentStackLocation;
  v76 = CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter & 3;
  CurrentStackLocation->Parameters.QueryDirectory.FileName = 0LL;
  v77 = *(_QWORD *)(v5 + 24);
  if ( (v76 & 1) != 0
    && (*(_DWORD *)(v5 + 504) & 0x8000) != 0
    && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v5 + 1864)) )
  {
    PoFxIdleComponent(**(_QWORD **)(v5 + 1872), 0LL, 0LL);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v5 + 1864));
  }
  if ( v76 >= 2u )
  {
    v78 = *(_QWORD **)(v77 + 4960);
    if ( v78 )
      PoFxIdleComponent(*v78, 0LL, 0LL);
  }
  v79 = *(_QWORD *)(v5 + 24);
  if ( *(_DWORD *)v79 != 1094997074 || (*(_BYTE *)(v79 + 111) & 4) == 0 )
  {
    HighestNodeNumber = KeQueryHighestNodeNumber();
    if ( v331 / *(_DWORD *)(v5 + 648) < HighestNodeNumber + 1 )
      HighestNodeNumber = v331 / *(_DWORD *)(v5 + 648);
    ExpInterlockedPushEntrySList(
      (PSLIST_HEADER)(*(_QWORD *)(v5 + 576) + ((unsigned __int64)HighestNodeNumber << 6)),
      (PSLIST_ENTRY)(*(_QWORD *)(v5 + 640) + 16LL * v331));
  }
  v332 = 0;
  if ( (v329 & 0x102) != 0x102 && (v329 & 0x80010) == 0 )
  {
    if ( v317 > 0x20 || (v81 = 0x1000D0000LL, !_bittest64(&v81, v317)) )
      v332 = 1;
  }
  if ( (*(_BYTE *)(v5 + 506) & 2) != 0 && (unsigned __int8)sub_140036524(v4, 1LL) )
  {
    v84 = *(_BYTE *)(v4 + 2) == 40;
    *(_BYTE *)(v4 + 3) = 56;
    if ( v84 )
    {
      if ( !*(_DWORD *)(v4 + 20) )
      {
        v85 = *(_DWORD *)(v4 + 56);
        v86 = 0;
        if ( v85 )
        {
          while ( 1 )
          {
            v87 = *(unsigned int *)(v4 + 4LL * v86 + 120);
            if ( (unsigned int)v87 < 0x80 )
              goto LABEL_163;
            v88 = *(unsigned int *)(v4 + 16);
            if ( (unsigned int)v87 >= (unsigned int)v88 )
              goto LABEL_163;
            v89 = v87 + v4;
            v90 = (unsigned int)v87;
            v91 = *(_DWORD *)(v87 + v4) - 64;
            if ( !v91 )
              goto LABEL_161;
            v92 = v91 - 1;
            if ( v92 )
              break;
            v93 = v90 + 56;
LABEL_162:
            if ( v93 <= v88 )
            {
              *(_BYTE *)(v89 + 8) = 0;
              goto LABEL_168;
            }
LABEL_163:
            if ( ++v86 >= v85 )
              goto LABEL_168;
          }
          if ( v92 != 1 )
            goto LABEL_163;
LABEL_161:
          v93 = v90 + 40;
          goto LABEL_162;
        }
      }
    }
    else
    {
      *(_BYTE *)(v4 + 4) = 0;
    }
LABEL_168:
    _InterlockedIncrement64((volatile signed __int64 *)(v5 + 2232));
  }
  if ( (*(_BYTE *)(v4 + 3) & 0x3F) != 1 )
  {
    if ( (*(_BYTE *)(v5 + 136) & 2) != 0 )
    {
      v313 = sub_140027C30(v5, 0LL, v74, 0LL);
      v314 = *(_QWORD *)(v5 + 24);
      if ( v313 )
      {
        ++*(_DWORD *)(v314 + 5656);
        ++*(_DWORD *)(v5 + 2284);
        v310 = sub_14002B390(v5, v74);
        goto LABEL_736;
      }
      ++*(_DWORD *)(v314 + 5660);
    }
    v310 = sub_14002B390(v5, v74);
    goto LABEL_736;
  }
  v94 = 0;
  v316 = 0;
  v319 = 0;
  if ( *(_BYTE *)(v4 + 2) == 40 )
    v95 = *(_BYTE **)(v4 + 64);
  else
    v95 = *(_BYTE **)(v4 + 24);
  VirtualAddress = v95;
  if ( v37 && *v37 == 29 && v95 )
  {
    v84 = MmIsAddressValid(v95) == 0;
    v96 = v321;
    if ( !v84 && v321 >= 9 && *v95 == 14 )
    {
      v94 = v95[8] == 15;
      v319 = v94;
    }
  }
  else
  {
    v96 = v321;
  }
  v84 = byte_1401688AC == 0;
  Irp->IoStatus.Status = 0;
  Irp->IoStatus.Information = v96;
  if ( v84 )
  {
    v97 = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    if ( BYTE2(v97->SecurityQos) == 40 )
      v98 = (__int64)v97[4].SecurityQos;
    else
      v98 = (__int64)v97[2].SecurityQos;
    v351 = *(_QWORD *)(v98 + 224);
    if ( (*(_BYTE *)(v98 + 16) & 2) != 0 )
    {
      v99 = *(int **)(*(_QWORD *)(v98 + 224) + 560LL);
      v100 = v98 + 48;
      v101 = &v99[16 * *(unsigned int *)(v98 + 84) + 16];
      memset(&v360, 0, sizeof(v360));
      v102 = KeGetCurrentIrql();
      v103 = (KSPIN_LOCK *)(v101 + 10);
      if ( v102 == 2 )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel(v103, &v360);
        v104 = *(_BYTE *)(v98 + 16);
        v105 = *v99;
        if ( (v104 & 2) != 0 )
        {
          *(_BYTE *)(v98 + 16) = v104 & 0xFD;
          v106 = *(_QWORD *)v100;
          v107 = *(_QWORD *)v101;
          if ( *(_QWORD *)(*(_QWORD *)v100 + 8LL) != v100 )
            goto LABEL_602;
          v108 = *(_QWORD **)(v98 + 56);
          if ( *v108 != v100 )
            goto LABEL_602;
          *v108 = v106;
          *(_QWORD *)(v106 + 8) = v108;
          if ( (*(_DWORD *)(v98 + 96) & 1) != 0 )
          {
            v109 = v98 + 64;
            if ( *((_QWORD *)v101 + 4) == v98 + 64 )
              *((_QWORD *)v101 + 4) = *(_QWORD *)v109;
            v110 = *(_QWORD *)v109;
            if ( *(_QWORD *)(*(_QWORD *)v109 + 8LL) != v109 )
              goto LABEL_602;
            v111 = *(_QWORD **)(v98 + 72);
            if ( *v111 != v109 )
              goto LABEL_602;
            *v111 = v110;
            *(_QWORD *)(v110 + 8) = v111;
            *(_DWORD *)(v98 + 96) &= ~1u;
          }
          if ( (v105 & 4) == 0 && v107 == v100 )
          {
            if ( *(int **)v101 == v101 )
              v101[12] = -1;
            else
              v101[12] = *(_DWORD *)(*(_QWORD *)v101 + 32LL);
          }
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v360);
      }
      else
      {
        KeAcquireInStackQueuedSpinLock(v103, &v360);
        v112 = *(_BYTE *)(v98 + 16);
        v113 = *v99;
        if ( (v112 & 2) != 0 )
        {
          *(_BYTE *)(v98 + 16) = v112 & 0xFD;
          v114 = *(_QWORD *)v100;
          v115 = *(_QWORD *)v101;
          if ( *(_QWORD *)(*(_QWORD *)v100 + 8LL) != v100 )
            goto LABEL_602;
          v116 = *(_QWORD **)(v98 + 56);
          if ( *v116 != v100 )
            goto LABEL_602;
          *v116 = v114;
          *(_QWORD *)(v114 + 8) = v116;
          if ( (*(_DWORD *)(v98 + 96) & 1) != 0 )
          {
            v117 = v98 + 64;
            if ( *((_QWORD *)v101 + 4) == v98 + 64 )
              *((_QWORD *)v101 + 4) = *(_QWORD *)v117;
            v118 = *(_QWORD *)v117;
            if ( *(_QWORD *)(*(_QWORD *)v117 + 8LL) != v117 )
              goto LABEL_602;
            v119 = *(_QWORD **)(v98 + 72);
            if ( *v119 != v117 )
              goto LABEL_602;
            *v119 = v118;
            *(_QWORD *)(v118 + 8) = v119;
            *(_DWORD *)(v98 + 96) &= ~1u;
          }
          if ( (v113 & 4) == 0 && v115 == v100 )
          {
            if ( *(int **)v101 == v101 )
              v101[12] = -1;
            else
              v101[12] = *(_DWORD *)(*(_QWORD *)v101 + 32LL);
          }
        }
        KeReleaseInStackQueuedSpinLock(&v360);
      }
      if ( byte_140168DAA )
      {
        v364 = 0LL;
        IoGetActivityIdIrp(Irp, &v364);
        if ( byte_1401694F2 < 0 )
          sub_140001CE8(v121, v120, (__int64)&v364, v122, 4);
      }
    }
    sub_140027440(v98, *(_QWORD *)(*(_QWORD *)(v351 + 24) + 8LL));
    if ( (unsigned int)sub_1400567A0(v124, v123) )
    {
      v127 = *(_QWORD *)(v351 + 3600);
      if ( v127 && *(_QWORD *)(v127 + 104) )
        goto LABEL_223;
      v125 = *(_QWORD *)(v351 + 24);
      if ( !*(_QWORD *)(v125 + 5616) )
        goto LABEL_229;
      v126 = v98;
    }
    else
    {
      v125 = *(_QWORD *)(v351 + 24);
      if ( !*(_QWORD *)(v125 + 5624) )
      {
LABEL_229:
        if ( BYTE2(v97->SecurityQos) == 40 )
        {
          if ( (*(_BYTE *)(v98 + 16) & 0x40) != 0 )
          {
            v128 = *(_QWORD *)(v98 + 752);
            PerformanceFrequency.QuadPart = 1LL;
            if ( v128 )
            {
              if ( byte_140168724 )
                v129 = KeQueryPerformanceCounter(&PerformanceFrequency);
              else
                v129.QuadPart = KeQueryUnbiasedInterruptTime();
              v130 = v129;
              *(_BYTE *)(v128 + 3) = BYTE3(v97->SecurityQos);
              *(_DWORD *)(v128 + 12) = v97[1].SecurityQos;
              if ( ((__int64)v97[1].SecurityQos & 0x40) != 0 )
                *(_DWORD *)(v128 + 16) = HIDWORD(v97[2].AccessState);
              if ( BYTE3(v97->SecurityQos) == 48 )
                *(_DWORD *)(v128 + 64) = v97[1].FullCreateOptions;
              if ( !v97->FullCreateOptions )
              {
                AccessState = (unsigned int)v97[2].AccessState;
                v132 = 0;
                if ( AccessState )
                {
                  while ( 1 )
                  {
                    v133 = *((unsigned int *)&v97[5].SecurityQos + v132);
                    if ( (unsigned int)v133 >= 0x80 )
                    {
                      DesiredAccess = v97->DesiredAccess;
                      if ( (unsigned int)v133 <= (unsigned int)DesiredAccess )
                      {
                        v135 = (char *)v97 + v133;
                        if ( *(_DWORD *)((char *)&v97->SecurityQos + v133) == 64 && v133 + 40 <= DesiredAccess )
                          break;
                      }
                    }
                    if ( ++v132 >= AccessState )
                      goto LABEL_246;
                  }
                  *(_BYTE *)(v128 + 4) = v135[8];
                  *(_QWORD *)(v128 + 32) = *((_QWORD *)v135 + 2);
                  *(_BYTE *)(v128 + 11) = v135[9];
                }
                else
                {
LABEL_246:
                  *(_BYTE *)(v128 + 3) = 48;
                  *(_DWORD *)(v128 + 64) = -1073741811;
                }
              }
              if ( byte_140168724 )
                PerformanceCounter = KeQueryPerformanceCounter(0LL);
              else
                PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
              if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v130.QuadPart )
                v139 = PerformanceCounter.QuadPart - v130.QuadPart;
              else
                v139 = PerformanceCounter.QuadPart - v130.QuadPart - 1;
              if ( byte_140168724 )
              {
                LowPart = PerformanceFrequency.LowPart;
                v140 = 0;
                if ( PerformanceFrequency.QuadPart && v139 )
                {
                  v141 = v139 / PerformanceFrequency.QuadPart;
                  v139 = 1000 * (v139 % PerformanceFrequency.QuadPart);
                  v137.QuadPart = 10000 * (v139 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart;
                  v140 = 10000 * (v139 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
                       + 16 * (-24 * v141 + v139 / PerformanceFrequency.QuadPart);
                }
              }
              else
              {
                v140 = v139;
              }
              if ( (byte_1401694F0 & 0x40) != 0 )
                sub_140053A04(
                  LowPart,
                  v137.LowPart,
                  v139,
                  (unsigned int)L"Translate STORAGE_REQUEST_BLOCK result",
                  v140);
            }
            LOBYTE(v3) = 0;
            *(_QWORD *)(*(_QWORD *)(v98 + 752) + 48LL) = *(_QWORD *)(v98 + 176);
            *(_QWORD *)(*(_QWORD *)(v98 + 752) + 24LL) = *(_QWORD *)(v98 + 184);
            *(_QWORD *)(*(_QWORD *)(v98 + 752) + 56LL) = 0LL;
            *(_QWORD *)(*(_QWORD *)(v98 + 752) + 40LL) = 0LL;
            Irp->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId = *(_QWORD *)(v98 + 752);
            *(_BYTE *)(v98 + 16) &= ~0x40u;
            *(_QWORD *)(v98 + 752) = 0LL;
          }
          else
          {
            LOBYTE(v3) = 0;
            v97[4].SecurityQos = 0LL;
            *(_QWORD *)&v97[2].DesiredAccess = *(_QWORD *)(v98 + 184);
            v97[4].AccessState = 0LL;
            if ( *(_QWORD *)(v98 + 192) )
            {
              if ( ((__int64)v97[1].SecurityQos & 0xC0) == 0xC0 )
              {
                v142 = (unsigned int)v97[2].AccessState;
                v143 = 0;
                if ( v142 )
                {
                  while ( 1 )
                  {
                    v144 = *((unsigned int *)&v97[5].SecurityQos + v143);
                    if ( (unsigned int)v144 >= 0x80 )
                    {
                      v145 = v97->DesiredAccess;
                      if ( (unsigned int)v144 <= (unsigned int)v145 )
                      {
                        v146 = (char *)v97 + v144;
                        if ( *(_DWORD *)((char *)&v97->SecurityQos + v144) == 1 && v144 + 24 <= v145 )
                          break;
                      }
                    }
                    if ( ++v143 >= v142 )
                      goto LABEL_274;
                  }
                  if ( v146 )
                    *((_QWORD *)v146 + 2) = *(_QWORD *)(v98 + 192);
                }
              }
            }
LABEL_274:
            if ( byte_1401688AC )
            {
              v147 = (int)v97[1].SecurityQos;
              if ( (v147 & 0x2000000) != 0 )
                LODWORD(v97[1].SecurityQos) = v147 & 0xFDFFFFFF;
            }
          }
        }
        else
        {
          LOBYTE(v3) = 0;
          v84 = byte_1401688AC == 0;
          v97[2].SecurityQos = *(PSECURITY_QUALITY_OF_SERVICE *)(v98 + 176);
          v97[1].SecurityQos = *(PSECURITY_QUALITY_OF_SERVICE *)(v98 + 184);
          v97[2].AccessState = 0LL;
          *(_QWORD *)&v97[1].DesiredAccess = 0LL;
          if ( !v84 )
          {
            AccessState_high = HIDWORD(v97->AccessState);
            if ( (AccessState_high & 0x2000000) != 0 )
              HIDWORD(v97->AccessState) = AccessState_high & 0xFDFFFFFF;
          }
        }
        sub_140017A20(v98, 1);
        if ( BYTE2(v97->SecurityQos) == 40 )
          v149 = (int)v97[1].SecurityQos;
        else
          v149 = HIDWORD(v97->AccessState);
        if ( (v149 & 0x4000) == 0 )
        {
          v150 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
          v151 = *(_DWORD *)(v150 + *(_QWORD *)(v351 + 40));
          if ( (v151 & 1) != 0 )
          {
LABEL_287:
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v351 + 1032), 0xFFFFFFFF) == 1 )
              KeSetEvent((PRKEVENT)(v351 + 520), 0, 0);
          }
          else
          {
            while ( 1 )
            {
              v152 = v151;
              v151 = _InterlockedCompareExchange(
                       (volatile signed __int32 *)(v150 + *(_QWORD *)(v351 + 40)),
                       v151 - 2,
                       v151);
              if ( v152 == v151 )
                break;
              if ( (v151 & 1) != 0 )
                goto LABEL_287;
            }
          }
        }
        v74 = a1;
        v37 = v325;
        v94 = v319;
        v4 = v362;
        goto LABEL_290;
      }
      v126 = v98;
      if ( (*(_BYTE *)(v125 + 112) & 0x10) != 0 )
      {
LABEL_223:
        sub_14006AD74(v351, v98);
        goto LABEL_229;
      }
    }
    sub_140056004(v125, v126);
    goto LABEL_229;
  }
LABEL_290:
  if ( !byte_140168860 )
  {
    if ( v37 && *v37 == 59 && (v37[1] & 0x1F) == 0xF || v94 )
    {
LABEL_295:
      v153 = sub_1400143E0(64LL, 16LL, 1230463314LL, *(_QWORD *)(v5 + 8));
      if ( v153 )
      {
        WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(v5 + 8));
        *(_QWORD *)v153 = WorkItem;
        if ( WorkItem )
        {
          *(_QWORD *)(v153 + 8) = Irp;
          _InterlockedIncrement((volatile signed __int32 *)(v5 + 1032));
          IoQueueWorkItem(*(PIO_WORKITEM *)v153, sub_1400A1750, CriticalWorkQueue, (PVOID)v153);
          v316 = 1;
          goto LABEL_559;
        }
        ExFreePoolWithTag((PVOID)v153, 0x49576152u);
      }
      IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(v5 + 24) + 32LL), BusRelations);
      goto LABEL_559;
    }
    if ( byte_1401688AC )
    {
      if ( (*(_BYTE *)(v5 + 136) & 2) != 0 || *(_DWORD *)(v5 + 3432) == 17 )
      {
        if ( v37 )
        {
          if ( VirtualAddress )
          {
            if ( MmIsAddressValid(VirtualAddress) )
            {
              v155 = *v37;
              if ( !v317 && (v155 == 37 || v155 == 0x9E) )
              {
                v156 = *(_DWORD *)(v5 + 3616);
                if ( (v156 & 1) == 0 || v155 == 0x9E && (v156 & 2) == 0 )
                {
LABEL_325:
                  HIDWORD(v326) = 0;
                  if ( !byte_1401688AC )
                  {
                    v191 = (_BYTE *)v74[23];
                    if ( v155 == 37 )
                    {
                      HIBYTE(v318) = v191[4];
                      BYTE2(v318) = v191[5];
                      BYTE1(v318) = v191[6];
                      LOBYTE(v318) = v191[7];
                      BYTE3(v326) = *v191;
                      BYTE2(v326) = v191[1];
                      BYTE1(v326) = v191[2];
                      v192 = v191[3];
                    }
                    else
                    {
                      HIBYTE(v318) = v191[8];
                      BYTE2(v318) = v191[9];
                      BYTE1(v318) = v191[10];
                      LOBYTE(v318) = v191[11];
                      HIBYTE(v326) = *v191;
                      BYTE6(v326) = v191[1];
                      BYTE5(v326) = v191[2];
                      BYTE4(v326) = v191[3];
                      BYTE3(v326) = v191[4];
                      BYTE2(v326) = v191[5];
                      BYTE1(v326) = v191[6];
                      v192 = v191[7];
                    }
                    v193 = v318;
                    LOBYTE(v326) = v192;
                    if ( v318 )
                    {
                      if ( ((v318 - 1) & v318) != 0 )
                      {
                        do
                          v193 &= v193 - 1;
                        while ( ((v193 - 1) & v193) != 0 );
                      }
                    }
                    else
                    {
                      v193 = 512;
                    }
                    *(_QWORD *)(v5 + 3464) = v326;
                    *(_DWORD *)(v5 + 932) = v193;
                    goto LABEL_670;
                  }
                  if ( byte_140168778 )
                  {
                    v158 = *(_QWORD *)(v5 + 160);
                    v159 = 0LL;
                    v160 = *(_DWORD *)(v5 + 104);
                    v320 = v160;
                    if ( v158 )
                    {
                      v159 = (const int *)(v158 + 90);
                    }
                    else
                    {
                      v161 = *(_QWORD *)(v5 + 152);
                      if ( v161 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 608LL) + 184LL) & 0x40) != 0 )
                        v159 = (const int *)(v161 + 41);
                    }
                    if ( !_interlockedbittestandset((volatile signed __int32 *)(v5 + 512), 8u) )
                    {
                      v162 = 1;
                      v163 = (unsigned __int8 *)v74[23];
                      if ( *v37 == 37 )
                      {
                        HIBYTE(v333) = v163[4];
                        BYTE2(v333) = v163[5];
                        BYTE1(v333) = v163[6];
                        LOBYTE(v333) = v163[7];
                        v164 = v333;
                        *(_DWORD *)((char *)&v347 + 3) = *v163;
                        BYTE2(v347) = v163[1];
                        BYTE1(v347) = v163[2];
                        v165 = v163[3];
                        v166 = 512;
                        LOBYTE(v347) = v165;
                        v167 = (unsigned int)v347;
                        if ( v333 < 0x200 )
                        {
                          v162 = 0;
                          goto LABEL_346;
                        }
                        v168 = v333;
                        for ( j = v333 & (v333 - 1); j; j &= j - 1 )
                          v168 = j;
                      }
                      else
                      {
                        HIBYTE(v334) = v163[8];
                        BYTE2(v334) = v163[9];
                        BYTE1(v334) = v163[10];
                        LOBYTE(v334) = v163[11];
                        v164 = v334;
                        HIBYTE(v341) = *v163;
                        BYTE6(v341) = v163[1];
                        BYTE5(v341) = v163[2];
                        BYTE4(v341) = v163[3];
                        BYTE3(v341) = v163[4];
                        BYTE2(v341) = v163[5];
                        BYTE1(v341) = v163[6];
                        v170 = v163[7];
                        v166 = 512;
                        LOBYTE(v341) = v170;
                        v167 = v341;
                        if ( v334 < 0x200 )
                        {
                          v162 = 0;
                          goto LABEL_346;
                        }
                        v168 = v334;
                        for ( k = v334 & (v334 - 1); k; k &= k - 1 )
                          v168 = k;
                      }
                      if ( v167 * v164 < 0x100000 )
                      {
                        v162 = 0;
                        goto LABEL_346;
                      }
                      goto LABEL_345;
                    }
LABEL_360:
                    if ( byte_1401694F8 < 0 )
                    {
                      v175 = &dword_140149108;
                      if ( v159 )
                        v175 = v159;
                      sub_140090C24(
                        BYTE1(v320),
                        v5 + 177,
                        v5 + 168,
                        *(_QWORD *)(*(_QWORD *)(v5 + 24) + 4720LL),
                        *(_DWORD *)(*(_QWORD *)(v5 + 24) + 56LL),
                        *(_QWORD *)(v5 + 24) + 5064LL,
                        v160,
                        SBYTE1(v320),
                        SBYTE2(v320),
                        v5 + 168,
                        v5 + 177,
                        v5 + 242,
                        (__int64)v175);
                    }
                    goto LABEL_559;
                  }
                  v176 = (unsigned __int8 *)v74[23];
                  v84 = v155 == 37;
                  v177 = 512;
                  v178 = 1;
                  if ( v84 )
                  {
                    HIBYTE(v335) = v176[4];
                    BYTE2(v335) = v176[5];
                    BYTE1(v335) = v176[6];
                    LOBYTE(v335) = v176[7];
                    v179 = v335;
                    *(_DWORD *)((char *)&v348 + 3) = *v176;
                    BYTE2(v348) = v176[1];
                    BYTE1(v348) = v176[2];
                    LOBYTE(v348) = v176[3];
                    v180 = (unsigned int)v348;
                    if ( v335 < 0x200 )
                    {
                      v178 = 0;
                      goto LABEL_377;
                    }
                    v181 = v335;
                    for ( m = v335 & (v335 - 1); m; m &= m - 1 )
                      v181 = m;
                  }
                  else
                  {
                    HIBYTE(v336) = v176[8];
                    BYTE2(v336) = v176[9];
                    BYTE1(v336) = v176[10];
                    LOBYTE(v336) = v176[11];
                    v179 = v336;
                    HIBYTE(v342) = *v176;
                    BYTE6(v342) = v176[1];
                    BYTE5(v342) = v176[2];
                    BYTE4(v342) = v176[3];
                    BYTE3(v342) = v176[4];
                    BYTE2(v342) = v176[5];
                    BYTE1(v342) = v176[6];
                    LOBYTE(v342) = v176[7];
                    v180 = v342;
                    if ( v336 < 0x200 )
                    {
                      v178 = 0;
                      goto LABEL_377;
                    }
                    v181 = v336;
                    for ( n = v336 & (v336 - 1); n; n &= n - 1 )
                      v181 = n;
                  }
                  goto LABEL_374;
                }
              }
            }
          }
        }
      }
      if ( byte_1401688AC )
        goto LABEL_751;
    }
    if ( (*(_BYTE *)(v5 + 136) & 2) != 0 || *(_DWORD *)(v5 + 3432) == 17 )
    {
      if ( v37 )
      {
        if ( *(_BYTE *)(v4 + 2) == 40 ? *(_QWORD *)(v4 + 64) : *(_QWORD *)(v4 + 24) )
        {
          if ( MmIsAddressValid((PVOID)v74[23]) )
          {
            v155 = *v37;
            if ( !v317
              && (v155 == 37 || v155 == 0x9E)
              && (!*(_DWORD *)(v5 + 932) || v155 == 0x9E && *(_QWORD *)(v5 + 3464) == 0xFFFFFFFFLL) )
            {
              goto LABEL_325;
            }
          }
        }
      }
    }
    if ( byte_1401688AC )
    {
LABEL_751:
      if ( (*(_BYTE *)(v5 + 136) & 2) != 0
        && v37
        && !v317
        && *v37 == 0x95
        && !v37[1]
        && (*(_DWORD *)(v5 + 3616) & 1) != 0
        && (!byte_1401687D1 || (*(_DWORD *)(v5 + 3484) & 1) == 0) )
      {
        v194 = VirtualAddress;
        if ( VirtualAddress )
        {
          if ( MmIsAddressValid(VirtualAddress) )
          {
LABEL_429:
            if ( !byte_1401688AC )
              v194 = (_BYTE *)v74[23];
            HIBYTE(v343) = v194[72];
            BYTE6(v343) = v194[73];
            BYTE5(v343) = v194[74];
            BYTE4(v343) = v194[75];
            BYTE3(v343) = v194[76];
            BYTE2(v343) = v194[77];
            BYTE1(v343) = v194[78];
            LOBYTE(v343) = v194[79];
            v196 = v343;
            goto LABEL_432;
          }
        }
      }
      if ( byte_1401688AC )
        goto LABEL_560;
    }
    if ( (*(_BYTE *)(v5 + 136) & 2) == 0
      || !v37
      || v317
      || *v37 != 0x95
      || v37[1]
      || !*(_DWORD *)(v5 + 932)
      || byte_1401687D1 && (*(_DWORD *)(v5 + 3484) & 1) != 0 )
    {
      goto LABEL_559;
    }
    v195 = *(_BYTE *)(v4 + 2) == 40 ? *(_QWORD *)(v4 + 64) : *(_QWORD *)(v4 + 24);
    if ( !v195 || !MmIsAddressValid((PVOID)v74[23]) )
      goto LABEL_559;
    v194 = VirtualAddress;
    goto LABEL_429;
  }
  if ( v37 && *v37 == 59 && (v37[1] & 0x1F) == 0xF || v94 )
    goto LABEL_295;
  if ( !byte_1401688AC )
    goto LABEL_521;
  if ( (*(_BYTE *)(v5 + 136) & 2) != 0 || *(_DWORD *)(v5 + 3432) == 17 )
  {
    if ( v37 )
    {
      v205 = *v37;
      if ( !v317 && (v205 == 37 || v205 == 0x9E) )
      {
        v206 = *(_DWORD *)(v5 + 3616);
        if ( ((v206 & 1) == 0 || v205 == 0x9E && (v206 & 2) == 0) && VirtualAddress && MmIsAddressValid(VirtualAddress) )
        {
LABEL_484:
          HIDWORD(v324) = 0;
          if ( !byte_1401688AC )
          {
            v219 = (_BYTE *)v74[23];
            if ( *v37 == 37 )
            {
              HIBYTE(v322) = v219[4];
              BYTE2(v322) = v219[5];
              BYTE1(v322) = v219[6];
              LOBYTE(v322) = v219[7];
              BYTE3(v324) = *v219;
              BYTE2(v324) = v219[1];
              BYTE1(v324) = v219[2];
              v220 = v219[3];
            }
            else
            {
              HIBYTE(v322) = v219[8];
              BYTE2(v322) = v219[9];
              BYTE1(v322) = v219[10];
              LOBYTE(v322) = v219[11];
              HIBYTE(v324) = *v219;
              BYTE6(v324) = v219[1];
              BYTE5(v324) = v219[2];
              BYTE4(v324) = v219[3];
              BYTE3(v324) = v219[4];
              BYTE2(v324) = v219[5];
              BYTE1(v324) = v219[6];
              v220 = v219[7];
            }
            v221 = v322;
            LOBYTE(v324) = v220;
            if ( v322 )
            {
              if ( ((v322 - 1) & v322) != 0 )
              {
                do
                  v221 &= v221 - 1;
                while ( ((v221 - 1) & v221) != 0 );
              }
            }
            else
            {
              v221 = 512;
            }
            *(_QWORD *)(v5 + 3464) = v324;
            *(_DWORD *)(v5 + 932) = v221;
            goto LABEL_670;
          }
          if ( !byte_140168778 )
          {
            v178 = 1;
            v216 = (unsigned __int8 *)v74[23];
            v177 = 512;
            if ( *v37 == 37 )
            {
              HIBYTE(v339) = v216[4];
              BYTE2(v339) = v216[5];
              BYTE1(v339) = v216[6];
              LOBYTE(v339) = v216[7];
              v179 = v339;
              *(_DWORD *)((char *)&v350 + 3) = *v216;
              BYTE2(v350) = v216[1];
              BYTE1(v350) = v216[2];
              LOBYTE(v350) = v216[3];
              v180 = (unsigned int)v350;
              if ( v339 < 0x200 )
                goto LABEL_375;
              v181 = v339;
              for ( ii = v339 & (v339 - 1); ii; ii &= ii - 1 )
                v181 = ii;
            }
            else
            {
              HIBYTE(v330) = v216[8];
              BYTE2(v330) = v216[9];
              BYTE1(v330) = v216[10];
              LOBYTE(v330) = v216[11];
              v179 = v330;
              HIBYTE(v345) = *v216;
              BYTE6(v345) = v216[1];
              BYTE5(v345) = v216[2];
              BYTE4(v345) = v216[3];
              BYTE3(v345) = v216[4];
              BYTE2(v345) = v216[5];
              BYTE1(v345) = v216[6];
              LOBYTE(v345) = v216[7];
              v180 = v345;
              if ( v330 < 0x200 )
                goto LABEL_375;
              v181 = v330;
              for ( jj = v330 & (v330 - 1); jj; jj &= jj - 1 )
                v181 = jj;
            }
LABEL_374:
            if ( v180 * v179 >= 0x100000 )
            {
              LODWORD(v179) = v181;
LABEL_377:
              if ( v178 )
              {
                v190 = *(_DWORD *)(v5 + 3616) | 1;
                *(_DWORD *)(v5 + 932) = v179;
                *(_DWORD *)(v5 + 3616) = v190;
                *(_QWORD *)(v5 + 3464) = v180;
                if ( *v37 == 0x9E )
                  *(_DWORD *)(v5 + 3616) = v190 | 2;
              }
              else
              {
                v184 = 0LL;
                v185 = *(_DWORD *)(v5 + 104);
                if ( !*(_DWORD *)(v5 + 932) )
                {
                  if ( (*(_BYTE *)(v5 + 136) & 2) != 0 )
                    v177 = 4096;
                  *(_DWORD *)(v5 + 932) = v177;
                }
                if ( *(_QWORD *)(v5 + 3464) )
                {
                  v186 = *(_QWORD *)(v5 + 160);
                  if ( v186 )
                  {
                    v184 = (const int *)(v186 + 90);
                  }
                  else
                  {
                    v187 = *(_QWORD *)(v5 + 152);
                    if ( v187 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 608LL) + 184LL) & 0x40) != 0 )
                      v184 = (const int *)(v187 + 41);
                  }
                  if ( (byte_1401694F8 & 0x20) != 0 )
                  {
                    v188 = &dword_140149108;
                    if ( v184 )
                      v188 = v184;
                    sub_140090FB4(
                      v185 >> 8,
                      *(_QWORD *)(v5 + 24) + 5064,
                      v5 + 242,
                      *(_QWORD *)(*(_QWORD *)(v5 + 24) + 4720LL),
                      *(_DWORD *)(*(_QWORD *)(v5 + 24) + 56LL),
                      *(_QWORD *)(v5 + 24) + 5064LL,
                      v185,
                      SBYTE1(v185),
                      SBYTE2(v185),
                      v5 + 168,
                      v5 + 177,
                      v5 + 242,
                      (__int64)v188,
                      v180,
                      v179);
                  }
                  v189 = *(_DWORD *)(v5 + 3616);
                  *(_DWORD *)(v5 + 3620) = v179;
                  *(_QWORD *)(v5 + 3624) = v180;
                  *(_DWORD *)(v5 + 3616) = v189 ^ (v189 ^ (v189 + 4)) & 0x3FFFC;
                }
              }
              goto LABEL_559;
            }
LABEL_375:
            v178 = 0;
            goto LABEL_377;
          }
          v209 = *(_QWORD *)(v5 + 160);
          v159 = 0LL;
          v160 = *(_DWORD *)(v5 + 104);
          v320 = v160;
          if ( v209 )
          {
            v159 = (const int *)(v209 + 90);
          }
          else
          {
            v210 = *(_QWORD *)(v5 + 152);
            if ( v210 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 608LL) + 184LL) & 0x40) != 0 )
              v159 = (const int *)(v210 + 41);
          }
          if ( _interlockedbittestandset((volatile signed __int32 *)(v5 + 512), 8u) )
            goto LABEL_360;
          v162 = 1;
          v211 = (unsigned __int8 *)v74[23];
          if ( *v37 == 37 )
          {
            HIBYTE(v337) = v211[4];
            BYTE2(v337) = v211[5];
            BYTE1(v337) = v211[6];
            LOBYTE(v337) = v211[7];
            v164 = v337;
            *(_DWORD *)((char *)&v349 + 3) = *v211;
            BYTE2(v349) = v211[1];
            BYTE1(v349) = v211[2];
            v212 = v211[3];
            v166 = 512;
            LOBYTE(v349) = v212;
            v167 = (unsigned int)v349;
            if ( v337 < 0x200 )
            {
              v162 = 0;
              goto LABEL_346;
            }
            v168 = v337;
            for ( kk = v337 & (v337 - 1); kk; kk &= kk - 1 )
              v168 = kk;
          }
          else
          {
            HIBYTE(v338) = v211[8];
            BYTE2(v338) = v211[9];
            BYTE1(v338) = v211[10];
            LOBYTE(v338) = v211[11];
            v164 = v338;
            HIBYTE(v344) = *v211;
            BYTE6(v344) = v211[1];
            BYTE5(v344) = v211[2];
            BYTE4(v344) = v211[3];
            BYTE3(v344) = v211[4];
            BYTE2(v344) = v211[5];
            BYTE1(v344) = v211[6];
            v214 = v211[7];
            v166 = 512;
            LOBYTE(v344) = v214;
            v167 = v344;
            if ( v338 < 0x200 )
            {
              v162 = 0;
              goto LABEL_346;
            }
            v168 = v338;
            for ( mm = v338 & (v338 - 1); mm; mm &= mm - 1 )
              v168 = mm;
          }
          if ( v167 * v164 >= 0x100000 )
          {
LABEL_345:
            LODWORD(v164) = v168;
            goto LABEL_346;
          }
          v162 = 0;
LABEL_346:
          if ( v162 )
          {
            v174 = *(_DWORD *)(v5 + 3616) | 1;
            *(_DWORD *)(v5 + 932) = v164;
            *(_DWORD *)(v5 + 3616) = v174;
            *(_QWORD *)(v5 + 3464) = v167;
            if ( *v37 == 0x9E )
              *(_DWORD *)(v5 + 3616) = v174 | 2;
          }
          else
          {
            if ( !*(_DWORD *)(v5 + 932) )
            {
              if ( (*(_BYTE *)(v5 + 136) & 2) != 0 )
                v166 = 4096;
              *(_DWORD *)(v5 + 932) = v166;
            }
            if ( *(_QWORD *)(v5 + 3464) )
            {
              if ( (byte_1401694F8 & 0x20) != 0 )
              {
                v172 = &dword_140149108;
                if ( v159 )
                  v172 = v159;
                sub_140090FB4(
                  BYTE1(v320),
                  v5 + 177,
                  v5 + 168,
                  *(_QWORD *)(*(_QWORD *)(v5 + 24) + 4720LL),
                  *(_DWORD *)(*(_QWORD *)(v5 + 24) + 56LL),
                  *(_QWORD *)(v5 + 24) + 5064LL,
                  v160,
                  SBYTE1(v320),
                  SBYTE2(v320),
                  v5 + 168,
                  v5 + 177,
                  v5 + 242,
                  (__int64)v172,
                  v167,
                  v164);
              }
              v173 = *(_DWORD *)(v5 + 3616);
              *(_DWORD *)(v5 + 3620) = v164;
              *(_QWORD *)(v5 + 3624) = v167;
              *(_DWORD *)(v5 + 3616) = v173 ^ (v173 ^ (v173 + 4)) & 0x3FFFC;
              _interlockedbittestandreset((volatile signed __int32 *)(v5 + 512), 8u);
              goto LABEL_559;
            }
          }
          _interlockedbittestandreset((volatile signed __int32 *)(v5 + 512), 8u);
          goto LABEL_559;
        }
      }
    }
  }
  if ( !byte_1401688AC )
  {
LABEL_521:
    if ( (*(_BYTE *)(v5 + 136) & 2) != 0 || *(_DWORD *)(v5 + 3432) == 17 )
    {
      if ( v37 )
      {
        v207 = *v37;
        if ( !v317
          && (v207 == 37 || v207 == 0x9E)
          && (!*(_DWORD *)(v5 + 932) || v207 == 0x9E && *(_QWORD *)(v5 + 3464) == 0xFFFFFFFFLL) )
        {
          v208 = *(_BYTE *)(v4 + 2) == 40 ? *(_QWORD *)(v4 + 64) : *(_QWORD *)(v4 + 24);
          if ( v208 && MmIsAddressValid((PVOID)v74[23]) )
            goto LABEL_484;
        }
      }
    }
    if ( !byte_1401688AC )
      goto LABEL_533;
  }
  if ( (*(_BYTE *)(v5 + 136) & 2) == 0
    || !v37
    || v317
    || *v37 != 0x95
    || v37[1]
    || (*(_DWORD *)(v5 + 3616) & 1) == 0
    || byte_1401687D1 && (*(_DWORD *)(v5 + 3484) & 1) != 0
    || (v222 = VirtualAddress) == 0LL
    || !MmIsAddressValid(VirtualAddress) )
  {
    if ( byte_1401688AC )
      goto LABEL_560;
LABEL_533:
    if ( (*(_BYTE *)(v5 + 136) & 2) == 0
      || !v37
      || v317
      || *v37 != 0x95
      || v37[1]
      || !*(_DWORD *)(v5 + 932)
      || byte_1401687D1 && (*(_DWORD *)(v5 + 3484) & 1) != 0 )
    {
      goto LABEL_559;
    }
    v223 = *(_BYTE *)(v4 + 2) == 40 ? *(_QWORD *)(v4 + 64) : *(_QWORD *)(v4 + 24);
    if ( !v223 || !MmIsAddressValid((PVOID)v74[23]) )
      goto LABEL_559;
    v222 = VirtualAddress;
  }
  if ( !byte_1401688AC )
    v222 = (_BYTE *)v74[23];
  HIBYTE(v340) = v222[72];
  BYTE6(v340) = v222[73];
  BYTE5(v340) = v222[74];
  BYTE4(v340) = v222[75];
  BYTE3(v340) = v222[76];
  BYTE2(v340) = v222[77];
  BYTE1(v340) = v222[78];
  LOBYTE(v340) = v222[79];
  v196 = v340;
LABEL_432:
  v197 = *(_QWORD *)(v5 + 3416);
  v198 = v196 * *(unsigned int *)(v5 + 932);
  if ( v197 != v198 )
  {
    *(_QWORD *)(v5 + 3416) = v198;
    v197 = v198;
  }
  if ( v197 )
  {
    if ( *(_QWORD *)(v5 + 3440) )
      goto LABEL_559;
    v224 = (unsigned int)sub_14006CFBC(v5);
    v225 = sub_1400143E0(64LL, v224, 1381654866LL, *(_QWORD *)(v5 + 8));
    *(_QWORD *)(v5 + 3440) = v225;
    if ( v225 )
    {
      v226 = (ULONG *)sub_1400143E0(64LL, ((_DWORD)v224 + 3) & 0xFFFFFFFC, 1381654866LL, *(_QWORD *)(v5 + 8));
      if ( v226 )
      {
        RtlInitializeBitMap((PRTL_BITMAP)(v5 + 3448), v226, v224);
        RtlClearAllBits((PRTL_BITMAP)(v5 + 3448));
        if ( byte_1401687D1 )
          *(_DWORD *)(v5 + 3484) |= 1u;
        goto LABEL_559;
      }
    }
    v227 = *(void **)(v5 + 3440);
    if ( v227 )
    {
      ExFreePoolWithTag(v227, 0x525A6152u);
      *(_QWORD *)(v5 + 3440) = 0LL;
    }
    *(_BYTE *)(v5 + 507) |= 1u;
LABEL_558:
    IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(v5 + 8));
    goto LABEL_559;
  }
  v199 = *(_QWORD *)(v5 + 160);
  v200 = 0LL;
  v201 = *(_DWORD *)(v5 + 104);
  if ( v199 )
  {
    v200 = (const int *)(v199 + 90);
  }
  else
  {
    v202 = *(_QWORD *)(v5 + 152);
    if ( v202 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 608LL) + 184LL) & 0x40) != 0 )
      v200 = (const int *)(v202 + 41);
  }
  if ( byte_1401687D1 )
  {
    if ( (byte_1401694F4 & 2) != 0 )
    {
      v203 = &dword_140149108;
      if ( v200 )
        v203 = v200;
      sub_1400911A0(
        v201 >> 8,
        *(_QWORD *)(v5 + 24) + 5064,
        v5 + 242,
        *(_QWORD *)(*(_QWORD *)(v5 + 24) + 4720LL),
        *(_DWORD *)(*(_QWORD *)(v5 + 24) + 56LL),
        *(_QWORD *)(v5 + 24) + 5064LL,
        v201,
        SBYTE1(v201),
        SBYTE2(v201),
        v5 + 168,
        v5 + 177,
        v5 + 242,
        (__int64)v203,
        0,
        v196);
    }
  }
  else
  {
    if ( (byte_1401694F4 & 2) == 0 )
      goto LABEL_559;
    v204 = (const char *)&dword_140149108;
    if ( v200 )
      v204 = (const char *)v200;
    sub_140001A2C(
      BYTE1(v201),
      v5 + 177,
      v5 + 168,
      *(const wchar_t **)(*(_QWORD *)(v5 + 24) + 4720LL),
      *(_DWORD *)(*(_QWORD *)(v5 + 24) + 56LL),
      *(_QWORD *)(v5 + 24) + 5064LL,
      v201,
      SBYTE1(v201),
      SBYTE2(v201),
      (const char *)(v5 + 168),
      (const char *)(v5 + 177),
      (const char *)(v5 + 242),
      v204,
      0);
  }
  if ( byte_1401687D1 )
  {
    *(_DWORD *)(v5 + 3484) |= 2u;
    goto LABEL_558;
  }
LABEL_559:
  if ( !byte_1401688AC )
    goto LABEL_668;
LABEL_560:
  v228 = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( BYTE2(v228->SecurityQos) == 40 )
    v229 = (__int64)v228[4].SecurityQos;
  else
    v229 = (__int64)v228[2].SecurityQos;
  v230 = *(_QWORD *)(v229 + 224);
  if ( (*(_BYTE *)(v229 + 16) & 2) == 0 )
    goto LABEL_597;
  v231 = *(int **)(v230 + 560);
  v232 = v229 + 48;
  v233 = &v231[16 * *(unsigned int *)(v229 + 84) + 16];
  memset(&v361, 0, sizeof(v361));
  v234 = KeGetCurrentIrql();
  v235 = (KSPIN_LOCK *)(v233 + 10);
  if ( v234 != 2 )
  {
    KeAcquireInStackQueuedSpinLock(v235, &v361);
    v244 = *(_BYTE *)(v229 + 16);
    v245 = *v231;
    if ( (v244 & 2) != 0 )
    {
      *(_BYTE *)(v229 + 16) = v244 & 0xFD;
      v246 = *(_QWORD *)v232;
      v247 = *(_QWORD *)v233;
      if ( *(_QWORD *)(*(_QWORD *)v232 + 8LL) != v232 )
        goto LABEL_602;
      v248 = *(_QWORD **)(v229 + 56);
      if ( *v248 != v232 )
        goto LABEL_602;
      *v248 = v246;
      *(_QWORD *)(v246 + 8) = v248;
      if ( (*(_DWORD *)(v229 + 96) & 1) != 0 )
      {
        v249 = v229 + 64;
        if ( *((_QWORD *)v233 + 4) == v229 + 64 )
          *((_QWORD *)v233 + 4) = *(_QWORD *)v249;
        v250 = *(_QWORD *)v249;
        if ( *(_QWORD *)(*(_QWORD *)v249 + 8LL) != v249 )
          goto LABEL_602;
        v251 = *(_QWORD **)(v229 + 72);
        if ( *v251 != v249 )
          goto LABEL_602;
        *v251 = v250;
        *(_QWORD *)(v250 + 8) = v251;
        *(_DWORD *)(v229 + 96) &= ~1u;
      }
      if ( (v245 & 4) == 0 && v247 == v232 )
      {
        if ( *(int **)v233 == v233 )
          v233[12] = -1;
        else
          v233[12] = *(_DWORD *)(*(_QWORD *)v233 + 32LL);
      }
    }
    KeReleaseInStackQueuedSpinLock(&v361);
    goto LABEL_594;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v235, &v361);
  v236 = *(_BYTE *)(v229 + 16);
  v237 = *v231;
  if ( (v236 & 2) != 0 )
  {
    *(_BYTE *)(v229 + 16) = v236 & 0xFD;
    v238 = *(_QWORD *)v232;
    v239 = *(_QWORD *)v233;
    if ( *(_QWORD *)(*(_QWORD *)v232 + 8LL) == v232 )
    {
      v240 = *(_QWORD **)(v229 + 56);
      if ( *v240 == v232 )
      {
        *v240 = v238;
        *(_QWORD *)(v238 + 8) = v240;
        if ( (*(_DWORD *)(v229 + 96) & 1) == 0 )
        {
LABEL_574:
          if ( (v237 & 4) == 0 && v239 == v232 )
          {
            if ( *(int **)v233 == v233 )
              v233[12] = -1;
            else
              v233[12] = *(_DWORD *)(*(_QWORD *)v233 + 32LL);
          }
          goto LABEL_579;
        }
        v241 = v229 + 64;
        if ( *((_QWORD *)v233 + 4) == v229 + 64 )
          *((_QWORD *)v233 + 4) = *(_QWORD *)v241;
        v242 = *(_QWORD *)v241;
        if ( *(_QWORD *)(*(_QWORD *)v241 + 8LL) == v241 )
        {
          v243 = *(_QWORD **)(v229 + 72);
          if ( *v243 == v241 )
          {
            *v243 = v242;
            *(_QWORD *)(v242 + 8) = v243;
            *(_DWORD *)(v229 + 96) &= ~1u;
            goto LABEL_574;
          }
        }
      }
    }
LABEL_602:
    __fastfail(3u);
  }
LABEL_579:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v361);
LABEL_594:
  if ( byte_140168DAA )
  {
    v365 = 0LL;
    IoGetActivityIdIrp(Irp, &v365);
    if ( byte_1401694F2 < 0 )
      sub_140001CE8(v253, v252, (__int64)&v365, v254, 4);
  }
LABEL_597:
  sub_140027440(v229, *(_QWORD *)(*(_QWORD *)(v230 + 24) + 8LL));
  if ( (unsigned int)sub_1400567A0(v256, v255) )
  {
    v259 = *(_QWORD *)(v230 + 3600);
    if ( v259 && *(_QWORD *)(v259 + 104) )
      goto LABEL_600;
    v257 = *(_QWORD *)(v230 + 24);
    if ( !*(_QWORD *)(v257 + 5616) )
      goto LABEL_608;
    v258 = v229;
    goto LABEL_607;
  }
  v257 = *(_QWORD *)(v230 + 24);
  if ( *(_QWORD *)(v257 + 5624) )
  {
    v258 = v229;
    if ( (*(_BYTE *)(v257 + 112) & 0x10) != 0 )
    {
LABEL_600:
      sub_14006AD74(v230, v229);
      goto LABEL_608;
    }
LABEL_607:
    sub_140056004(v257, v258);
  }
LABEL_608:
  if ( BYTE2(v228->SecurityQos) == 40 )
  {
    if ( (*(_BYTE *)(v229 + 16) & 0x40) != 0 )
    {
      v260 = *(_QWORD *)(v229 + 752);
      v353.QuadPart = 1LL;
      if ( v260 )
      {
        if ( byte_140168724 )
          v261 = KeQueryPerformanceCounter(&v353);
        else
          v261.QuadPart = KeQueryUnbiasedInterruptTime();
        v262 = v261;
        *(_BYTE *)(v260 + 3) = BYTE3(v228->SecurityQos);
        *(_DWORD *)(v260 + 12) = v228[1].SecurityQos;
        if ( ((__int64)v228[1].SecurityQos & 0x40) != 0 )
          *(_DWORD *)(v260 + 16) = HIDWORD(v228[2].AccessState);
        if ( BYTE3(v228->SecurityQos) == 48 )
          *(_DWORD *)(v260 + 64) = v228[1].FullCreateOptions;
        if ( !v228->FullCreateOptions )
        {
          v263 = (unsigned int)v228[2].AccessState;
          v264 = 0;
          if ( v263 )
          {
            while ( 1 )
            {
              v265 = *((unsigned int *)&v228[5].SecurityQos + v264);
              if ( (unsigned int)v265 >= 0x80 )
              {
                v266 = v228->DesiredAccess;
                if ( (unsigned int)v265 <= (unsigned int)v266 )
                {
                  v267 = (char *)v228 + v265;
                  if ( *(_DWORD *)((char *)&v228->SecurityQos + v265) == 64 && v265 + 40 <= v266 )
                    break;
                }
              }
              if ( ++v264 >= v263 )
                goto LABEL_625;
            }
            *(_BYTE *)(v260 + 4) = v267[8];
            *(_QWORD *)(v260 + 32) = *((_QWORD *)v267 + 2);
            *(_BYTE *)(v260 + 11) = v267[9];
          }
          else
          {
LABEL_625:
            *(_BYTE *)(v260 + 3) = 48;
            *(_DWORD *)(v260 + 64) = -1073741811;
          }
        }
        if ( byte_140168724 )
          v268 = KeQueryPerformanceCounter(0LL);
        else
          v268.QuadPart = KeQueryUnbiasedInterruptTime();
        if ( v268.QuadPart <= 0 || v268.QuadPart >= v262.QuadPart )
          v271 = v268.QuadPart - v262.QuadPart;
        else
          v271 = v268.QuadPart - v262.QuadPart - 1;
        if ( byte_140168724 )
        {
          v270 = v353.LowPart;
          v272 = 0;
          if ( v353.QuadPart && v271 )
          {
            v273 = v271 / v353.QuadPart;
            v271 = 1000 * (v271 % v353.QuadPart);
            v269.QuadPart = 10000 * (v271 % v353.QuadPart) % v353.QuadPart;
            v272 = 10000 * (v271 % v353.QuadPart) / v353.QuadPart + 16 * (-24 * v273 + v271 / v353.QuadPart);
          }
        }
        else
        {
          v272 = v271;
        }
        if ( (byte_1401694F0 & 0x40) != 0 )
          sub_140053A04(v270, v269.LowPart, v271, (unsigned int)L"Translate STORAGE_REQUEST_BLOCK result", v272);
      }
      *(_QWORD *)(*(_QWORD *)(v229 + 752) + 48LL) = *(_QWORD *)(v229 + 176);
      *(_QWORD *)(*(_QWORD *)(v229 + 752) + 24LL) = *(_QWORD *)(v229 + 184);
      *(_QWORD *)(*(_QWORD *)(v229 + 752) + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v229 + 752) + 40LL) = 0LL;
      Irp->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId = *(_QWORD *)(v229 + 752);
      *(_BYTE *)(v229 + 16) &= ~0x40u;
      *(_QWORD *)(v229 + 752) = 0LL;
    }
    else
    {
      v228[4].SecurityQos = 0LL;
      *(_QWORD *)&v228[2].DesiredAccess = *(_QWORD *)(v229 + 184);
      v228[4].AccessState = 0LL;
      if ( *(_QWORD *)(v229 + 192) )
      {
        if ( ((__int64)v228[1].SecurityQos & 0xC0) == 0xC0 )
        {
          v274 = (unsigned int)v228[2].AccessState;
          v275 = 0;
          if ( v274 )
          {
            while ( 1 )
            {
              v276 = *((unsigned int *)&v228[5].SecurityQos + v275);
              if ( (unsigned int)v276 >= 0x80 )
              {
                v277 = v228->DesiredAccess;
                if ( (unsigned int)v276 <= (unsigned int)v277 )
                {
                  v278 = (char *)v228 + v276;
                  if ( *(_DWORD *)((char *)&v228->SecurityQos + v276) == 1 && v276 + 24 <= v277 )
                    break;
                }
              }
              if ( ++v275 >= v274 )
                goto LABEL_653;
            }
            if ( v278 )
              *((_QWORD *)v278 + 2) = *(_QWORD *)(v229 + 192);
          }
        }
      }
LABEL_653:
      if ( byte_1401688AC )
      {
        v279 = (int)v228[1].SecurityQos;
        if ( (v279 & 0x2000000) != 0 )
          LODWORD(v228[1].SecurityQos) = v279 & 0xFDFFFFFF;
      }
    }
  }
  else
  {
    v84 = byte_1401688AC == 0;
    v228[2].SecurityQos = *(PSECURITY_QUALITY_OF_SERVICE *)(v229 + 176);
    v228[1].SecurityQos = *(PSECURITY_QUALITY_OF_SERVICE *)(v229 + 184);
    v228[2].AccessState = 0LL;
    *(_QWORD *)&v228[1].DesiredAccess = 0LL;
    if ( !v84 )
    {
      v280 = HIDWORD(v228->AccessState);
      if ( (v280 & 0x2000000) != 0 )
        HIDWORD(v228->AccessState) = v280 & 0xFDFFFFFF;
    }
  }
  sub_140017A20(v229, 1);
  if ( BYTE2(v228->SecurityQos) == 40 )
    v281 = (int)v228[1].SecurityQos;
  else
    v281 = HIDWORD(v228->AccessState);
  if ( (v281 & 0x4000) == 0 )
  {
    v282 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v283 = *(_DWORD *)(v282 + *(_QWORD *)(v230 + 40));
    if ( (v283 & 1) != 0 )
    {
LABEL_666:
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v230 + 1032), 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)(v230 + 520), 0, 0);
    }
    else
    {
      while ( 1 )
      {
        v284 = v283;
        v283 = _InterlockedCompareExchange((volatile signed __int32 *)(v282 + *(_QWORD *)(v230 + 40)), v283 - 2, v283);
        if ( v284 == v283 )
          break;
        if ( (v283 & 1) != 0 )
          goto LABEL_666;
      }
    }
  }
LABEL_668:
  if ( !v316 )
  {
    LOBYTE(v3) = 0;
LABEL_670:
    if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120 || (HIDWORD(off_140168120->Timer) & 8) == 0 )
    {
      v285 = (__int64)Irp;
    }
    else
    {
      v285 = (__int64)Irp;
      if ( BYTE1(off_140168120->Timer) >= 4u )
        sub_1400556F8(off_140168120->AttachedDevice, 21LL, &unk_14014D880, v5, Irp, Irp->IoStatus.Status);
    }
    if ( (qword_140168458 & 0x10) != 0 )
      sub_14000F84C(*(_QWORD *)(v5 + 24), v285, v362);
    v84 = byte_140168DAA == 0;
    *(_BYTE *)(v285 + 141) = -84;
    if ( v84 )
      goto LABEL_734;
    v362 = 0LL;
    IoGetActivityIdIrp(v285, &v362);
    v287 = *(_QWORD *)(v285 + 184);
    if ( *(_BYTE *)v287 == 14 )
    {
      if ( (byte_1401694F2 & 8) == 0 )
        goto LABEL_734;
      v289 = &unk_140148B18;
      goto LABEL_733;
    }
    if ( *(_BYTE *)v287 != 15 )
    {
      if ( *(_BYTE *)v287 != 27 )
        goto LABEL_734;
      if ( *(_BYTE *)(v287 + 1) == 7 && !*(_DWORD *)(v287 + 8) )
      {
        if ( (byte_1401694F2 & 0x40) != 0 )
        {
          v288 = *(int **)(v285 + 56);
          if ( v288 )
            v3 = *v288;
          sub_140056AB0(v286, v287, (unsigned int)&v362, v285, v3, *(_DWORD *)(v285 + 48));
        }
        goto LABEL_734;
      }
      if ( (byte_1401694F2 & 0x20) == 0 )
        goto LABEL_734;
      v289 = &unk_140149FE8;
LABEL_733:
      sub_140052F3C(v286, v289, &v362, v285, *(_DWORD *)(v285 + 48));
      goto LABEL_734;
    }
    if ( byte_1401694F1 >= 0 )
      goto LABEL_734;
    v290 = *(_QWORD *)(v287 + 8);
    v291 = 0;
    v292 = 0;
    v293 = 0;
    v294 = 0;
    v295 = 0;
    if ( *(_BYTE *)(v290 + 2) == 40 )
    {
      v296 = 0LL;
      if ( *(_DWORD *)(v290 + 20) )
        goto LABEL_734;
      v297 = *(_DWORD *)(v290 + 56);
      v298 = 0LL;
      if ( !v297 )
        goto LABEL_707;
      while ( 1 )
      {
        v299 = *(unsigned int *)(v290 + 4LL * (unsigned int)v298 + 120);
        if ( (unsigned int)v299 < 0x80 )
          goto LABEL_705;
        v300 = *(unsigned int *)(v290 + 16);
        if ( (unsigned int)v299 >= (unsigned int)v300 )
          goto LABEL_705;
        v301 = (unsigned int)v299;
        v302 = *(_DWORD *)(v299 + v290) - 64;
        if ( v302 )
        {
          v303 = v302 - 1;
          if ( v303 )
          {
            if ( v303 == 1 && v301 + 40 <= v300 )
            {
              if ( *(_DWORD *)(v301 + v290 + 12) )
                v296 = (unsigned __int8 *)(v301 + v290 + 32);
              v291 = *(_BYTE *)(v301 + v290 + 8);
              v298 = *(_BYTE **)(v301 + v290 + 24);
              v292 = *(_BYTE *)(v301 + v290 + 9);
              goto LABEL_707;
            }
            goto LABEL_705;
          }
          v304 = v301 + 56;
        }
        else
        {
          v304 = v301 + 40;
        }
        if ( v304 <= v300 )
        {
          if ( *(_BYTE *)(v301 + v290 + 10) )
            v296 = (unsigned __int8 *)(v301 + v290 + 24);
          v291 = *(_BYTE *)(v301 + v290 + 8);
          v298 = *(_BYTE **)(v301 + v290 + 16);
          v292 = *(_BYTE *)(v301 + v290 + 9);
LABEL_707:
          if ( v296 )
          {
            LODWORD(v305) = *v296;
            v285 = (__int64)Irp;
            goto LABEL_713;
          }
          goto LABEL_734;
        }
LABEL_705:
        LODWORD(v298) = (_DWORD)v298 + 1;
        if ( (unsigned int)v298 >= v297 )
        {
          v298 = 0LL;
          goto LABEL_707;
        }
      }
    }
    LODWORD(v305) = *(unsigned __int8 *)(v290 + 72);
    v298 = *(_BYTE **)(v290 + 32);
    v292 = *(_BYTE *)(v290 + 11);
    v291 = *(_BYTE *)(v290 + 4);
    if ( *(_BYTE *)(v290 + 2) )
      goto LABEL_734;
LABEL_713:
    LOBYTE(v305) = (_BYTE)v305 - 8;
    if ( ((unsigned __int8)v305 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v290 + 3) == 1 || !v298 || !v292 )
        goto LABEL_729;
      v306 = 0;
      v305 = &v298[v292];
      v307 = v298 + 8;
      if ( (unsigned __int8)((*v298 & 0x7F) - 114) <= 1u )
      {
        if ( v307 > v305 )
          goto LABEL_728;
        v294 = v298[2];
        v293 = v298[1] & 0xF;
        v295 = v298[3];
      }
      else
      {
        if ( v307 > v305 )
          goto LABEL_728;
        v293 = v298[2] & 0xF;
        v308 = v292;
        if ( (unsigned int)(unsigned __int8)v298[7] + 8 <= v292 )
          v308 = (unsigned __int8)v298[7] + 8;
        v305 = v298 + 13;
        v309 = (unsigned __int64)&v298[v308];
        if ( (unsigned __int64)(v298 + 13) <= v309 )
          v294 = v298[12];
        if ( (unsigned __int64)(v298 + 14) <= v309 )
          v295 = *v305;
      }
      v306 = 1;
LABEL_728:
      if ( v306 )
      {
LABEL_730:
        sub_140052E64(
          (_DWORD)v305,
          v290,
          (unsigned int)&v362,
          v285,
          *(_DWORD *)(v285 + 48),
          *(_BYTE *)(v290 + 3),
          v291,
          v293,
          v294,
          v295,
          v285);
        goto LABEL_734;
      }
LABEL_729:
      v295 = 0;
      v294 = 0;
      v293 = 0;
      goto LABEL_730;
    }
LABEL_734:
    IofCompleteRequest(Irp, 1);
  }
  v310 = 1;
LABEL_736:
  result = v328 & 0x1C;
  if ( (v328 & 0x1C) != 0xC && v310 )
  {
    v312 = sub_140051260(&v355, &v354);
    if ( v354 )
      (*(void (__fastcall **)(_QWORD, __int64, __int64 *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v354 + 64) + 32LL) + 712LL))(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v354 + 64) + 32LL) + 704LL),
        v354 - 120,
        &v355,
        0LL);
    if ( v312 )
      sub_14000C6B0(*(_QWORD *)(v5 + 24), 0);
    return sub_140025E00(v5, v332, 0LL);
  }
  return result;
}
