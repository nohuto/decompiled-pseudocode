/*
 * XREFs of CmpPerformCompleteKcbCacheLookup @ 0x1408CCC40
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x1408C0924 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     CmpArmDelayedCloseTimer @ 0x1403834F8 (CmpArmDelayedCloseTimer.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     CmpDrainDelayDerefContext @ 0x14043F920 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140446F50 (CmpInitializeDelayDerefContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     ExpAcquireFastMutexContended @ 0x14049A508 (ExpAcquireFastMutexContended.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x1408C0438 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x1408C051C (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpGetComponentNameAtIndex @ 0x1408C1290 (CmpGetComponentNameAtIndex.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1408C9E60 (CmpDelayDerefKeyControlBlock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408CB390 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1408CB8AC (CmpDoQueueLateUnloadWorker.c)
 *     CmpConstructName @ 0x1408CB970 (CmpConstructName.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1408CBB28 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpDecommisssionKcb @ 0x1408CC900 (CmpDecommisssionKcb.c)
 *     CmpRecordParseFailure @ 0x1408CCA90 (CmpRecordParseFailure.c)
 *     CmpRemoveFromDelayedClose @ 0x1408CCAC4 (CmpRemoveFromDelayedClose.c)
 *     CmpDereferenceHive @ 0x1408CCB50 (CmpDereferenceHive.c)
 *     CmpDeleteKcbCache @ 0x1408CEA04 (CmpDeleteKcbCache.c)
 *     CmpLockHiveListExclusive @ 0x1408CEA7C (CmpLockHiveListExclusive.c)
 *     CmpReleaseGlobalQuota @ 0x1408CEAE4 (CmpReleaseGlobalQuota.c)
 *     HvFreeDirtyData @ 0x1408CEB28 (HvFreeDirtyData.c)
 *     CmpUnlockHiveList @ 0x1408CEBE8 (CmpUnlockHiveList.c)
 *     CmLockHive @ 0x1408CEC48 (CmLockHive.c)
 *     CmUnlockHive @ 0x1408CECB0 (CmUnlockHive.c)
 *     CmpReferenceHive @ 0x1408CECF0 (CmpReferenceHive.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1408D4BDC (CmpLockHashEntrySharedByKcb.c)
 *     CmpLockKcbExclusive @ 0x1408D5100 (CmpLockKcbExclusive.c)
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 *     CmpRemoveKeyHashFromDeletedKcbTable @ 0x140A76BF8 (CmpRemoveKeyHashFromDeletedKcbTable.c)
 *     CmpWaitForHiveMount @ 0x140B58CE0 (CmpWaitForHiveMount.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C5E3F0 (CmpLockKcbShared.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpPerformCompleteKcbCacheLookup(
        ULONG_PTR BugCheckParameter4,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        ULONG_PTR *a6,
        char *a7,
        __int64 a8)
{
  unsigned int v8; // r10d
  ULONG_PTR v9; // rsi
  ULONG_PTR v10; // r14
  __int16 v11; // dx
  signed __int64 v12; // rax
  unsigned int v13; // ebx
  ULONG_PTR v14; // r13
  unsigned int v15; // ecx
  int v16; // eax
  __int64 v17; // r12
  unsigned int v18; // r15d
  signed __int64 *v19; // rsi
  void *v20; // rdx
  LegacyAutoBoost *v21; // rdi
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  __int64 i; // rsi
  ULONG_PTR v25; // rdi
  __int64 v26; // rcx
  WCHAR *v27; // rdx
  __int16 v28; // r15
  __int16 *v29; // r9
  __int16 j; // r8
  bool v31; // zf
  __int64 *v32; // rbx
  signed __int64 v33; // rax
  signed __int64 v34; // rdx
  __int64 v35; // rtt
  __int64 v36; // rdx
  __int64 v37; // rcx
  ULONG_PTR v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  void *v42; // rcx
  void *v43; // rcx
  void *v44; // rcx
  void *v45; // rcx
  __int16 v46; // r10
  char v47; // r12
  unsigned int v48; // edi
  WCHAR v50; // ax
  __int16 v51; // r13
  signed __int64 v52; // rax
  signed __int64 v53; // rtt
  unsigned int v54; // ecx
  __int64 *v55; // rsi
  signed __int64 v56; // rax
  signed __int64 v57; // rdx
  __int64 v58; // rtt
  __int64 v59; // rdx
  __int64 v60; // rcx
  ULONG_PTR v61; // rsi
  __int64 v62; // rdx
  __int64 v63; // rcx
  _QWORD *v64; // rax
  void *v65; // rcx
  void *v66; // rcx
  void *v67; // rcx
  void *v68; // rcx
  unsigned __int64 v69; // rcx
  __int16 k; // r13
  __int16 v71; // cx
  WCHAR v72; // ax
  signed __int64 v73; // rax
  __int64 v74; // rcx
  char *v75; // rbx
  __int64 *v76; // rdi
  signed __int64 v77; // rax
  signed __int64 v78; // rdx
  __int64 v79; // rtt
  __int64 v80; // rdx
  __int64 v81; // rcx
  char *v82; // rdi
  __int64 v83; // rdx
  __int64 v84; // rax
  char **v85; // rcx
  void *v86; // rcx
  void *v87; // rcx
  void *v88; // rcx
  void *v89; // rcx
  struct _KLOCK_ENTRIES *v90; // r9
  __int64 v91; // rbx
  unsigned __int64 v92; // rcx
  unsigned __int64 v93; // rdx
  unsigned __int64 v94; // r8
  unsigned __int64 v95; // rax
  unsigned int v96; // ebx
  _DWORD *v97; // rdi
  unsigned __int64 *v98; // rsi
  AutoBoost *v99; // rax
  void *v100; // rdx
  struct _KLOCK_ENTRIES *v101; // r9
  AutoBoost *v102; // r14
  signed __int32 v103; // eax
  signed __int32 v104; // ett
  AutoBoost *v105; // rax
  void *v106; // rdx
  struct _KLOCK_ENTRIES *v107; // r9
  AutoBoost *v108; // r14
  __int64 v109; // r8
  ULONG_PTR v110; // r13
  __int64 v111; // rax
  __int64 v112; // rcx
  signed __int64 v113; // rax
  _BOOL8 v114; // rdx
  int v115; // ecx
  void *v116; // rdx
  struct _KLOCK_ENTRY *v117; // rsi
  unsigned __int8 v118; // r14
  unsigned __int64 *v119; // rax
  ULONG_PTR v120; // rsi
  __int64 v121; // rdx
  __int64 v122; // rcx
  void *v123; // r15
  __int64 v124; // rdx
  __int64 v125; // r8
  struct _KLOCK_ENTRIES *v126; // r9
  _QWORD *v127; // rcx
  _DWORD *v128; // r15
  ULONG_PTR v129; // r14
  __int64 *m; // rdx
  __int64 v131; // rax
  __int64 v132; // r10
  unsigned __int64 v133; // rcx
  unsigned __int64 v134; // r9
  unsigned __int64 v135; // rdx
  bool v136; // r8
  unsigned __int64 v137; // rax
  _QWORD *v138; // rax
  __int64 v139; // rcx
  struct _KLOCK_ENTRIES *v140; // r9
  AutoBoost *v141; // rax
  void *v142; // rdx
  struct _KLOCK_ENTRIES *v143; // r9
  AutoBoost *v144; // r14
  AutoBoost *v145; // rax
  void *v146; // rdx
  AutoBoost *v147; // r14
  __int64 v148; // rax
  __int64 v149; // rdx
  _QWORD *v150; // rax
  __int64 v151; // rsi
  int v152; // eax
  __int64 *v153; // rbx
  signed __int64 v154; // rax
  signed __int64 v155; // rdx
  __int64 v156; // rtt
  __int64 v157; // rdx
  __int64 v158; // rcx
  _DWORD *v159; // rbx
  __int64 v160; // rdx
  __int64 v161; // rcx
  _QWORD *v162; // rax
  void *v163; // rcx
  void *v164; // rcx
  void *v165; // rcx
  void *v166; // rcx
  _DWORD *v167; // rbx
  __int64 ComponentNameAtIndex; // rax
  int v169; // edx
  ULONG_PTR v170; // r12
  volatile signed __int32 *v171; // rbx
  __int64 *v172; // rsi
  signed __int64 v173; // rax
  signed __int64 v174; // rdx
  __int64 v175; // rtt
  __int64 v176; // rdx
  __int64 v177; // rcx
  volatile signed __int32 *v178; // rsi
  __int64 v179; // rdx
  __int64 v180; // rcx
  volatile signed __int32 **v181; // rax
  void *v182; // rcx
  void *v183; // rcx
  void *v184; // rcx
  void *v185; // rcx
  __int64 v186; // rbx
  struct _KLOCK_ENTRIES *v187; // rcx
  struct _KLOCK_ENTRIES *v188; // r9
  unsigned __int64 v189; // rdx
  bool v190; // r8
  unsigned __int64 v191; // rax
  unsigned int v192; // ebx
  volatile signed __int32 *v193; // rsi
  unsigned __int64 *v194; // r14
  AutoBoost *v195; // rax
  void *v196; // rdx
  struct _KLOCK_ENTRIES *v197; // r9
  AutoBoost *v198; // r15
  signed __int32 v199; // eax
  signed __int32 v200; // ett
  AutoBoost *v201; // rax
  void *v202; // rdx
  __int64 v203; // r8
  struct _KLOCK_ENTRIES *v204; // r9
  AutoBoost *v205; // r15
  __int64 v206; // rax
  __int64 v207; // rcx
  signed __int64 v208; // rax
  int v209; // ecx
  bool v210; // dl
  void *v211; // rdx
  struct _KLOCK_ENTRY *v212; // r14
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 *v214; // rax
  int Flink_high; // eax
  __int64 *v216; // rbx
  signed __int64 v217; // rax
  signed __int64 v218; // rdx
  __int64 v219; // rtt
  __int64 v220; // rdx
  __int64 v221; // rcx
  volatile signed __int32 *v222; // rbx
  __int64 v223; // rdx
  __int64 v224; // rcx
  volatile signed __int32 **v225; // rax
  void *v226; // rcx
  void *v227; // rcx
  void *v228; // rcx
  void *v229; // rcx
  __int64 v230; // rcx
  __int64 v231; // r14
  WORK_QUEUE_TYPE v232; // r8d
  unsigned __int64 ThreadLock; // rdx
  __int64 v234; // r10
  unsigned __int64 v235; // rcx
  unsigned __int64 v236; // r9
  unsigned __int64 v237; // rdx
  bool v238; // r8
  unsigned __int64 v239; // rax
  _QWORD *v240; // rax
  _QWORD *v241; // rcx
  _QWORD *v242; // rdx
  char v243; // [rsp+40h] [rbp-C0h]
  __int16 v244; // [rsp+42h] [rbp-BEh]
  __int16 v245; // [rsp+44h] [rbp-BCh]
  __int16 v246; // [rsp+48h] [rbp-B8h]
  __int16 v247; // [rsp+48h] [rbp-B8h]
  unsigned int v248; // [rsp+4Ch] [rbp-B4h]
  unsigned int v249; // [rsp+50h] [rbp-B0h]
  unsigned int v250; // [rsp+54h] [rbp-ACh]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-A8h]
  WCHAR *v252; // [rsp+60h] [rbp-A0h]
  WCHAR *v253; // [rsp+60h] [rbp-A0h]
  __int128 v254; // [rsp+68h] [rbp-98h] BYREF
  __int64 v255; // [rsp+78h] [rbp-88h]
  __int16 *v256; // [rsp+80h] [rbp-80h]
  ULONG_PTR v257; // [rsp+88h] [rbp-78h]
  __int64 v258; // [rsp+90h] [rbp-70h]
  __int128 v259; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR v260; // [rsp+A8h] [rbp-58h]
  ULONG_PTR *v261; // [rsp+B0h] [rbp-50h]
  char *v262; // [rsp+B8h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v264[2]; // [rsp+F0h] [rbp-10h] BYREF

  v255 = a5;
  v8 = a2;
  v9 = BugCheckParameter4;
  v261 = a6;
  v262 = a7;
  *(_QWORD *)&v259 = a8;
  v258 = a4;
  v249 = a3;
  v250 = a2;
  v260 = BugCheckParameter4;
  v257 = BugCheckParameter4;
  v245 = 0;
  while ( 2 )
  {
    v10 = *(_QWORD *)(v9 + 32);
    v11 = 0;
    v244 = 0;
    v243 = 0;
    v12 = _InterlockedIncrement64((volatile signed __int64 *)v9);
    if ( !v12 )
      KeBugCheckEx(0x51u, 0x24uLL, v9, 0LL, 0LL);
    if ( v12 == 1 )
      goto LABEL_4;
    v13 = *(_DWORD *)(v9 + 16);
    v14 = v9;
    BugCheckParameter2 = v9;
    v15 = v8;
    while ( 2 )
    {
      v248 = v15;
      if ( v15 >= a3 )
        goto LABEL_49;
      if ( v15 >= 8 )
      {
        v17 = *(_QWORD *)(a4 + 160) + 16 * (v15 - 8 + 6LL);
        v16 = *(_DWORD *)(*(_QWORD *)(a4 + 160) + 4LL * (v15 - 8));
      }
      else
      {
        v16 = *(_DWORD *)(a4 + 4LL * v15);
        v17 = a4 + 16 * (v15 + 2LL);
      }
      v13 = v16 + 37 * v13;
      v18 = (101027 * (v13 ^ (v13 >> 9))) ^ ((101027 * (v13 ^ (v13 >> 9))) >> 9);
      v19 = (signed __int64 *)(*(_QWORD *)(v10 + 1648) + 24LL * (v18 & (*(_DWORD *)(v10 + 1656) - 1)));
      v21 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v19, 0LL, 0LL, (struct _KLOCK_ENTRIES *)a4);
      if ( _InterlockedCompareExchange64(v19, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v19, 0, v21, (struct _KTHREAD *)v19);
      if ( v21 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v21, v20);
        else
          *((_BYTE *)v21 + 10) = 1;
      }
      _m_prefetchw((const void *)(v10 + 4240));
      v22 = *(_DWORD *)(v10 + 4240);
      do
      {
        if ( !v22 )
          KeBugCheckEx(0x51u, 0x17uLL, v10, 9uLL, v13);
        v23 = v22;
        v22 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 4240), v22 + 1, v22);
      }
      while ( v23 != v22 );
      for ( i = *(_QWORD *)(*(_QWORD *)(v10 + 1648) + 24LL * (v18 & (*(_DWORD *)(v10 + 1656) - 1)) + 16);
            ;
            i = *(_QWORD *)(i + 8) )
      {
        if ( !i )
          goto LABEL_30;
        if ( *(_DWORD *)i == v13 )
        {
          v25 = i - 16;
          if ( *(_QWORD *)(i + 56) == v14 )
            break;
        }
LABEL_28:
        ;
      }
      v26 = *(_QWORD *)(v25 + 80);
      v27 = *(WCHAR **)(v17 + 8);
      v28 = *(_WORD *)v17 >> 1;
      v29 = (__int16 *)(v26 + 26);
      if ( (*(_DWORD *)(v26 + 12) & 1) != 0 )
      {
        for ( j = *(_WORD *)(v26 + 24); ; --j )
        {
          v246 = j;
          if ( !v28 || !j )
            break;
          v50 = *v27++;
          v51 = *(unsigned __int8 *)v29;
          v29 = (__int16 *)((char *)v29 + 1);
          v252 = v27;
          v256 = v29;
          if ( v50 != v51 )
          {
            if ( v50 >= 0x61u )
            {
              if ( v50 > 0x7Au )
              {
                v50 = RtlUpcaseUnicodeChar(v50);
                v27 = v252;
                j = v246;
                v29 = v256;
              }
              else
              {
                v50 -= 32;
              }
            }
            if ( v50 != v51 )
              goto LABEL_27;
          }
          --v28;
        }
        v31 = v28 == j;
      }
      else
      {
        for ( k = *(_WORD *)(v26 + 24) >> 1; v28 && k; --k )
        {
          v71 = *v29++;
          v72 = *v27++;
          v253 = v27;
          v247 = v71;
          v256 = v29;
          if ( v72 != v71 )
          {
            if ( v72 >= 0x61u )
            {
              if ( v72 > 0x7Au )
              {
                v72 = RtlUpcaseUnicodeChar(v72);
                v29 = v256;
                v27 = v253;
                v71 = v247;
              }
              else
              {
                v72 -= 32;
              }
            }
            if ( v72 != v71 )
              goto LABEL_27;
          }
          --v28;
        }
        v31 = v28 == k;
      }
      if ( !v31 )
      {
LABEL_27:
        v14 = BugCheckParameter2;
        goto LABEL_28;
      }
      if ( i != 16 )
      {
        v52 = *(_QWORD *)v25;
        while ( v52 )
        {
          if ( v52 == -1 )
            goto LABEL_112;
          v53 = v52;
          v52 = _InterlockedCompareExchange64((volatile signed __int64 *)v25, v52 + 1, v52);
          if ( v53 == v52 )
            goto LABEL_67;
        }
        CmpLockKcbShared(i - 16);
        if ( (*(_DWORD *)(v25 + 8) & 0x80000) != 0 )
          KeBugCheckEx(0x51u, 0x20uLL, i - 16, 0LL, 0LL);
        if ( !_InterlockedIncrement64((volatile signed __int64 *)v25) )
LABEL_112:
          KeBugCheckEx(0x51u, 0x24uLL, i - 16, 0LL, 0LL);
        if ( (*(_BYTE *)(v25 + 64) & 2) != 0 )
          CmpRemoveFromDelayedClose(i - 16);
        CmpUnlockKcb(i - 16);
LABEL_67:
        a3 = v249;
        v54 = v248;
        if ( v248 == v249 - 1 )
        {
          v243 = 1;
          goto LABEL_87;
        }
        v55 = (__int64 *)(*(_QWORD *)(v10 + 1648)
                        + 24
                        * ((unsigned int)(*(_DWORD *)(v10 + 1656) - 1) & ((101027 * (v13 ^ (v13 >> 9))) ^ ((unsigned __int64)(101027 * (v13 ^ (v13 >> 9))) >> 9))));
        v55[1] = 0LL;
        _m_prefetchw(v55);
        v56 = *v55;
        v57 = *v55 - 16;
        if ( (*v55 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v57 = 0LL;
        if ( (v56 & 2) != 0 || (v58 = *v55, v58 != _InterlockedCompareExchange64(v55, v57, v56)) )
          ExfReleasePushLock(v55);
        KeAbPostRelease((unsigned __int64)v55);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 4240), 0xFFFFFFFF) != 1 )
          goto LABEL_86;
        v61 = v10 + 1608;
        if ( *(_QWORD *)v61 == v61 )
          goto LABEL_77;
        CmpLockHiveListExclusive(v60, v59);
        v63 = *(_QWORD *)v61;
        if ( *(_QWORD *)(*(_QWORD *)v61 + 8LL) != v61 )
          goto LABEL_92;
        v64 = *(_QWORD **)(v10 + 1616);
        if ( *v64 != v61 )
          goto LABEL_92;
        *v64 = v63;
        *(_QWORD *)(v63 + 8) = v64;
        CmpUnlockHiveList(v63, v62);
LABEL_77:
        *(_DWORD *)v10 = -1160724768;
        HvFreeDirtyData(v10);
        CmpDeleteKcbCache(v10);
        v65 = *(void **)(v10 + 1856);
        if ( v65 )
          ExFreePoolWithTag(v65, 0x624E4D43u);
        v66 = *(void **)(v10 + 1840);
        if ( v66 )
          ExFreePoolWithTag(v66, 0x20204D43u);
        v67 = *(void **)(v10 + 1872);
        if ( v67 )
          ExFreePoolWithTag(v67, 0);
        v68 = *(void **)(v10 + 4824);
        if ( v68 )
          ExFreePoolWithTag(v68, 0);
        CmpReleaseGlobalQuota(4832LL);
        ExFreePoolWithTag((PVOID)v10, 0);
LABEL_86:
        a3 = v249;
        v54 = v248;
LABEL_87:
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
LABEL_88:
          KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
        v14 = v25;
        v11 = v244 + 1;
        BugCheckParameter2 = v25;
        ++v244;
        if ( (*(_DWORD *)(v25 + 184) & 0x100000) != 0 )
          goto LABEL_49;
        a4 = v258;
        v15 = v54 + 1;
        continue;
      }
      break;
    }
    v14 = BugCheckParameter2;
LABEL_30:
    v32 = (__int64 *)(*(_QWORD *)(v10 + 1648)
                    + 24
                    * ((unsigned int)(*(_DWORD *)(v10 + 1656) - 1) & ((101027 * (v13 ^ (v13 >> 9))) ^ ((unsigned __int64)(101027 * (v13 ^ (v13 >> 9))) >> 9))));
    v32[1] = 0LL;
    _m_prefetchw(v32);
    v33 = *v32;
    v34 = *v32 - 16;
    if ( (*v32 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v34 = 0LL;
    if ( (v33 & 2) != 0 || (v35 = *v32, v35 != _InterlockedCompareExchange64(v32, v34, v33)) )
      ExfReleasePushLock(v32);
    KeAbPostRelease((unsigned __int64)v32);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 4240), 0xFFFFFFFF) != 1 )
      goto LABEL_48;
    v38 = v10 + 1608;
    if ( *(_QWORD *)v38 == v38 )
      goto LABEL_39;
    CmpLockHiveListExclusive(v37, v36);
    v40 = *(_QWORD *)v38;
    if ( *(_QWORD *)(*(_QWORD *)v38 + 8LL) != v38 )
      goto LABEL_92;
    v41 = *(_QWORD **)(v10 + 1616);
    if ( *v41 != v38 )
      goto LABEL_92;
    *v41 = v40;
    *(_QWORD *)(v40 + 8) = v41;
    CmpUnlockHiveList(v40, v39);
LABEL_39:
    *(_DWORD *)v10 = -1160724768;
    HvFreeDirtyData(v10);
    CmpDeleteKcbCache(v10);
    v42 = *(void **)(v10 + 1856);
    if ( v42 )
      ExFreePoolWithTag(v42, 0x624E4D43u);
    v43 = *(void **)(v10 + 1840);
    if ( v43 )
      ExFreePoolWithTag(v43, 0x20204D43u);
    v44 = *(void **)(v10 + 1872);
    if ( v44 )
      ExFreePoolWithTag(v44, 0);
    v45 = *(void **)(v10 + 4824);
    if ( v45 )
      ExFreePoolWithTag(v45, 0);
    CmpReleaseGlobalQuota(4832LL);
    ExFreePoolWithTag((PVOID)v10, 0);
LABEL_48:
    v11 = v244;
LABEL_49:
    if ( v257 != v260 && _InterlockedExchangeAdd64((volatile signed __int64 *)v257, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      goto LABEL_88;
    v46 = v11 + v245;
    v250 += v11;
    v245 += v11;
    if ( (*(_DWORD *)(v14 + 184) & 0x20000) == 0 )
    {
      v47 = v243;
      goto LABEL_53;
    }
    CmpLockKcbShared(v14);
    if ( (*(_DWORD *)(v14 + 184) & 0x20000) == 0 )
    {
      v47 = v243;
      goto LABEL_276;
    }
    v9 = *(_QWORD *)(v14 + 104);
    v257 = v9;
    v73 = _InterlockedIncrement64((volatile signed __int64 *)v9);
    if ( !v73 )
      KeBugCheckEx(0x51u, 0x24uLL, v9, 0LL, 0LL);
    if ( v73 == 1 )
LABEL_4:
      KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
    v74 = *(_QWORD *)(v9 + 32);
    if ( (*(_DWORD *)(v74 + 160) & 0x20) != 0 && *(struct _KTHREAD **)(v74 + 4176) != KeGetCurrentThread() )
    {
      v48 = -1073741772;
      v167 = (_DWORD *)v255;
      if ( LOBYTE(WheapPfaLock.StackLimit)
        && WheapPfaLock.StackBase != KeGetCurrentThread()
        && v255
        && (ComponentNameAtIndex = CmpGetComponentNameAtIndex(v258, v250 - 1),
            (unsigned __int8)CmpWaitForHiveMount(ComponentNameAtIndex)) )
      {
        *v167 |= 0x100u;
        v48 = 259;
        v169 = 393984;
      }
      else
      {
        v169 = 394240;
      }
LABEL_286:
      CmpRecordParseFailure((__int64)v167, v169, v48);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        goto LABEL_88;
      CmpUnlockKcb(v14);
      v170 = 0LL;
      if ( v243 )
      {
        v171 = *(volatile signed __int32 **)(v14 + 32);
        *(_QWORD *)(*((_QWORD *)v171 + 206)
                  + 24
                  * ((unsigned int)(*((_DWORD *)v171 + 414) - 1) & ((unsigned int)(101027
                                                                                 * (*(_DWORD *)(v14 + 16) ^ (*(_DWORD *)(v14 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v14 + 16) ^ (*(_DWORD *)(v14 + 16) >> 9))) >> 9)))
                  + 8) = 0LL;
        v172 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v14 + 32) + 1648LL)
                         + 24
                         * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v14 + 32) + 1656LL) - 1) & ((unsigned int)(101027 * (*(_DWORD *)(v14 + 16) ^ (*(_DWORD *)(v14 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v14 + 16) ^ (*(_DWORD *)(v14 + 16) >> 9))) >> 9))));
        _m_prefetchw(v172);
        v173 = *v172;
        v174 = *v172 - 16;
        if ( (*v172 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v174 = 0LL;
        if ( (v173 & 2) != 0 || (v175 = *v172, v175 != _InterlockedCompareExchange64(v172, v174, v173)) )
          ExfReleasePushLock(v172);
        KeAbPostRelease((unsigned __int64)v172);
        if ( _InterlockedExchangeAdd(v171 + 1060, 0xFFFFFFFF) == 1 )
        {
          v178 = v171 + 402;
          if ( *(volatile signed __int32 **)v178 != v178 )
          {
            CmpLockHiveListExclusive(v177, v176);
            v180 = *(_QWORD *)v178;
            if ( *(volatile signed __int32 **)(*(_QWORD *)v178 + 8LL) != v178 )
              goto LABEL_92;
            v181 = (volatile signed __int32 **)*((_QWORD *)v171 + 202);
            if ( *v181 != v178 )
              goto LABEL_92;
            *v181 = (volatile signed __int32 *)v180;
            *(_QWORD *)(v180 + 8) = v181;
            CmpUnlockHiveList(v180, v179);
          }
          *v171 = -1160724768;
          HvFreeDirtyData(v171);
          CmpDeleteKcbCache(v171);
          v182 = (void *)*((_QWORD *)v171 + 232);
          if ( v182 )
            ExFreePoolWithTag(v182, 0x624E4D43u);
          v183 = (void *)*((_QWORD *)v171 + 230);
          if ( v183 )
            ExFreePoolWithTag(v183, 0x20204D43u);
          v184 = (void *)*((_QWORD *)v171 + 234);
          if ( v184 )
            ExFreePoolWithTag(v184, 0);
          v185 = (void *)*((_QWORD *)v171 + 603);
          if ( v185 )
            ExFreePoolWithTag(v185, 0);
          CmpReleaseGlobalQuota(4832LL);
          ExFreePoolWithTag((PVOID)v171, 0);
        }
      }
      v259 = 0LL;
      CmpInitializeDelayDerefContext(&v259);
      v186 = *(_QWORD *)(v14 + 32);
      v187 = *(struct _KLOCK_ENTRIES **)v14;
      while ( 1 )
      {
        v188 = v187;
        if ( (unsigned __int64)v187 <= 1 )
          break;
        v189 = (unsigned __int64)&v187[-1].Entries[0].BoostBitmap.2 + 7;
        v190 = v187 == (struct _KLOCK_ENTRIES *)3
            && (*(_DWORD *)(v14 + 184) & 0x40000) != 0
            && *(_BYTE *)(v186 + 2952) == 1;
        v191 = _InterlockedCompareExchange64((volatile signed __int64 *)v14, v189, (signed __int64)v187);
        v187 = (struct _KLOCK_ENTRIES *)v191;
        if ( (struct _KLOCK_ENTRIES *)v191 == v188 )
        {
          if ( v191 < v189 )
            KeBugCheckEx(0x51u, 0x25uLL, v14, 0LL, 0LL);
          if ( v190 )
          {
            CmLockHive(v186);
            *(_DWORD *)(v186
                      + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v186 + 4244), 1u) & 0x7F)
                      + 4248) = 19;
            if ( **(_QWORD **)(v186 + 2944) == 2LL )
            {
              *(_DWORD *)(v186
                        + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v186 + 4244), 1u) & 0x7F)
                        + 4248) = 20;
              if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v186 + 4808), 1, 0) )
              {
                *(_DWORD *)(v186
                          + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v186 + 4244), 1u) & 0x7F)
                          + 4248) = 21;
                CmpReferenceHive(v186);
                ExQueueWorkItem(*(PWORK_QUEUE_ITEM *)(v186 + 4824), v232);
              }
            }
            CmUnlockHive(v186);
          }
          return v48;
        }
      }
      v192 = *(_DWORD *)(v14 + 16);
      v193 = *(volatile signed __int32 **)(v14 + 32);
      v194 = (unsigned __int64 *)(*((_QWORD *)v193 + 206)
                                + 24
                                * ((unsigned int)(*((_DWORD *)v193 + 414) - 1) & ((101027 * (v192 ^ (v192 >> 9))) ^ ((unsigned __int64)(101027 * (v192 ^ (v192 >> 9))) >> 9))));
      v195 = (AutoBoost *)KeAbPreAcquire((__int64)v194, 0LL, 0LL, v187);
      v198 = v195;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v194, 0LL) )
        ExfAcquirePushLockExclusiveEx(v194, v195, (__int64)v194);
      if ( v198 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v198, v196);
        else
          *((_BYTE *)v198 + 10) = 1;
      }
      v194[1] = (unsigned __int64)KeGetCurrentThread();
      _m_prefetchw((const void *)(v193 + 1060));
      v199 = *((_DWORD *)v193 + 1060);
      do
      {
        if ( !v199 )
          KeBugCheckEx(0x51u, 0x17uLL, (ULONG_PTR)v193, 8uLL, v14);
        v200 = v199;
        v199 = _InterlockedCompareExchange(v193 + 1060, v199 + 1, v199);
      }
      while ( v200 != v199 );
      v201 = (AutoBoost *)KeAbPreAcquire(v14 + 48, 0LL, 0LL, v197);
      v205 = v201;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 48), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v14 + 48), v201, v14 + 48);
      if ( v205 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v205, v202);
        else
          *((_BYTE *)v205 + 10) = 1;
      }
      *(_QWORD *)(v14 + 56) = KeGetCurrentThread();
      v206 = *(_QWORD *)(v14 + 192);
      if ( v206 )
      {
        v230 = *(_QWORD *)(v206 + 24);
        if ( v230 )
        {
          v170 = *(_QWORD *)(v230 + 16);
          CmpUnlockKcb(v14);
          CmpLockKcbExclusive(v170);
          CmpLockKcbExclusive(v14);
        }
      }
      v207 = *(_QWORD *)(v14 + 32);
      v208 = _InterlockedDecrement64((volatile signed __int64 *)v14);
      if ( v208 == 2 )
      {
        if ( (*(_DWORD *)(v14 + 184) & 0x40000) != 0 && *(_BYTE *)(v207 + 2952) == 1 )
          CmpDoQueueLateUnloadWorker(v207);
      }
      else if ( !v208 )
      {
        if ( (*(_DWORD *)(v14 + 184) & 0x40000) != 0 )
        {
          v231 = *(_QWORD *)(v14 + 32);
          CmpCleanUpKcbCacheWithLock(v14, (__int64)&v259, v203, v204);
          *(_QWORD *)(v231 + 4184) = KeGetCurrentThread();
          *(_DWORD *)(v231 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v231 + 4244), 1u) & 0x7F) + 4248) = 31;
          if ( (*(_DWORD *)(v231 + 160) & 0x20) == 0 )
            CmpDereferenceHive((char *)v231);
        }
        else
        {
          v209 = *(_DWORD *)(v14 + 8);
          v210 = 0;
          if ( (v209 & 0x20) == 0 )
            v210 = (v209 & 0x20000) == 0;
          if ( (!CmpHoldLazyFlush || (*(_DWORD *)(v14 + 184) & 0x100000) != 0 || (*(_DWORD *)(v14 + 8) & 8) != 0)
            && v210 )
          {
            v212 = (struct _KLOCK_ENTRY *)KeAbPreAcquire((__int64)&CmpKeyLockTracker.StateSaveArea, 0LL, 0LL, v204);
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql != 1 )
              __writecr8(1uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v211) = 1;
              KiRaiseIrqlProcessIrqlFlags(CurrentIrql, (int)v211);
            }
            if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpKeyLockTracker.StateSaveArea, 0) )
              ExpAcquireFastMutexContended((struct _KTHREAD *)&CmpKeyLockTracker.StateSaveArea, v212);
            if ( v212 )
            {
              if ( (KiAbpGlobalState & 1) != 0 )
                AutoBoost::KiAbpPostAcquire((AutoBoost *)v212, v211);
              else
                v212->AcquiredByte = 1;
            }
            CmpKeyLockTracker.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)KeGetCurrentThread();
            LODWORD(CmpKeyLockTracker.TrapFrame) = CurrentIrql;
            v214 = (unsigned __int64 *)(v14 + 224);
            if ( (unsigned __int64 *)*v214 != v214 )
              KeBugCheckEx(0x51u, 0x34uLL, v14, 0LL, 0LL);
            ThreadLock = CmpKeyLockTracker.ThreadLock;
            if ( *(struct _KTHREAD **)(CmpKeyLockTracker.ThreadLock + 8) != (struct _KTHREAD *)&CmpKeyLockTracker.ThreadLock )
              goto LABEL_92;
            *(_QWORD *)(v14 + 232) = &CmpKeyLockTracker.ThreadLock;
            *v214 = ThreadLock;
            *(_QWORD *)(ThreadLock + 8) = v214;
            CmpKeyLockTracker.ThreadLock = v14 + 224;
            Flink_high = HIDWORD(WheapPfaLock.Timer.Header.WaitListHead.Flink);
            *(_BYTE *)(v14 + 64) |= 2u;
            ++KiSystemServiceTraceCallbackLock.KernelShadowStackBase;
            HIDWORD(WheapPfaLock.Timer.Header.WaitListHead.Flink) = Flink_high + 1;
            if ( Flink_high + 1 <= (unsigned int)CmpDelayedCloseSize )
            {
              KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpKeyLockTracker.StateSaveArea);
            }
            else
            {
              KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpKeyLockTracker.StateSaveArea);
              CmpArmDelayedCloseTimer();
            }
          }
          else
          {
            CmpCleanUpKcbCacheWithLock(v14, (__int64)&v259, v203, v204);
            if ( *(struct _KTHREAD **)(v14 + 56) != KeGetCurrentThread() )
              CmpDecommisssionKcb(v14);
          }
        }
      }
      CmpUnlockKcb(v14);
      if ( v170 )
        CmpUnlockKcb(v170);
      v216 = (__int64 *)(*((_QWORD *)v193 + 206)
                       + 24
                       * ((unsigned int)(*((_DWORD *)v193 + 414) - 1) & ((101027 * (v192 ^ (v192 >> 9))) ^ ((unsigned __int64)(101027 * (v192 ^ (v192 >> 9))) >> 9))));
      v216[1] = 0LL;
      _m_prefetchw(v216);
      v217 = *v216;
      v218 = *v216 - 16;
      if ( (*v216 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v218 = 0LL;
      if ( (v217 & 2) != 0 || (v219 = *v216, v219 != _InterlockedCompareExchange64(v216, v218, v217)) )
        ExfReleasePushLock(v216);
      KeAbPostRelease((unsigned __int64)v216);
      if ( _InterlockedExchangeAdd(v193 + 1060, 0xFFFFFFFF) == 1 )
      {
        v222 = v193 + 402;
        if ( *(volatile signed __int32 **)v222 != v222 )
        {
          CmpLockHiveListExclusive(v221, v220);
          v224 = *(_QWORD *)v222;
          if ( *(volatile signed __int32 **)(*(_QWORD *)v222 + 8LL) != v222 )
            goto LABEL_92;
          v225 = (volatile signed __int32 **)*((_QWORD *)v193 + 202);
          if ( *v225 != v222 )
            goto LABEL_92;
          *v225 = (volatile signed __int32 *)v224;
          *(_QWORD *)(v224 + 8) = v225;
          CmpUnlockHiveList(v224, v223);
        }
        *v193 = -1160724768;
        HvFreeDirtyData(v193);
        CmpDeleteKcbCache(v193);
        v226 = (void *)*((_QWORD *)v193 + 232);
        if ( v226 )
          ExFreePoolWithTag(v226, 0x624E4D43u);
        v227 = (void *)*((_QWORD *)v193 + 230);
        if ( v227 )
          ExFreePoolWithTag(v227, 0x20204D43u);
        v228 = (void *)*((_QWORD *)v193 + 234);
        if ( v228 )
          ExFreePoolWithTag(v228, 0);
        v229 = (void *)*((_QWORD *)v193 + 603);
        if ( v229 )
          ExFreePoolWithTag(v229, 0);
        CmpReleaseGlobalQuota(4832LL);
        ExFreePoolWithTag((PVOID)v193, 0);
      }
      CmpDrainDelayDerefContext((_QWORD **)&v259);
      return v48;
    }
    if ( (*(_DWORD *)(v9 + 8) & 0x40000) != 0 )
    {
      v167 = (_DWORD *)v255;
      v48 = -1073740763;
      v169 = 394496;
      goto LABEL_286;
    }
    CmpUnlockKcb(v14);
    v47 = v243;
    if ( !v243 )
      goto LABEL_145;
    v75 = *(char **)(v14 + 32);
    *(_QWORD *)(*((_QWORD *)v75 + 206)
              + 24
              * ((unsigned int)(*((_DWORD *)v75 + 414) - 1) & ((unsigned int)(101027
                                                                            * (*(_DWORD *)(v14 + 16) ^ (*(_DWORD *)(v14 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v14 + 16) ^ (*(_DWORD *)(v14 + 16) >> 9))) >> 9)))
              + 8) = 0LL;
    v76 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v14 + 32) + 1648LL)
                    + 24
                    * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v14 + 32) + 1656LL) - 1) & ((unsigned int)(101027 * (*(_DWORD *)(v14 + 16) ^ (*(_DWORD *)(v14 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v14 + 16) ^ (*(_DWORD *)(v14 + 16) >> 9))) >> 9))));
    _m_prefetchw(v76);
    v77 = *v76;
    v78 = *v76 - 16;
    if ( (*v76 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v78 = 0LL;
    if ( (v77 & 2) != 0 || (v79 = *v76, v79 != _InterlockedCompareExchange64(v76, v78, v77)) )
      ExfReleasePushLock(v76);
    KeAbPostRelease((unsigned __int64)v76);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v75 + 1060, 0xFFFFFFFF) != 1 )
      goto LABEL_145;
    v82 = v75 + 1608;
    if ( *(char **)v82 == v82 )
      goto LABEL_136;
    CmpLockHiveListExclusive(v81, v80);
    v84 = *(_QWORD *)v82;
    if ( *(char **)(*(_QWORD *)v82 + 8LL) != v82 )
      goto LABEL_92;
    v85 = (char **)*((_QWORD *)v75 + 202);
    if ( *v85 != v82 )
      goto LABEL_92;
    *v85 = (char *)v84;
    *(_QWORD *)(v84 + 8) = v85;
    CmpUnlockHiveList(v85, v83);
LABEL_136:
    *(_DWORD *)v75 = -1160724768;
    HvFreeDirtyData(v75);
    CmpDeleteKcbCache(v75);
    v86 = (void *)*((_QWORD *)v75 + 232);
    if ( v86 )
      ExFreePoolWithTag(v86, 0x624E4D43u);
    v87 = (void *)*((_QWORD *)v75 + 230);
    if ( v87 )
      ExFreePoolWithTag(v87, 0x20204D43u);
    v88 = (void *)*((_QWORD *)v75 + 234);
    if ( v88 )
      ExFreePoolWithTag(v88, 0);
    v89 = (void *)*((_QWORD *)v75 + 603);
    if ( v89 )
      ExFreePoolWithTag(v89, 0);
    CmpReleaseGlobalQuota(4832LL);
    ExFreePoolWithTag(v75, 0);
LABEL_145:
    v254 = 0LL;
    CmpInitializeDelayDerefContext(&v254);
    v91 = *(_QWORD *)(v14 + 32);
    v92 = *(_QWORD *)v14;
    while ( 1 )
    {
      v93 = v92;
      if ( v92 <= 1 )
        break;
      v94 = v92 - 1;
      LOBYTE(v90) = v92 == 3 && (*(_DWORD *)(v14 + 184) & 0x40000) != 0 && *(_BYTE *)(v91 + 2952) == 1;
      v95 = _InterlockedCompareExchange64((volatile signed __int64 *)v14, v94, v92);
      v92 = v95;
      if ( v95 == v93 )
      {
        if ( v95 < v94 )
          KeBugCheckEx(0x51u, 0x25uLL, v14, 0LL, 0LL);
        if ( (_BYTE)v90 )
        {
          CmLockHive(v91);
          *(_DWORD *)(v91 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v91 + 4244), 1u) & 0x7F) + 4248) = 19;
          if ( **(_QWORD **)(v91 + 2944) == 2LL )
          {
            *(_DWORD *)(v91 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v91 + 4244), 1u) & 0x7F) + 4248) = 20;
            if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v91 + 4808), 1, 0) )
            {
              *(_DWORD *)(v91
                        + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v91 + 4244), 1u) & 0x7F)
                        + 4248) = 21;
              CmpReferenceHive(v91);
              ExQueueWorkItem(*(PWORK_QUEUE_ITEM *)(v91 + 4824), DelayedWorkQueue);
            }
          }
          CmUnlockHive(v91);
        }
        goto LABEL_272;
      }
    }
    v96 = *(_DWORD *)(v14 + 16);
    v97 = *(_DWORD **)(v14 + 32);
    v98 = (unsigned __int64 *)(*((_QWORD *)v97 + 206)
                             + 24
                             * ((unsigned int)(v97[414] - 1) & ((101027 * (v96 ^ (v96 >> 9))) ^ ((unsigned __int64)(101027 * (v96 ^ (v96 >> 9))) >> 9))));
    v99 = (AutoBoost *)KeAbPreAcquire((__int64)v98, 0LL, 0LL, v90);
    v102 = v99;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v98, 0LL) )
      ExfAcquirePushLockExclusiveEx(v98, v99, (__int64)v98);
    if ( v102 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v102, v100);
      else
        *((_BYTE *)v102 + 10) = 1;
    }
    v98[1] = (unsigned __int64)KeGetCurrentThread();
    _m_prefetchw(v97 + 1060);
    v103 = v97[1060];
    do
    {
      if ( !v103 )
        KeBugCheckEx(0x51u, 0x17uLL, (ULONG_PTR)v97, 8uLL, v14);
      v104 = v103;
      v103 = _InterlockedCompareExchange(v97 + 1060, v103 + 1, v103);
    }
    while ( v104 != v103 );
    v105 = (AutoBoost *)KeAbPreAcquire(v14 + 48, 0LL, 0LL, v101);
    v108 = v105;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 48), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v14 + 48), v105, v14 + 48);
    if ( v108 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v108, v106);
      else
        *((_BYTE *)v108 + 10) = 1;
    }
    v109 = 0LL;
    *(_QWORD *)(v14 + 56) = KeGetCurrentThread();
    v110 = 0LL;
    v111 = *(_QWORD *)(BugCheckParameter2 + 192);
    if ( v111 )
    {
      v139 = *(_QWORD *)(v111 + 24);
      if ( v139 )
      {
        v110 = *(_QWORD *)(v139 + 16);
        CmpUnlockKcb(BugCheckParameter2);
        v141 = (AutoBoost *)KeAbPreAcquire(v110 + 48, 0LL, 0LL, v140);
        v144 = v141;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v110 + 48), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v110 + 48), v141, v110 + 48);
        if ( v144 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v144, v142);
          else
            *((_BYTE *)v144 + 10) = 1;
        }
        *(_QWORD *)(v110 + 56) = KeGetCurrentThread();
        v145 = (AutoBoost *)KeAbPreAcquire(BugCheckParameter2 + 48, 0LL, 0LL, v143);
        v147 = v145;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 48), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter2 + 48), v145, BugCheckParameter2 + 48);
        if ( v147 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v147, v146);
          else
            *((_BYTE *)v147 + 10) = 1;
        }
        v109 = 0LL;
        *(_QWORD *)(BugCheckParameter2 + 56) = KeGetCurrentThread();
      }
    }
    v112 = *(_QWORD *)(BugCheckParameter2 + 32);
    v113 = _InterlockedDecrement64((volatile signed __int64 *)BugCheckParameter2);
    if ( v113 == 2 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 && *(_BYTE *)(v112 + 2952) == 1 )
        CmpDoQueueLateUnloadWorker(v112);
      goto LABEL_246;
    }
    if ( v113 )
      goto LABEL_246;
    if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 )
    {
      v151 = *(_QWORD *)(BugCheckParameter2 + 32);
      CmpCleanUpKcbCacheWithLock(BugCheckParameter2, (__int64)&v254, 0LL, v107);
      *(_QWORD *)(v151 + 4184) = KeGetCurrentThread();
      *(_DWORD *)(v151 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v151 + 4244), 1u) & 0x7F) + 4248) = 31;
      if ( (*(_DWORD *)(v151 + 160) & 0x20) == 0 )
        CmpDereferenceHive((char *)v151);
      goto LABEL_246;
    }
    v114 = 0LL;
    v115 = *(_DWORD *)(BugCheckParameter2 + 8);
    if ( (v115 & 0x20) == 0 )
      v114 = (v115 & 0x20000) == 0;
    if ( (!CmpHoldLazyFlush
       || (*(_DWORD *)(BugCheckParameter2 + 184) & 0x100000) != 0
       || (*(_DWORD *)(BugCheckParameter2 + 8) & 8) != 0)
      && v114 )
    {
      v117 = (struct _KLOCK_ENTRY *)KeAbPreAcquire((__int64)&CmpKeyLockTracker.StateSaveArea, 0LL, 0LL, v107);
      v118 = KeGetCurrentIrql();
      if ( v118 != 1 )
        __writecr8(1uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v116) = 1;
        KiRaiseIrqlProcessIrqlFlags(v118, (int)v116);
      }
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpKeyLockTracker.StateSaveArea, 0) )
        ExpAcquireFastMutexContended((struct _KTHREAD *)&CmpKeyLockTracker.StateSaveArea, v117);
      if ( v117 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire((AutoBoost *)v117, v116);
        else
          v117->AcquiredByte = 1;
      }
      CmpKeyLockTracker.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)KeGetCurrentThread();
      LODWORD(CmpKeyLockTracker.TrapFrame) = v118;
      v119 = (unsigned __int64 *)(BugCheckParameter2 + 224);
      if ( (unsigned __int64 *)*v119 != v119 )
        KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter2, 0LL, 0LL);
      v69 = CmpKeyLockTracker.ThreadLock;
      if ( *(struct _KTHREAD **)(CmpKeyLockTracker.ThreadLock + 8) == (struct _KTHREAD *)&CmpKeyLockTracker.ThreadLock )
      {
        *v119 = CmpKeyLockTracker.ThreadLock;
        *(_QWORD *)(BugCheckParameter2 + 232) = &CmpKeyLockTracker.ThreadLock;
        *(_QWORD *)(v69 + 8) = v119;
        CmpKeyLockTracker.ThreadLock = BugCheckParameter2 + 224;
        v152 = HIDWORD(WheapPfaLock.Timer.Header.WaitListHead.Flink);
        *(_BYTE *)(BugCheckParameter2 + 64) |= 2u;
        ++KiSystemServiceTraceCallbackLock.KernelShadowStackBase;
        HIDWORD(WheapPfaLock.Timer.Header.WaitListHead.Flink) = v152 + 1;
        if ( v152 + 1 <= (unsigned int)CmpDelayedCloseSize )
        {
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpKeyLockTracker.StateSaveArea);
        }
        else
        {
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpKeyLockTracker.StateSaveArea);
          CmpArmDelayedCloseTimer();
        }
        goto LABEL_246;
      }
      goto LABEL_92;
    }
    v120 = 0LL;
    if ( *(_QWORD *)BugCheckParameter2 )
      goto LABEL_418;
    if ( CmpTraceRoutine )
    {
      memset(v264, 0, sizeof(v264));
      memset(&ApcState, 0, sizeof(ApcState));
      CmpAttachToRegistryProcess(&ApcState);
      v123 = (void *)CmpConstructName(BugCheckParameter2, v121);
      if ( v123 )
      {
        LOBYTE(v122) = 23;
        guard_dispatch_icall_no_overrides(v122, (__int64)v264);
        CmpFreeTransientPoolWithTag(v123, 0x624E4D43u);
      }
      CmpDetachFromRegistryProcess(&ApcState);
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x400000) == 0 && (*(_BYTE *)(BugCheckParameter2 + 8) & 8) != 0 )
    {
      CmpDelayDerefKeyControlBlock(*(_QWORD *)(BugCheckParameter2 + 104), (__int64)&v254);
      *(_WORD *)(BugCheckParameter2 + 8) &= ~8u;
      *(_QWORD *)(BugCheckParameter2 + 104) = 0LL;
    }
    CmpDereferenceNameControlBlockWithLock(*(_DWORD **)(BugCheckParameter2 + 80), v114, v109);
    if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 4) != 0 )
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter2 + 112), 0x6E494D43u);
    v127 = *(_QWORD **)(BugCheckParameter2 + 192);
    if ( v127 )
    {
      v148 = v127[3];
      if ( v148 )
      {
        v149 = *v127;
        v120 = *(_QWORD *)(v148 + 16);
        if ( *(_QWORD **)(*v127 + 8LL) != v127 )
          goto LABEL_92;
        v150 = (_QWORD *)v127[1];
        if ( (_QWORD *)*v150 != v127 )
          goto LABEL_92;
        *v150 = v149;
        *(_QWORD *)(v149 + 8) = v150;
      }
      ExFreePoolWithTag(v127, 0);
      *(_QWORD *)(BugCheckParameter2 + 192) = 0LL;
    }
    v128 = (_DWORD *)(BugCheckParameter2 + 16);
    v129 = *(_QWORD *)(BugCheckParameter2 + 72);
    if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x20000) != 0 )
    {
      CmpLockDeletedHashEntryExclusiveByKcb(BugCheckParameter2, v124, v125, v126);
      CmpRemoveKeyHashFromDeletedKcbTable(*(_QWORD *)(BugCheckParameter2 + 32), BugCheckParameter2 + 16);
      CmpUnlockDeletedHashEntryByKcb(BugCheckParameter2);
    }
    else
    {
      for ( m = (__int64 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 32) + 1648LL)
                          + 8
                          * (3
                           * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 32) + 1656LL) - 1) & ((unsigned int)(101027 * (*v128 ^ (*v128 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*v128 ^ (*v128 >> 9))) >> 9)))
                           + 2)); m; m = (__int64 *)(v131 + 8) )
      {
        v131 = *m;
        if ( !*m )
          break;
        if ( (_DWORD *)v131 == v128 )
        {
          *m = *(_QWORD *)(v131 + 8);
          break;
        }
      }
    }
    *(_DWORD *)(BugCheckParameter2 + 8) |= 0x80000u;
    if ( !v120 )
      goto LABEL_403;
    v132 = *(_QWORD *)(v120 + 32);
    v133 = *(_QWORD *)v120;
    while ( 2 )
    {
      v134 = v133;
      if ( v133 <= 1 )
      {
        v138 = (_QWORD *)(v120 + 224);
        if ( (_QWORD *)*v138 != v138 )
          KeBugCheckEx(0x51u, 0x34uLL, v120, 1uLL, 0LL);
        v241 = (_QWORD *)*((_QWORD *)&v254 + 1);
        if ( **((__int128 ***)&v254 + 1) == &v254 )
        {
          *(_QWORD *)(v120 + 232) = *((_QWORD *)&v254 + 1);
          *v138 = &v254;
          *v241 = v138;
          *((_QWORD *)&v254 + 1) = v120 + 224;
          *(_BYTE *)(v120 + 64) |= 1u;
          goto LABEL_403;
        }
        goto LABEL_92;
      }
      v135 = v133 - 1;
      v136 = v133 == 3 && (*(_DWORD *)(v120 + 184) & 0x40000) != 0 && *(_BYTE *)(v132 + 2952) == 1;
      v137 = _InterlockedCompareExchange64((volatile signed __int64 *)v120, v135, v133);
      v133 = v137;
      if ( v137 != v134 )
        continue;
      break;
    }
    if ( v137 < v135 )
      KeBugCheckEx(0x51u, 0x25uLL, v120, 0LL, 0LL);
    if ( v136 )
      CmpDoQueueLateUnloadWorker(v132);
LABEL_403:
    if ( !v129 )
      goto LABEL_418;
    v234 = *(_QWORD *)(v129 + 32);
    v235 = *(_QWORD *)v129;
    while ( 2 )
    {
      v236 = v235;
      if ( v235 <= 1 )
      {
        v240 = (_QWORD *)(v129 + 224);
        if ( (_QWORD *)*v240 != v240 )
          KeBugCheckEx(0x51u, 0x34uLL, v129, 1uLL, 0LL);
        v242 = (_QWORD *)*((_QWORD *)&v254 + 1);
        if ( **((__int128 ***)&v254 + 1) == &v254 )
        {
          *(_QWORD *)(v129 + 232) = *((_QWORD *)&v254 + 1);
          *v240 = &v254;
          *v242 = v240;
          *((_QWORD *)&v254 + 1) = v129 + 224;
          *(_BYTE *)(v129 + 64) |= 1u;
          goto LABEL_418;
        }
        goto LABEL_92;
      }
      v237 = v235 - 1;
      v238 = v235 == 3 && (*(_DWORD *)(v129 + 184) & 0x40000) != 0 && *(_BYTE *)(v234 + 2952) == 1;
      v239 = _InterlockedCompareExchange64((volatile signed __int64 *)v129, v237, v235);
      v235 = v239;
      if ( v239 != v236 )
        continue;
      break;
    }
    if ( v239 < v237 )
      KeBugCheckEx(0x51u, 0x25uLL, v129, 0LL, 0LL);
    if ( v238 )
      CmpDoQueueLateUnloadWorker(v234);
LABEL_418:
    if ( *(struct _KTHREAD **)(BugCheckParameter2 + 56) != KeGetCurrentThread() )
      CmpDecommisssionKcb(BugCheckParameter2);
LABEL_246:
    CmpUnlockKcb(BugCheckParameter2);
    if ( v110 )
      CmpUnlockKcb(v110);
    v153 = (__int64 *)(*((_QWORD *)v97 + 206)
                     + 24
                     * ((unsigned int)(v97[414] - 1) & ((101027 * (v96 ^ (v96 >> 9))) ^ ((unsigned __int64)(101027 * (v96 ^ (v96 >> 9))) >> 9))));
    v153[1] = 0LL;
    _m_prefetchw(v153);
    v154 = *v153;
    v155 = *v153 - 16;
    if ( (*v153 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v155 = 0LL;
    if ( (v154 & 2) != 0 || (v156 = *v153, v156 != _InterlockedCompareExchange64(v153, v155, v154)) )
      ExfReleasePushLock(v153);
    KeAbPostRelease((unsigned __int64)v153);
    if ( _InterlockedExchangeAdd(v97 + 1060, 0xFFFFFFFF) != 1 )
      goto LABEL_266;
    v159 = v97 + 402;
    if ( *(_DWORD **)v159 == v159 )
      goto LABEL_257;
    CmpLockHiveListExclusive(v158, v157);
    v161 = *(_QWORD *)v159;
    if ( *(_DWORD **)(*(_QWORD *)v159 + 8LL) != v159
      || (v162 = (_QWORD *)*((_QWORD *)v97 + 202), (_DWORD *)*v162 != v159) )
    {
LABEL_92:
      __fastfail(3u);
    }
    *v162 = v161;
    *(_QWORD *)(v161 + 8) = v162;
    CmpUnlockHiveList(v161, v160);
LABEL_257:
    *v97 = -1160724768;
    HvFreeDirtyData(v97);
    CmpDeleteKcbCache(v97);
    v163 = (void *)*((_QWORD *)v97 + 232);
    if ( v163 )
      ExFreePoolWithTag(v163, 0x624E4D43u);
    v164 = (void *)*((_QWORD *)v97 + 230);
    if ( v164 )
      ExFreePoolWithTag(v164, 0x20204D43u);
    v165 = (void *)*((_QWORD *)v97 + 234);
    if ( v165 )
      ExFreePoolWithTag(v165, 0);
    v166 = (void *)*((_QWORD *)v97 + 603);
    if ( v166 )
      ExFreePoolWithTag(v166, 0);
    CmpReleaseGlobalQuota(4832LL);
    ExFreePoolWithTag(v97, 0);
LABEL_266:
    CmpDrainDelayDerefContext((_QWORD **)&v254);
    v9 = v257;
    v47 = v243;
LABEL_272:
    if ( !v47 )
    {
      a4 = v258;
      a3 = v249;
      v8 = v250;
      continue;
    }
    break;
  }
  v14 = v9;
  CmpLockHashEntrySharedByKcb(v9);
  CmpLockKcbShared(v9);
LABEL_276:
  CmpUnlockKcb(v14);
  v46 = v245;
LABEL_53:
  *v261 = v14;
  *v262 = v47;
  *(_WORD *)v259 = v46;
  return 0;
}
