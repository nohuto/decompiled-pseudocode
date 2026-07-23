/*
 * XREFs of PopPepProcessEvent @ 0x1403B9A00
 * Callers:
 *     PopFxActivateComponentWorker @ 0x14037CC20 (PopFxActivateComponentWorker.c)
 *     PopPluginComponentActive @ 0x1403B8AA0 (PopPluginComponentActive.c)
 *     PopFxProcessWork @ 0x1403B8BD0 (PopFxProcessWork.c)
 *     PopFxActivateComponentDependents @ 0x1403BC2E0 (PopFxActivateComponentDependents.c)
 *     PopPluginDevicePower @ 0x1403BCABC (PopPluginDevicePower.c)
 *     PopPluginComponentIdleState @ 0x140473350 (PopPluginComponentIdleState.c)
 *     PopPepCompleteComponentIdleState @ 0x1405005E4 (PopPepCompleteComponentIdleState.c)
 *     PopPepUnregisterDevice @ 0x140B08930 (PopPepUnregisterDevice.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140248E20 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14024B4A0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExTryQueueWorkItem @ 0x140383E20 (ExTryQueueWorkItem.c)
 *     PopPepTriggerActivity @ 0x1403B9720 (PopPepTriggerActivity.c)
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
 *     PopPepReleaseActivityLink @ 0x1403BAB90 (PopPepReleaseActivityLink.c)
 *     PopPepPromoteActivities @ 0x1403BACA0 (PopPepPromoteActivities.c)
 *     PopPepStartDevicePowerOffActivity @ 0x1403BB1A0 (PopPepStartDevicePowerOffActivity.c)
 *     PopPepRequestWork @ 0x1403BB1C8 (PopPepRequestWork.c)
 *     KeReleaseSemaphore @ 0x1403BBA30 (KeReleaseSemaphore.c)
 *     PopPepStartActivity @ 0x14045722C (PopPepStartActivity.c)
 *     PopPepGetReadyActivityType @ 0x140457288 (PopPepGetReadyActivityType.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPepProcessEvent(
        __int64 a1,
        volatile LONG *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v6; // r12d
  ULONG_PTR v7; // r14
  ULONG_PTR v8; // rbp
  volatile LONG *v9; // r13
  unsigned __int8 CurrentIrql; // r15
  unsigned int v12; // esi
  int i; // ecx
  KIRQL v14; // al
  __int64 v15; // rax
  int v16; // edi
  unsigned int v17; // esi
  int v18; // r15d
  __int64 v19; // rdx
  int *v20; // rax
  __int64 v21; // rcx
  _DWORD *v22; // rax
  int v23; // ecx
  __int64 v24; // r8
  int v25; // eax
  ULONG_PTR v26; // r10
  int v27; // ecx
  __int64 v28; // r11
  _DWORD *v29; // r9
  _DWORD *v30; // rax
  int v31; // ebp
  unsigned int *v32; // rsi
  _DWORD **v33; // r10
  unsigned int v34; // r11d
  char v35; // r14
  __int64 *v36; // r8
  int v37; // edx
  int v38; // r9d
  __int64 *v39; // rdi
  int v40; // edx
  __int64 v41; // r8
  int v42; // r10d
  __int64 *v43; // rdx
  int v44; // r8d
  _DWORD **v45; // r9
  __int64 n; // r8
  __int64 *v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // r12
  __int64 v50; // r15
  __int64 v51; // r13
  unsigned int *v52; // r14
  unsigned int v53; // esi
  int v54; // r11d
  char v55; // bp
  __int64 *v56; // rdx
  int v57; // r9d
  __int64 *v58; // rdx
  unsigned int v59; // edi
  unsigned int v60; // r10d
  __int64 *v61; // r11
  __int64 *v62; // r11
  int v63; // r8d
  __int64 v64; // rdx
  int v65; // r9d
  __int64 *v66; // r8
  __int64 *v67; // r8
  _DWORD **v68; // r10
  int j; // edx
  unsigned int *v70; // rcx
  __int64 v71; // r14
  char v72; // bp
  __int64 *v73; // rdi
  __int64 *v74; // rdx
  _DWORD **v75; // r10
  unsigned int v76; // r10d
  __int64 v77; // rdx
  int v78; // r9d
  __int64 *v79; // rdx
  _DWORD **v80; // r9
  unsigned __int8 started; // bp
  unsigned int v82; // eax
  bool v83; // si
  unsigned __int64 v84; // rdx
  unsigned int v85; // r14d
  unsigned int kk; // ecx
  volatile signed __int32 *v87; // rdi
  bool v88; // zf
  unsigned __int8 v89; // si
  volatile signed __int32 mm; // edx
  int v91; // ecx
  int v92; // ecx
  int v93; // ecx
  int v94; // r9d
  int v95; // r9d
  int v96; // r9d
  int v97; // edx
  int v98; // edx
  __int64 m; // rcx
  int v100; // r8d
  unsigned int v101; // edi
  __int64 v103; // rdi
  unsigned int jj; // edx
  int ReadyActivityType; // eax
  unsigned int v106; // eax
  __int64 v107; // r14
  _ULARGE_INTEGER *p_ReadTransferCount; // rdi
  unsigned int v109; // esi
  __int64 v110; // rax
  int v111; // ecx
  int v112; // ecx
  int v113; // ecx
  int v114; // ecx
  int v115; // ecx
  int v116; // ecx
  int v117; // r9d
  int v118; // r9d
  int v119; // r9d
  int v120; // r9d
  int v121; // r9d
  unsigned int v122; // eax
  unsigned int v123; // eax
  __int64 v124; // rdx
  _DWORD *v125; // rcx
  __int64 k; // rcx
  int v127; // r9d
  __int64 v128; // rsi
  int v129; // edx
  __int64 ii; // rcx
  int v131; // r8d
  __int64 v132; // rdi
  __int64 v133; // rdi
  unsigned int v134; // [rsp+30h] [rbp-68h]
  int v135; // [rsp+34h] [rbp-64h]
  unsigned int v136; // [rsp+38h] [rbp-60h]
  KIRQL OldIrql; // [rsp+40h] [rbp-58h]
  __int64 *v138; // [rsp+48h] [rbp-50h]
  __int64 v139; // [rsp+50h] [rbp-48h]
  _DWORD **v140; // [rsp+58h] [rbp-40h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]
  volatile LONG *v142; // [rsp+A8h] [rbp+10h]
  char v143; // [rsp+B0h] [rbp+18h]
  int v144; // [rsp+C0h] [rbp+28h]
  bool v145; // [rsp+C0h] [rbp+28h]

  v142 = a2;
  v6 = 0;
  v7 = (int)a4;
  v8 = (int)a3;
  v9 = a2;
  v143 = 0;
  if ( !a2 || *(_DWORD *)(a1 + 180) == 1 )
    goto LABEL_3;
  if ( a3 == 6 )
  {
    if ( a4 == 6 )
      goto LABEL_3;
  }
  else if ( a3 <= 5 && LOBYTE(ActivityAttributes[17 * (int)a3]) == 1 )
  {
    goto LABEL_3;
  }
  if ( a4 > 5 || LOBYTE(ActivityAttributes[17 * (int)a4]) != 1 )
  {
    v14 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
    OldIrql = v14;
    if ( *(_BYTE *)(a1 + 125) != 1 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(v9);
      goto LABEL_27;
    }
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 64), v14);
  }
LABEL_3:
  v143 = 1;
  CurrentIrql = KeGetCurrentIrql();
  OldIrql = CurrentIrql;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v12 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 64), 0x1Fu) )
      v12 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(a1 + 64), CurrentIrql);
    for ( i = *(_DWORD *)(a1 + 64); (i & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)(a1 + 64) )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 64), 0x40000000u);
      if ( (++v12 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v12);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)(a1 + 64), CurrentIrql);
  }
  *(_BYTE *)(a1 + 125) = 1;
LABEL_27:
  if ( (_DWORD)v8 == 6 || (v15 = 136 * v8, v16 = HIDWORD(ActivityAttributes[17 * v8 + 1]), v16 < 2) )
  {
    v17 = *(_DWORD *)(a1 + 120);
    v18 = 2;
    v144 = 2;
    v15 = 136 * v8;
    v134 = v17;
LABEL_30:
    v19 = v15;
    if ( v9 )
    {
      v17 += *((_DWORD *)v9 + 26);
      v134 = v17;
    }
LABEL_32:
    v16 = v18;
    if ( (_DWORD)v8 == 6 )
      goto LABEL_52;
    goto LABEL_33;
  }
  v17 = *(_DWORD *)(a1 + 120);
  v18 = HIDWORD(ActivityAttributes[17 * v8 + 1]);
  v134 = v17;
  v144 = v18;
  if ( v16 == 2 )
    goto LABEL_30;
  v144 = HIDWORD(ActivityAttributes[17 * v8 + 1]);
  v19 = 136 * v8;
  if ( v16 != 3 )
    goto LABEL_32;
  v21 = *(unsigned int *)(a1 + 180);
  v144 = 3;
  if ( !(_DWORD)v21 )
    goto LABEL_32;
  v22 = (_DWORD *)(a1 + 296);
  do
  {
    v17 += *v22;
    v22 += 52;
    --v21;
  }
  while ( v21 );
  v19 = 136 * v8;
LABEL_33:
  if ( (unsigned int)v8 <= 5 && *((_BYTE *)ActivityAttributes + v19) == 1 )
    v20 = *(int **)(a1 + 8 * v8 + 72);
  else
    v20 = *(int **)&v9[2 * v8 + 14];
  if ( (*v20 & 4) == 0 )
    PopFxBugCheck(0x667uLL, (ULONG_PTR)v20, v8, *v20);
  *v20 &= ~4u;
  guard_dispatch_icall_no_overrides(a1, v9, v8);
  v18 = v16;
  v144 = v16;
  v134 = v17;
LABEL_52:
  v23 = 1;
  if ( (_DWORD)v7 == 6 )
    goto LABEL_67;
  v24 = 17 * v7;
  v25 = HIDWORD(ActivityAttributes[17 * v7]);
  if ( v25 )
  {
    if ( v25 == 1 )
    {
      v91 = ActivityAttributes[17 * v7 + 5];
      if ( v91 )
      {
        v94 = **(_DWORD **)(a1 + 72);
        if ( (v94 & v91) != 0 )
        {
          if ( (v94 & 2) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(a1 + 120));
          **(_DWORD **)(a1 + 72) &= 0xFFFFFFFC;
        }
      }
      v92 = ActivityAttributes[v24 + 7];
      if ( v92 )
      {
        _mm_lfence();
        v95 = **(_DWORD **)(a1 + 104);
        if ( (v92 & v95) != 0 )
        {
          _mm_lfence();
          if ( (v95 & 2) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(a1 + 120));
          **(_DWORD **)(a1 + 104) &= 0xFFFFFFFC;
        }
      }
      v93 = HIDWORD(ActivityAttributes[v24 + 7]);
      if ( !v93 )
        goto LABEL_200;
      _mm_lfence();
      v96 = **(_DWORD **)(a1 + 112);
      if ( (v93 & v96) == 0 )
        goto LABEL_200;
    }
    else
    {
      if ( v25 != 2 )
        goto LABEL_54;
      if ( *(_BYTE *)(a1 + 125) )
      {
        v111 = ActivityAttributes[17 * v7 + 5];
        if ( v111 )
        {
          v117 = **(_DWORD **)(a1 + 72);
          if ( (v111 & v117) != 0 )
          {
            if ( (v117 & 2) != 0 )
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 120));
            **(_DWORD **)(a1 + 72) &= 0xFFFFFFFC;
          }
        }
      }
      v112 = HIDWORD(ActivityAttributes[v24 + 5]);
      if ( v112 )
      {
        _mm_lfence();
        v118 = **((_DWORD **)v9 + 8);
        if ( (v112 & v118) != 0 )
        {
          _mm_lfence();
          if ( (v118 & 2) != 0 )
            _InterlockedDecrement(v9 + 26);
          **((_DWORD **)v9 + 8) &= 0xFFFFFFFC;
        }
      }
      v113 = ActivityAttributes[v24 + 6];
      if ( v113 )
      {
        _mm_lfence();
        v119 = **((_DWORD **)v9 + 9);
        if ( (v113 & v119) != 0 )
        {
          _mm_lfence();
          if ( (v119 & 2) != 0 )
            _InterlockedDecrement(v9 + 26);
          **((_DWORD **)v9 + 9) &= 0xFFFFFFFC;
        }
      }
      v114 = HIDWORD(ActivityAttributes[v24 + 6]);
      if ( v114 )
      {
        _mm_lfence();
        v120 = **((_DWORD **)v9 + 10);
        if ( (v114 & v120) != 0 )
        {
          _mm_lfence();
          if ( (v120 & 2) != 0 )
            _InterlockedDecrement(v9 + 26);
          **((_DWORD **)v9 + 10) &= 0xFFFFFFFC;
        }
      }
      if ( !*(_BYTE *)(a1 + 125) )
        goto LABEL_200;
      v115 = ActivityAttributes[v24 + 7];
      if ( v115 )
      {
        _mm_lfence();
        v121 = **(_DWORD **)(a1 + 104);
        if ( (v115 & v121) != 0 )
        {
          _mm_lfence();
          if ( (v121 & 2) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(a1 + 120));
          **(_DWORD **)(a1 + 104) &= 0xFFFFFFFC;
        }
      }
      v116 = HIDWORD(ActivityAttributes[v24 + 7]);
      if ( !v116 || (_mm_lfence(), v96 = **(_DWORD **)(a1 + 112), (v116 & v96) == 0) )
      {
LABEL_200:
        v23 = 1;
        goto LABEL_54;
      }
    }
    _mm_lfence();
    if ( (v96 & 2) != 0 )
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 120));
    **(_DWORD **)(a1 + 112) &= 0xFFFFFFFC;
    goto LABEL_200;
  }
LABEL_54:
  if ( (unsigned int)v7 > 5 || LOBYTE(ActivityAttributes[v24]) != 1 )
    v23 = 0;
  v88 = v23 == 1;
  v26 = a1 + 72;
  v27 = 0;
  if ( !v88 )
    v26 = (ULONG_PTR)(v9 + 14);
  v28 = 0LL;
  while ( v27 < 6 )
  {
    v29 = *(_DWORD **)(v26 + 8 * v28);
    if ( v29 )
    {
      if ( (*((_DWORD *)&ActivityAttributes[17 * v7 + 2] + v28) & *v29) != 0 )
        PopFxBugCheck(0x666uLL, v26, v7, v27);
    }
    ++v27;
    ++v28;
  }
  if ( v9 )
    v30 = *(_DWORD **)&v9[2 * v7 + 14];
  else
    v30 = *(_DWORD **)(a1 + 8 * v7 + 72);
  *v30 |= 1u;
  v30[1] = 0;
  guard_dispatch_icall_no_overrides(a1, v9, 0LL);
LABEL_67:
  v31 = v18;
  if ( !v9 && v18 == 2 )
    v31 = 1;
  v32 = *(unsigned int **)(a1 + 72);
  v33 = (_DWORD **)(a1 + 72);
  v140 = (_DWORD **)(a1 + 72);
  v34 = *v32;
  if ( (*v32 & 1) != 0 )
  {
    v35 = *((_BYTE *)v32 + 16);
    v36 = qword_140001AA8;
    v37 = 0;
    if ( !v35 )
      v36 = qword_140001A90;
    while ( v37 <= 0 )
    {
      if ( *(_DWORD *)v36 && (*(_DWORD *)v36 & **v33) != 0 )
        goto LABEL_91;
      ++v37;
      ++v33;
      v36 = (__int64 *)((char *)v36 + 4);
    }
    v38 = *(_DWORD *)(a1 + 180);
    v144 = v18;
    while ( !v38 )
    {
      v39 = qword_140001AA8;
      v40 = 1;
      v41 = 1LL;
      if ( !v35 )
        v39 = qword_140001A90;
      while ( v40 <= 3 )
      {
        v42 = *((_DWORD *)v39 + v41);
        if ( v42 && (v42 & **(_DWORD **)(a1 + 8 * v41 + 248)) != 0 )
          goto LABEL_91;
        ++v40;
        ++v41;
      }
      v38 = 1;
    }
    v43 = &qword_140001AB8;
    v44 = 4;
    if ( !v35 )
      v43 = &qword_140001AA0;
    v45 = (_DWORD **)(a1 + 104);
    while ( v44 <= 5 )
    {
      if ( *(_DWORD *)v43 && (*(_DWORD *)v43 & **v45) != 0 )
        goto LABEL_91;
      ++v44;
      ++v45;
      v43 = (__int64 *)((char *)v43 + 4);
    }
    v32[2] = v32[1];
    *v32 = v34 & 0xFFFFFFFC | 2;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 120));
LABEL_91:
    v33 = (_DWORD **)(a1 + 72);
    v140 = (_DWORD **)(a1 + 72);
  }
  if ( v31 == 2 )
  {
    LODWORD(n) = *((_DWORD *)v9 + 2);
    v136 = n;
    v135 = n;
  }
  else
  {
    v122 = *(_DWORD *)(a1 + 180);
    n = 0LL;
    if ( v31 != 3 )
      n = v122;
    v123 = v122 - 1;
    v135 = n;
    if ( v31 != 3 )
      v123 = 0;
    v136 = v123;
    if ( (unsigned int)n > v123 )
      goto LABEL_126;
  }
  do
  {
    v47 = qword_140001AE0;
    v48 = 3LL;
    v138 = qword_140001AE0;
    v139 = 3LL;
    v49 = a1 + 208LL * (unsigned int)n + 192;
    v50 = 17LL;
    v51 = 64LL;
    do
    {
      v52 = *(unsigned int **)(v49 + v51);
      v53 = *v52;
      if ( (*v52 & 1) != 0 )
      {
        v54 = *(_DWORD *)v47;
        if ( *(_DWORD *)v47 )
        {
          v55 = *((_BYTE *)v52 + 16);
          v56 = qword_140001AA8;
          v57 = 0;
          if ( !v55 )
            v56 = qword_140001A90;
          v58 = &v56[v50];
          while ( v57 <= 0 )
          {
            if ( *(_DWORD *)v58 && (*(_DWORD *)v58 & **v33) != 0 )
              goto LABEL_122;
            ++v57;
            ++v33;
            v58 = (__int64 *)((char *)v58 + 4);
          }
          if ( v54 == 2 )
          {
            v59 = *(_DWORD *)(v49 + 8);
            v60 = v59;
          }
          else if ( v54 == 3 )
          {
            v60 = 0;
            v59 = *(_DWORD *)(a1 + 180) - 1;
          }
          else
          {
            v60 = *(_DWORD *)(a1 + 180);
            v59 = 0;
          }
          while ( v60 <= v59 )
          {
            if ( v55 )
              v61 = &ActivityAttributes[11];
            else
              v61 = &ActivityAttributes[8];
            v62 = &v61[v50];
            v63 = 1;
            v64 = 1LL;
            while ( v63 <= 3 )
            {
              v65 = *((_DWORD *)v62 + v64);
              if ( v65 && (v65 & **(_DWORD **)(a1 + 8 * (v64 + 26LL * v60) + 248)) != 0 )
                goto LABEL_122;
              ++v63;
              ++v64;
            }
            ++v60;
          }
          if ( v55 )
            v66 = &ActivityAttributes[13];
          else
            v66 = &ActivityAttributes[10];
          v67 = &v66[v50];
          v68 = (_DWORD **)(a1 + 104);
          for ( j = 4; j <= 5; ++j )
          {
            if ( *(_DWORD *)v67 && (*(_DWORD *)v67 & **v68) != 0 )
              goto LABEL_122;
            ++v68;
            v67 = (__int64 *)((char *)v67 + 4);
          }
          v52[2] = v52[1];
          *v52 = v53 & 0xFFFFFFFC | 2;
          _InterlockedIncrement((volatile signed __int32 *)(v49 + 104));
LABEL_122:
          v48 = v139;
          v47 = v138;
        }
        else
        {
          v52[2] = v52[1];
          *v52 = v53 & 0xFFFFFFFC | 2;
          _InterlockedIncrement((volatile signed __int32 *)(v49 + 104));
        }
      }
      v33 = v140;
      v47 += 17;
      v50 += 17LL;
      v51 += 8LL;
      v138 = v47;
      v139 = --v48;
    }
    while ( v48 );
    n = (unsigned int)(v135 + 1);
    v135 = n;
  }
  while ( (unsigned int)n <= v136 );
  v9 = v142;
  v6 = 0;
LABEL_126:
  _mm_lfence();
  v70 = *(unsigned int **)(a1 + 104);
  if ( (*v70 & 1) != 0 )
  {
    *v70 = *v70 & 0xFFFFFFFC | 2;
    v70[2] = v70[1];
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 120));
  }
  v71 = *(_QWORD *)(a1 + 112);
  if ( (*(_DWORD *)v71 & 1) != 0 )
  {
    v72 = *(_BYTE *)(v71 + 16);
    v73 = qword_140001D50;
    v74 = qword_140001D50;
    v75 = (_DWORD **)(a1 + 72);
    if ( !v72 )
      v74 = qword_140001D38;
    n = 0LL;
    while ( (int)n <= 0 )
    {
      if ( *(_DWORD *)v74 && (*(_DWORD *)v74 & **v75) != 0 )
        goto LABEL_156;
      n = (unsigned int)(n + 1);
      ++v75;
      v74 = (__int64 *)((char *)v74 + 4);
    }
    v76 = 0;
    if ( !v72 )
      v73 = qword_140001D38;
    while ( v76 <= *(_DWORD *)(a1 + 180) - 1 )
    {
      n = 1LL;
      v77 = 1LL;
      while ( (int)n <= 3 )
      {
        v78 = *((_DWORD *)v73 + v77);
        if ( v78 && (v78 & **(_DWORD **)(a1 + 8 * (v77 + 26LL * v76) + 248)) != 0 )
          goto LABEL_156;
        n = (unsigned int)(n + 1);
        ++v77;
      }
      ++v76;
    }
    v79 = &qword_140001D60;
    n = 4LL;
    if ( !v72 )
      v79 = &qword_140001D48;
    v80 = (_DWORD **)(a1 + 104);
    while ( (int)n <= 5 )
    {
      if ( *(_DWORD *)v79 && (*(_DWORD *)v79 & **v80) != 0 )
        goto LABEL_156;
      n = (unsigned int)(n + 1);
      ++v80;
      v79 = (__int64 *)((char *)v79 + 4);
    }
    *(_DWORD *)v71 = *(_DWORD *)v71 & 0xFFFFFFFC | 2;
    *(_DWORD *)(v71 + 8) = *(_DWORD *)(v71 + 4);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 120));
  }
LABEL_156:
  started = 0;
  if ( a6 )
  {
    v97 = *(_DWORD *)(a1 + 120);
    if ( v97 )
    {
      n = 0LL;
      for ( k = 0LL; k <= 0; ++k )
      {
        v127 = **(_DWORD **)(a1 + 8 * k + 72);
        if ( (v127 & 2) != 0 || (v127 & 8) != 0 )
        {
          if ( (_DWORD)n == 6 )
            break;
          _InterlockedDecrement((volatile signed __int32 *)(a1 + 120));
          v133 = (int)n;
          started = guard_dispatch_icall_no_overrides(a1, 0LL, a6);
          **(_DWORD **)(a1 + 8 * v133 + 72) &= ~2u;
          **(_DWORD **)(a1 + 8 * v133 + 72) &= ~8u;
          **(_DWORD **)(a1 + 8 * v133 + 72) |= 4u;
          goto LABEL_157;
        }
        n = (unsigned int)(n + 1);
      }
    }
    if ( v9 && *((_DWORD *)v9 + 26) )
    {
      v98 = 1;
      for ( m = 1LL; m <= 3; ++m )
      {
        v100 = **(_DWORD **)&v9[2 * m + 14];
        if ( (v100 & 2) != 0 || (v100 & 8) != 0 )
          goto LABEL_238;
        ++v98;
      }
      v98 = 6;
LABEL_238:
      _InterlockedDecrement(v9 + 26);
      v103 = v98;
      started = guard_dispatch_icall_no_overrides(a1, v9, a6);
      **(_DWORD **)&v9[2 * v103 + 14] &= ~2u;
      **(_DWORD **)&v9[2 * v103 + 14] &= ~8u;
      **(_DWORD **)&v9[2 * v103 + 14] |= 4u;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 125) == 1 )
      {
        for ( n = 0LL; (unsigned int)n < *(_DWORD *)(a1 + 180); n = (unsigned int)(n + 1) )
        {
          v110 = 208LL * (unsigned int)n;
          if ( *(_DWORD *)(v110 + a1 + 296) )
          {
            v128 = v110 + a1 + 192;
            v129 = 1;
            for ( ii = 1LL; ii <= 3; ++ii )
            {
              v131 = **(_DWORD **)(v128 + 8 * ii + 56);
              if ( (v131 & 2) != 0 || (v131 & 8) != 0 )
                goto LABEL_324;
              ++v129;
            }
            v129 = 6;
LABEL_324:
            _InterlockedDecrement((volatile signed __int32 *)(v128 + 104));
            v132 = v129;
            started = guard_dispatch_icall_no_overrides(a1, v128, a6);
            **(_DWORD **)(v128 + 8 * v132 + 56) &= ~2u;
            **(_DWORD **)(v128 + 8 * v132 + 56) &= ~8u;
            **(_DWORD **)(v128 + 8 * v132 + 56) |= 4u;
            goto LABEL_157;
          }
        }
      }
      if ( v97 )
      {
        n = *(unsigned int *)(a1 + 180);
        for ( jj = 0; jj < (unsigned int)n; ++jj )
        {
          if ( *(_DWORD *)(208LL * jj + a1 + 296) )
            goto LABEL_157;
        }
        ReadyActivityType = PopPepGetReadyActivityType(a1 + 72, 4LL, 5LL);
        started = PopPepStartActivity(a1, 0, (int)a1 + 72, ReadyActivityType, a1 + 120, a6);
      }
    }
  }
LABEL_157:
  v82 = *(_DWORD *)(a1 + 120);
  if ( v144 == 2 )
  {
    if ( v9 )
      v82 += *((_DWORD *)v9 + 26);
  }
  else if ( v144 == 3 )
  {
    v124 = *(unsigned int *)(a1 + 180);
    if ( (_DWORD)v124 )
    {
      v125 = (_DWORD *)(a1 + 296);
      do
      {
        v82 += *v125;
        v125 += 52;
        --v124;
      }
      while ( v124 );
    }
  }
  v83 = 0;
  v145 = 0;
  if ( (*(_QWORD *)(a1 + 24) & 1) == 0 && !v82 && !started && !*(_DWORD *)(a1 + 140) )
  {
    v83 = *(_BYTE *)(a1 + 136) != 0;
    v145 = v83;
  }
  v84 = v134;
  if ( v82 > v134 )
  {
    v106 = v82 - v134;
    if ( v106 )
    {
      v107 = v106;
      p_ReadTransferCount = (_ULARGE_INTEGER *)&PopFxBlockingDeviceListLock.ReadTransferCount;
      if ( (*(_QWORD *)(a1 + 24) & 0x20LL) != 0 )
        p_ReadTransferCount = &PopFxBlockingDeviceListLock.Timer.DueTime;
      do
      {
        KeReleaseSemaphore((PRKSEMAPHORE)&p_ReadTransferCount[8], 0, 1, 0);
        v109 = 1;
        do
        {
          _m_prefetchw(&p_ReadTransferCount[12]);
          if ( (_InterlockedOr((volatile signed __int32 *)&p_ReadTransferCount[12], v109) & v109) == 0 )
          {
            if ( ExTryQueueWorkItem((_ULARGE_INTEGER *)&p_ReadTransferCount[4 * v6 + 14 + v6].QuadPart, 48LL) )
              break;
            _InterlockedAnd((volatile signed __int32 *)&p_ReadTransferCount[12], ~v109);
          }
          ++v6;
          v109 = __ROL4__(v109, 1);
        }
        while ( v6 < 4 );
        v6 = 0;
        --v107;
      }
      while ( v107 );
      v83 = v145;
    }
  }
  if ( v143 == 1 )
  {
    v85 = 0;
    for ( kk = 0; kk < 6; ++kk )
    {
      v84 = *(_QWORD *)(a1 + 8LL * kk + 72);
      if ( v84 && *(_DWORD *)v84 )
      {
        v87 = (volatile signed __int32 *)(a1 + 64);
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64), OldIrql);
        goto LABEL_181;
      }
    }
    if ( *(_BYTE *)(a1 + 136) )
      *(_BYTE *)(a1 + 125) = 0;
    v87 = (volatile signed __int32 *)(a1 + 64);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v87 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(a1 + 64), retaddr);
    v88 = KiIrqlFlags == 0;
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      v85 = 0;
      *v142 = 0;
    }
    else
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v142, retaddr);
      v85 = 0;
    }
    v87 = (volatile signed __int32 *)(a1 + 64);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v87, 0xBFFFFFFF);
      _InterlockedDecrement(v87);
      v88 = KiIrqlFlags == 0;
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented((volatile signed __int32 *)(a1 + 64), retaddr);
      v88 = KiIrqlFlags == 0;
    }
  }
  if ( !v88 )
  {
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), OldIrql);
    v87 = (volatile signed __int32 *)(a1 + 64);
  }
  __writecr8(OldIrql);
LABEL_181:
  if ( v83 )
  {
    started = 0;
    v89 = KeGetCurrentIrql();
    if ( v89 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v84) = 2;
      KiRaiseIrqlProcessIrqlFlags(v89, v84);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset(v87, 0x1Fu) )
        v85 = ExpWaitForSpinLockExclusiveAndAcquire((int *)v87, v89);
      for ( mm = *v87; (*v87 & 0xBFFFFFFF) != 0x80000000; mm = *v87 )
      {
        if ( (mm & 0x40000000) == 0 )
          _InterlockedOr(v87, 0x40000000u);
        if ( (++v85 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v85);
        }
        else
        {
          _mm_pause();
        }
      }
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)v87, v89);
    }
    v88 = (*(_BYTE *)(a1 + 24) & 1) == 0;
    *(_BYTE *)(a1 + 125) = 1;
    if ( v88 && !*(_DWORD *)(a1 + 140) && *(_BYTE *)(a1 + 136) && !**(_DWORD **)(a1 + 104) && !**(_DWORD **)(a1 + 112) )
    {
      v101 = *(_DWORD *)(a1 + 120);
      PopPepTriggerActivity(a1, 0LL, 4, 0);
      PopPepPromoteActivities(a1, 0LL, 1LL);
      if ( a6 && **(_DWORD **)(a1 + 104) == 2 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 120));
        started = PopPepStartDevicePowerOffActivity(a1, 0LL, a6);
        **(_DWORD **)(a1 + 104) &= ~2u;
        **(_DWORD **)(a1 + 104) &= ~8u;
        **(_DWORD **)(a1 + 104) |= 4u;
      }
      else
      {
        PopPepRequestWork(a1, v101, *(unsigned int *)(a1 + 120));
      }
    }
    LOBYTE(n) = 1;
    PopPepReleaseActivityLink(a1, 0LL, n, v89);
  }
  return started;
}
