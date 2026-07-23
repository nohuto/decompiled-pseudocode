/*
 * XREFs of CcPinFileData @ 0x1402C1530
 * Callers:
 *     CcZeroDataInCache @ 0x1403A0CB8 (CcZeroDataInCache.c)
 *     CcMapData @ 0x1409DFB60 (CcMapData.c)
 *     CcMapDataCommon @ 0x140A360B0 (CcMapDataCommon.c)
 *     CcPinMappedData @ 0x140A622F0 (CcPinMappedData.c)
 *     CcPinRead @ 0x140A82A20 (CcPinRead.c)
 *     CcPreparePinWrite @ 0x140AC4F70 (CcPreparePinWrite.c)
 * Callees:
 *     CcAllocateInitializeBcb @ 0x140219DA4 (CcAllocateInitializeBcb.c)
 *     MmDeterminePoolType @ 0x14021A220 (MmDeterminePoolType.c)
 *     ExDisableResourceBoostLite @ 0x14021A270 (ExDisableResourceBoostLite.c)
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ExpAddResourceToSystemResourceList @ 0x14021B4EC (ExpAddResourceToSystemResourceList.c)
 *     ExAcquireSharedStarveExclusive @ 0x14025F880 (ExAcquireSharedStarveExclusive.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x14025F9B4 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 *     RtlStdLogStackTrace @ 0x140260150 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1402601DC (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x1402602B0 (RtlStdReleaseStackTrace.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x140278050 (KeAbPreWait.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     CcUnpinFileDataEx @ 0x1402C11D0 (CcUnpinFileDataEx.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1402C2C60 (CcAcquireBcbLockAndVacbLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1402C2CE0 (CcReleaseBcbLockAndVacbLock.c)
 *     CcGetVirtualAddress @ 0x1402C2D60 (CcGetVirtualAddress.c)
 *     CcSetVacbLargeOffset @ 0x1402C3430 (CcSetVacbLargeOffset.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402C3C28 (ExpAcquireSharedStarveExclusive.c)
 *     SetVacb @ 0x1402C3ED0 (SetVacb.c)
 *     CcMapAndRead @ 0x1402C86B0 (CcMapAndRead.c)
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     CcAllocateVacbLevels @ 0x1403C0CDC (CcAllocateVacbLevels.c)
 *     CcFreeUnusedVacbLevels @ 0x1403C0D84 (CcFreeUnusedVacbLevels.c)
 *     CcDereferenceFileOffset @ 0x1404EC870 (CcDereferenceFileOffset.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140528A54 (PerfLogExecutiveResourceInitialize.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052FCB0 (ExpTraceLogBadResourceAddress.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcPinFileData(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        char a4,
        char a5,
        unsigned int a6,
        struct _KLOCK_ENTRIES *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  __int64 *v9; // r12
  struct _KLOCK_ENTRIES *v10; // r9
  __int64 v11; // r14
  unsigned __int64 v12; // rdi
  int v13; // r15d
  volatile signed __int32 *v14; // rbx
  struct _KLOCK_ENTRY *v15; // rdx
  unsigned __int64 v16; // r13
  unsigned __int8 CurrentIrql; // si
  AutoBoost *v18; // rdi
  int v19; // r12d
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  struct _KLOCK_ENTRIES *v22; // r9
  signed __int32 v23; // ett
  __int64 v24; // r9
  char *v25; // r8
  char v26; // si
  __int64 v27; // rdi
  __int64 v28; // r10
  __int64 v29; // r11
  int v30; // edx
  int v31; // ecx
  __int64 v32; // rbx
  int v33; // ecx
  __int64 v34; // r9
  __int64 v35; // r10
  _QWORD *v36; // rdi
  __int64 v37; // rdi
  __int16 v38; // ax
  unsigned int v39; // edx
  unsigned int v40; // eax
  char v41; // si
  _QWORD *v42; // rsi
  struct _KTHREAD *v43; // r8
  __int64 v44; // r9
  struct _ERESOURCE *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rbx
  struct _KTHREAD *v48; // rsi
  NTSTATUS v49; // r8d
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rbx
  unsigned int v52; // r15d
  unsigned int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // r12
  unsigned __int8 v56; // si
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rbx
  __int64 v60; // rcx
  char *v61; // r8
  int v62; // edx
  int v63; // r9d
  unsigned int v64; // r11d
  __int16 v65; // r8
  char v66; // r10
  unsigned int v67; // r12d
  _QWORD *PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // r8
  __int64 v70; // r9
  char *v71; // r15
  __int64 v72; // rbx
  _KSWAPPABLE_PAGE *v73; // rsi
  struct _KLOCK_ENTRIES *v74; // r9
  AutoBoost *v75; // rax
  AutoBoost *v76; // r13
  __int64 *v77; // rax
  __int64 v78; // rdi
  __int64 **v79; // rdx
  struct _KTHREAD *v80; // r8
  __int64 v81; // r9
  struct _ERESOURCE *v82; // rcx
  __int64 v83; // rdx
  _QWORD *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // r9
  int v87; // r8d
  int v88; // ecx
  __int64 v89; // r10
  int v90; // ecx
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rax
  signed __int64 v94; // rax
  signed __int64 v95; // rdx
  __int64 v96; // rtt
  int v97; // r12d
  _QWORD *v98; // rbx
  __int64 v99; // rbx
  struct _KEVENT *v100; // rcx
  struct _ERESOURCE *v101; // rcx
  char v102; // dl
  char v103; // al
  __int64 v104; // r15
  struct _KTHREAD *v105; // rsi
  int v106; // r9d
  NTSTATUS v107; // edx
  unsigned __int64 v108; // rbx
  __int64 *v109; // r15
  unsigned int v110; // eax
  int v111; // r12d
  unsigned int v112; // ecx
  unsigned __int8 v113; // dl
  KSPIN_LOCK *v114; // r12
  __int64 *v115; // rax
  unsigned __int16 v116; // r13
  int RecordedStackTraceIndex; // eax
  __int64 v118; // rbx
  struct _KEVENT *v119; // rcx
  __int64 v120; // rbx
  __int64 v122; // rbx
  __int64 v123; // rdx
  char v125; // [rsp+3Ch] [rbp-19Ch] BYREF
  char v126[3]; // [rsp+3Dh] [rbp-19Bh] BYREF
  int v127; // [rsp+40h] [rbp-198h] BYREF
  _QWORD *v128; // [rsp+48h] [rbp-190h]
  unsigned int v129; // [rsp+50h] [rbp-188h]
  __int64 v130; // [rsp+58h] [rbp-180h] BYREF
  int v131; // [rsp+60h] [rbp-178h]
  int v132; // [rsp+64h] [rbp-174h]
  unsigned int v133; // [rsp+68h] [rbp-170h]
  int v134; // [rsp+6Ch] [rbp-16Ch]
  unsigned __int64 v135; // [rsp+70h] [rbp-168h]
  _QWORD *v136; // [rsp+78h] [rbp-160h]
  __int64 v137; // [rsp+80h] [rbp-158h] BYREF
  int v138; // [rsp+88h] [rbp-150h]
  __int64 *v139; // [rsp+90h] [rbp-148h]
  __int64 v140; // [rsp+98h] [rbp-140h] BYREF
  unsigned __int64 v141; // [rsp+A0h] [rbp-138h]
  int v142; // [rsp+A8h] [rbp-130h]
  int v143; // [rsp+ACh] [rbp-12Ch]
  BOOL v144; // [rsp+B0h] [rbp-128h]
  int v145; // [rsp+B4h] [rbp-124h]
  int v146; // [rsp+B8h] [rbp-120h]
  char *v147; // [rsp+C0h] [rbp-118h]
  NTSTATUS v148; // [rsp+C8h] [rbp-110h]
  int v149; // [rsp+CCh] [rbp-10Ch]
  NTSTATUS v150; // [rsp+D0h] [rbp-108h]
  __int64 v151; // [rsp+D8h] [rbp-100h]
  __int64 v152; // [rsp+E0h] [rbp-F8h]
  __int64 v153; // [rsp+E8h] [rbp-F0h]
  __int64 v154; // [rsp+F0h] [rbp-E8h]
  __int64 v155; // [rsp+F8h] [rbp-E0h]
  int v156; // [rsp+100h] [rbp-D8h]
  int v157; // [rsp+104h] [rbp-D4h]
  __int64 v158; // [rsp+108h] [rbp-D0h]
  __int64 *v159; // [rsp+110h] [rbp-C8h]
  _QWORD *v160; // [rsp+118h] [rbp-C0h]
  __int64 *v161; // [rsp+120h] [rbp-B8h]
  struct _KLOCK_ENTRIES *v162; // [rsp+128h] [rbp-B0h]
  __int64 v163; // [rsp+130h] [rbp-A8h]
  _QWORD *v164; // [rsp+138h] [rbp-A0h]
  _QWORD v165[4]; // [rsp+140h] [rbp-98h] BYREF
  _OWORD v166[3]; // [rsp+160h] [rbp-78h] BYREF
  __int64 v167; // [rsp+190h] [rbp-48h]
  void *retaddr; // [rsp+1D8h] [rbp+0h]

  LODWORD(v135) = a3;
  v9 = a2;
  v139 = a2;
  v161 = a2;
  v10 = a7;
  v159 = (__int64 *)a7;
  v162 = a7;
  v128 = a8;
  v164 = a8;
  v160 = a9;
  v163 = (__int64)a9;
  v136 = 0LL;
  v129 = 0;
  v127 = 0;
  v130 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v155 = v11;
  v12 = a3;
  v141 = a3;
  if ( a3 + *a2 > *(_QWORD *)(v11 + 32) )
    KeBugCheckEx(0x34u, 0x146uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  a7->Thread = 0LL;
  *a8 = 0LL;
  if ( (a6 & 4) == 0 )
  {
    *a8 = CcGetVirtualAddress(v11, *a2, (unsigned int)&v130, (unsigned int)&v127, (a6 >> 6) & 1, 0);
LABEL_4:
    v13 = 1;
    goto LABEL_5;
  }
  v127 = 0x40000 - (*(_DWORD *)a2 & 0x3FFFF);
  v122 = *a2;
  if ( *(__int64 *)(v11 + 32) <= 0x2000000 )
    goto LABEL_4;
  v165[3] = 0LL;
  v165[1] = v165;
  v165[0] = v165;
  v165[2] = 0LL;
  v123 = *(_DWORD *)(v11 + 152) >> 9;
  LOBYTE(v123) = (*(_DWORD *)(v11 + 152) & 0x200) != 0;
  if ( !(unsigned __int8)CcAllocateVacbLevels((unsigned int)(CcMaxVacbLevelsSeen - 1), v123, v165) )
    RtlRaiseStatus(-1073741670);
  v13 = 1;
  CcAcquireBcbLockAndVacbLock(1LL, v11);
  SetVacb(v11, v122, -1LL, v165);
  CcReleaseBcbLockAndVacbLock(1LL, v11);
  CcFreeUnusedVacbLevels(v165);
LABEL_5:
  v14 = (volatile signed __int32 *)(v11 + 288);
  v16 = KeAbPreAcquire(v11 + 288, 0LL, 0LL, v10);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 1 )
    __writecr8(1uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v15) = 1;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v15);
  }
  if ( !_interlockedbittestandreset(v14, 0) )
  {
    v18 = (AutoBoost *)v16;
    ++*(_DWORD *)(v11 + 304);
    v19 = 4;
LABEL_11:
    v20 = *v14;
    do
    {
      while ( (v20 & 1) == 0 )
      {
        v21 = v20;
        v20 = _InterlockedCompareExchange(v14, v19 + v20, v20);
        if ( v21 == v20 )
        {
          if ( v18 )
            KeAbPreWait(v18, v15);
          KeWaitForSingleObject((PVOID)(v11 + 312), WrFastMutex, 0, 0, 0LL);
          _m_prefetchw((const void *)v14);
          v13 = 3;
          v19 = 2;
          if ( v18 )
            v18 = (AutoBoost *)KeAbPreAcquire(v11 + 288, (unsigned __int64)v18, 0LL, v22);
          goto LABEL_11;
        }
      }
      v23 = v20;
      v20 = _InterlockedCompareExchange(v14, v13 ^ v20, v20);
    }
    while ( v23 != v20 );
    v12 = v141;
    v9 = v139;
    v13 = 1;
  }
  if ( v16 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *(_BYTE *)(v16 + 33) |= 2u;
    else
      *(_BYTE *)(v16 + 10) = 1;
  }
  *(_QWORD *)(v11 + 296) = KeGetCurrentThread();
  *(_DWORD *)(v11 + 336) = CurrentIrql;
  v140 = 0LL;
  v137 = 0LL;
  v24 = *v9;
  v25 = (char *)(*v9 + v12);
  v147 = v25;
  v152 = 0LL;
  v26 = 0;
  v27 = v24 + 0x80000;
  if ( *(__int64 *)(v11 + 32) <= 0x200000 || (*(_DWORD *)(v11 + 152) & 0x200) == 0 )
    goto LABEL_124;
  v28 = *(_QWORD *)(v11 + 32);
  if ( v28 <= 0x2000000 )
  {
    if ( v24 < ((__int64)((int)((((int)v28 >> 18) + 1) & 0xFFFFFFFE) / 2) << 19) - 0x80000 )
    {
      if ( HIDWORD(v28) )
      {
        v57 = 0xFFFFFFFFLL;
      }
      else if ( (unsigned int)v28 <= 0x100000 )
      {
        v57 = 32LL;
      }
      else
      {
        v57 = 8 * ((unsigned __int64)(unsigned int)v28 >> 18);
      }
      v36 = (_QWORD *)(v57 + *(_QWORD *)(v11 + 88) + 16 * (v27 >> 19));
      goto LABEL_33;
    }
LABEL_124:
    v36 = (_QWORD *)(v11 + 16);
    goto LABEL_33;
  }
  v154 = v24 + 0x80000;
  v151 = 0LL;
  v153 = 0LL;
  v133 = 0;
  memset(v166, 0, sizeof(v166));
  v167 = 0LL;
  LODWORD(v29) = 0;
  v142 = 0;
  v30 = 0;
  v131 = 0;
  v31 = 25;
  v132 = 25;
  v32 = *(_QWORD *)(v11 + 88);
  v151 = v32;
  do
  {
    v131 = ++v30;
    v31 += 7;
    v132 = v31;
  }
  while ( v28 > 1LL << v31 );
  if ( v27 >= 1LL << v31 )
    goto LABEL_124;
  v33 = v31 - 7;
  v132 = v33;
  while ( 1 )
  {
    v131 = --v30;
    v34 = v27 >> v33;
    v133 = v27 >> v33;
    v35 = *(_QWORD *)(v32 + 8LL * v133);
    v153 = v35;
    if ( !v35 )
      break;
LABEL_31:
    *((_DWORD *)v165 + (unsigned int)v29) = v34;
    *((_QWORD *)v166 + (unsigned int)v29) = v32;
    LODWORD(v29) = v29 + 1;
    v142 = v29;
    v32 = v35;
    v151 = v35;
    v27 &= (1LL << v33) - 1;
    v154 = v27;
    v33 -= 7;
    v132 = v33;
    if ( !v30 )
    {
      v133 = v27 >> v33;
      v36 = (_QWORD *)(v35 + 1024 + 8LL * (v133 & 0xFFFFFFFE));
      goto LABEL_33;
    }
  }
  while ( 1 )
  {
    if ( (_DWORD)v34 != 127 )
    {
      do
      {
        if ( (_DWORD)v34 == 127 )
          break;
        v34 = (unsigned int)(v34 + 1);
        v133 = v34;
      }
      while ( !*(_QWORD *)(v32 + 8 * v34) );
      v35 = *(_QWORD *)(v32 + 8LL * (unsigned int)v34);
      v153 = v35;
      if ( v35 )
      {
        v27 = 0LL;
        v154 = 0LL;
        goto LABEL_31;
      }
    }
    if ( !(_DWORD)v29 )
      break;
    if ( (unsigned int)v29 >= 7 )
    {
      v36 = 0LL;
      goto LABEL_33;
    }
    v131 = ++v30;
    v29 = (unsigned int)(v29 - 1);
    v142 = v29;
    LODWORD(v34) = *((_DWORD *)v165 + v29);
    v133 = v34;
    v32 = *((_QWORD *)v166 + v29);
    v151 = v32;
  }
  v36 = (_QWORD *)(v11 + 16);
LABEL_33:
  v37 = *v36 - 16LL;
  v152 = v37;
  if ( *((_DWORD *)v9 + 1) )
  {
LABEL_76:
    while ( *(_WORD *)v37 == 765 && *v9 < *(_QWORD *)(v37 + 32) )
    {
      v58 = *(_QWORD *)(v37 + 8);
      if ( *v9 >= v58 )
      {
LABEL_43:
        v26 = 1;
        break;
      }
      if ( (__int64)v25 >= v58 )
        v25 = *(char **)(v37 + 8);
      v147 = v25;
      v37 = *(_QWORD *)(v37 + 16) - 16LL;
      v152 = v37;
    }
  }
  else if ( *(_WORD *)v37 == 765 )
  {
    if ( *(_DWORD *)(v37 + 36) )
      goto LABEL_76;
    v38 = 765;
    v39 = (unsigned int)v147;
    while ( v38 == 765 && *(_DWORD *)v9 < *(_DWORD *)(v37 + 32) )
    {
      v40 = *(_DWORD *)(v37 + 8);
      if ( *(_DWORD *)v9 >= v40 )
        goto LABEL_43;
      if ( v39 >= v40 )
      {
        v39 = *(_DWORD *)(v37 + 8);
        LODWORD(v147) = v39;
        v25 = v147;
      }
      v37 = *(_QWORD *)(v37 + 16) - 16LL;
      v152 = v37;
      v38 = *(_WORD *)v37;
    }
  }
  v136 = (_QWORD *)v37;
  if ( !v26 )
  {
    if ( (a6 & 8) != 0 )
    {
      v37 = 0LL;
      v136 = 0LL;
      v56 = 0;
      goto LABEL_63;
    }
    v60 = *v9;
    v140 = v60;
    v61 = &v25[-v60];
    HIDWORD(v137) = HIDWORD(v61);
    v62 = v60 & 0xFFF;
    v63 = v62 + (_DWORD)v61;
    LODWORD(v137) = v62 + (_DWORD)v61;
    v64 = v62 + v127;
    v127 += v62;
    if ( !a4 && (*(_DWORD *)(v11 + 152) & 4) == 0 || (v65 = v60, a5) )
    {
      v97 = 2;
      v129 = 2;
      v143 = 2;
      if ( (v60 & 0xFFF) == 0 )
      {
        if ( (unsigned int)v135 >= 0x1000 )
          v97 = 3;
        v129 = v97;
        v143 = v97;
      }
      v65 = v60;
      if ( (v63 & 0xFFF) == 0 )
      {
        v129 = v97 | 4;
        v143 = v97 | 4;
      }
    }
    v66 = a4;
    if ( (*(_DWORD *)(v11 + 152) & 0x200) == 0 )
      v66 = 1;
    a4 = v66;
    v67 = (v63 + 4095) & 0xFFFFF000;
    LODWORD(v137) = v67;
    *v128 -= v65 & 0xFFF;
    LODWORD(v140) = v140 & 0xFFFFF000;
    if ( v67 > v64 )
      v67 = v64;
    LODWORD(v135) = v67;
    LODWORD(v137) = v67;
    if ( (a6 & 1) == 0 )
    {
      v84 = CcAllocateInitializeBcb(v11, v37, &v140, &v137);
      v37 = (__int64)v84;
      v136 = v84;
      if ( v84 )
      {
        if ( !a4 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v84 + 9), 0) )
          KeBugCheckEx(0x34u, 0x2027BuLL, v37, 0LL, 0LL);
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
        v56 = 0;
        v13 = 0;
        v98 = v128;
        if ( (unsigned __int8)CcMapAndRead(v67, v129, 0LL, *v128) )
        {
          ExAcquireFastMutex((PKGUARDED_MUTEX)(v11 + 288));
          if ( !*(_QWORD *)(v37 + 184) )
          {
            *(_QWORD *)(v37 + 184) = *v98;
            *(_QWORD *)(v37 + 56) = v130;
            v130 = 0LL;
          }
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
          v9 = v139;
          *v98 = *(_QWORD *)(v37 + 184) + (unsigned int)(*(_DWORD *)v139 - *(_DWORD *)(v37 + 8));
          v56 = 1;
        }
        else
        {
          v9 = v139;
        }
      }
      else
      {
        v56 = 0;
        v9 = v139;
      }
      goto LABEL_63;
    }
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 0xC0uLL, 0x63426343u);
    v71 = (char *)PoolWithTag;
    if ( !PoolWithTag )
    {
      v37 = 0LL;
LABEL_147:
      v136 = (_QWORD *)v37;
      if ( !v37 )
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
        RtlRaiseStatus(-1073741670);
      }
      if ( !a4 )
      {
        v101 = (struct _ERESOURCE *)(v37 + 72);
        if ( (a6 & 2) != 0 )
        {
          if ( !ExAcquireResourceExclusiveLite(v101, 0) )
            KeBugCheckEx(0x34u, 0x20214uLL, v37, 0LL, 0LL);
        }
        else
        {
          v102 = *(_BYTE *)(v37 + 98);
          if ( (v102 & 0x41) == 1 )
            KeBugCheckEx(0x1C6u, 0xFuLL, v37 + 72, 0LL, 0LL);
          if ( (v102 & 1) != 0 )
          {
            v113 = KeGetCurrentIrql();
            CurrentThread = KeGetCurrentThread();
            if ( v113 > 2u )
              KeBugCheckEx(0x1C6u, 0LL, v113, 2uLL, 0LL);
            if ( v113 >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
              KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
            if ( (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
              goto LABEL_249;
            if ( !v113 && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
              goto LABEL_247;
          }
          if ( (*(_BYTE *)(v37 + 98) & 1) != 0 )
            v103 = ExpFastResourceLegacyAcquireSharedStarveExclusive((ULONG_PTR)v101);
          else
            v103 = ExpAcquireSharedStarveExclusive(v101, 0LL, CurrentThread, v70);
          if ( !v103 )
            KeBugCheckEx(0x34u, 0x2021BuLL, v37, 0LL, 0LL);
        }
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
      v13 = 0;
      if ( (a6 & 4) != 0 )
      {
        v9 = v139;
        v56 = 1;
        goto LABEL_63;
      }
      v104 = *v128;
      v105 = KeGetCurrentThread();
      v106 = 1;
      v144 = 0;
      v156 = 0;
      v107 = 0;
      v150 = 0;
      v125 = 1;
      v108 = ((v104 & 0xFFF) + 4095 + (unsigned __int64)v67) >> 12;
      v145 = v108;
      v109 = (__int64 *)(v104 & 0xFFFFFFFFFFFFF000uLL);
      v141 = (unsigned __int64)v109;
      LODWORD(v135) = BYTE4(v105[1].Queue) + 2 * LODWORD(v105[1].WaitListEntry.Flink);
      while ( (_DWORD)v108 )
      {
        BYTE4(v105[1].Queue) = 1;
        v110 = v108 - 1;
        if ( (unsigned int)(v108 - 1) > LODWORD(v105[1].WaitListEntry.Flink) )
        {
          if ( v110 <= 0xF )
            LODWORD(v105[1].WaitListEntry.Flink) = v110;
          else
            LODWORD(v105[1].WaitListEntry.Flink) = 15;
        }
        v144 = (v106 & v129) != 0;
        if ( v129 )
        {
          v111 = v108 - 1;
          if ( v106 != 2 )
            v111 = 1;
        }
        else
        {
          v111 = v108;
        }
        v107 = MmCheckCachedPageStates(v109, (unsigned int)(v111 << 12), (v106 & v129) != 0, &v125);
        v150 = v107;
        if ( v107 < 0 )
          break;
        v109 = (__int64 *)((char *)v109 + (unsigned int)(v111 << 12));
        v141 = (unsigned __int64)v109;
        LODWORD(v108) = v108 - v111;
        v145 = v108;
        v106 = 2;
        if ( (_DWORD)v108 == 1 )
          v106 = 4;
      }
      v112 = v135;
      BYTE4(v105[1].Queue) = v135 & 1;
      LODWORD(v105[1].WaitListEntry.Flink) = v112 >> 1;
      if ( v107 < 0 )
        RtlRaiseStatus(v107);
      ExAcquireFastMutex((PKGUARDED_MUTEX)(v11 + 288));
      if ( !*(_QWORD *)(v37 + 184) )
      {
        *(_QWORD *)(v37 + 184) = *v128;
        *(_QWORD *)(v37 + 56) = v130;
        v130 = 0LL;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
      v9 = v139;
      *v128 = *(_QWORD *)(v37 + 184) + (unsigned int)(*(_DWORD *)v139 - *(_DWORD *)(v37 + 8));
      v13 = 0;
LABEL_119:
      v56 = 1;
      goto LABEL_63;
    }
    *(_WORD *)PoolWithTag = 765;
    v72 = v140;
    PoolWithTag[1] = v140;
    *((_DWORD *)PoolWithTag + 1) = v67;
    PoolWithTag[4] = v72 + v137;
    PoolWithTag[22] = v11;
    ++*((_DWORD *)PoolWithTag + 16);
    v73 = (_KSWAPPABLE_PAGE *)(PoolWithTag + 9);
    if ( (unsigned __int64)(PoolWithTag + 9) < 0xFFFF800000000000uLL
      || MmDeterminePoolType((unsigned __int64)v73) == 256 )
    {
      ExpTraceLogBadResourceAddress(v73, retaddr);
    }
    memset_0(v73, 0, 0x68uLL);
    v73->TransitionLock = (unsigned __int64)v73;
    v73->RegionStart = v73;
    *(_QWORD *)&v73->Mdl.Size = 0LL;
    v73->Mdl.Process = 0LL;
    v73[1].LockCount.Value = 0LL;
    if ( (NtGlobalFlag & 0x2000) != 0 )
    {
      v114 = *(KSPIN_LOCK **)&NormalizationListLock.WaitRegister.Flags;
      if ( *(_QWORD *)&NormalizationListLock.WaitRegister.Flags )
      {
        v115 = (__int64 *)RtlStdLogStackTrace(*(PKSPIN_LOCK *)&NormalizationListLock.WaitRegister.Flags, 1);
        v141 = (unsigned __int64)v115;
        if ( v115 )
        {
          RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v114, (unsigned __int16 *)v115);
          v116 = RecordedStackTraceIndex;
          if ( !RecordedStackTraceIndex )
          {
            RtlStdReleaseStackTrace((__int64)v114, (__int64 *)v141);
            v73[1].TransitionLock = v116;
            v67 = v135;
            goto LABEL_99;
          }
        }
        else
        {
          v116 = 0;
        }
      }
      else
      {
        v116 = 0;
      }
      v73[1].TransitionLock = v116;
      v67 = v135;
    }
    else
    {
      v73[1].TransitionLock = 0LL;
    }
LABEL_99:
    HIDWORD(v73[1].RegionStart) = -1;
    ExpAddResourceToSystemResourceList(v73);
    __incgsdword(0x9098u);
    if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
      PerfLogExecutiveResourceInitialize(65544LL, v73, 0LL, 0LL);
    v75 = (AutoBoost *)KeAbPreAcquire(v11 + 104, 0LL, 0LL, v74);
    v76 = v75;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 104), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v11 + 104), v75, v11 + 104);
    if ( v76 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v76 + 33) |= 2u;
      else
        *((_BYTE *)v76 + 10) = 1;
    }
    v77 = (__int64 *)(v71 + 16);
    v78 = v37 + 16;
    v79 = *(__int64 ***)(v78 + 8);
    if ( *v79 != (__int64 *)v78 )
      __fastfail(3u);
    *v77 = v78;
    *((_QWORD *)v71 + 3) = v79;
    *v79 = v77;
    *(_QWORD *)(v78 + 8) = v77;
    v85 = *(_QWORD *)(v11 + 32);
    if ( v85 > 0x2000000 && (*(_DWORD *)(v11 + 152) & 0x200) != 0 )
    {
      v86 = v72;
      v158 = v72;
      v87 = 0;
      v138 = 0;
      v88 = 25;
      v134 = 25;
      v89 = *(_QWORD *)(v11 + 88);
      do
      {
        v138 = ++v87;
        v88 += 7;
        v134 = v88;
      }
      while ( v85 > 1LL << v88 );
      v90 = v88 - 7;
      v134 = v90;
      do
      {
        v89 = *(_QWORD *)(v89 + 8LL * (unsigned int)(v86 >> v90));
        v138 = --v87;
        v86 &= (1LL << v90) - 1;
        v158 = v86;
        v90 -= 7;
        v134 = v90;
      }
      while ( v87 );
      v91 = 2048LL;
      v92 = 2048LL;
      if ( (*(_DWORD *)(v11 + 152) & 0x200) == 0 )
        v92 = 1024LL;
      ++*(_DWORD *)(v92 + v89);
      if ( (*(_DWORD *)(v11 + 152) & 0x200) == 0 )
        v91 = 1024LL;
      if ( !*(_QWORD *)(v91 + v89) )
      {
        v93 = 2052LL;
        if ( (*(_DWORD *)(v11 + 152) & 0x200) == 0 )
          v93 = 1028LL;
        ++*(_DWORD *)(v93 + v89);
        CcSetVacbLargeOffset(v11, v72 & 0xFFFFFFFFFE000000uLL, -2LL);
      }
    }
    _m_prefetchw((const void *)(v11 + 104));
    v94 = *(_QWORD *)(v11 + 104);
    v95 = v94 - 16;
    if ( (v94 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v95 = 0LL;
    if ( (v94 & 2) != 0
      || (v96 = *(_QWORD *)(v11 + 104),
          v96 != _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 104), v95, v94)) )
    {
      ExfReleasePushLock((_QWORD *)(v11 + 104));
    }
    KeAbPostRelease(v11 + 104);
    if ( (*(_DWORD *)(v11 + 152) & 2) != 0 )
      ExDisableResourceBoostLite((PERESOURCE)(v71 + 72));
    v37 = (__int64)v71;
    goto LABEL_147;
  }
  v41 = a4;
  if ( (*(_DWORD *)(v11 + 152) & 0x200) == 0 )
    v41 = 1;
  a4 = v41;
  if ( *(_QWORD *)(v37 + 184) )
  {
    if ( (a6 & 1) != 0 )
    {
      ++*(_DWORD *)(v37 + 64);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
      v13 = 0;
      if ( !v41 )
      {
        v82 = (struct _ERESOURCE *)(v37 + 72);
        if ( (a6 & 2) != 0 )
        {
          ExAcquireResourceExclusiveLite(v82, 1u);
        }
        else
        {
          v83 = *(unsigned __int8 *)(v37 + 98);
          if ( (v83 & 0x41) == 1 )
            KeBugCheckEx(0x1C6u, 0xFuLL, v37 + 72, 0LL, 0LL);
          if ( (v83 & 1) != 0 )
          {
            v83 = KeGetCurrentIrql();
            v80 = KeGetCurrentThread();
            if ( (unsigned __int8)v83 > 1u )
              KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)v83, 1uLL, 0LL);
            if ( (v80->ApcState.InProgressFlags & 2) != 0 )
              goto LABEL_249;
            if ( !(_BYTE)v83 && !_bittest((const signed __int32 *)&v80->116, 0xAu) && !v80->WaitBlock[3].SpareLong )
              goto LABEL_247;
          }
          LOBYTE(v83) = 1;
          if ( (*(_BYTE *)(v37 + 98) & 1) != 0 )
            ExpFastResourceLegacyAcquireSharedStarveExclusive((ULONG_PTR)v82);
          else
            ExpAcquireSharedStarveExclusive(v82, v83, v80, v81);
        }
      }
    }
    else
    {
      if ( !v41 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v37 + 72), 0) )
      {
        v37 = 0LL;
        v136 = 0LL;
        v56 = 0;
        goto LABEL_63;
      }
      ++*(_DWORD *)(v37 + 64);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
      v13 = 0;
    }
    *v128 = *(_QWORD *)(v37 + 184) + (unsigned int)(*(_DWORD *)v9 - *(_DWORD *)(v37 + 8));
    goto LABEL_119;
  }
  v42 = v128;
  *v128 -= (unsigned int)(*(_DWORD *)v9 - *(_DWORD *)(v37 + 8));
  v140 = *(_QWORD *)(v37 + 8);
  v137 = *(unsigned int *)(v37 + 4);
  if ( (a6 & 1) != 0 )
  {
    ++*(_DWORD *)(v37 + 64);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
    v13 = 0;
    if ( !a4 )
    {
      v45 = (struct _ERESOURCE *)(v37 + 72);
      if ( (a6 & 2) == 0 )
      {
        v46 = *(unsigned __int8 *)(v37 + 98);
        if ( (v46 & 0x41) == 1 )
          KeBugCheckEx(0x1C6u, 0xFuLL, v37 + 72, 0LL, 0LL);
        if ( (v46 & 1) == 0 )
          goto LABEL_53;
        v46 = KeGetCurrentIrql();
        v43 = KeGetCurrentThread();
        if ( (unsigned __int8)v46 > 1u )
          KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)v46, 1uLL, 0LL);
        if ( (v43->ApcState.InProgressFlags & 2) != 0 )
LABEL_249:
          KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
        if ( (_BYTE)v46 || _bittest((const signed __int32 *)&v43->116, 0xAu) || v43->WaitBlock[3].SpareLong )
        {
LABEL_53:
          LOBYTE(v46) = 1;
          if ( (*(_BYTE *)(v37 + 98) & 1) != 0 )
            ExpFastResourceLegacyAcquireSharedStarveExclusive((ULONG_PTR)v45);
          else
            ExpAcquireSharedStarveExclusive(v45, v46, v43, v44);
          goto LABEL_55;
        }
LABEL_247:
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      }
      ExAcquireResourceExclusiveLite(v45, 1u);
    }
LABEL_55:
    if ( (a6 & 4) == 0 )
    {
      v47 = *v42;
      v48 = KeGetCurrentThread();
      v149 = 0;
      v157 = 0;
      v49 = 0;
      v148 = 0;
      v126[0] = 1;
      v50 = ((v47 & 0xFFF) + (unsigned __int64)(unsigned int)v137 + 4095) >> 12;
      v146 = v50;
      v51 = v47 & 0xFFFFFFFFFFFFF000uLL;
      v135 = v51;
      v52 = BYTE4(v48[1].Queue) + 2 * LODWORD(v48[1].WaitListEntry.Flink);
      while ( (_DWORD)v50 )
      {
        BYTE4(v48[1].Queue) = 1;
        v53 = v50 - 1;
        if ( (unsigned int)(v50 - 1) > LODWORD(v48[1].WaitListEntry.Flink) )
        {
          if ( v53 <= 0xF )
            LODWORD(v48[1].WaitListEntry.Flink) = v53;
          else
            LODWORD(v48[1].WaitListEntry.Flink) = 15;
        }
        v149 = 0;
        v54 = (unsigned int)((_DWORD)v50 << 12);
        v55 = (unsigned int)v54;
        v49 = MmCheckCachedPageStates(v51, v54, 0LL, v126);
        v148 = v49;
        if ( v49 < 0 )
          break;
        v51 += v55;
        v135 = v51;
        LODWORD(v50) = 0;
        v146 = 0;
      }
      BYTE4(v48[1].Queue) = v52 & 1;
      LODWORD(v48[1].WaitListEntry.Flink) = v52 >> 1;
      if ( v49 < 0 )
        RtlRaiseStatus(v49);
      ExAcquireFastMutex((PKGUARDED_MUTEX)(v11 + 288));
      v59 = v128;
      if ( !*(_QWORD *)(v37 + 184) )
      {
        *(_QWORD *)(v37 + 184) = *v128;
        *(_QWORD *)(v37 + 56) = v130;
        v130 = 0LL;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
      v9 = v139;
      *v59 = *(_QWORD *)(v37 + 184) + (unsigned int)(*(_DWORD *)v139 - *(_DWORD *)(v37 + 8));
      v13 = 0;
    }
    v56 = 1;
    goto LABEL_63;
  }
  if ( a4 || ExAcquireSharedStarveExclusive((PERESOURCE)(v37 + 72), 0) )
  {
    ++*(_DWORD *)(v37 + 64);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
    v13 = 0;
    if ( (unsigned __int8)CcMapAndRead(*(unsigned int *)(v37 + 4), 0LL, 0LL, *v42) )
    {
      ExAcquireFastMutex((PKGUARDED_MUTEX)(v11 + 288));
      if ( !*(_QWORD *)(v37 + 184) )
      {
        *(_QWORD *)(v37 + 184) = *v42;
        *(_QWORD *)(v37 + 56) = v130;
        v130 = 0LL;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
      *v42 = *(_QWORD *)(v37 + 184) + (unsigned int)(*(_DWORD *)v9 - *(_DWORD *)(v37 + 8));
      v56 = 1;
    }
    else
    {
      v56 = 0;
    }
  }
  else
  {
    v37 = 0LL;
    v136 = 0LL;
    v56 = 0;
  }
LABEL_63:
  if ( (a6 & 6) == 6 && v37 && *(_QWORD *)(v37 + 184) )
  {
    v99 = *(_QWORD *)(*(_QWORD *)(v37 + 56) + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v37 + 56) + 16LL)) )
    {
      v100 = *(struct _KEVENT **)(v99 + 192);
      if ( v100 )
        KeSetEvent(v100, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v99 + 552));
    }
    *(_QWORD *)(v37 + 184) = 0LL;
    *(_QWORD *)(v37 + 56) = 0LL;
  }
  if ( v13 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
  if ( v130 )
  {
    v118 = *(_QWORD *)(v130 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v130 + 16)) )
    {
      v119 = *(struct _KEVENT **)(v118 + 192);
      if ( v119 )
        KeSetEvent(v119, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v118 + 552));
    }
  }
  if ( (a6 & 4) != 0 )
  {
    v120 = *v9;
    if ( *(__int64 *)(v11 + 32) > 0x2000000 )
    {
      CcAcquireBcbLockAndVacbLock(1LL, v11);
      if ( *(__int64 *)(v11 + 32) > 0x2000000 )
        CcSetVacbLargeOffset(v11, v120, -2LL);
      CcReleaseBcbLockAndVacbLock(1LL, v11);
    }
  }
  if ( v56 )
  {
    *v159 = v37;
    *v160 = *(_QWORD *)(v37 + 32);
  }
  else
  {
    *v128 = 0LL;
    if ( v37 )
      CcUnpinFileDataEx((char *)v37, a4, 0);
  }
  return v56;
}
