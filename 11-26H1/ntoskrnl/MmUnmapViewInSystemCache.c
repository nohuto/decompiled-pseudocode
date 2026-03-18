/*
 * XREFs of MmUnmapViewInSystemCache @ 0x14031E380
 * Callers:
 *     CcUnmapVacb @ 0x140AFAAD0 (CcUnmapVacb.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiManageSubsectionView @ 0x14027DC70 (MiManageSubsectionView.c)
 *     MiReleaseSystemCacheView @ 0x1402A71F0 (MiReleaseSystemCacheView.c)
 *     MiLockPageTableInternal @ 0x1402B34E0 (MiLockPageTableInternal.c)
 *     MiInsertPagesInList @ 0x1402CD600 (MiInsertPagesInList.c)
 *     MiUnlockPageTableInternal @ 0x1402D13E0 (MiUnlockPageTableInternal.c)
 *     MiGetContainingPageTable @ 0x1402D9BF0 (MiGetContainingPageTable.c)
 *     MiGetSystemCacheReverseMap @ 0x1402E46F0 (MiGetSystemCacheReverseMap.c)
 *     MiRemoveWsleList @ 0x1402EA570 (MiRemoveWsleList.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiIsDecayPfn @ 0x1402F9850 (MiIsDecayPfn.c)
 *     MiGetPagePrivilege @ 0x1402F9878 (MiGetPagePrivilege.c)
 *     MiGetPfnSlabType @ 0x1402FDC40 (MiGetPfnSlabType.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x14031C28C (MiWritePteShadow.c)
 *     MiAddPageToInsertList @ 0x14031EF60 (MiAddPageToInsertList.c)
 *     MiLogPageAccess @ 0x140320930 (MiLogPageAccess.c)
 *     MiGetProcessorFlushList @ 0x1403229E0 (MiGetProcessorFlushList.c)
 *     MiInitializeUsedPtesCount @ 0x1403403C0 (MiInitializeUsedPtesCount.c)
 *     MiReleaseProcessorFlushList @ 0x1403613C0 (MiReleaseProcessorFlushList.c)
 *     MiRemoveViewsFromSection @ 0x14036D750 (MiRemoveViewsFromSection.c)
 *     MiCheckControlArea @ 0x14036DCC0 (MiCheckControlArea.c)
 *     MiSectionControlArea @ 0x14038A9B0 (MiSectionControlArea.c)
 *     MiLockSetPfnPriority @ 0x140457A10 (MiLockSetPfnPriority.c)
 *     MiReleaseNoFlushSystemCacheView @ 0x1404BAC8C (MiReleaseNoFlushSystemCacheView.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404D1140 (MiReturnCrossPartitionSectionCharges.c)
 *     MiGeneratePteDeleteLazyStamp @ 0x140526874 (MiGeneratePteDeleteLazyStamp.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __fastcall MmUnmapViewInSystemCache(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, int a3)
{
  char v3; // di
  ULONG_PTR v6; // rbp
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r12
  __int64 v9; // r14
  __int64 SystemCacheReverseMap; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  ULONG_PTR v13; // rax
  unsigned __int64 v14; // rcx
  _QWORD *v15; // r11
  __int64 v16; // r15
  int v17; // eax
  unsigned __int64 v18; // r15
  char v19; // al
  ULONG *v20; // rax
  __int64 v21; // rdx
  __int64 ProcessorFlushList; // rdx
  __int64 v23; // r10
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // r11
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  volatile unsigned __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned __int64 v32; // rbx
  __int64 v33; // r14
  _QWORD *v34; // rbp
  bool v35; // zf
  ULONG_PTR v36; // r13
  __int64 v37; // r15
  __int64 v38; // rdx
  unsigned int v39; // edx
  __int64 v40; // r14
  unsigned __int64 v41; // r13
  __int64 v42; // rbx
  unsigned __int64 v43; // r9
  unsigned __int64 *v44; // r8
  unsigned __int64 v45; // rbx
  unsigned __int64 v46; // rdx
  int v47; // ecx
  int PagePrivilege; // eax
  unsigned __int64 *v49; // r9
  unsigned __int64 v50; // rdx
  char v51; // r10
  volatile unsigned __int64 v52; // rcx
  unsigned __int64 v53; // r8
  _KPROCESS *v54; // rax
  unsigned __int64 v55; // r8
  unsigned __int64 v56; // r9
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  _KPROCESS *v59; // rax
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // r8
  unsigned __int64 KernelWaitTime; // rax
  __int64 v63; // rax
  _KPROCESS *v64; // rax
  unsigned __int64 v65; // r8
  unsigned __int64 v66; // rcx
  __int64 v67; // rax
  int v68; // r8d
  char v69; // r9
  unsigned __int64 v70; // rdx
  unsigned __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rdx
  unsigned int v74; // edi
  __int64 v75; // rax
  __int64 v76; // rax
  struct _KLOCK_ENTRIES *v77; // r9
  ULONG_PTR v78; // r14
  ULONG_PTR v79; // rdi
  __int64 v80; // rax
  unsigned __int64 v81; // rcx
  __int64 v82; // rdi
  __int64 v83; // rbp
  KIRQL v84; // bl
  __int64 v85; // rax
  __int64 v86; // rsi
  __int64 v87; // rax
  unsigned __int8 v88; // [rsp+30h] [rbp-338h]
  bool v89[3]; // [rsp+31h] [rbp-337h] BYREF
  int v90; // [rsp+34h] [rbp-334h]
  int v91; // [rsp+38h] [rbp-330h]
  int v92; // [rsp+3Ch] [rbp-32Ch] BYREF
  ULONG v93; // [rsp+40h] [rbp-328h]
  int v94; // [rsp+44h] [rbp-324h]
  __int64 v95; // [rsp+48h] [rbp-320h]
  __int64 v96; // [rsp+50h] [rbp-318h]
  ULONG_PTR v97; // [rsp+58h] [rbp-310h]
  _QWORD *v98; // [rsp+60h] [rbp-308h]
  __int64 v99; // [rsp+68h] [rbp-300h]
  _QWORD *v100; // [rsp+70h] [rbp-2F8h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-2F0h]
  ULONG_PTR v102; // [rsp+80h] [rbp-2E8h]
  unsigned __int64 v103; // [rsp+88h] [rbp-2E0h]
  ULONG_PTR v104; // [rsp+90h] [rbp-2D8h]
  __int64 v105; // [rsp+98h] [rbp-2D0h]
  _QWORD v106[4]; // [rsp+A0h] [rbp-2C8h] BYREF
  int v107; // [rsp+C0h] [rbp-2A8h]
  __int64 v108; // [rsp+F8h] [rbp-270h]
  int v109; // [rsp+110h] [rbp-258h]
  _QWORD v110[64]; // [rsp+120h] [rbp-248h]

  v3 = a3;
  v91 = a3;
  v97 = BugCheckParameter3;
  memset_0(v106, 0, 0x78uLL);
  v92 = v3 & 1;
  v6 = ((BugCheckParameter3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v100 = (_QWORD *)v6;
  v7 = v6;
  v8 = 0LL;
  v90 = 0;
  v105 = *(_QWORD *)(stru_140E2EB88.ThreadLock
                   + 8LL * (*(_DWORD *)(MiSectionControlArea(BugCheckParameter4) + 60) & 0x3FF));
  v9 = v105 + 22592;
  v95 = v105 + 22592;
  SystemCacheReverseMap = MiGetSystemCacheReverseMap(BugCheckParameter3);
  v98 = (_QWORD *)SystemCacheReverseMap;
  v99 = *(_QWORD *)(SystemCacheReverseMap + 32);
  v13 = v99 & 0x3F;
  if ( (v99 & 0x3F) == 0 )
    v13 = 64LL;
  v14 = *(_QWORD *)(SystemCacheReverseMap + 24);
  v102 = v13;
  v15 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFEuLL);
  v16 = 8 * v13;
  v17 = 4;
  v18 = v6 + v16;
  if ( (v14 & 1) == 0 )
  {
    v15 = (_QWORD *)v14;
    v17 = 2;
  }
  v104 = (ULONG_PTR)v15;
  v94 = v17;
  if ( *v15 != v12 )
    KeBugCheckEx(0x1Au, 0x782uLL, SystemCacheReverseMap, BugCheckParameter3, BugCheckParameter4);
  v109 = v11;
  v106[0] = 0x3FFFFFFFFFLL;
  v106[1] = 0x3FFFFFFFFFLL;
  v107 = v11;
  v19 = *(_DWORD *)(v105 + 22776) & 0xF;
  v108 = v11;
  if ( v19 == 1 )
    v20 = &MiSystemPartition;
  else
    v20 = *(ULONG **)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(v105 + 22766));
  v93 = v20[4539];
  v103 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v88 = MiLockWorkingSetShared(v9, v14 & 1, SystemCacheReverseMap);
  MiLockPageTableInternal(v9, v103, 0);
  BugCheckParameter2 = 48 * MiGetContainingPageTable(v6) - 0x220000000000LL;
  ProcessorFlushList = MiGetProcessorFlushList(0xFFFFDE0000000000uLL, v21);
  v96 = ProcessorFlushList;
  v23 = 0xFFFFFFFFFFLL;
  v24 = v97;
  v25 = 0xFFFFF6FB7DBED000uLL;
  v26 = 0x800000000000000LL;
  *(_QWORD *)(ProcessorFlushList + 16480) = v97;
  v27 = 0x1FFFFFFFFFF8LL;
  v28 = v9;
  do
  {
    v29 = *(_QWORD *)v7;
    if ( (*(_QWORD *)v7 & 1) != 0 )
    {
      v110[v8] = v29;
      v40 = 48 * ((v29 >> 12) & 0xFFFFFFFFFFLL);
      v41 = v40 - 0x220000000000LL;
      if ( !v93 )
        goto LABEL_47;
      LODWORD(v42) = -1;
      v43 = (__int64)(v7 << 25) >> 16;
      if ( v43 < 0xFFFFF68000000000uLL || v43 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v44 = (unsigned __int64 *)(((v43 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v45 = *v44;
        if ( (unsigned __int64)v44 >= v25
          && (unsigned __int64)v44 <= 0xFFFFF6FB7DBED7F8uLL
          && (v45 & 1) != 0
          && ((v45 & 0x20) == 0 || (v45 & 0x42) == 0) )
        {
          v59 = MiPteHasShadow();
          if ( v59 )
          {
            KernelWaitTime = v59[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              v63 = *(_QWORD *)(KernelWaitTime + 8 * ((v61 >> 3) & 0x1FF));
              if ( (v63 & 0x20) != 0 )
                v60 |= 0x20uLL;
              v23 = 0xFFFFFFFFFFLL;
              v45 = v60 | 0x42;
              if ( (v63 & 0x42) == 0 )
                v45 = v60;
            }
          }
        }
        v42 = HIBYTE(v45) & 0xF;
        if ( (_DWORD)v42 == 7 )
          goto LABEL_47;
      }
      v46 = *(_QWORD *)v7;
      if ( v7 >= v25 && v7 <= 0xFFFFF6FB7DBED7F8uLL && (v46 & 1) != 0 && ((v46 & 0x20) == 0 || (v46 & 0x42) == 0) )
      {
        v64 = MiPteHasShadow();
        if ( v64 )
        {
          v66 = v64[2].KernelWaitTime;
          if ( v66 )
          {
            v67 = *(_QWORD *)(v66 + 8 * ((v7 >> 3) & 0x1FF));
            if ( (v67 & 0x20) != 0 )
              v65 |= 0x20uLL;
            v46 = v65 | 0x42;
            if ( (v67 & 0x42) == 0 )
              v46 = v65;
          }
        }
      }
      if ( (v46 & 0x20) == 0 )
      {
LABEL_47:
        if ( v92 && (*(_QWORD *)(v41 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        {
          if ( (v68 = *(_DWORD *)(v41 + 32), (*(_QWORD *)(v41 + 40) & 0x20000000000000LL) != 0)
            || (*(_DWORD *)(v41 + 32) & 0x8000000) != 0
            && (v41 < 0xFFFFDE0000000000uLL
             || v41 >= 48 * qword_140E2D7A0 - 0x21FFFFFFFFD0LL
             || MiIsDecayPfn(v40 / 48)
             || (v68 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(v41) == 9)
            || (v68 & 0x7000000u) > 0x2000000 && (v68 & 0x7000000u) <= 0x5000000 )
          {
            MiLockSetPfnPriority(v41);
          }
        }
        v49 = (unsigned __int64 *)(((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v25 = 0xFFFFF6FB7DBED000uLL;
        v50 = *v49;
        if ( (unsigned __int64)v49 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)v49 <= 0xFFFFF6FB7DBED7F8uLL
          && (v50 & 1) != 0
          && ((v50 & 0x20) == 0 || (v50 & 0x42) == 0) )
        {
          v54 = MiPteHasShadow();
          if ( v54 )
          {
            v57 = v54[2].KernelWaitTime;
            if ( v57 )
            {
              v58 = *(_QWORD *)(v57 + 8 * ((v56 >> 3) & 0x1FF));
              if ( (v58 & 0x20) != 0 )
                v55 |= 0x20uLL;
              v25 = 0xFFFFF6FB7DBED000uLL;
              v50 = v55 | 0x42;
              if ( (v58 & 0x42) == 0 )
                v50 = v55;
            }
          }
        }
        v51 = HIBYTE(v50) & 0xF | (16 * ((v50 >> 60) & 7));
        if ( v90 )
        {
          *(_QWORD *)v7 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          goto LABEL_56;
        }
        v52 = *(_QWORD *)v7;
        v53 = ((unsigned __int64)MiFlags >> 28) & 3;
        if ( v53 <= 1 )
        {
          if ( v53 )
          {
            if ( v7 >= 0xFFFFF6FB40000000uLL && v7 <= 0xFFFFF6FB7FFFFFFFuLL && (v52 & 0x80u) == 0LL )
              LOBYTE(v52) = v52 | 0x20;
          }
          else
          {
            LOBYTE(v52) = v52 | 0x20;
          }
        }
        else if ( (MiFlags & 0x8000000) != 0 )
        {
          _mm_lfence();
        }
        if ( (v52 & 0x20) != 0 )
        {
          *(_QWORD *)v7 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        }
        else
        {
          if ( (MiFlags & 0x8000000) != 0 )
            _mm_lfence();
          v69 = _InterlockedExchange64((volatile __int64 *)v7, *(__int64 *)&CLFS_LSN_NULL_EXT);
          if ( v7 >= v25 && v7 <= 0xFFFFF6FB7DBED7F8uLL )
            MiWritePteShadow();
          if ( (v69 & 0x20) == 0 )
          {
            v90 = 0;
            goto LABEL_56;
          }
        }
        v90 = 1;
LABEL_56:
        ProcessorFlushList = v96;
        v27 = 0x1FFFFFFFFFF8LL;
        v31 = v96 + 8LL * *(unsigned int *)(v96 + 16488);
        *(_DWORD *)(v31 + 16496) = 0;
        *(_BYTE *)(v31 + 16497) |= 1u;
        *(_BYTE *)(v31 + 16496) = v51;
        v23 = 0xFFFFFFFFFFLL;
        v26 = 0x800000000000000LL;
        *(_WORD *)(v31 + 16498) = ((unsigned int)v7 >> 3) & 0x1FF;
        ++*(_DWORD *)(ProcessorFlushList + 16488);
        v32 = *(_QWORD *)(v41 + 8) | 0x8000000000000000uLL;
        ++v8;
        goto LABEL_17;
      }
      v47 = *(_DWORD *)(v28 + 184);
      if ( (v47 & 0xF) != 0 )
      {
        if ( !_bittest64(&MiFlags, 0x26u) || (v47 & 0x40) == 0 )
          goto LABEL_46;
      }
      else if ( !*(_QWORD *)(v28 + 624) && (*(_QWORD *)(v28 - 656) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
      {
        goto LABEL_46;
      }
      if ( (*(_DWORD *)(v28 + 184) & 0xF) != 0 )
      {
        if ( (MiGetPagePrivilege((_QWORD *)(48 * (v23 & (v46 >> 12)) - 0x220000000000LL), 2LL, 0LL) & 0x41) == 0 )
          goto LABEL_46;
      }
      else
      {
        if ( v43 >= 0x7FFFFFFF0000LL )
          goto LABEL_46;
        if ( !*(_QWORD *)(v28 + 624) )
        {
          PagePrivilege = MiGetPagePrivilege((_QWORD *)(48 * (v23 & (v46 >> 12)) - 0x220000000000LL), 2LL, 0LL);
          if ( !PagePrivilege || (*(_BYTE *)(v28 - 656) & 1) == 0 && (PagePrivilege & 8) != 0 )
            goto LABEL_46;
        }
      }
      if ( (_DWORD)v42 )
        goto LABEL_47;
LABEL_46:
      MiLogPageAccess(v28, v7);
      goto LABEL_47;
    }
    if ( qword_140E2D740 )
    {
      v30 = qword_140E2D748 & v29;
      v29 &= ~0x10uLL;
      if ( (*(_QWORD *)v7 & 0x10) == 0 )
        v29 = v30;
    }
    v31 = qword_140E37B90;
    if ( (v29 & 0x800000000000000LL) == 0 )
      v31 = qword_140E37BA0;
    *(_QWORD *)v7 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    v32 = v31 + ((v29 >> 9) & 0x1FFFFFFFFFF8LL);
LABEL_17:
    v7 += 8LL;
    v24 += 4096LL;
  }
  while ( v7 < v18 );
  v33 = v95;
  if ( v8 )
    MiRemoveWsleList(v95, ProcessorFlushList);
  v34 = v98;
  v35 = (v91 & 2) == 0;
  v91 &= 2u;
  v98[4] = v99 & 0x3FFFFFFFFFFFFFFFLL | 0x8000000000000000uLL;
  if ( !v35 )
  {
    if ( v90 )
    {
      v87 = MiGeneratePteDeleteLazyStamp(v31, ProcessorFlushList, v26, v27);
      if ( v87 )
        *v100 = v87;
    }
  }
  v36 = BugCheckParameter2;
  v37 = 0LL;
  v92 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v92);
    while ( *(__int64 *)(v36 + 24) < 0 );
  }
  if ( (*(_DWORD *)(v36 + 36) & 0x4000000) != 0 )
    v38 = *(_QWORD *)v36 >> 36;
  else
    v38 = *(_QWORD *)(v36 + 16) >> 17;
  v39 = v38 & 0x3FF;
  if ( v39 < (unsigned int)v102 )
    KeBugCheckEx(0x1Au, 0x41790uLL, v36, v39, (unsigned int)v102);
  MiInitializeUsedPtesCount(v36, v39 - (unsigned int)v102, v26, v27);
  if ( v8 )
  {
    v70 = 0xC000000000000000uLL;
    v71 = *(_QWORD *)(v36 + 24) - v8;
    *(_QWORD *)(v36 + 24) = v71 ^ (v71 ^ *(_QWORD *)(v36 + 24)) & 0xC000000000000000uLL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_DWORD *)(v96 + 16488) = 0;
  MiReleaseProcessorFlushList(v71, v70, v72);
  MiUnlockPageTableInternal(v33, v103);
  LOBYTE(v73) = 17;
  MiUnlockWorkingSetShared(v33, v73);
  v74 = 0;
  if ( v8 )
  {
    v75 = 0LL;
    do
    {
      v76 = v110[v75];
      if ( (v76 & 1) != 0 )
      {
        v89[0] = (v76 & 0x42) != 0;
        MiAddPageToInsertList(v106, v89);
      }
      v75 = ++v74;
    }
    while ( v74 < v8 );
  }
  MiInsertPagesInList(v106);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v88);
  __writecr8(v88);
  v78 = v104;
  v79 = v104;
  MiManageSubsectionView((_QWORD *)v104, v34, v94, v77);
  while ( 1 )
  {
    v80 = *(unsigned int *)(v79 + 44);
    v81 = *(_QWORD *)(v79 + 8);
    v37 += v80;
    if ( v32 >= v81 && v32 < v81 + 8 * v80 )
      break;
    v79 = *(_QWORD *)(v79 + 16);
  }
  v82 = *(_QWORD *)v78;
  v83 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * (*(_DWORD *)(*(_QWORD *)v78 + 60LL) & 0x3FF));
  v84 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)v78 + 72LL));
  v85 = MiRemoveViewsFromSection(v78);
  --*(_QWORD *)(v82 + 40);
  --*(_DWORD *)(v82 + 88);
  v86 = v85;
  MiCheckControlArea(v82, v84);
  if ( v86 )
    MiReturnCrossPartitionSectionCharges(v83, 1LL, v86);
  if ( !v91 )
  {
    if ( v90 )
      MiReleaseSystemCacheView(0LL, v97);
    else
      MiReleaseNoFlushSystemCacheView(v105, v98);
  }
}
