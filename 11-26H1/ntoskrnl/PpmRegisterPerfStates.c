/*
 * XREFs of PpmRegisterPerfStates @ 0x1407D13F8
 * Callers:
 *     PpmPerfRegisterNativePerfStates @ 0x1407D13E0 (PpmPerfRegisterNativePerfStates.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1407E6DF0 (PpmPerfRegisterHvPerfStateCounters.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     PpmParkApplyPolicy @ 0x14025AAD0 (PpmParkApplyPolicy.c)
 *     RtlOrAffinityEx @ 0x14025C158 (RtlOrAffinityEx.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     PpmConvertTimeFrom @ 0x1402F3288 (PpmConvertTimeFrom.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1402F6E90 (KeFindFirstSetRightGroupAffinity.c)
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     KeCheckProcessorAffinityEx @ 0x140421930 (KeCheckProcessorAffinityEx.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x140445FF8 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     KeQueryActiveProcessorAffinity2 @ 0x14047DCB0 (KeQueryActiveProcessorAffinity2.c)
 *     PpmCheckResetProcessors @ 0x1404FB714 (PpmCheckResetProcessors.c)
 *     PpmInstallFeedbackCounters @ 0x140605540 (PpmInstallFeedbackCounters.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PpmAllocatePerfCheck @ 0x1407D9270 (PpmAllocatePerfCheck.c)
 *     PpmReinitializeHeteroEngine @ 0x140AD89F8 (PpmReinitializeHeteroEngine.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140AD8DD8 (PpmPerfUpdateDomainPolicy.c)
 *     PpmCheckReInit @ 0x140AEBB2C (PpmCheckReInit.c)
 *     PpmUpdateProcessorPolicy @ 0x140AF0768 (PpmUpdateProcessorPolicy.c)
 *     PpmPerfResizeHistory @ 0x140B42680 (PpmPerfResizeHistory.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmRegisterPerfStates(__int64 a1, char a2)
{
  int v4; // eax
  __int64 v5; // r13
  unsigned int v6; // r12d
  unsigned int v7; // r14d
  char *v8; // rdi
  __int64 v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // r15
  unsigned int i; // edx
  __int64 v13; // r8
  int v14; // r14d
  int v15; // r9d
  __int64 *v16; // rdx
  __int64 v17; // r8
  bool v18; // zf
  int v19; // ecx
  __int64 v20; // r8
  _DWORD *v21; // rdx
  unsigned int v22; // ecx
  unsigned int v23; // ebx
  unsigned int v24; // r14d
  __int64 Pool2; // rax
  __int64 v26; // r15
  unsigned int v27; // r8d
  __int64 v28; // r9
  unsigned int j; // r14d
  __int64 v30; // r13
  __int64 v31; // rbx
  __int64 v32; // r12
  unsigned int v33; // eax
  ULONG v34; // edx
  __int64 v35; // rcx
  unsigned int v36; // r14d
  __int64 v37; // rcx
  __int64 v38; // rax
  char v39; // al
  __int64 *v40; // r10
  __int64 v41; // rbx
  int v42; // r11d
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // rdx
  unsigned __int16 k; // cx
  unsigned __int16 m; // cx
  unsigned __int64 v48; // rdx
  unsigned int FirstSetRightGroupAffinity; // eax
  __int64 Prcb; // rax
  unsigned int n; // ecx
  __int64 v52; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  int v54; // edx
  __int64 v55; // rcx
  _DWORD *v56; // rax
  char v57; // al
  unsigned int v58; // r12d
  _DWORD *v59; // r14
  __int64 v60; // rbx
  __int64 *v61; // rdx
  __int64 v62; // rax
  __int64 v63; // r8
  __int64 v64; // rcx
  __int64 *v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rbx
  __int128 *v69; // rax
  __int64 v70; // rcx
  int v71; // eax
  _QWORD *v72; // rax
  char v73; // r8
  PBOOLEAN v74; // rdx
  BOOLEAN v75; // al
  unsigned __int16 Count; // r8
  unsigned __int16 v77; // r9
  $B38C3B1372D6E954799962D5DD404846 *v78; // r10
  unsigned __int16 ii; // dx
  PBOOLEAN v80; // rcx
  char v81; // dl
  __int64 v82; // rcx
  char v83; // bl
  unsigned int v84; // r8d
  unsigned __int16 v85; // r9
  __int64 jj; // rdx
  __int64 v87; // rcx
  PVOID *v88; // rbx
  __int64 v89; // rsi
  void *v90; // rcx
  void *v91; // rcx
  void *v92; // rcx
  signed __int32 v94[8]; // [rsp+8h] [rbp-100h] BYREF
  int v95; // [rsp+28h] [rbp-E0h]
  unsigned int v96; // [rsp+2Ch] [rbp-DCh]
  __int64 v97; // [rsp+30h] [rbp-D8h]
  __int64 v98; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v99; // [rsp+40h] [rbp-C8h]
  int v100; // [rsp+44h] [rbp-C4h]
  int v101; // [rsp+48h] [rbp-C0h]
  unsigned int v102; // [rsp+4Ch] [rbp-BCh]
  __int64 v103; // [rsp+50h] [rbp-B8h]
  __int64 v104; // [rsp+58h] [rbp-B0h]
  char *v105; // [rsp+60h] [rbp-A8h]
  __int64 v106; // [rsp+68h] [rbp-A0h]
  __int128 v107; // [rsp+70h] [rbp-98h] BYREF
  __int128 v108; // [rsp+80h] [rbp-88h] BYREF
  __int64 v109; // [rsp+90h] [rbp-78h]
  $B38C3B1372D6E954799962D5DD404846 *v110; // [rsp+98h] [rbp-70h]
  struct _KAFFINITY_EX v111; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v112; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v113[264]; // [rsp+1C0h] [rbp+B8h] BYREF

  memset_0(v113, 0, 0x100uLL);
  v108 = 0LL;
  memset_0(&v111.8, 0, sizeof(v111.8));
  v4 = *(_DWORD *)(a1 + 20);
  v5 = *(unsigned int *)(a1 + 16);
  v6 = 0;
  v7 = *(_DWORD *)(a1 + 36);
  v105 = 0LL;
  LOBYTE(v95) = 0;
  v107 = 0LL;
  v8 = 0LL;
  LODWORD(v104) = v5;
  v100 = v4;
  *(_QWORD *)&v111.Count = 2097153LL;
  memset_0(&v111.8, 0, sizeof(v111.8));
  v112 = 2097153LL;
  memset_0(v113, 0, 0x100uLL);
  KeQueryActiveProcessorAffinity2((__int64)&v112);
  v102 = 0;
  v11 = 0LL;
  if ( !a2 )
    PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, v9, v10);
  v98 = -1LL;
  for ( i = 0; ; ++i )
  {
    v110 = &PpmCheckRegistered.8;
    if ( i >= v7 )
      break;
    v13 = *(unsigned int *)(*(_QWORD *)(a1 + 568) + 24LL * i + 12);
    if ( (unsigned int)v13 >= 2 )
      goto LABEL_9;
    if ( *((_DWORD *)&v98 + v13) == -1 )
      *((_DWORD *)&v98 + v13) = i;
  }
  if ( v98 == -1 )
  {
LABEL_9:
    v14 = -1073741811;
LABEL_52:
    PpmReleaseLock((__int64 *)&PpmIdlePolicyLock.ThreadLock);
    goto LABEL_161;
  }
  v15 = 0;
  v16 = &v98;
  v17 = 2LL;
  do
  {
    v18 = *(_DWORD *)v16 == -1;
    v19 = v15 + 1;
    v16 = (__int64 *)((char *)v16 + 4);
    if ( v18 )
      v19 = v15;
    v15 = v19;
    --v17;
  }
  while ( v17 );
  v101 = v19;
  if ( (_DWORD)v5 )
  {
    v20 = v5;
    v21 = (_DWORD *)(*(_QWORD *)(a1 + 576) + 28LL);
    do
    {
      v22 = v6 + 1;
      if ( *v21 != 1 )
        v22 = v6;
      v21 += 8;
      v6 = v22;
      --v20;
    }
    while ( v20 );
    v102 = v22;
  }
  v23 = (1224 * v5 + 1455) & 0xFFFFFFF8;
  v24 = v23 + 48 * v15 * v5;
  Pool2 = ExAllocatePool2(0x40uLL);
  v105 = (char *)Pool2;
  v8 = (char *)Pool2;
  if ( !Pool2 )
  {
    v14 = -1073741670;
    goto LABEL_52;
  }
  v26 = Pool2 + 1448;
  v99 = 0;
  v27 = 0;
  v109 = Pool2 + v23;
  if ( !v6 )
    v24 = 0;
  v28 = Pool2 + v24;
  v103 = v28;
  if ( *(_BYTE *)(a1 + 11) )
    PpmPerfQosTransitionHysteresis = *(_DWORD *)(a1 + 48);
  for ( j = 0; ; ++j )
  {
    LODWORD(v97) = j;
    if ( j >= (unsigned int)v5 )
      break;
    v30 = *(_QWORD *)(a1 + 576);
    v31 = 1224LL * j;
    v32 = 32LL * j;
    *(_DWORD *)(v31 + v26 + 16) = *(_DWORD *)(v32 + v30 + 28);
    v33 = *(_DWORD *)(v32 + v30);
    if ( !*(_DWORD *)(v32 + v30 + 28) )
    {
      v96 = *(_DWORD *)(v32 + v30);
      v36 = v33;
      if ( v33 == -1 || (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)PpmPerfStatesRegistered, v33) )
      {
        v14 = -1073741811;
LABEL_51:
        v11 = v103;
        goto LABEL_52;
      }
      *(_QWORD *)&v107 = KeGetPrcb(v36);
      v106 = v107 + 35264;
      v14 = PpmAllocatePerfCheck(v107 + 35264);
      if ( v14 < 0 )
        goto LABEL_51;
      KeAddProcessorAffinityEx(&v111.Count, v96);
      *(_QWORD *)(v31 + v26) = v106;
      v37 = (unsigned int)PpmPerfQosTransitionHysteresisOverride;
      if ( PpmPerfQosTransitionHysteresisOverride == -1 )
        v37 = (unsigned int)PpmPerfQosTransitionHysteresis;
      v38 = PpmConvertTimeFrom(v37, 1000000LL);
      *(_QWORD *)(v107 + 35400) = v38;
      goto LABEL_39;
    }
    v34 = -1;
    *(_DWORD *)(v31 + v26 + 20) = v33;
    v96 = -1;
    if ( *(_DWORD *)(v32 + v30 + 28) == 1 )
    {
      v99 = v27 + 1;
      v35 = v28 + 720LL * v27;
      v106 = v35;
      *(_WORD *)(v35 + 62) = 100;
      v14 = PpmAllocatePerfCheck(v35);
      if ( v14 < 0 )
        goto LABEL_51;
      *(_QWORD *)(v31 + v26) = v106;
LABEL_39:
      j = v97;
      v34 = v96;
    }
    *(_QWORD *)(v31 + v26 + 1216) = 0LL;
    *(_DWORD *)(v31 + v26 + 48) = 100;
    *(_QWORD *)(v31 + v26 + 8) = *(_QWORD *)(v32 + v30 + 8);
    *(_DWORD *)(v31 + v26 + 24) = *(_DWORD *)(v32 + v30 + 16);
    *(_DWORD *)(v31 + v26 + 28) = *(_DWORD *)(v32 + v30 + 20);
    *(_DWORD *)(v31 + v26 + 32) = *(_DWORD *)(v32 + v30 + 24);
    *(_DWORD *)(v31 + v26 + 84) = v100;
    v39 = 1;
    *(_DWORD *)(v31 + v26 + 88) = 1;
    *(_DWORD *)(v31 + v26 + 56) = 100;
    *(_DWORD *)(v31 + v26 + 80) = 100;
    *(_DWORD *)(v31 + v26 + 92) = 100;
    *(_DWORD *)(v31 + v26 + 96) = 100;
    *(_DWORD *)(v31 + v26 + 160) = 100;
    *(_DWORD *)(v31 + v26 + 164) = 100;
    *(_DWORD *)(v31 + v26 + 148) = 100;
    *(_QWORD *)(v31 + v26 + 176) = 0LL;
    if ( *(_BYTE *)(a1 + 7) || !*(_BYTE *)(a1 + 11) )
      v39 = 0;
    *(_BYTE *)(v31 + v26 + 169) = v39;
    if ( *(_DWORD *)(v32 + v30 + 16) < 0x64u )
    {
      *(_QWORD *)(v31 + v26 + 40) = MEMORY[0xFFFFF78000000008];
      PopDiagTraceProcessorThrottlePerfTrack(100 - *(_DWORD *)(v32 + v30 + 16), v34);
    }
    v40 = &v98;
    v41 = 2LL;
    v42 = v101 * j;
    v43 = v109 + 48LL * v101 * j;
    do
    {
      v44 = *(unsigned int *)v40;
      if ( (_DWORD)v44 != -1 )
      {
        v45 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(v43 + 40) = *(_QWORD *)(*(_QWORD *)(a1 + 584) + 8LL * (unsigned int)(v42 + v44));
        *(_BYTE *)(v43 + 33) = *(_BYTE *)(v45 + 24 * v44 + 17);
        *(_BYTE *)(v43 + 32) = *(_BYTE *)(v45 + 24 * v44 + 16);
        *(_BYTE *)(v43 + 34) = *(_BYTE *)(v45 + 24 * v44 + 18);
        *(_DWORD *)(v43 + 36) = *(_DWORD *)(v45 + 24 * v44 + 8);
        *(_QWORD *)v43 = *(_QWORD *)(v45 + 24 * v44);
        v43 += 48LL;
      }
      v40 = (__int64 *)((char *)v40 + 4);
      --v41;
    }
    while ( v41 );
    LODWORD(v5) = v104;
    v27 = v99;
    v28 = v103;
  }
  v14 = 0;
  for ( k = 0; k < v111.Count; ++k )
  {
    if ( v111.Bitmap[k] )
    {
      for ( m = 0; m < v111.Count; ++m )
      {
        v48 = v111.Bitmap[m];
        if ( v48 )
        {
          WORD4(v108) = m;
          *(_QWORD *)&v108 = v48;
          break;
        }
      }
      FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((unsigned __int64 *)&v108);
      Prcb = KeGetPrcb(FirstSetRightGroupAffinity);
      *((_QWORD *)v8 + 2) = Prcb + 35264;
      v8[300] = *(_BYTE *)(Prcb + 35352);
      goto LABEL_70;
    }
  }
  for ( n = 0; n < (unsigned int)v5; ++n )
  {
    v52 = 1224LL * n;
    if ( *(_DWORD *)(v52 + v26 + 16) == 1 )
    {
      *((_QWORD *)v8 + 2) = *(_QWORD *)(v52 + v26);
      *((_DWORD *)v8 + 76) = 1;
      goto LABEL_70;
    }
  }
  if ( n == (_DWORD)v5 )
    *((_DWORD *)v8 + 76) = 2;
LABEL_70:
  *((_QWORD *)v8 + 3) = 2097153LL;
  memset_0(v8 + 32, 0, 0x100uLL);
  RtlpCopyAffinityEx((struct _KAFFINITY_EX *)(v8 + 24), *((_WORD *)v8 + 13), &v111);
  *((_QWORD *)v8 + 40) = *(_QWORD *)(a1 + 376);
  *((_QWORD *)v8 + 42) = *(_QWORD *)(a1 + 392);
  *((_QWORD *)v8 + 43) = *(_QWORD *)(a1 + 400);
  *((_QWORD *)v8 + 44) = *(_QWORD *)(a1 + 408);
  *((_QWORD *)v8 + 45) = *(_QWORD *)(a1 + 416);
  *((_QWORD *)v8 + 41) = *(_QWORD *)(a1 + 384);
  *((_QWORD *)v8 + 36) = *(_QWORD *)(a1 + 104);
  *((_QWORD *)v8 + 39) = v26;
  *((_DWORD *)v8 + 217) = 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v54 = v100;
  v55 = 7LL;
  *((LARGE_INTEGER *)v8 + 179) = PerformanceCounter;
  *((_DWORD *)v8 + 114) = v54;
  *((_DWORD *)v8 + 74) = v5;
  *((_DWORD *)v8 + 118) = *(_DWORD *)(a1 + 44);
  *((_DWORD *)v8 + 115) = *(_DWORD *)(a1 + 24);
  *((_DWORD *)v8 + 116) = *(_DWORD *)(a1 + 28);
  *((_DWORD *)v8 + 117) = *(_DWORD *)(a1 + 32);
  v8[504] = *(_BYTE *)(a1 + 15);
  v8[497] = *(_BYTE *)(a1 + 4);
  *((_QWORD *)v8 + 50) = *(_QWORD *)(a1 + 472);
  *((_QWORD *)v8 + 51) = *(_QWORD *)(a1 + 480);
  *((_QWORD *)v8 + 52) = *(_QWORD *)(a1 + 488);
  *((_QWORD *)v8 + 53) = *(_QWORD *)(a1 + 520);
  *((_QWORD *)v8 + 54) = *(_QWORD *)(a1 + 528);
  *((_QWORD *)v8 + 55) = *(_QWORD *)(a1 + 536);
  *((_QWORD *)v8 + 46) = *(_QWORD *)(a1 + 440);
  *((_QWORD *)v8 + 47) = *(_QWORD *)(a1 + 448);
  *((_QWORD *)v8 + 48) = *(_QWORD *)(a1 + 456);
  *((_QWORD *)v8 + 49) = *(_QWORD *)(a1 + 464);
  v8[529] = *(_BYTE *)(a1 + 52);
  v8[528] = *(_BYTE *)(a1 + 52) != 0;
  v8[531] = *(_BYTE *)(a1 + 9);
  v56 = v8 + 892;
  do
  {
    *(v56 - 1) = 100;
    *v56 = v54;
    v56 += 20;
    --v55;
  }
  while ( v55 );
  v8[498] = *(_BYTE *)(a1 + 6);
  v8[499] = *(_BYTE *)(a1 + 7);
  v8[500] = *(_BYTE *)(a1 + 8);
  if ( *(_WORD *)(a1 + 4) == 253 || (v57 = 1, *(_QWORD *)(a1 + 488)) )
    v57 = 0;
  v8[502] = v57;
  v8[501] = *(_BYTE *)(a1 + 11);
  if ( PpmPerfQosManageIdleProcessors == -1 )
    PpmPerfQosManageIdleProcessors = *(_BYTE *)(a1 + 12) != 0;
  *((_QWORD *)v8 + 60) = *(_QWORD *)(a1 + 56);
  *((_QWORD *)v8 + 61) = *(_QWORD *)(a1 + 64);
  v8[496] = 100;
  if ( PpmCheckMinimumPeriod <= (unsigned __int64)*(unsigned int *)(a1 + 40) )
    PpmCheckMinimumPeriod = *(unsigned int *)(a1 + 40);
  if ( *((_QWORD *)v8 + 43) )
    PpmAllowedActions |= 0x40u;
  if ( *((_QWORD *)v8 + 42) )
    PpmAllowedActions |= 0x20u;
  if ( *((_QWORD *)v8 + 41) )
    PpmAllowedActions |= 0x200u;
  if ( *((_QWORD *)v8 + 45) )
    PpmAllowedActions |= 0x80u;
  if ( *((_QWORD *)v8 + 44) )
    PpmAllowedActions |= 0x100u;
  if ( *(_BYTE *)(a1 + 9) )
    PpmPerfEppViaPerfControl = 1;
  if ( *(_BYTE *)(a1 + 10) )
    PpmPerfAutonomousActivityWindowViaPerfControl = 1;
  v8[503] = *(_BYTE *)(a1 + 13);
  *((_DWORD *)v8 + 127) = *(_DWORD *)(a1 + 72);
  *((_DWORD *)v8 + 128) = *(_DWORD *)(a1 + 76);
  *((_DWORD *)v8 + 129) = *(_DWORD *)(a1 + 80);
  *((_DWORD *)v8 + 130) = *(_DWORD *)(a1 + 84);
  *((_DWORD *)v8 + 131) = *(_DWORD *)(a1 + 88);
  _InterlockedOr(v94, 0);
  v58 = 0;
  if ( (_DWORD)v5 )
  {
    v59 = (_DWORD *)(v26 + 16);
    do
    {
      if ( *v59 != 2 )
      {
        v60 = *((_QWORD *)v59 - 2);
        v61 = &v98;
        v107 = 0LL;
        *(_DWORD *)(v60 + 64) = 0x10000;
        v62 = v101 * v58;
        v63 = 2LL;
        *(_QWORD *)v60 = v8;
        *(_QWORD *)(v60 + 8) = v26 + 1224LL * v58;
        v64 = 48 * v62;
        v65 = (__int64 *)&v107;
        v66 = v109 + v64;
        do
        {
          if ( *(_DWORD *)v61 != -1 )
          {
            *v65 = v66;
            v66 += 48LL;
          }
          v61 = (__int64 *)((char *)v61 + 4);
          ++v65;
          --v63;
        }
        while ( v63 );
        if ( *v59 )
        {
          PpmPerfResizeHistory(v60, v61);
          v67 = 2LL;
          v68 = v60 - (_QWORD)&v107;
          v69 = &v107;
          do
          {
            if ( *(_QWORD *)v69 )
              *(_QWORD *)((char *)v69 + v68 + 96) = *(_QWORD *)v69;
            v69 = (__int128 *)((char *)v69 + 8);
            --v67;
          }
          while ( v67 );
        }
        else
        {
          PpmInstallFeedbackCounters(v60 - 35264, (__int64 *)&v107, *(_BYTE *)(a1 + 14));
        }
      }
      ++v58;
      v59 += 306;
    }
    while ( v58 < (unsigned int)v5 );
    v14 = 0;
  }
  if ( !PpmPerfGlobalContext )
    PpmPerfGlobalContext = *(_QWORD *)(a1 + 96);
  v70 = PpmPerfControlReadFeedback;
  if ( !PpmPerfControlReadFeedback )
  {
    v70 = *(_QWORD *)(a1 + 496);
    PpmPerfControlReadFeedback = v70;
  }
  if ( !PpmPerfControlAcquirePerformance )
    PpmPerfControlAcquirePerformance = *(_QWORD *)(a1 + 504);
  if ( !PpmPerfControlCommitPerformance )
    PpmPerfControlCommitPerformance = *(_QWORD *)(a1 + 512);
  if ( !PpmParkPreferenceHandler )
    PpmParkPreferenceHandler = *(_QWORD *)(a1 + 544);
  if ( !PpmParkMaskHandler )
    PpmParkMaskHandler = *(_QWORD *)(a1 + 552);
  if ( !PpmCheckCompleteHandler )
    PpmCheckCompleteHandler = *(_QWORD *)(a1 + 560);
  if ( !PpmPerfControlStartPolicyUpdate )
    PpmPerfControlStartPolicyUpdate = *(_QWORD *)(a1 + 424);
  if ( !PpmPerfControlCompletePolicyUpdate )
    PpmPerfControlCompletePolicyUpdate = *(_QWORD *)(a1 + 432);
  if ( v70 )
    PpmCheckPollForFeedback = 1;
  v71 = PpmPerfDomainCount + 1;
  *((_DWORD *)v8 + 112) = PpmPerfDomainCount + 1;
  PpmPerfDomainCount = v71;
  v72 = (_QWORD *)qword_140FC0CA8;
  if ( *(PBOOLEAN **)qword_140FC0CA8 != (PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2) )
    __fastfail(3u);
  *(_QWORD *)v8 = (char *)&Mm64BitPhysicalAddress + 2;
  v73 = 1;
  *((_QWORD *)v8 + 1) = v72;
  *v72 = v8;
  v74 = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
  qword_140FC0CA8 = (__int64)v8;
  LOBYTE(v95) = 1;
  if ( *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2) != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2) )
  {
    do
    {
      v75 = v74[501];
      v74 = *(PBOOLEAN *)v74;
      v73 = v75 != 0 ? v73 : 0;
    }
    while ( v74 != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2) );
    LOBYTE(v95) = v73;
  }
  RtlOrAffinityEx(&v111, (struct _KAFFINITY_EX *)PpmPerfStatesRegistered, (__int64)PpmPerfStatesRegistered);
  Count = PpmCheckRegistered.Count;
  if ( LOWORD(PpmPerfStatesRegistered[0]) >= PpmCheckRegistered.Count )
  {
    v77 = PpmCheckRegistered.Count;
    v78 = ($B38C3B1372D6E954799962D5DD404846 *)&qword_140E0B498;
    Count = PpmPerfStatesRegistered[0];
  }
  else
  {
    v77 = PpmPerfStatesRegistered[0];
    v78 = &PpmCheckRegistered.8;
  }
  for ( ii = 0; ii < v77; ++ii )
  {
    if ( PpmPerfStatesRegistered[ii + 1] != PpmCheckRegistered.Bitmap[ii] )
      goto LABEL_158;
  }
  while ( ii < Count )
  {
    if ( v78->Bitmap[ii] )
      goto LABEL_158;
    ++ii;
  }
  v80 = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
  v81 = 1;
  while ( v80 != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2) )
  {
    if ( !v80[503]
      || *((_QWORD *)v80 + 61) != *((_QWORD *)v8 + 61)
      || *((_DWORD *)v80 + 117) != *((_DWORD *)v8 + 117)
      || *((_DWORD *)v80 + 115) != *((_DWORD *)v8 + 115)
      || *((_DWORD *)v80 + 127) != *((_DWORD *)v8 + 127)
      || *((_DWORD *)v80 + 128) != *((_DWORD *)v8 + 128)
      || *((_DWORD *)v80 + 129) != *((_DWORD *)v8 + 129)
      || *((_DWORD *)v80 + 130) != *((_DWORD *)v8 + 130)
      || *((_DWORD *)v80 + 131) != *((_DWORD *)v8 + 131) )
    {
      v81 = 0;
      break;
    }
    v80 = *(PBOOLEAN *)v80;
  }
  PpmPerfVmPerfSelectionSupported = v81;
LABEL_158:
  *((_WORD *)v8 + 722) = 257;
  PpmUpdateProcessorPolicy(&PpmAllowedActions, v8);
  PpmCheckResetProcessors((__int64)v8);
  if ( (unsigned int)KeCheckProcessorAffinityEx(&v111.Count, 0) )
    PpmParkApplyPolicy();
  PpmCheckReInit();
  v8 = 0LL;
  v105 = 0LL;
  LOBYTE(v82) = 1;
  PpmPerfUpdateDomainPolicy(v82);
  v11 = v103;
LABEL_161:
  v83 = v95;
  if ( (unsigned int)PpmPerfDomainCount > 1 || (_BYTE)v95 )
  {
    v84 = *(_DWORD *)&PpmCheckRegistered.Count;
    if ( LOWORD(PpmPerfStatesRegistered[0]) >= PpmCheckRegistered.Count )
    {
      v85 = PpmCheckRegistered.Count;
      v110 = ($B38C3B1372D6E954799962D5DD404846 *)&qword_140E0B498;
      v84 = LOWORD(PpmPerfStatesRegistered[0]);
    }
    else
    {
      v85 = PpmPerfStatesRegistered[0];
    }
    for ( jj = 0LL; (unsigned __int16)jj < v85; LOWORD(jj) = jj + 1 )
    {
      if ( PpmPerfStatesRegistered[(unsigned __int16)jj + 1] != PpmCheckRegistered.Bitmap[(unsigned __int16)jj] )
        goto LABEL_174;
    }
    while ( (unsigned __int16)jj < (unsigned __int16)v84 )
    {
      if ( v110->Bitmap[(unsigned __int16)jj] )
        goto LABEL_174;
      LOWORD(jj) = jj + 1;
    }
    PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, jj, v84);
    PpmPerfSchedulerDirectedPerfStatesSupported = v83;
    LOBYTE(v87) = 1;
    PpmReinitializeHeteroEngine(v87, 0LL);
  }
LABEL_174:
  if ( v8 )
  {
    if ( v102 )
    {
      v88 = (PVOID *)(v11 + 16);
      v89 = v102;
      do
      {
        if ( *v88 )
        {
          v90 = (void *)*((_QWORD *)*v88 + 11);
          if ( v90 )
          {
            ExFreePoolWithTag(v90, 0x704D5050u);
            *((_QWORD *)*v88 + 11) = 0LL;
          }
          v91 = (void *)*((_QWORD *)*v88 + 19);
          if ( v91 )
          {
            ExFreePoolWithTag(v91, 0x704D5050u);
            *((_QWORD *)*v88 + 19) = 0LL;
          }
          v92 = (void *)*((_QWORD *)*v88 + 27);
          if ( v92 )
          {
            ExFreePoolWithTag(v92, 0x704D5050u);
            *((_QWORD *)*v88 + 27) = 0LL;
          }
          ExFreePoolWithTag(*v88, 0x704D5050u);
          *v88 = 0LL;
        }
        v88 += 90;
        --v89;
      }
      while ( v89 );
      v8 = v105;
    }
    ExFreePoolWithTag(v8, 0x704D5050u);
  }
  *(_QWORD *)&v108 = 0LL;
  *((_QWORD *)&v108 + 1) = -1LL;
  KeSetTimer2((__int64)&PpmPerfTelemetryTimer, -36000000000LL, 36000000000LL, (__int64)&v108);
  return (unsigned int)v14;
}
