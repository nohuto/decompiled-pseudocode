/*
 * XREFs of CmpPerformCompleteKcbCacheLookup @ 0x1408C6670
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x1408BA354 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     CmpArmDelayedCloseTimer @ 0x140381748 (CmpArmDelayedCloseTimer.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     CmpDrainDelayDerefContext @ 0x140446E30 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14044EE20 (CmpInitializeDelayDerefContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x140477290 (CmpFreeTransientPoolWithTag.c)
 *     ExpAcquireFastMutexContended @ 0x1404A09B8 (ExpAcquireFastMutexContended.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x1408B9E68 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x1408B9F4C (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpGetComponentNameAtIndex @ 0x1408BACC0 (CmpGetComponentNameAtIndex.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1408C3890 (CmpDelayDerefKeyControlBlock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408C4DC0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1408C52DC (CmpDoQueueLateUnloadWorker.c)
 *     CmpConstructName @ 0x1408C53A0 (CmpConstructName.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1408C5558 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpDecommisssionKcb @ 0x1408C6330 (CmpDecommisssionKcb.c)
 *     CmpRecordParseFailure @ 0x1408C64C0 (CmpRecordParseFailure.c)
 *     CmpRemoveFromDelayedClose @ 0x1408C64F4 (CmpRemoveFromDelayedClose.c)
 *     CmpDereferenceHive @ 0x1408C6580 (CmpDereferenceHive.c)
 *     CmpDeleteKcbCache @ 0x1408C8450 (CmpDeleteKcbCache.c)
 *     CmpLockHiveListExclusive @ 0x1408C84C8 (CmpLockHiveListExclusive.c)
 *     CmpReleaseGlobalQuota @ 0x1408C8530 (CmpReleaseGlobalQuota.c)
 *     HvFreeDirtyData @ 0x1408C8574 (HvFreeDirtyData.c)
 *     CmpUnlockHiveList @ 0x1408C8634 (CmpUnlockHiveList.c)
 *     CmLockHive @ 0x1408C8694 (CmLockHive.c)
 *     CmUnlockHive @ 0x1408C86FC (CmUnlockHive.c)
 *     CmpReferenceHive @ 0x1408C8740 (CmpReferenceHive.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1408CE62C (CmpLockHashEntrySharedByKcb.c)
 *     CmpLockKcbExclusive @ 0x1408CEB50 (CmpLockKcbExclusive.c)
 *     RtlUpcaseUnicodeChar @ 0x1408D5170 (RtlUpcaseUnicodeChar.c)
 *     CmpRemoveKeyHashFromDeletedKcbTable @ 0x140A6A258 (CmpRemoveKeyHashFromDeletedKcbTable.c)
 *     CmpWaitForHiveMount @ 0x140B55FE0 (CmpWaitForHiveMount.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C583F0 (CmpLockKcbShared.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpPerformCompleteKcbCacheLookup(
        volatile signed __int64 *BugCheckParameter4,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        ULONG_PTR *a6,
        char *a7,
        __int64 a8)
{
  __int64 v8; // rdi
  ULONG_PTR v9; // r15
  ULONG_PTR v10; // r14
  __int16 v11; // cx
  signed __int64 v12; // rax
  unsigned int v13; // ebx
  ULONG_PTR v14; // r12
  unsigned int i; // r13d
  int v16; // eax
  __int64 v17; // r12
  unsigned int v18; // r15d
  signed __int64 *v19; // rsi
  void *v20; // rdx
  LegacyAutoBoost *v21; // rdi
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  __int64 j; // rsi
  ULONG_PTR v25; // rdi
  __int64 v26; // rcx
  WCHAR *v27; // rdx
  __int16 v28; // r15
  __int16 k; // r8
  bool v30; // zf
  __int64 *v31; // rbx
  signed __int64 v32; // rax
  signed __int64 v33; // rdx
  __int64 v34; // rtt
  __int64 v35; // rdx
  __int64 v36; // rcx
  ULONG_PTR v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  _QWORD *v40; // rax
  void *v41; // rcx
  void *v42; // rcx
  void *v43; // rcx
  void *v44; // rcx
  __int16 v45; // dx
  signed __int64 v46; // rax
  WCHAR v47; // ax
  __int16 v48; // r13
  signed __int64 v49; // rax
  signed __int64 v50; // rtt
  unsigned int v51; // r13d
  __int64 *v52; // rsi
  signed __int64 v53; // rax
  signed __int64 v54; // rdx
  __int64 v55; // rtt
  __int64 v56; // rdx
  __int64 v57; // rcx
  ULONG_PTR v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rcx
  _QWORD *v61; // rax
  void *v62; // rcx
  void *v63; // rcx
  void *v64; // rcx
  void *v65; // rcx
  unsigned __int64 v66; // rcx
  __int16 m; // r13
  __int16 v68; // cx
  WCHAR v69; // ax
  char v70; // si
  unsigned int v71; // esi
  __int64 v73; // rcx
  volatile signed __int32 *v74; // rbx
  __int64 *v75; // rdi
  signed __int64 v76; // rax
  signed __int64 v77; // rdx
  __int64 v78; // rtt
  __int64 v79; // rdx
  __int64 v80; // rcx
  volatile signed __int32 *v81; // rdi
  __int64 v82; // rdx
  __int64 v83; // rax
  volatile signed __int32 **v84; // rcx
  void *v85; // rcx
  void *v86; // rcx
  void *v87; // rcx
  void *v88; // rcx
  __int64 v89; // rbx
  unsigned __int64 v90; // rcx
  unsigned __int64 v91; // rdx
  unsigned __int64 v92; // r8
  unsigned __int64 v93; // rax
  unsigned int v94; // ebx
  _DWORD *v95; // rdi
  unsigned __int64 *v96; // rsi
  AutoBoost *v97; // rax
  void *v98; // rdx
  struct _KLOCK_ENTRIES *v99; // r9
  AutoBoost *v100; // r14
  signed __int32 v101; // eax
  signed __int32 v102; // ett
  AutoBoost *v103; // rax
  void *v104; // rdx
  struct _KLOCK_ENTRIES *v105; // r9
  AutoBoost *v106; // r14
  __int64 v107; // r8
  ULONG_PTR v108; // r13
  __int64 v109; // rax
  __int64 v110; // rcx
  signed __int64 v111; // rax
  _BOOL8 v112; // rdx
  int v113; // ecx
  void *v114; // rdx
  struct _KLOCK_ENTRY *v115; // rsi
  unsigned __int8 v116; // r14
  unsigned __int64 *v117; // rax
  ULONG_PTR v118; // rsi
  __int64 v119; // rdx
  __int64 v120; // rcx
  void *v121; // r15
  __int64 v122; // rdx
  __int64 v123; // r8
  struct _KLOCK_ENTRIES *v124; // r9
  _QWORD *v125; // rcx
  _DWORD *v126; // r15
  ULONG_PTR v127; // r14
  __int64 *n; // rdx
  __int64 v129; // rax
  __int64 v130; // r10
  unsigned __int64 v131; // rcx
  unsigned __int64 v132; // r9
  unsigned __int64 v133; // rdx
  bool v134; // r8
  unsigned __int64 v135; // rax
  _QWORD *v136; // rax
  __int64 v137; // rcx
  struct _KLOCK_ENTRIES *v138; // r9
  AutoBoost *v139; // rax
  void *v140; // rdx
  struct _KLOCK_ENTRIES *v141; // r9
  AutoBoost *v142; // r14
  AutoBoost *v143; // rax
  void *v144; // rdx
  AutoBoost *v145; // r14
  __int64 v146; // rax
  __int64 v147; // rdx
  _QWORD *v148; // rax
  __int64 v149; // rsi
  int v150; // eax
  __int64 *v151; // rbx
  signed __int64 v152; // rax
  signed __int64 v153; // rdx
  __int64 v154; // rtt
  __int64 v155; // rdx
  __int64 v156; // rcx
  _DWORD *v157; // rbx
  __int64 v158; // rdx
  __int64 v159; // rcx
  _QWORD *v160; // rax
  void *v161; // rcx
  void *v162; // rcx
  void *v163; // rcx
  void *v164; // rcx
  _DWORD *v165; // rbx
  __int64 ComponentNameAtIndex; // rax
  int v167; // edx
  volatile signed __int32 *v168; // rbx
  __int64 *v169; // rdi
  signed __int64 v170; // rax
  signed __int64 v171; // rdx
  __int64 v172; // rtt
  __int64 v173; // rdx
  __int64 v174; // rcx
  volatile signed __int32 *v175; // rdi
  __int64 v176; // rdx
  __int64 v177; // rcx
  volatile signed __int32 **v178; // rax
  void *v179; // rcx
  void *v180; // rcx
  void *v181; // rcx
  void *v182; // rcx
  __int64 v183; // rbx
  struct _KLOCK_ENTRIES *v184; // rcx
  struct _KLOCK_ENTRIES *v185; // r9
  unsigned __int64 v186; // rdx
  bool v187; // r8
  unsigned __int64 v188; // rax
  unsigned int v189; // ebx
  volatile signed __int32 *v190; // rdi
  unsigned __int64 *v191; // r14
  AutoBoost *v192; // rax
  void *v193; // rdx
  struct _KLOCK_ENTRIES *v194; // r9
  AutoBoost *v195; // r15
  signed __int32 v196; // eax
  signed __int32 v197; // ett
  AutoBoost *v198; // rax
  void *v199; // rdx
  __int64 v200; // r8
  struct _KLOCK_ENTRIES *v201; // r9
  AutoBoost *v202; // r15
  ULONG_PTR v203; // r12
  __int64 v204; // rax
  __int64 v205; // rcx
  signed __int64 v206; // rax
  bool v207; // dl
  int v208; // ecx
  void *v209; // rdx
  struct _KLOCK_ENTRY *v210; // r14
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 *v212; // rax
  int Flink; // eax
  __int64 *v214; // rbx
  signed __int64 v215; // rax
  signed __int64 v216; // rdx
  __int64 v217; // rtt
  __int64 v218; // rdx
  __int64 v219; // rcx
  volatile signed __int32 *v220; // rbx
  __int64 v221; // rdx
  __int64 v222; // rcx
  volatile signed __int32 **v223; // rax
  void *v224; // rcx
  void *v225; // rcx
  void *v226; // rcx
  void *v227; // rcx
  __int64 v228; // rcx
  __int64 v229; // r14
  unsigned __int64 ThreadLock; // rdx
  __int64 v231; // r10
  unsigned __int64 v232; // rcx
  unsigned __int64 v233; // r9
  unsigned __int64 v234; // rdx
  bool v235; // r8
  unsigned __int64 v236; // rax
  _QWORD *v237; // rax
  _QWORD *v238; // rcx
  _QWORD *v239; // rdx
  char v240; // [rsp+40h] [rbp-C0h]
  __int16 v241; // [rsp+42h] [rbp-BEh]
  __int16 v242; // [rsp+44h] [rbp-BCh]
  __int16 v243; // [rsp+48h] [rbp-B8h]
  __int16 v244; // [rsp+48h] [rbp-B8h]
  unsigned int v245; // [rsp+4Ch] [rbp-B4h]
  unsigned int v246; // [rsp+50h] [rbp-B0h]
  WCHAR *v247; // [rsp+58h] [rbp-A8h]
  WCHAR *v248; // [rsp+58h] [rbp-A8h]
  volatile signed __int64 *v249; // [rsp+60h] [rbp-A0h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h]
  __int128 v251; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v252; // [rsp+80h] [rbp-80h]
  __int64 v253; // [rsp+88h] [rbp-78h]
  __int64 v254; // [rsp+90h] [rbp-70h]
  __int64 v255; // [rsp+98h] [rbp-68h]
  __int128 v256; // [rsp+A0h] [rbp-60h] BYREF
  ULONG_PTR v257; // [rsp+B0h] [rbp-50h]
  ULONG_PTR *v258; // [rsp+B8h] [rbp-48h]
  char *v259; // [rsp+C0h] [rbp-40h]
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v261[2]; // [rsp+F8h] [rbp-8h] BYREF

  v257 = (ULONG_PTR)BugCheckParameter4;
  v254 = a5;
  v8 = a4;
  v9 = (ULONG_PTR)BugCheckParameter4;
  v258 = a6;
  v259 = a7;
  *(_QWORD *)&v256 = a8;
  v253 = a4;
  v245 = a3;
  v246 = a2;
  v249 = BugCheckParameter4;
  v242 = 0;
  while ( 2 )
  {
    v10 = *(_QWORD *)(v9 + 32);
    v11 = 0;
    v241 = 0;
    v240 = 0;
    v12 = _InterlockedIncrement64((volatile signed __int64 *)v9);
    if ( !v12 )
      KeBugCheckEx(0x51u, 0x24uLL, v9, 0LL, 0LL);
    if ( v12 == 1 )
      goto LABEL_4;
    v13 = *(_DWORD *)(v9 + 16);
    v14 = v9;
    BugCheckParameter2 = v9;
    for ( i = a2; ; i = v51 + 1 )
    {
      v252 = i;
      if ( i >= a3 )
        goto LABEL_47;
      if ( i >= 8 )
      {
        v17 = *(_QWORD *)(v8 + 160) + 16 * (i - 8 + 6LL);
        v16 = *(_DWORD *)(*(_QWORD *)(v8 + 160) + 4LL * (i - 8));
      }
      else
      {
        v16 = *(_DWORD *)(v8 + 4LL * i);
        v17 = v8 + 16 * (i + 2LL);
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
      for ( j = *(_QWORD *)(*(_QWORD *)(v10 + 1648) + 24LL * (v18 & (*(_DWORD *)(v10 + 1656) - 1)) + 16);
            ;
            j = *(_QWORD *)(j + 8) )
      {
        if ( !j )
          goto LABEL_28;
        if ( *(_DWORD *)j == v13 )
        {
          v25 = j - 16;
          if ( *(_QWORD *)(j - 16 + 72) == BugCheckParameter2 )
          {
            v26 = *(_QWORD *)(v25 + 80);
            v27 = *(WCHAR **)(v17 + 8);
            v28 = *(_WORD *)v17 >> 1;
            a4 = v26 + 26;
            if ( (*(_DWORD *)(v26 + 12) & 1) != 0 )
            {
              for ( k = *(_WORD *)(v26 + 24); ; --k )
              {
                v243 = k;
                if ( !v28 || !k )
                  break;
                v47 = *v27++;
                v48 = *(unsigned __int8 *)a4++;
                v247 = v27;
                v255 = a4;
                if ( v47 != v48 )
                {
                  if ( v47 >= 0x61u )
                  {
                    if ( v47 > 0x7Au )
                    {
                      v47 = RtlUpcaseUnicodeChar(v47);
                      v27 = v247;
                      k = v243;
                      a4 = v255;
                    }
                    else
                    {
                      v47 -= 32;
                    }
                  }
                  if ( v47 != v48 )
                    goto LABEL_27;
                }
                --v28;
              }
              v30 = v28 == k;
            }
            else
            {
              for ( m = *(_WORD *)(v26 + 24) >> 1; v28 && m; --m )
              {
                v68 = *(_WORD *)a4;
                a4 += 2LL;
                v69 = *v27++;
                v248 = v27;
                v244 = v68;
                v255 = a4;
                if ( v69 != v68 )
                {
                  if ( v69 >= 0x61u )
                  {
                    if ( v69 > 0x7Au )
                    {
                      v69 = RtlUpcaseUnicodeChar(v69);
                      a4 = v255;
                      v27 = v248;
                      v68 = v244;
                    }
                    else
                    {
                      v69 -= 32;
                    }
                  }
                  if ( v69 != v68 )
                    goto LABEL_27;
                }
                --v28;
              }
              v30 = v28 == m;
            }
            if ( v30 )
              break;
          }
        }
LABEL_27:
        ;
      }
      if ( j == 16 )
        break;
      v49 = *(_QWORD *)v25;
      while ( v49 )
      {
        if ( v49 == -1 )
          goto LABEL_111;
        v50 = v49;
        v49 = _InterlockedCompareExchange64((volatile signed __int64 *)v25, v49 + 1, v49);
        if ( v50 == v49 )
          goto LABEL_66;
      }
      CmpLockKcbShared(j - 16);
      if ( (*(_DWORD *)(v25 + 8) & 0x80000) != 0 )
        KeBugCheckEx(0x51u, 0x20uLL, j - 16, 0LL, 0LL);
      if ( !_InterlockedIncrement64((volatile signed __int64 *)v25) )
LABEL_111:
        KeBugCheckEx(0x51u, 0x24uLL, j - 16, 0LL, 0LL);
      if ( (*(_BYTE *)(v25 + 64) & 2) != 0 )
        CmpRemoveFromDelayedClose(j - 16);
      CmpUnlockKcb(j - 16);
LABEL_66:
      a3 = v245;
      v51 = v252;
      if ( v252 == v245 - 1 )
      {
        v240 = 1;
      }
      else
      {
        v52 = (__int64 *)(*(_QWORD *)(v10 + 1648)
                        + 24
                        * ((unsigned int)(*(_DWORD *)(v10 + 1656) - 1) & ((101027 * (v13 ^ (v13 >> 9))) ^ ((unsigned __int64)(101027 * (v13 ^ (v13 >> 9))) >> 9))));
        v52[1] = 0LL;
        _m_prefetchw(v52);
        v53 = *v52;
        v54 = *v52 - 16;
        if ( (*v52 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v54 = 0LL;
        if ( (v53 & 2) != 0 || (v55 = *v52, v55 != _InterlockedCompareExchange64(v52, v54, v53)) )
          ExfReleasePushLock(v52);
        KeAbPostRelease((unsigned __int64)v52);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 4240), 0xFFFFFFFF) == 1 )
        {
          v58 = v10 + 1608;
          if ( *(_QWORD *)v58 != v58 )
          {
            CmpLockHiveListExclusive(v57, v56);
            v60 = *(_QWORD *)v58;
            if ( *(_QWORD *)(*(_QWORD *)v58 + 8LL) != v58 )
              goto LABEL_91;
            v61 = *(_QWORD **)(v10 + 1616);
            if ( *v61 != v58 )
              goto LABEL_91;
            *v61 = v60;
            *(_QWORD *)(v60 + 8) = v61;
            CmpUnlockHiveList(v60, v59);
          }
          *(_DWORD *)v10 = -1160724768;
          HvFreeDirtyData(v10);
          CmpDeleteKcbCache(v10);
          v62 = *(void **)(v10 + 1856);
          if ( v62 )
            ExFreePoolWithTag(v62, 0x624E4D43u);
          v63 = *(void **)(v10 + 1840);
          if ( v63 )
            ExFreePoolWithTag(v63, 0x20204D43u);
          v64 = *(void **)(v10 + 1872);
          if ( v64 )
            ExFreePoolWithTag(v64, 0);
          v65 = *(void **)(v10 + 4824);
          if ( v65 )
            ExFreePoolWithTag(v65, 0);
          CmpReleaseGlobalQuota(4832LL);
          ExFreePoolWithTag((PVOID)v10, 0);
        }
        a3 = v245;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        goto LABEL_87;
      v14 = v25;
      v11 = v241 + 1;
      BugCheckParameter2 = v25;
      v30 = (*(_DWORD *)(v25 + 184) & 0x100000) == 0;
      v8 = v253;
      ++v241;
      if ( !v30 )
        goto LABEL_47;
    }
LABEL_28:
    v31 = (__int64 *)(*(_QWORD *)(v10 + 1648)
                    + 24
                    * ((unsigned int)(*(_DWORD *)(v10 + 1656) - 1) & ((101027 * (v13 ^ (v13 >> 9))) ^ ((unsigned __int64)(101027 * (v13 ^ (v13 >> 9))) >> 9))));
    v31[1] = 0LL;
    _m_prefetchw(v31);
    v32 = *v31;
    v33 = *v31 - 16;
    if ( (*v31 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v33 = 0LL;
    if ( (v32 & 2) != 0 || (v34 = *v31, v34 != _InterlockedCompareExchange64(v31, v33, v32)) )
      ExfReleasePushLock(v31);
    KeAbPostRelease((unsigned __int64)v31);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 4240), 0xFFFFFFFF) == 1 )
    {
      v37 = v10 + 1608;
      if ( *(_QWORD *)v37 != v37 )
      {
        CmpLockHiveListExclusive(v36, v35);
        v39 = *(_QWORD *)v37;
        if ( *(_QWORD *)(*(_QWORD *)v37 + 8LL) != v37 )
          goto LABEL_91;
        v40 = *(_QWORD **)(v10 + 1616);
        if ( *v40 != v37 )
          goto LABEL_91;
        *v40 = v39;
        *(_QWORD *)(v39 + 8) = v40;
        CmpUnlockHiveList(v39, v38);
      }
      *(_DWORD *)v10 = -1160724768;
      HvFreeDirtyData(v10);
      CmpDeleteKcbCache(v10);
      v41 = *(void **)(v10 + 1856);
      if ( v41 )
        ExFreePoolWithTag(v41, 0x624E4D43u);
      v42 = *(void **)(v10 + 1840);
      if ( v42 )
        ExFreePoolWithTag(v42, 0x20204D43u);
      v43 = *(void **)(v10 + 1872);
      if ( v43 )
        ExFreePoolWithTag(v43, 0);
      v44 = *(void **)(v10 + 4824);
      if ( v44 )
        ExFreePoolWithTag(v44, 0);
      CmpReleaseGlobalQuota(4832LL);
      ExFreePoolWithTag((PVOID)v10, 0);
    }
    v8 = v253;
    v11 = v241;
    v14 = BugCheckParameter2;
LABEL_47:
    if ( v249 != (volatile signed __int64 *)v257 && _InterlockedExchangeAdd64(v249, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      goto LABEL_87;
    v45 = v11 + v242;
    v246 += v11;
    v242 += v11;
    if ( (*(_DWORD *)(v14 + 184) & 0x20000) == 0 )
    {
      v70 = v240;
      goto LABEL_118;
    }
    CmpLockKcbShared(v14);
    if ( (*(_DWORD *)(v14 + 184) & 0x20000) == 0 )
    {
      v70 = v240;
      goto LABEL_274;
    }
    v9 = *(_QWORD *)(v14 + 104);
    v249 = (volatile signed __int64 *)v9;
    v46 = _InterlockedIncrement64((volatile signed __int64 *)v9);
    if ( !v46 )
      KeBugCheckEx(0x51u, 0x24uLL, v9, 0LL, 0LL);
    if ( v46 == 1 )
LABEL_4:
      KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
    v73 = *(_QWORD *)(v9 + 32);
    if ( (*(_DWORD *)(v73 + 160) & 0x20) != 0 && *(struct _KTHREAD **)(v73 + 4176) != KeGetCurrentThread() )
    {
      v71 = -1073741772;
      v165 = (_DWORD *)v254;
      if ( BYTE4(WheapPfaLock.InitialStack)
        && (struct _KTHREAD *)WheapPfaLock.QuantumTarget != KeGetCurrentThread()
        && v254
        && (ComponentNameAtIndex = CmpGetComponentNameAtIndex(v8, v246 - 1),
            (unsigned __int8)CmpWaitForHiveMount(ComponentNameAtIndex)) )
      {
        *v165 |= 0x100u;
        v71 = 259;
        v167 = 393984;
      }
      else
      {
        v167 = 394240;
      }
LABEL_284:
      CmpRecordParseFailure((__int64)v165, v167, v71);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
      {
        CmpUnlockKcb(v14);
        if ( v240 )
        {
          v168 = *(volatile signed __int32 **)(v14 + 32);
          *(_QWORD *)(*((_QWORD *)v168 + 206)
                    + 24
                    * ((unsigned int)(*((_DWORD *)v168 + 414) - 1) & ((unsigned int)(101027
                                                                                   * (*(_DWORD *)(v14 + 16) ^ (*(_DWORD *)(v14 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v14 + 16) ^ (*(_DWORD *)(v14 + 16) >> 9))) >> 9)))
                    + 8) = 0LL;
          v169 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v14 + 32) + 1648LL)
                           + 24
                           * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v14 + 32) + 1656LL) - 1) & ((unsigned int)(101027 * (*(_DWORD *)(v14 + 16) ^ (*(_DWORD *)(v14 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v14 + 16) ^ (*(_DWORD *)(v14 + 16) >> 9))) >> 9))));
          _m_prefetchw(v169);
          v170 = *v169;
          v171 = *v169 - 16;
          if ( (*v169 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v171 = 0LL;
          if ( (v170 & 2) != 0 || (v172 = *v169, v172 != _InterlockedCompareExchange64(v169, v171, v170)) )
            ExfReleasePushLock(v169);
          KeAbPostRelease((unsigned __int64)v169);
          if ( _InterlockedExchangeAdd(v168 + 1060, 0xFFFFFFFF) == 1 )
          {
            v175 = v168 + 402;
            if ( *(volatile signed __int32 **)v175 != v175 )
            {
              CmpLockHiveListExclusive(v174, v173);
              v177 = *(_QWORD *)v175;
              if ( *(volatile signed __int32 **)(*(_QWORD *)v175 + 8LL) != v175 )
                goto LABEL_91;
              v178 = (volatile signed __int32 **)*((_QWORD *)v168 + 202);
              if ( *v178 != v175 )
                goto LABEL_91;
              *v178 = (volatile signed __int32 *)v177;
              *(_QWORD *)(v177 + 8) = v178;
              CmpUnlockHiveList(v177, v176);
            }
            *v168 = -1160724768;
            HvFreeDirtyData(v168);
            CmpDeleteKcbCache(v168);
            v179 = (void *)*((_QWORD *)v168 + 232);
            if ( v179 )
              ExFreePoolWithTag(v179, 0x624E4D43u);
            v180 = (void *)*((_QWORD *)v168 + 230);
            if ( v180 )
              ExFreePoolWithTag(v180, 0x20204D43u);
            v181 = (void *)*((_QWORD *)v168 + 234);
            if ( v181 )
              ExFreePoolWithTag(v181, 0);
            v182 = (void *)*((_QWORD *)v168 + 603);
            if ( v182 )
              ExFreePoolWithTag(v182, 0);
            CmpReleaseGlobalQuota(4832LL);
            ExFreePoolWithTag((PVOID)v168, 0);
          }
        }
        v256 = 0LL;
        CmpInitializeDelayDerefContext(&v256);
        v183 = *(_QWORD *)(v14 + 32);
        v184 = *(struct _KLOCK_ENTRIES **)v14;
        while ( 1 )
        {
          v185 = v184;
          if ( (unsigned __int64)v184 <= 1 )
            break;
          v186 = (unsigned __int64)&v184[-1].Entries[0].BoostBitmap.2 + 7;
          v187 = v184 == (struct _KLOCK_ENTRIES *)3
              && (*(_DWORD *)(v14 + 184) & 0x40000) != 0
              && *(_BYTE *)(v183 + 2952) == 1;
          v188 = _InterlockedCompareExchange64((volatile signed __int64 *)v14, v186, (signed __int64)v184);
          v184 = (struct _KLOCK_ENTRIES *)v188;
          if ( (struct _KLOCK_ENTRIES *)v188 == v185 )
          {
            if ( v188 < v186 )
              KeBugCheckEx(0x51u, 0x25uLL, v14, 0LL, 0LL);
            if ( v187 )
            {
              CmLockHive(v183);
              *(_DWORD *)(v183
                        + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v183 + 4244), 1u) & 0x7F)
                        + 4248) = 19;
              if ( **(_QWORD **)(v183 + 2944) == 2LL )
              {
                *(_DWORD *)(v183
                          + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v183 + 4244), 1u) & 0x7F)
                          + 4248) = 20;
                if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v183 + 4808), 1, 0) )
                {
                  *(_DWORD *)(v183
                            + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v183 + 4244), 1u) & 0x7F)
                            + 4248) = 21;
                  CmpReferenceHive(v183);
                  ExQueueWorkItem(*(PWORK_QUEUE_ITEM *)(v183 + 4824), DelayedWorkQueue);
                }
              }
              CmUnlockHive(v183);
            }
            return v71;
          }
        }
        v189 = *(_DWORD *)(v14 + 16);
        v190 = *(volatile signed __int32 **)(v14 + 32);
        v191 = (unsigned __int64 *)(*((_QWORD *)v190 + 206)
                                  + 24
                                  * ((unsigned int)(*((_DWORD *)v190 + 414) - 1) & ((101027 * (v189 ^ (v189 >> 9))) ^ ((unsigned __int64)(101027 * (v189 ^ (v189 >> 9))) >> 9))));
        v192 = (AutoBoost *)KeAbPreAcquire((__int64)v191, 0LL, 0LL, v184);
        v195 = v192;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v191, 0LL) )
          ExfAcquirePushLockExclusiveEx(v191, v192, (__int64)v191);
        if ( v195 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v195, v193);
          else
            *((_BYTE *)v195 + 10) = 1;
        }
        v191[1] = (unsigned __int64)KeGetCurrentThread();
        _m_prefetchw((const void *)(v190 + 1060));
        v196 = *((_DWORD *)v190 + 1060);
        do
        {
          if ( !v196 )
            KeBugCheckEx(0x51u, 0x17uLL, (ULONG_PTR)v190, 8uLL, v14);
          v197 = v196;
          v196 = _InterlockedCompareExchange(v190 + 1060, v196 + 1, v196);
        }
        while ( v197 != v196 );
        v198 = (AutoBoost *)KeAbPreAcquire(v14 + 48, 0LL, 0LL, v194);
        v202 = v198;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 48), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v14 + 48), v198, v14 + 48);
        if ( v202 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v202, v199);
          else
            *((_BYTE *)v202 + 10) = 1;
        }
        *(_QWORD *)(v14 + 56) = KeGetCurrentThread();
        v203 = 0LL;
        v204 = *(_QWORD *)(BugCheckParameter2 + 192);
        if ( v204 )
        {
          v228 = *(_QWORD *)(v204 + 24);
          if ( v228 )
          {
            v203 = *(_QWORD *)(v228 + 16);
            CmpUnlockKcb(BugCheckParameter2);
            CmpLockKcbExclusive(v203);
            CmpLockKcbExclusive(BugCheckParameter2);
          }
        }
        v205 = *(_QWORD *)(BugCheckParameter2 + 32);
        v206 = _InterlockedDecrement64((volatile signed __int64 *)BugCheckParameter2);
        if ( v206 == 2 )
        {
          if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 && *(_BYTE *)(v205 + 2952) == 1 )
            CmpDoQueueLateUnloadWorker(v205);
        }
        else if ( !v206 )
        {
          if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 )
          {
            v229 = *(_QWORD *)(BugCheckParameter2 + 32);
            CmpCleanUpKcbCacheWithLock(BugCheckParameter2, (__int64)&v256, v200, v201);
            *(_QWORD *)(v229 + 4184) = KeGetCurrentThread();
            *(_DWORD *)(v229
                      + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v229 + 4244), 1u) & 0x7F)
                      + 4248) = 31;
            if ( (*(_DWORD *)(v229 + 160) & 0x20) == 0 )
              CmpDereferenceHive((char *)v229);
          }
          else
          {
            v207 = 0;
            v208 = *(_DWORD *)(BugCheckParameter2 + 8);
            if ( (v208 & 0x20) == 0 )
              v207 = (v208 & 0x20000) == 0;
            if ( (!CmpHoldLazyFlush
               || (*(_DWORD *)(BugCheckParameter2 + 184) & 0x100000) != 0
               || (*(_DWORD *)(BugCheckParameter2 + 8) & 8) != 0)
              && v207 )
            {
              v210 = (struct _KLOCK_ENTRY *)KeAbPreAcquire((__int64)&CmpKeyLockTracker.StateSaveArea, 0LL, 0LL, v201);
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql != 1 )
                __writecr8(1uLL);
              if ( KiIrqlFlags )
              {
                LOBYTE(v209) = 1;
                KiRaiseIrqlProcessIrqlFlags(CurrentIrql, (int)v209);
              }
              if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpKeyLockTracker.StateSaveArea, 0) )
                ExpAcquireFastMutexContended((struct _KTHREAD *)&CmpKeyLockTracker.StateSaveArea, v210);
              if ( v210 )
              {
                if ( (KiAbpGlobalState & 1) != 0 )
                  AutoBoost::KiAbpPostAcquire((AutoBoost *)v210, v209);
                else
                  v210->AcquiredByte = 1;
              }
              CmpKeyLockTracker.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)KeGetCurrentThread();
              LODWORD(CmpKeyLockTracker.TrapFrame) = CurrentIrql;
              v212 = (unsigned __int64 *)(BugCheckParameter2 + 224);
              if ( (unsigned __int64 *)*v212 != v212 )
                KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter2, 0LL, 0LL);
              ThreadLock = CmpKeyLockTracker.ThreadLock;
              if ( *(struct _KTHREAD **)(CmpKeyLockTracker.ThreadLock + 8) != (struct _KTHREAD *)&CmpKeyLockTracker.ThreadLock )
                goto LABEL_91;
              *(_QWORD *)(BugCheckParameter2 + 232) = &CmpKeyLockTracker.ThreadLock;
              *v212 = ThreadLock;
              *(_QWORD *)(ThreadLock + 8) = v212;
              CmpKeyLockTracker.ThreadLock = BugCheckParameter2 + 224;
              Flink = (int)WheapPfaLock.WaitListEntry.Flink;
              *(_BYTE *)(BugCheckParameter2 + 64) |= 2u;
              ++KiSystemServiceTraceCallbackLock.KernelShadowStackBase;
              LODWORD(WheapPfaLock.WaitListEntry.Flink) = Flink + 1;
              if ( Flink + 1 <= (unsigned int)CmpDelayedCloseSize )
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
              CmpCleanUpKcbCacheWithLock(BugCheckParameter2, (__int64)&v256, v200, v201);
              if ( *(struct _KTHREAD **)(BugCheckParameter2 + 56) != KeGetCurrentThread() )
                CmpDecommisssionKcb(BugCheckParameter2);
            }
          }
        }
        CmpUnlockKcb(BugCheckParameter2);
        if ( v203 )
          CmpUnlockKcb(v203);
        v214 = (__int64 *)(*((_QWORD *)v190 + 206)
                         + 24
                         * ((unsigned int)(*((_DWORD *)v190 + 414) - 1) & ((101027 * (v189 ^ (v189 >> 9))) ^ ((unsigned __int64)(101027 * (v189 ^ (v189 >> 9))) >> 9))));
        v214[1] = 0LL;
        _m_prefetchw(v214);
        v215 = *v214;
        v216 = *v214 - 16;
        if ( (*v214 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v216 = 0LL;
        if ( (v215 & 2) != 0 || (v217 = *v214, v217 != _InterlockedCompareExchange64(v214, v216, v215)) )
          ExfReleasePushLock(v214);
        KeAbPostRelease((unsigned __int64)v214);
        if ( _InterlockedExchangeAdd(v190 + 1060, 0xFFFFFFFF) == 1 )
        {
          v220 = v190 + 402;
          if ( *(volatile signed __int32 **)v220 != v220 )
          {
            CmpLockHiveListExclusive(v219, v218);
            v222 = *(_QWORD *)v220;
            if ( *(volatile signed __int32 **)(*(_QWORD *)v220 + 8LL) != v220 )
              goto LABEL_91;
            v223 = (volatile signed __int32 **)*((_QWORD *)v190 + 202);
            if ( *v223 != v220 )
              goto LABEL_91;
            *v223 = (volatile signed __int32 *)v222;
            *(_QWORD *)(v222 + 8) = v223;
            CmpUnlockHiveList(v222, v221);
          }
          *v190 = -1160724768;
          HvFreeDirtyData(v190);
          CmpDeleteKcbCache(v190);
          v224 = (void *)*((_QWORD *)v190 + 232);
          if ( v224 )
            ExFreePoolWithTag(v224, 0x624E4D43u);
          v225 = (void *)*((_QWORD *)v190 + 230);
          if ( v225 )
            ExFreePoolWithTag(v225, 0x20204D43u);
          v226 = (void *)*((_QWORD *)v190 + 234);
          if ( v226 )
            ExFreePoolWithTag(v226, 0);
          v227 = (void *)*((_QWORD *)v190 + 603);
          if ( v227 )
            ExFreePoolWithTag(v227, 0);
          CmpReleaseGlobalQuota(4832LL);
          ExFreePoolWithTag((PVOID)v190, 0);
        }
        CmpDrainDelayDerefContext((_QWORD **)&v256);
        return v71;
      }
LABEL_87:
      KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
    }
    if ( (*(_DWORD *)(v9 + 8) & 0x40000) != 0 )
    {
      v165 = (_DWORD *)v254;
      v71 = -1073740763;
      v167 = 394496;
      goto LABEL_284;
    }
    CmpUnlockKcb(v14);
    v70 = v240;
    if ( v240 )
    {
      v74 = *(volatile signed __int32 **)(v14 + 32);
      *(_QWORD *)(*((_QWORD *)v74 + 206)
                + 24
                * ((unsigned int)(*((_DWORD *)v74 + 414) - 1) & ((unsigned int)(101027
                                                                              * (*(_DWORD *)(v14 + 16) ^ (*(_DWORD *)(v14 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v14 + 16) ^ (*(_DWORD *)(v14 + 16) >> 9))) >> 9)))
                + 8) = 0LL;
      v75 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v14 + 32) + 1648LL)
                      + 24
                      * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v14 + 32) + 1656LL) - 1) & ((unsigned int)(101027 * (*(_DWORD *)(v14 + 16) ^ (*(_DWORD *)(v14 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v14 + 16) ^ (*(_DWORD *)(v14 + 16) >> 9))) >> 9))));
      _m_prefetchw(v75);
      v76 = *v75;
      v77 = *v75 - 16;
      if ( (*v75 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v77 = 0LL;
      if ( (v76 & 2) != 0 || (v78 = *v75, v78 != _InterlockedCompareExchange64(v75, v77, v76)) )
        ExfReleasePushLock(v75);
      KeAbPostRelease((unsigned __int64)v75);
      if ( _InterlockedExchangeAdd(v74 + 1060, 0xFFFFFFFF) == 1 )
      {
        v81 = v74 + 402;
        if ( *(volatile signed __int32 **)v81 != v81 )
        {
          CmpLockHiveListExclusive(v80, v79);
          v83 = *(_QWORD *)v81;
          if ( *(volatile signed __int32 **)(*(_QWORD *)v81 + 8LL) != v81 )
            goto LABEL_91;
          v84 = (volatile signed __int32 **)*((_QWORD *)v74 + 202);
          if ( *v84 != v81 )
            goto LABEL_91;
          *v84 = (volatile signed __int32 *)v83;
          *(_QWORD *)(v83 + 8) = v84;
          CmpUnlockHiveList(v84, v82);
        }
        *v74 = -1160724768;
        HvFreeDirtyData(v74);
        CmpDeleteKcbCache(v74);
        v85 = (void *)*((_QWORD *)v74 + 232);
        if ( v85 )
          ExFreePoolWithTag(v85, 0x624E4D43u);
        v86 = (void *)*((_QWORD *)v74 + 230);
        if ( v86 )
          ExFreePoolWithTag(v86, 0x20204D43u);
        v87 = (void *)*((_QWORD *)v74 + 234);
        if ( v87 )
          ExFreePoolWithTag(v87, 0);
        v88 = (void *)*((_QWORD *)v74 + 603);
        if ( v88 )
          ExFreePoolWithTag(v88, 0);
        CmpReleaseGlobalQuota(4832LL);
        ExFreePoolWithTag((PVOID)v74, 0);
      }
    }
    v251 = 0LL;
    CmpInitializeDelayDerefContext(&v251);
    v89 = *(_QWORD *)(v14 + 32);
    v90 = *(_QWORD *)v14;
    while ( 1 )
    {
      v91 = v90;
      if ( v90 <= 1 )
        break;
      v92 = v90 - 1;
      if ( v90 == 3 && (*(_DWORD *)(v14 + 184) & 0x40000) != 0 && *(_BYTE *)(v89 + 2952) == 1 )
        a4 = 1LL;
      else
        LOBYTE(a4) = 0;
      v93 = _InterlockedCompareExchange64((volatile signed __int64 *)v14, v92, v90);
      v90 = v93;
      if ( v93 == v91 )
      {
        if ( v93 < v92 )
          KeBugCheckEx(0x51u, 0x25uLL, v14, 0LL, 0LL);
        if ( (_BYTE)a4 )
        {
          CmLockHive(v89);
          *(_DWORD *)(v89 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v89 + 4244), 1u) & 0x7F) + 4248) = 19;
          if ( **(_QWORD **)(v89 + 2944) == 2LL )
          {
            *(_DWORD *)(v89 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v89 + 4244), 1u) & 0x7F) + 4248) = 20;
            if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v89 + 4808), 1, 0) )
            {
              *(_DWORD *)(v89
                        + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v89 + 4244), 1u) & 0x7F)
                        + 4248) = 21;
              CmpReferenceHive(v89);
              ExQueueWorkItem(*(PWORK_QUEUE_ITEM *)(v89 + 4824), DelayedWorkQueue);
            }
          }
          CmUnlockHive(v89);
        }
        goto LABEL_270;
      }
    }
    v94 = *(_DWORD *)(v14 + 16);
    v95 = *(_DWORD **)(v14 + 32);
    v96 = (unsigned __int64 *)(*((_QWORD *)v95 + 206)
                             + 24
                             * ((unsigned int)(v95[414] - 1) & ((101027 * (v94 ^ (v94 >> 9))) ^ ((unsigned __int64)(101027 * (v94 ^ (v94 >> 9))) >> 9))));
    v97 = (AutoBoost *)KeAbPreAcquire((__int64)v96, 0LL, 0LL, (struct _KLOCK_ENTRIES *)a4);
    v100 = v97;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v96, 0LL) )
      ExfAcquirePushLockExclusiveEx(v96, v97, (__int64)v96);
    if ( v100 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v100, v98);
      else
        *((_BYTE *)v100 + 10) = 1;
    }
    v96[1] = (unsigned __int64)KeGetCurrentThread();
    _m_prefetchw(v95 + 1060);
    v101 = v95[1060];
    do
    {
      if ( !v101 )
        KeBugCheckEx(0x51u, 0x17uLL, (ULONG_PTR)v95, 8uLL, v14);
      v102 = v101;
      v101 = _InterlockedCompareExchange(v95 + 1060, v101 + 1, v101);
    }
    while ( v102 != v101 );
    v103 = (AutoBoost *)KeAbPreAcquire(v14 + 48, 0LL, 0LL, v99);
    v106 = v103;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 48), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v14 + 48), v103, v14 + 48);
    if ( v106 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v106, v104);
      else
        *((_BYTE *)v106 + 10) = 1;
    }
    v107 = 0LL;
    *(_QWORD *)(v14 + 56) = KeGetCurrentThread();
    v108 = 0LL;
    v109 = *(_QWORD *)(v14 + 192);
    if ( v109 )
    {
      v137 = *(_QWORD *)(v109 + 24);
      if ( v137 )
      {
        v108 = *(_QWORD *)(v137 + 16);
        CmpUnlockKcb(v14);
        v139 = (AutoBoost *)KeAbPreAcquire(v108 + 48, 0LL, 0LL, v138);
        v142 = v139;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v108 + 48), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v108 + 48), v139, v108 + 48);
        if ( v142 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v142, v140);
          else
            *((_BYTE *)v142 + 10) = 1;
        }
        *(_QWORD *)(v108 + 56) = KeGetCurrentThread();
        v143 = (AutoBoost *)KeAbPreAcquire(v14 + 48, 0LL, 0LL, v141);
        v145 = v143;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 48), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v14 + 48), v143, v14 + 48);
        if ( v145 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v145, v144);
          else
            *((_BYTE *)v145 + 10) = 1;
        }
        v107 = 0LL;
        *(_QWORD *)(v14 + 56) = KeGetCurrentThread();
      }
    }
    v110 = *(_QWORD *)(v14 + 32);
    v111 = _InterlockedDecrement64((volatile signed __int64 *)v14);
    if ( v111 == 2 )
    {
      if ( (*(_DWORD *)(v14 + 184) & 0x40000) != 0 && *(_BYTE *)(v110 + 2952) == 1 )
        CmpDoQueueLateUnloadWorker(v110);
      goto LABEL_244;
    }
    if ( v111 )
      goto LABEL_244;
    if ( (*(_DWORD *)(v14 + 184) & 0x40000) != 0 )
    {
      v149 = *(_QWORD *)(v14 + 32);
      CmpCleanUpKcbCacheWithLock(v14, (__int64)&v251, 0LL, v105);
      *(_QWORD *)(v149 + 4184) = KeGetCurrentThread();
      *(_DWORD *)(v149 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v149 + 4244), 1u) & 0x7F) + 4248) = 31;
      if ( (*(_DWORD *)(v149 + 160) & 0x20) == 0 )
        CmpDereferenceHive((char *)v149);
      goto LABEL_244;
    }
    v112 = 0LL;
    v113 = *(_DWORD *)(v14 + 8);
    if ( (v113 & 0x20) == 0 )
      v112 = (v113 & 0x20000) == 0;
    if ( (!CmpHoldLazyFlush || (*(_DWORD *)(v14 + 184) & 0x100000) != 0 || (*(_DWORD *)(v14 + 8) & 8) != 0) && v112 )
    {
      v115 = (struct _KLOCK_ENTRY *)KeAbPreAcquire((__int64)&CmpKeyLockTracker.StateSaveArea, 0LL, 0LL, v105);
      v116 = KeGetCurrentIrql();
      if ( v116 != 1 )
        __writecr8(1uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v114) = 1;
        KiRaiseIrqlProcessIrqlFlags(v116, (int)v114);
      }
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpKeyLockTracker.StateSaveArea, 0) )
        ExpAcquireFastMutexContended((struct _KTHREAD *)&CmpKeyLockTracker.StateSaveArea, v115);
      if ( v115 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire((AutoBoost *)v115, v114);
        else
          v115->AcquiredByte = 1;
      }
      CmpKeyLockTracker.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)KeGetCurrentThread();
      LODWORD(CmpKeyLockTracker.TrapFrame) = v116;
      v117 = (unsigned __int64 *)(v14 + 224);
      if ( (unsigned __int64 *)*v117 != v117 )
        KeBugCheckEx(0x51u, 0x34uLL, v14, 0LL, 0LL);
      v66 = CmpKeyLockTracker.ThreadLock;
      if ( *(struct _KTHREAD **)(CmpKeyLockTracker.ThreadLock + 8) == (struct _KTHREAD *)&CmpKeyLockTracker.ThreadLock )
      {
        *v117 = CmpKeyLockTracker.ThreadLock;
        *(_QWORD *)(v14 + 232) = &CmpKeyLockTracker.ThreadLock;
        *(_QWORD *)(v66 + 8) = v117;
        CmpKeyLockTracker.ThreadLock = v14 + 224;
        v150 = (int)WheapPfaLock.WaitListEntry.Flink;
        *(_BYTE *)(v14 + 64) |= 2u;
        ++KiSystemServiceTraceCallbackLock.KernelShadowStackBase;
        LODWORD(WheapPfaLock.WaitListEntry.Flink) = v150 + 1;
        if ( v150 + 1 <= (unsigned int)CmpDelayedCloseSize )
        {
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpKeyLockTracker.StateSaveArea);
        }
        else
        {
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpKeyLockTracker.StateSaveArea);
          CmpArmDelayedCloseTimer();
        }
        goto LABEL_244;
      }
      goto LABEL_91;
    }
    v118 = 0LL;
    if ( *(_QWORD *)v14 )
      goto LABEL_417;
    if ( CmpTraceRoutine )
    {
      memset(v261, 0, sizeof(v261));
      memset(&ApcState, 0, sizeof(ApcState));
      CmpAttachToRegistryProcess(&ApcState);
      v121 = (void *)CmpConstructName(v14, v119);
      if ( v121 )
      {
        LOBYTE(v120) = 23;
        guard_dispatch_icall_no_overrides(v120, (__int64)v261);
        CmpFreeTransientPoolWithTag(v121, 0x624E4D43u);
      }
      CmpDetachFromRegistryProcess(&ApcState);
    }
    if ( (*(_DWORD *)(v14 + 184) & 0x400000) == 0 && (*(_BYTE *)(v14 + 8) & 8) != 0 )
    {
      CmpDelayDerefKeyControlBlock(*(_QWORD *)(v14 + 104), (__int64)&v251);
      *(_WORD *)(v14 + 8) &= ~8u;
      *(_QWORD *)(v14 + 104) = 0LL;
    }
    CmpDereferenceNameControlBlockWithLock(*(_DWORD **)(v14 + 80), v112, v107);
    if ( (*(_DWORD *)(v14 + 8) & 4) != 0 )
      ExFreePoolWithTag(*(PVOID *)(v14 + 112), 0x6E494D43u);
    v125 = *(_QWORD **)(v14 + 192);
    if ( v125 )
    {
      v146 = v125[3];
      if ( v146 )
      {
        v147 = *v125;
        v118 = *(_QWORD *)(v146 + 16);
        if ( *(_QWORD **)(*v125 + 8LL) != v125 )
          goto LABEL_91;
        v148 = (_QWORD *)v125[1];
        if ( (_QWORD *)*v148 != v125 )
          goto LABEL_91;
        *v148 = v147;
        *(_QWORD *)(v147 + 8) = v148;
      }
      ExFreePoolWithTag(v125, 0);
      *(_QWORD *)(v14 + 192) = 0LL;
    }
    v126 = (_DWORD *)(v14 + 16);
    v127 = *(_QWORD *)(v14 + 72);
    if ( (*(_DWORD *)(v14 + 8) & 0x20000) != 0 )
    {
      CmpLockDeletedHashEntryExclusiveByKcb(v14, v122, v123, v124);
      CmpRemoveKeyHashFromDeletedKcbTable(*(_QWORD *)(v14 + 32), v14 + 16);
      CmpUnlockDeletedHashEntryByKcb(v14);
    }
    else
    {
      for ( n = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v14 + 32) + 1648LL)
                          + 8
                          * (3
                           * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v14 + 32) + 1656LL) - 1) & ((unsigned int)(101027 * (*v126 ^ (*v126 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*v126 ^ (*v126 >> 9))) >> 9)))
                           + 2)); n; n = (__int64 *)(v129 + 8) )
      {
        v129 = *n;
        if ( !*n )
          break;
        if ( (_DWORD *)v129 == v126 )
        {
          *n = *(_QWORD *)(v129 + 8);
          break;
        }
      }
    }
    *(_DWORD *)(v14 + 8) |= 0x80000u;
    if ( !v118 )
      goto LABEL_401;
    v130 = *(_QWORD *)(v118 + 32);
    v131 = *(_QWORD *)v118;
    do
    {
      v132 = v131;
      if ( v131 <= 1 )
      {
        v136 = (_QWORD *)(v118 + 224);
        if ( (_QWORD *)*v136 != v136 )
          KeBugCheckEx(0x51u, 0x34uLL, v118, 1uLL, 0LL);
        v238 = (_QWORD *)*((_QWORD *)&v251 + 1);
        if ( **((__int128 ***)&v251 + 1) == &v251 )
        {
          *(_QWORD *)(v118 + 232) = *((_QWORD *)&v251 + 1);
          *v136 = &v251;
          *v238 = v136;
          *((_QWORD *)&v251 + 1) = v118 + 224;
          *(_BYTE *)(v118 + 64) |= 1u;
          goto LABEL_401;
        }
        goto LABEL_91;
      }
      v133 = v131 - 1;
      v134 = v131 == 3 && (*(_DWORD *)(v118 + 184) & 0x40000) != 0 && *(_BYTE *)(v130 + 2952) == 1;
      v135 = _InterlockedCompareExchange64((volatile signed __int64 *)v118, v133, v131);
      v131 = v135;
    }
    while ( v135 != v132 );
    if ( v135 < v133 )
      KeBugCheckEx(0x51u, 0x25uLL, v118, 0LL, 0LL);
    if ( v134 )
      CmpDoQueueLateUnloadWorker(v130);
LABEL_401:
    if ( !v127 )
      goto LABEL_416;
    v231 = *(_QWORD *)(v127 + 32);
    v232 = *(_QWORD *)v127;
    while ( 2 )
    {
      v233 = v232;
      if ( v232 <= 1 )
      {
        v237 = (_QWORD *)(v127 + 224);
        if ( (_QWORD *)*v237 != v237 )
          KeBugCheckEx(0x51u, 0x34uLL, v127, 1uLL, 0LL);
        v239 = (_QWORD *)*((_QWORD *)&v251 + 1);
        if ( **((__int128 ***)&v251 + 1) == &v251 )
        {
          *(_QWORD *)(v127 + 232) = *((_QWORD *)&v251 + 1);
          *v237 = &v251;
          *v239 = v237;
          *((_QWORD *)&v251 + 1) = v127 + 224;
          *(_BYTE *)(v127 + 64) |= 1u;
          goto LABEL_416;
        }
        goto LABEL_91;
      }
      v234 = v232 - 1;
      v235 = v232 == 3 && (*(_DWORD *)(v127 + 184) & 0x40000) != 0 && *(_BYTE *)(v231 + 2952) == 1;
      v236 = _InterlockedCompareExchange64((volatile signed __int64 *)v127, v234, v232);
      v232 = v236;
      if ( v236 != v233 )
        continue;
      break;
    }
    if ( v236 < v234 )
      KeBugCheckEx(0x51u, 0x25uLL, v127, 0LL, 0LL);
    if ( v235 )
      CmpDoQueueLateUnloadWorker(v231);
LABEL_416:
    v9 = (ULONG_PTR)v249;
LABEL_417:
    if ( *(struct _KTHREAD **)(v14 + 56) != KeGetCurrentThread() )
      CmpDecommisssionKcb(v14);
LABEL_244:
    CmpUnlockKcb(v14);
    if ( v108 )
      CmpUnlockKcb(v108);
    v151 = (__int64 *)(*((_QWORD *)v95 + 206)
                     + 24
                     * ((unsigned int)(v95[414] - 1) & ((101027 * (v94 ^ (v94 >> 9))) ^ ((unsigned __int64)(101027 * (v94 ^ (v94 >> 9))) >> 9))));
    v151[1] = 0LL;
    _m_prefetchw(v151);
    v152 = *v151;
    v153 = *v151 - 16;
    if ( (*v151 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v153 = 0LL;
    if ( (v152 & 2) != 0 || (v154 = *v151, v154 != _InterlockedCompareExchange64(v151, v153, v152)) )
      ExfReleasePushLock(v151);
    KeAbPostRelease((unsigned __int64)v151);
    if ( _InterlockedExchangeAdd(v95 + 1060, 0xFFFFFFFF) != 1 )
      goto LABEL_264;
    v157 = v95 + 402;
    if ( *(_DWORD **)v157 == v157 )
      goto LABEL_255;
    CmpLockHiveListExclusive(v156, v155);
    v159 = *(_QWORD *)v157;
    if ( *(_DWORD **)(*(_QWORD *)v157 + 8LL) != v157
      || (v160 = (_QWORD *)*((_QWORD *)v95 + 202), (_DWORD *)*v160 != v157) )
    {
LABEL_91:
      __fastfail(3u);
    }
    *v160 = v159;
    *(_QWORD *)(v159 + 8) = v160;
    CmpUnlockHiveList(v159, v158);
LABEL_255:
    *v95 = -1160724768;
    HvFreeDirtyData(v95);
    CmpDeleteKcbCache(v95);
    v161 = (void *)*((_QWORD *)v95 + 232);
    if ( v161 )
      ExFreePoolWithTag(v161, 0x624E4D43u);
    v162 = (void *)*((_QWORD *)v95 + 230);
    if ( v162 )
      ExFreePoolWithTag(v162, 0x20204D43u);
    v163 = (void *)*((_QWORD *)v95 + 234);
    if ( v163 )
      ExFreePoolWithTag(v163, 0);
    v164 = (void *)*((_QWORD *)v95 + 603);
    if ( v164 )
      ExFreePoolWithTag(v164, 0);
    CmpReleaseGlobalQuota(4832LL);
    ExFreePoolWithTag(v95, 0);
LABEL_264:
    CmpDrainDelayDerefContext((_QWORD **)&v251);
    v70 = v240;
LABEL_270:
    if ( !v70 )
    {
      v8 = v253;
      a3 = v245;
      a2 = v246;
      continue;
    }
    break;
  }
  v14 = v9;
  CmpLockHashEntrySharedByKcb(v9);
  CmpLockKcbShared(v9);
LABEL_274:
  CmpUnlockKcb(v14);
  v45 = v242;
LABEL_118:
  *v258 = v14;
  *v259 = v70;
  *(_WORD *)v256 = v45;
  return 0;
}
