/*
 * XREFs of CcPinFileData @ 0x1402DF720
 * Callers:
 *     CcZeroDataInCache @ 0x14039EF58 (CcZeroDataInCache.c)
 *     CcMapData @ 0x1409E2B50 (CcMapData.c)
 *     CcMapDataCommon @ 0x140A235A0 (CcMapDataCommon.c)
 *     CcPinMappedData @ 0x140A54D50 (CcPinMappedData.c)
 *     CcPinRead @ 0x140A7CBB0 (CcPinRead.c)
 *     CcPreparePinWrite @ 0x140AC3300 (CcPreparePinWrite.c)
 * Callees:
 *     CcAllocateInitializeBcb @ 0x140260530 (CcAllocateInitializeBcb.c)
 *     MmDeterminePoolType @ 0x1402609A0 (MmDeterminePoolType.c)
 *     ExDisableResourceBoostLite @ 0x1402609F0 (ExDisableResourceBoostLite.c)
 *     ExpAddResourceToSystemResourceList @ 0x140260A5C (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x140260BE8 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140260C74 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x140260D48 (RtlStdReleaseStackTrace.c)
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x140278AE0 (KeAbPreWait.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     CcUnpinFileDataEx @ 0x1402DF3C0 (CcUnpinFileDataEx.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1402E0E50 (CcAcquireBcbLockAndVacbLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1402E0ED0 (CcReleaseBcbLockAndVacbLock.c)
 *     CcGetVirtualAddress @ 0x1402E0F50 (CcGetVirtualAddress.c)
 *     CcSetVacbLargeOffset @ 0x1402E1620 (CcSetVacbLargeOffset.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402E1B68 (ExpAcquireSharedStarveExclusive.c)
 *     SetVacb @ 0x1402E1E10 (SetVacb.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     CcMapAndRead @ 0x1402E6670 (CcMapAndRead.c)
 *     MmCheckCachedPageStates @ 0x1402E6810 (MmCheckCachedPageStates.c)
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     CcAllocateVacbLevels @ 0x1403B6DDC (CcAllocateVacbLevels.c)
 *     CcFreeUnusedVacbLevels @ 0x1403B6E84 (CcFreeUnusedVacbLevels.c)
 *     ExAcquireSharedStarveExclusive @ 0x140456270 (ExAcquireSharedStarveExclusive.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1404563A4 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 *     CcDereferenceFileOffset @ 0x1404F3290 (CcDereferenceFileOffset.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1405263E4 (PerfLogExecutiveResourceInitialize.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052D790 (ExpTraceLogBadResourceAddress.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExAllocatePoolWithTag @ 0x140C10340 (ExAllocatePoolWithTag.c)
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
  struct _ERESOURCE *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rbx
  struct _KTHREAD *v46; // rsi
  int v47; // r8d
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rbx
  unsigned int v50; // r15d
  unsigned int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // r12
  unsigned __int8 v54; // si
  unsigned __int64 v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rbx
  __int64 v58; // rcx
  char *v59; // r8
  int v60; // edx
  int v61; // r9d
  unsigned int v62; // r11d
  __int16 v63; // r8
  char v64; // r10
  unsigned int v65; // r12d
  struct _SINGLE_LIST_ENTRY *PoolWithTag; // rax
  struct _SINGLE_LIST_ENTRY *v67; // r15
  __int64 v68; // rbx
  struct _SINGLE_LIST_ENTRY *v69; // rsi
  struct _KLOCK_ENTRIES *v70; // r9
  AutoBoost *v71; // rax
  AutoBoost *v72; // r13
  __int64 *v73; // rax
  __int64 v74; // rdi
  __int64 **v75; // rdx
  struct _ERESOURCE *v76; // rcx
  __int64 v77; // rdx
  _QWORD *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // r9
  int v81; // r8d
  int v82; // ecx
  __int64 v83; // r10
  int v84; // ecx
  __int64 v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rax
  signed __int64 v88; // rax
  signed __int64 v89; // rdx
  __int64 v90; // rtt
  int v91; // r12d
  struct _KTHREAD *v92; // r8
  struct _KTHREAD *v93; // r8
  _QWORD *v94; // rbx
  __int64 v95; // rbx
  struct _KEVENT *v96; // rcx
  struct _ERESOURCE *v97; // rcx
  char v98; // dl
  char v99; // al
  __int64 v100; // r15
  struct _KTHREAD *v101; // rsi
  int v102; // r9d
  int v103; // edx
  unsigned __int64 v104; // rbx
  __int64 *v105; // r15
  unsigned int v106; // eax
  int v107; // r12d
  unsigned int v108; // ecx
  unsigned __int8 v109; // dl
  struct _KTHREAD *CurrentThread; // r8
  KSPIN_LOCK *p_Policy; // r12
  __int64 *v112; // rax
  unsigned __int16 v113; // r13
  int RecordedStackTraceIndex; // eax
  __int64 v115; // rbx
  struct _KEVENT *v116; // rcx
  __int64 v117; // rbx
  __int64 v119; // rbx
  __int64 v120; // rdx
  char v122; // [rsp+3Ch] [rbp-19Ch] BYREF
  char v123[3]; // [rsp+3Dh] [rbp-19Bh] BYREF
  int v124; // [rsp+40h] [rbp-198h] BYREF
  _QWORD *v125; // [rsp+48h] [rbp-190h]
  unsigned int v126; // [rsp+50h] [rbp-188h]
  __int64 v127; // [rsp+58h] [rbp-180h] BYREF
  int v128; // [rsp+60h] [rbp-178h]
  int v129; // [rsp+64h] [rbp-174h]
  unsigned int v130; // [rsp+68h] [rbp-170h]
  int v131; // [rsp+6Ch] [rbp-16Ch]
  unsigned __int64 v132; // [rsp+70h] [rbp-168h]
  _QWORD *v133; // [rsp+78h] [rbp-160h]
  __int64 v134; // [rsp+80h] [rbp-158h] BYREF
  int v135; // [rsp+88h] [rbp-150h]
  __int64 *v136; // [rsp+90h] [rbp-148h]
  __int64 v137; // [rsp+98h] [rbp-140h] BYREF
  unsigned __int64 v138; // [rsp+A0h] [rbp-138h]
  int v139; // [rsp+A8h] [rbp-130h]
  int v140; // [rsp+ACh] [rbp-12Ch]
  BOOL v141; // [rsp+B0h] [rbp-128h]
  int v142; // [rsp+B4h] [rbp-124h]
  int v143; // [rsp+B8h] [rbp-120h]
  char *v144; // [rsp+C0h] [rbp-118h]
  int v145; // [rsp+C8h] [rbp-110h]
  int v146; // [rsp+CCh] [rbp-10Ch]
  int v147; // [rsp+D0h] [rbp-108h]
  __int64 v148; // [rsp+D8h] [rbp-100h]
  __int64 v149; // [rsp+E0h] [rbp-F8h]
  __int64 v150; // [rsp+E8h] [rbp-F0h]
  __int64 v151; // [rsp+F0h] [rbp-E8h]
  __int64 v152; // [rsp+F8h] [rbp-E0h]
  int v153; // [rsp+100h] [rbp-D8h]
  int v154; // [rsp+104h] [rbp-D4h]
  __int64 v155; // [rsp+108h] [rbp-D0h]
  __int64 *v156; // [rsp+110h] [rbp-C8h]
  _QWORD *v157; // [rsp+118h] [rbp-C0h]
  __int64 *v158; // [rsp+120h] [rbp-B8h]
  struct _KLOCK_ENTRIES *v159; // [rsp+128h] [rbp-B0h]
  __int64 v160; // [rsp+130h] [rbp-A8h]
  _QWORD *v161; // [rsp+138h] [rbp-A0h]
  _QWORD v162[4]; // [rsp+140h] [rbp-98h] BYREF
  _OWORD v163[3]; // [rsp+160h] [rbp-78h] BYREF
  __int64 v164; // [rsp+190h] [rbp-48h]
  void *retaddr; // [rsp+1D8h] [rbp+0h]

  LODWORD(v132) = a3;
  v9 = a2;
  v136 = a2;
  v158 = a2;
  v10 = a7;
  v156 = (__int64 *)a7;
  v159 = a7;
  v125 = a8;
  v161 = a8;
  v157 = a9;
  v160 = (__int64)a9;
  v133 = 0LL;
  v126 = 0;
  v124 = 0;
  v127 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v152 = v11;
  v12 = a3;
  v138 = a3;
  if ( a3 + *a2 > *(_QWORD *)(v11 + 32) )
    KeBugCheckEx(0x34u, 0x146uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  a7->Thread = 0LL;
  *a8 = 0LL;
  if ( (a6 & 4) == 0 )
  {
    *a8 = CcGetVirtualAddress(v11, *a2, (unsigned int)&v127, (unsigned int)&v124, (a6 >> 6) & 1, 0);
LABEL_4:
    v13 = 1;
    goto LABEL_5;
  }
  v124 = 0x40000 - (*(_DWORD *)a2 & 0x3FFFF);
  v119 = *a2;
  if ( *(__int64 *)(v11 + 32) <= 0x2000000 )
    goto LABEL_4;
  v162[3] = 0LL;
  v162[1] = v162;
  v162[0] = v162;
  v162[2] = 0LL;
  v120 = *(_DWORD *)(v11 + 152) >> 9;
  LOBYTE(v120) = (*(_DWORD *)(v11 + 152) & 0x200) != 0;
  if ( !(unsigned __int8)CcAllocateVacbLevels((unsigned int)(CcMaxVacbLevelsSeen - 1), v120, v162) )
    RtlRaiseStatus(3221225626LL);
  v13 = 1;
  CcAcquireBcbLockAndVacbLock(1LL, v11);
  SetVacb(v11, v119, -1LL, v162);
  CcReleaseBcbLockAndVacbLock(1LL, v11);
  CcFreeUnusedVacbLevels(v162);
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
    v12 = v138;
    v9 = v136;
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
  v137 = 0LL;
  v134 = 0LL;
  v24 = *v9;
  v25 = (char *)(*v9 + v12);
  v144 = v25;
  v149 = 0LL;
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
        v55 = 0xFFFFFFFFLL;
      }
      else if ( (unsigned int)v28 <= 0x100000 )
      {
        v55 = 32LL;
      }
      else
      {
        v55 = 8 * ((unsigned __int64)(unsigned int)v28 >> 18);
      }
      v36 = (_QWORD *)(v55 + *(_QWORD *)(v11 + 88) + 16 * (v27 >> 19));
      goto LABEL_33;
    }
LABEL_124:
    v36 = (_QWORD *)(v11 + 16);
    goto LABEL_33;
  }
  v151 = v24 + 0x80000;
  v148 = 0LL;
  v150 = 0LL;
  v130 = 0;
  memset(v163, 0, sizeof(v163));
  v164 = 0LL;
  LODWORD(v29) = 0;
  v139 = 0;
  v30 = 0;
  v128 = 0;
  v31 = 25;
  v129 = 25;
  v32 = *(_QWORD *)(v11 + 88);
  v148 = v32;
  do
  {
    v128 = ++v30;
    v31 += 7;
    v129 = v31;
  }
  while ( v28 > 1LL << v31 );
  if ( v27 >= 1LL << v31 )
    goto LABEL_124;
  v33 = v31 - 7;
  v129 = v33;
  while ( 1 )
  {
    v128 = --v30;
    v34 = v27 >> v33;
    v130 = v27 >> v33;
    v35 = *(_QWORD *)(v32 + 8LL * v130);
    v150 = v35;
    if ( !v35 )
      break;
LABEL_31:
    *((_DWORD *)v162 + (unsigned int)v29) = v34;
    *((_QWORD *)v163 + (unsigned int)v29) = v32;
    LODWORD(v29) = v29 + 1;
    v139 = v29;
    v32 = v35;
    v148 = v35;
    v27 &= (1LL << v33) - 1;
    v151 = v27;
    v33 -= 7;
    v129 = v33;
    if ( !v30 )
    {
      v130 = v27 >> v33;
      v36 = (_QWORD *)(v35 + 1024 + 8LL * (v130 & 0xFFFFFFFE));
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
        v130 = v34;
      }
      while ( !*(_QWORD *)(v32 + 8 * v34) );
      v35 = *(_QWORD *)(v32 + 8LL * (unsigned int)v34);
      v150 = v35;
      if ( v35 )
      {
        v27 = 0LL;
        v151 = 0LL;
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
    v128 = ++v30;
    v29 = (unsigned int)(v29 - 1);
    v139 = v29;
    LODWORD(v34) = *((_DWORD *)v162 + v29);
    v130 = v34;
    v32 = *((_QWORD *)v163 + v29);
    v148 = v32;
  }
  v36 = (_QWORD *)(v11 + 16);
LABEL_33:
  v37 = *v36 - 16LL;
  v149 = v37;
  if ( *((_DWORD *)v9 + 1) )
  {
LABEL_76:
    while ( *(_WORD *)v37 == 765 && *v9 < *(_QWORD *)(v37 + 32) )
    {
      v56 = *(_QWORD *)(v37 + 8);
      if ( *v9 >= v56 )
      {
LABEL_43:
        v26 = 1;
        break;
      }
      if ( (__int64)v25 >= v56 )
        v25 = *(char **)(v37 + 8);
      v144 = v25;
      v37 = *(_QWORD *)(v37 + 16) - 16LL;
      v149 = v37;
    }
  }
  else if ( *(_WORD *)v37 == 765 )
  {
    if ( *(_DWORD *)(v37 + 36) )
      goto LABEL_76;
    v38 = 765;
    v39 = (unsigned int)v144;
    while ( v38 == 765 && *(_DWORD *)v9 < *(_DWORD *)(v37 + 32) )
    {
      v40 = *(_DWORD *)(v37 + 8);
      if ( *(_DWORD *)v9 >= v40 )
        goto LABEL_43;
      if ( v39 >= v40 )
      {
        v39 = *(_DWORD *)(v37 + 8);
        LODWORD(v144) = v39;
        v25 = v144;
      }
      v37 = *(_QWORD *)(v37 + 16) - 16LL;
      v149 = v37;
      v38 = *(_WORD *)v37;
    }
  }
  v133 = (_QWORD *)v37;
  if ( !v26 )
  {
    if ( (a6 & 8) != 0 )
    {
      v37 = 0LL;
      v133 = 0LL;
      v54 = 0;
      goto LABEL_63;
    }
    v58 = *v9;
    v137 = v58;
    v59 = &v25[-v58];
    HIDWORD(v134) = HIDWORD(v59);
    v60 = v58 & 0xFFF;
    v61 = v60 + (_DWORD)v59;
    LODWORD(v134) = v60 + (_DWORD)v59;
    v62 = v60 + v124;
    v124 += v60;
    if ( !a4 && (*(_DWORD *)(v11 + 152) & 4) == 0 || (v63 = v58, a5) )
    {
      v91 = 2;
      v126 = 2;
      v140 = 2;
      if ( (v58 & 0xFFF) == 0 )
      {
        if ( (unsigned int)v132 >= 0x1000 )
          v91 = 3;
        v126 = v91;
        v140 = v91;
      }
      v63 = v58;
      if ( (v61 & 0xFFF) == 0 )
      {
        v126 = v91 | 4;
        v140 = v91 | 4;
      }
    }
    v64 = a4;
    if ( (*(_DWORD *)(v11 + 152) & 0x200) == 0 )
      v64 = 1;
    a4 = v64;
    v65 = (v61 + 4095) & 0xFFFFF000;
    LODWORD(v134) = v65;
    *v125 -= v63 & 0xFFF;
    LODWORD(v137) = v137 & 0xFFFFF000;
    if ( v65 > v62 )
      v65 = v62;
    LODWORD(v132) = v65;
    LODWORD(v134) = v65;
    if ( (a6 & 1) == 0 )
    {
      v78 = CcAllocateInitializeBcb(v11, v37, &v137, &v134);
      v37 = (__int64)v78;
      v133 = v78;
      if ( v78 )
      {
        if ( !a4 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v78 + 9), 0) )
          KeBugCheckEx(0x34u, 0x2027BuLL, v37, 0LL, 0LL);
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
        v54 = 0;
        v13 = 0;
        v94 = v125;
        if ( (unsigned __int8)CcMapAndRead(v65, v126, 0LL, *v125) )
        {
          ExAcquireFastMutex((PKGUARDED_MUTEX)(v11 + 288));
          if ( !*(_QWORD *)(v37 + 184) )
          {
            *(_QWORD *)(v37 + 184) = *v94;
            *(_QWORD *)(v37 + 56) = v127;
            v127 = 0LL;
          }
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
          v9 = v136;
          *v94 = *(_QWORD *)(v37 + 184) + (unsigned int)(*(_DWORD *)v136 - *(_DWORD *)(v37 + 8));
          v54 = 1;
        }
        else
        {
          v9 = v136;
        }
      }
      else
      {
        v54 = 0;
        v9 = v136;
      }
      goto LABEL_63;
    }
    PoolWithTag = (struct _SINGLE_LIST_ENTRY *)ExAllocatePoolWithTag((POOL_TYPE)1536, 0xC0uLL, 0x63426343u);
    v67 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v37 = 0LL;
LABEL_147:
      v133 = (_QWORD *)v37;
      if ( !v37 )
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
        RtlRaiseStatus(3221225626LL);
      }
      if ( !a4 )
      {
        v97 = (struct _ERESOURCE *)(v37 + 72);
        if ( (a6 & 2) != 0 )
        {
          if ( !ExAcquireResourceExclusiveLite(v97, 0) )
            KeBugCheckEx(0x34u, 0x20214uLL, v37, 0LL, 0LL);
        }
        else
        {
          v98 = *(_BYTE *)(v37 + 98);
          if ( (v98 & 0x41) == 1 )
            KeBugCheckEx(0x1C6u, 0xFuLL, v37 + 72, 0LL, 0LL);
          if ( (v98 & 1) != 0 )
          {
            v109 = KeGetCurrentIrql();
            CurrentThread = KeGetCurrentThread();
            if ( v109 > 2u )
              KeBugCheckEx(0x1C6u, 0LL, v109, 2uLL, 0LL);
            if ( v109 >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
              KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
            if ( (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
              goto LABEL_249;
            if ( !v109 && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
              goto LABEL_247;
          }
          if ( (*(_BYTE *)(v37 + 98) & 1) != 0 )
            v99 = ExpFastResourceLegacyAcquireSharedStarveExclusive((ULONG_PTR)v97);
          else
            v99 = ExpAcquireSharedStarveExclusive(v97, 0LL);
          if ( !v99 )
            KeBugCheckEx(0x34u, 0x2021BuLL, v37, 0LL, 0LL);
        }
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
      v13 = 0;
      if ( (a6 & 4) != 0 )
      {
        v9 = v136;
        v54 = 1;
        goto LABEL_63;
      }
      v100 = *v125;
      v101 = KeGetCurrentThread();
      v102 = 1;
      v141 = 0;
      v153 = 0;
      v103 = 0;
      v147 = 0;
      v122 = 1;
      v104 = ((v100 & 0xFFF) + 4095 + (unsigned __int64)v65) >> 12;
      v142 = v104;
      v105 = (__int64 *)(v100 & 0xFFFFFFFFFFFFF000uLL);
      v138 = (unsigned __int64)v105;
      LODWORD(v132) = BYTE4(v101[1].Queue) + 2 * LODWORD(v101[1].WaitListEntry.Flink);
      while ( (_DWORD)v104 )
      {
        BYTE4(v101[1].Queue) = 1;
        v106 = v104 - 1;
        if ( (unsigned int)(v104 - 1) > LODWORD(v101[1].WaitListEntry.Flink) )
        {
          if ( v106 <= 0xF )
            LODWORD(v101[1].WaitListEntry.Flink) = v106;
          else
            LODWORD(v101[1].WaitListEntry.Flink) = 15;
        }
        v141 = (v102 & v126) != 0;
        if ( v126 )
        {
          v107 = v104 - 1;
          if ( v102 != 2 )
            v107 = 1;
        }
        else
        {
          v107 = v104;
        }
        v103 = MmCheckCachedPageStates(v105, (unsigned int)(v107 << 12), (v102 & v126) != 0, &v122);
        v147 = v103;
        if ( v103 < 0 )
          break;
        v105 = (__int64 *)((char *)v105 + (unsigned int)(v107 << 12));
        v138 = (unsigned __int64)v105;
        LODWORD(v104) = v104 - v107;
        v142 = v104;
        v102 = 2;
        if ( (_DWORD)v104 == 1 )
          v102 = 4;
      }
      v108 = v132;
      BYTE4(v101[1].Queue) = v132 & 1;
      LODWORD(v101[1].WaitListEntry.Flink) = v108 >> 1;
      if ( v103 < 0 )
        RtlRaiseStatus((unsigned int)v103);
      ExAcquireFastMutex((PKGUARDED_MUTEX)(v11 + 288));
      if ( !*(_QWORD *)(v37 + 184) )
      {
        *(_QWORD *)(v37 + 184) = *v125;
        *(_QWORD *)(v37 + 56) = v127;
        v127 = 0LL;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
      v9 = v136;
      *v125 = *(_QWORD *)(v37 + 184) + (unsigned int)(*(_DWORD *)v136 - *(_DWORD *)(v37 + 8));
      v13 = 0;
LABEL_119:
      v54 = 1;
      goto LABEL_63;
    }
    LOWORD(PoolWithTag->Next) = 765;
    v68 = v137;
    PoolWithTag[1].Next = (struct _SINGLE_LIST_ENTRY *)v137;
    HIDWORD(PoolWithTag->Next) = v65;
    PoolWithTag[4].Next = (struct _SINGLE_LIST_ENTRY *)(v68 + v134);
    PoolWithTag[22].Next = (struct _SINGLE_LIST_ENTRY *)v11;
    ++LODWORD(PoolWithTag[8].Next);
    v69 = PoolWithTag + 9;
    if ( (unsigned __int64)&PoolWithTag[9] < 0xFFFF800000000000uLL || MmDeterminePoolType((unsigned __int64)v69) == 256 )
      ExpTraceLogBadResourceAddress(v69, retaddr);
    memset_0(v69, 0, 0x68uLL);
    v69[1].Next = v69;
    v69->Next = v69;
    v69[4].Next = 0LL;
    v69[5].Next = 0LL;
    v69[12].Next = 0LL;
    if ( (NtGlobalFlag & 0x2000) != 0 )
    {
      p_Policy = (KSPIN_LOCK *)&NormalizationListLock.SchedulingGroup->Policy;
      if ( NormalizationListLock.SchedulingGroup )
      {
        v112 = (__int64 *)RtlStdLogStackTrace((PKSPIN_LOCK)&NormalizationListLock.SchedulingGroup->Policy, 1);
        v138 = (unsigned __int64)v112;
        if ( v112 )
        {
          RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(p_Policy, (unsigned __int16 *)v112);
          v113 = RecordedStackTraceIndex;
          if ( !RecordedStackTraceIndex )
          {
            RtlStdReleaseStackTrace((__int64)p_Policy, (__int64 *)v138);
            v69[11].Next = (struct _SINGLE_LIST_ENTRY *)v113;
            v65 = v132;
            goto LABEL_99;
          }
        }
        else
        {
          v113 = 0;
        }
      }
      else
      {
        v113 = 0;
      }
      v69[11].Next = (struct _SINGLE_LIST_ENTRY *)v113;
      v65 = v132;
    }
    else
    {
      v69[11].Next = 0LL;
    }
LABEL_99:
    HIDWORD(v69[10].Next) = -1;
    ExpAddResourceToSystemResourceList(v69);
    __incgsdword(0x9098u);
    if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
      PerfLogExecutiveResourceInitialize(65544LL, v69, 0LL, 0LL);
    v71 = (AutoBoost *)KeAbPreAcquire(v11 + 104, 0LL, 0LL, v70);
    v72 = v71;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 104), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v11 + 104), v71, v11 + 104);
    if ( v72 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v72 + 33) |= 2u;
      else
        *((_BYTE *)v72 + 10) = 1;
    }
    v73 = (__int64 *)&v67[2];
    v74 = v37 + 16;
    v75 = *(__int64 ***)(v74 + 8);
    if ( *v75 != (__int64 *)v74 )
      __fastfail(3u);
    *v73 = v74;
    v67[3].Next = (struct _SINGLE_LIST_ENTRY *)v75;
    *v75 = v73;
    *(_QWORD *)(v74 + 8) = v73;
    v79 = *(_QWORD *)(v11 + 32);
    if ( v79 > 0x2000000 && (*(_DWORD *)(v11 + 152) & 0x200) != 0 )
    {
      v80 = v68;
      v155 = v68;
      v81 = 0;
      v135 = 0;
      v82 = 25;
      v131 = 25;
      v83 = *(_QWORD *)(v11 + 88);
      do
      {
        v135 = ++v81;
        v82 += 7;
        v131 = v82;
      }
      while ( v79 > 1LL << v82 );
      v84 = v82 - 7;
      v131 = v84;
      do
      {
        v83 = *(_QWORD *)(v83 + 8LL * (unsigned int)(v80 >> v84));
        v135 = --v81;
        v80 &= (1LL << v84) - 1;
        v155 = v80;
        v84 -= 7;
        v131 = v84;
      }
      while ( v81 );
      v85 = 2048LL;
      v86 = 2048LL;
      if ( (*(_DWORD *)(v11 + 152) & 0x200) == 0 )
        v86 = 1024LL;
      ++*(_DWORD *)(v86 + v83);
      if ( (*(_DWORD *)(v11 + 152) & 0x200) == 0 )
        v85 = 1024LL;
      if ( !*(_QWORD *)(v85 + v83) )
      {
        v87 = 2052LL;
        if ( (*(_DWORD *)(v11 + 152) & 0x200) == 0 )
          v87 = 1028LL;
        ++*(_DWORD *)(v87 + v83);
        CcSetVacbLargeOffset(v11, v68 & 0xFFFFFFFFFE000000uLL, -2LL);
      }
    }
    _m_prefetchw((const void *)(v11 + 104));
    v88 = *(_QWORD *)(v11 + 104);
    v89 = v88 - 16;
    if ( (v88 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v89 = 0LL;
    if ( (v88 & 2) != 0
      || (v90 = *(_QWORD *)(v11 + 104),
          v90 != _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 104), v89, v88)) )
    {
      ExfReleasePushLock(v11 + 104, v89);
    }
    KeAbPostRelease(v11 + 104);
    if ( (*(_DWORD *)(v11 + 152) & 2) != 0 )
      ExDisableResourceBoostLite((PERESOURCE)&v67[9]);
    v37 = (__int64)v67;
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
        v76 = (struct _ERESOURCE *)(v37 + 72);
        if ( (a6 & 2) != 0 )
        {
          ExAcquireResourceExclusiveLite(v76, 1u);
        }
        else
        {
          v77 = *(unsigned __int8 *)(v37 + 98);
          if ( (v77 & 0x41) == 1 )
            KeBugCheckEx(0x1C6u, 0xFuLL, v37 + 72, 0LL, 0LL);
          if ( (v77 & 1) != 0 )
          {
            v77 = KeGetCurrentIrql();
            v93 = KeGetCurrentThread();
            if ( (unsigned __int8)v77 > 1u )
              KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)v77, 1uLL, 0LL);
            if ( (v93->ApcState.InProgressFlags & 2) != 0 )
              goto LABEL_249;
            if ( !(_BYTE)v77 && !_bittest((const signed __int32 *)&v93->116, 0xAu) && !v93->WaitBlock[3].SpareLong )
              goto LABEL_247;
          }
          LOBYTE(v77) = 1;
          if ( (*(_BYTE *)(v37 + 98) & 1) != 0 )
            ExpFastResourceLegacyAcquireSharedStarveExclusive((ULONG_PTR)v76);
          else
            ExpAcquireSharedStarveExclusive(v76, v77);
        }
      }
    }
    else
    {
      if ( !v41 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v37 + 72), 0) )
      {
        v37 = 0LL;
        v133 = 0LL;
        v54 = 0;
        goto LABEL_63;
      }
      ++*(_DWORD *)(v37 + 64);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
      v13 = 0;
    }
    *v125 = *(_QWORD *)(v37 + 184) + (unsigned int)(*(_DWORD *)v9 - *(_DWORD *)(v37 + 8));
    goto LABEL_119;
  }
  v42 = v125;
  *v125 -= (unsigned int)(*(_DWORD *)v9 - *(_DWORD *)(v37 + 8));
  v137 = *(_QWORD *)(v37 + 8);
  v134 = *(unsigned int *)(v37 + 4);
  if ( (a6 & 1) != 0 )
  {
    ++*(_DWORD *)(v37 + 64);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
    v13 = 0;
    if ( !a4 )
    {
      v43 = (struct _ERESOURCE *)(v37 + 72);
      if ( (a6 & 2) == 0 )
      {
        v44 = *(unsigned __int8 *)(v37 + 98);
        if ( (v44 & 0x41) == 1 )
          KeBugCheckEx(0x1C6u, 0xFuLL, v37 + 72, 0LL, 0LL);
        if ( (v44 & 1) == 0 )
          goto LABEL_53;
        v44 = KeGetCurrentIrql();
        v92 = KeGetCurrentThread();
        if ( (unsigned __int8)v44 > 1u )
          KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)v44, 1uLL, 0LL);
        if ( (v92->ApcState.InProgressFlags & 2) != 0 )
LABEL_249:
          KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
        if ( (_BYTE)v44 || _bittest((const signed __int32 *)&v92->116, 0xAu) || v92->WaitBlock[3].SpareLong )
        {
LABEL_53:
          LOBYTE(v44) = 1;
          if ( (*(_BYTE *)(v37 + 98) & 1) != 0 )
            ExpFastResourceLegacyAcquireSharedStarveExclusive((ULONG_PTR)v43);
          else
            ExpAcquireSharedStarveExclusive(v43, v44);
          goto LABEL_55;
        }
LABEL_247:
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      }
      ExAcquireResourceExclusiveLite(v43, 1u);
    }
LABEL_55:
    if ( (a6 & 4) == 0 )
    {
      v45 = *v42;
      v46 = KeGetCurrentThread();
      v146 = 0;
      v154 = 0;
      v47 = 0;
      v145 = 0;
      v123[0] = 1;
      v48 = ((v45 & 0xFFF) + (unsigned __int64)(unsigned int)v134 + 4095) >> 12;
      v143 = v48;
      v49 = v45 & 0xFFFFFFFFFFFFF000uLL;
      v132 = v49;
      v50 = BYTE4(v46[1].Queue) + 2 * LODWORD(v46[1].WaitListEntry.Flink);
      while ( (_DWORD)v48 )
      {
        BYTE4(v46[1].Queue) = 1;
        v51 = v48 - 1;
        if ( (unsigned int)(v48 - 1) > LODWORD(v46[1].WaitListEntry.Flink) )
        {
          if ( v51 <= 0xF )
            LODWORD(v46[1].WaitListEntry.Flink) = v51;
          else
            LODWORD(v46[1].WaitListEntry.Flink) = 15;
        }
        v146 = 0;
        v52 = (unsigned int)((_DWORD)v48 << 12);
        v53 = (unsigned int)v52;
        v47 = MmCheckCachedPageStates(v49, v52, 0LL, v123);
        v145 = v47;
        if ( v47 < 0 )
          break;
        v49 += v53;
        v132 = v49;
        LODWORD(v48) = 0;
        v143 = 0;
      }
      BYTE4(v46[1].Queue) = v50 & 1;
      LODWORD(v46[1].WaitListEntry.Flink) = v50 >> 1;
      if ( v47 < 0 )
        RtlRaiseStatus((unsigned int)v47);
      ExAcquireFastMutex((PKGUARDED_MUTEX)(v11 + 288));
      v57 = v125;
      if ( !*(_QWORD *)(v37 + 184) )
      {
        *(_QWORD *)(v37 + 184) = *v125;
        *(_QWORD *)(v37 + 56) = v127;
        v127 = 0LL;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
      v9 = v136;
      *v57 = *(_QWORD *)(v37 + 184) + (unsigned int)(*(_DWORD *)v136 - *(_DWORD *)(v37 + 8));
      v13 = 0;
    }
    v54 = 1;
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
        *(_QWORD *)(v37 + 56) = v127;
        v127 = 0LL;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
      *v42 = *(_QWORD *)(v37 + 184) + (unsigned int)(*(_DWORD *)v9 - *(_DWORD *)(v37 + 8));
      v54 = 1;
    }
    else
    {
      v54 = 0;
    }
  }
  else
  {
    v37 = 0LL;
    v133 = 0LL;
    v54 = 0;
  }
LABEL_63:
  if ( (a6 & 6) == 6 && v37 && *(_QWORD *)(v37 + 184) )
  {
    v95 = *(_QWORD *)(*(_QWORD *)(v37 + 56) + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v37 + 56) + 16LL)) )
    {
      v96 = *(struct _KEVENT **)(v95 + 192);
      if ( v96 )
        KeSetEvent(v96, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v95 + 552));
    }
    *(_QWORD *)(v37 + 184) = 0LL;
    *(_QWORD *)(v37 + 56) = 0LL;
  }
  if ( v13 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
  if ( v127 )
  {
    v115 = *(_QWORD *)(v127 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v127 + 16)) )
    {
      v116 = *(struct _KEVENT **)(v115 + 192);
      if ( v116 )
        KeSetEvent(v116, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v115 + 552));
    }
  }
  if ( (a6 & 4) != 0 )
  {
    v117 = *v9;
    if ( *(__int64 *)(v11 + 32) > 0x2000000 )
    {
      CcAcquireBcbLockAndVacbLock(1LL, v11);
      if ( *(__int64 *)(v11 + 32) > 0x2000000 )
        CcSetVacbLargeOffset(v11, v117, -2LL);
      CcReleaseBcbLockAndVacbLock(1LL, v11);
    }
  }
  if ( v54 )
  {
    *v156 = v37;
    *v157 = *(_QWORD *)(v37 + 32);
  }
  else
  {
    *v125 = 0LL;
    if ( v37 )
      CcUnpinFileDataEx((char *)v37, a4, 0);
  }
  return v54;
}
