/*
 * XREFs of MmUnmapViewInSystemCache @ 0x1403203B0
 * Callers:
 *     CcUnmapVacb @ 0x140AFCD38 (CcUnmapVacb.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiManageSubsectionView @ 0x14027D1E0 (MiManageSubsectionView.c)
 *     MiReleaseSystemCacheView @ 0x1402A6600 (MiReleaseSystemCacheView.c)
 *     MiInsertPagesInList @ 0x1402AF3C0 (MiInsertPagesInList.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiGetSystemCacheReverseMap @ 0x1402C6730 (MiGetSystemCacheReverseMap.c)
 *     MiRemoveWsleList @ 0x1402CC5B0 (MiRemoveWsleList.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiWritePteShadow @ 0x14031E2BC (MiWritePteShadow.c)
 *     MiAddPageToInsertList @ 0x140320F90 (MiAddPageToInsertList.c)
 *     MiLogPageAccess @ 0x140322960 (MiLogPageAccess.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiInitializeUsedPtesCount @ 0x140342440 (MiInitializeUsedPtesCount.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiRemoveViewsFromSection @ 0x14036F4F0 (MiRemoveViewsFromSection.c)
 *     MiCheckControlArea @ 0x14036FA60 (MiCheckControlArea.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MiLockSetPfnPriority @ 0x14044F280 (MiLockSetPfnPriority.c)
 *     MiReleaseNoFlushSystemCacheView @ 0x1404B451C (MiReleaseNoFlushSystemCacheView.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404CAB70 (MiReturnCrossPartitionSectionCharges.c)
 *     MiGeneratePteDeleteLazyStamp @ 0x140528EE4 (MiGeneratePteDeleteLazyStamp.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MmUnmapViewInSystemCache(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, int a3)
{
  char v3; // di
  ULONG_PTR v6; // rbp
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r12
  __int64 v9; // r15
  _QWORD *SystemCacheReverseMap; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r11
  ULONG_PTR v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r14
  _QWORD *v18; // rax
  unsigned __int64 v19; // r14
  int v20; // ecx
  char v21; // al
  ULONG *v22; // rax
  unsigned __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 ProcessorFlushList; // rdx
  __int64 v26; // r10
  unsigned __int64 v27; // rbp
  unsigned __int64 v28; // r11
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdi
  volatile unsigned __int64 v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // rcx
  unsigned __int64 v35; // rbx
  __int64 v36; // r15
  bool v37; // zf
  ULONG_PTR v38; // r13
  __int64 v39; // r14
  __int64 v40; // rdx
  unsigned int v41; // edx
  __int64 v42; // r15
  unsigned __int64 v43; // r13
  __int64 v44; // rbx
  unsigned __int64 v45; // r9
  unsigned __int64 *v46; // r8
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // rdx
  int v49; // ecx
  int PagePrivilege; // eax
  unsigned __int64 *v51; // r9
  unsigned __int64 v52; // rdx
  char v53; // r10
  volatile unsigned __int64 v54; // rcx
  unsigned __int64 v55; // r8
  _KPROCESS *v56; // rax
  unsigned __int64 v57; // r8
  unsigned __int64 v58; // r9
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  _KPROCESS *v61; // rax
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // r8
  unsigned __int64 KernelWaitTime; // rax
  __int64 v65; // rax
  _KPROCESS *v66; // rax
  unsigned __int64 v67; // r8
  unsigned __int64 v68; // rcx
  __int64 v69; // rax
  int v70; // r8d
  char v71; // r9
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rdx
  unsigned int v76; // edi
  __int64 v77; // rax
  __int64 v78; // rax
  struct _KLOCK_ENTRIES *v79; // r9
  ULONG_PTR v80; // rbp
  _QWORD *v81; // r15
  ULONG_PTR v82; // rsi
  __int64 *v83; // rdi
  __int64 v84; // rax
  unsigned __int64 v85; // rcx
  __int64 v86; // rdi
  __int64 v87; // rbp
  KIRQL v88; // bl
  __int64 v89; // rax
  __int64 v90; // rsi
  __int64 v91; // rax
  unsigned __int8 v92; // [rsp+30h] [rbp-348h]
  bool v93[3]; // [rsp+31h] [rbp-347h] BYREF
  unsigned int v94; // [rsp+34h] [rbp-344h]
  int v95; // [rsp+38h] [rbp-340h]
  int v96; // [rsp+3Ch] [rbp-33Ch]
  int v97; // [rsp+40h] [rbp-338h] BYREF
  ULONG v98; // [rsp+44h] [rbp-334h]
  int v99; // [rsp+48h] [rbp-330h]
  __int64 v100; // [rsp+50h] [rbp-328h]
  __int64 v101; // [rsp+58h] [rbp-320h]
  _QWORD *v102; // [rsp+60h] [rbp-318h]
  ULONG_PTR v103; // [rsp+68h] [rbp-310h]
  __int64 v104; // [rsp+70h] [rbp-308h]
  _QWORD *v105; // [rsp+78h] [rbp-300h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-2F8h]
  ULONG_PTR v107; // [rsp+88h] [rbp-2F0h]
  unsigned __int64 v108; // [rsp+90h] [rbp-2E8h]
  ULONG_PTR v109; // [rsp+98h] [rbp-2E0h]
  __int64 v110; // [rsp+A0h] [rbp-2D8h]
  _QWORD v111[4]; // [rsp+B0h] [rbp-2C8h] BYREF
  int v112; // [rsp+D0h] [rbp-2A8h]
  __int64 v113; // [rsp+108h] [rbp-270h]
  int v114; // [rsp+120h] [rbp-258h]
  _QWORD v115[64]; // [rsp+130h] [rbp-248h]

  v3 = a3;
  v96 = a3;
  v103 = BugCheckParameter3;
  memset_0(v111, 0, 0x78uLL);
  v97 = v3 & 1;
  v6 = ((BugCheckParameter3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v105 = (_QWORD *)v6;
  v7 = v6;
  v8 = 0LL;
  v95 = 0;
  v110 = *(_QWORD *)(stru_140E2ED08.ThreadLock
                   + 8LL * (*(_DWORD *)(MiSectionControlArea(BugCheckParameter4) + 60) & 0x3FF));
  v9 = v110 + 22592;
  v100 = v110 + 22592;
  SystemCacheReverseMap = (_QWORD *)MiGetSystemCacheReverseMap(BugCheckParameter3);
  v102 = SystemCacheReverseMap;
  v94 = 2;
  v104 = SystemCacheReverseMap[4];
  v14 = v104 & 0x3F;
  if ( (v104 & 0x3F) == 0 )
    v14 = 64LL;
  v15 = SystemCacheReverseMap[3];
  v107 = v14;
  v16 = v15 & 1;
  v17 = 8 * v14;
  v18 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFEuLL);
  v19 = v6 + v17;
  if ( (v15 & 1) == 0 )
    v18 = (_QWORD *)v15;
  v20 = 4;
  if ( !v16 )
    v20 = v94;
  v109 = (ULONG_PTR)v18;
  v99 = v20;
  if ( *v18 != v12 )
    KeBugCheckEx(0x1Au, 0x782uLL, (ULONG_PTR)SystemCacheReverseMap, BugCheckParameter3, BugCheckParameter4);
  v114 = v11;
  v111[0] = 0x3FFFFFFFFFLL;
  v111[1] = 0x3FFFFFFFFFLL;
  v112 = v11;
  v21 = *(_DWORD *)(v110 + 22776) & 0xF;
  v113 = v11;
  if ( v21 == 1 )
    v22 = &MiSystemPartition;
  else
    v22 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v110 + 22766));
  v98 = v22[4539];
  v23 = v13 + ((v6 >> 9) & 0x7FFFFFFFF8LL);
  v108 = v23;
  v92 = MiLockWorkingSetShared(v9, v16, (__int64)SystemCacheReverseMap);
  MiLockPageTableInternal(v9, v23, 0);
  BugCheckParameter2 = 48 * MiGetContainingPageTable(v6) - 0x220000000000LL;
  ProcessorFlushList = MiGetProcessorFlushList(0xFFFFDE0000000000uLL, v24);
  v101 = ProcessorFlushList;
  v26 = 0xFFFFFFFFFFLL;
  v27 = v103;
  v28 = 0xFFFFF6FB7DBED000uLL;
  v29 = 0x800000000000000LL;
  *(_QWORD *)(ProcessorFlushList + 16480) = v103;
  v30 = 0x1FFFFFFFFFF8LL;
  v31 = v9;
  do
  {
    v32 = *(_QWORD *)v7;
    if ( (*(_QWORD *)v7 & 1) != 0 )
    {
      v115[v8] = v32;
      v42 = 48 * ((v32 >> 12) & 0xFFFFFFFFFFLL);
      v43 = v42 - 0x220000000000LL;
      if ( !v98 )
        goto LABEL_49;
      LODWORD(v44) = -1;
      v45 = (__int64)(v7 << 25) >> 16;
      if ( v45 < 0xFFFFF68000000000uLL || v45 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v46 = (unsigned __int64 *)(((v45 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v47 = *v46;
        if ( (unsigned __int64)v46 >= v28
          && (unsigned __int64)v46 <= 0xFFFFF6FB7DBED7F8uLL
          && (v47 & 1) != 0
          && ((v47 & 0x20) == 0 || (v47 & 0x42) == 0) )
        {
          v61 = MiPteHasShadow();
          if ( v61 )
          {
            KernelWaitTime = v61[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              v65 = *(_QWORD *)(KernelWaitTime + 8 * ((v63 >> 3) & 0x1FF));
              if ( (v65 & 0x20) != 0 )
                v62 |= 0x20uLL;
              v26 = 0xFFFFFFFFFFLL;
              v47 = v62 | 0x42;
              if ( (v65 & 0x42) == 0 )
                v47 = v62;
            }
          }
        }
        v44 = HIBYTE(v47) & 0xF;
        if ( (_DWORD)v44 == 7 )
          goto LABEL_49;
      }
      v48 = *(_QWORD *)v7;
      if ( v7 >= v28 && v7 <= 0xFFFFF6FB7DBED7F8uLL && (v48 & 1) != 0 && ((v48 & 0x20) == 0 || (v48 & 0x42) == 0) )
      {
        v66 = MiPteHasShadow();
        if ( v66 )
        {
          v68 = v66[2].KernelWaitTime;
          if ( v68 )
          {
            v69 = *(_QWORD *)(v68 + 8 * ((v7 >> 3) & 0x1FF));
            if ( (v69 & 0x20) != 0 )
              v67 |= 0x20uLL;
            v48 = v67 | 0x42;
            if ( (v69 & 0x42) == 0 )
              v48 = v67;
          }
        }
      }
      if ( (v48 & 0x20) == 0 )
      {
LABEL_49:
        if ( v97 && (*(_QWORD *)(v43 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        {
          if ( (v70 = *(_DWORD *)(v43 + 32), (*(_QWORD *)(v43 + 40) & 0x20000000000000LL) != 0)
            || (*(_DWORD *)(v43 + 32) & 0x8000000) != 0
            && (v43 < 0xFFFFDE0000000000uLL
             || v43 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
             || MiIsDecayPfn(v42 / 48)
             || (v70 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(v43) == 9)
            || (v70 & 0x7000000u) > 0x2000000 && (v70 & 0x7000000u) <= 0x5000000 )
          {
            MiLockSetPfnPriority(v43);
          }
        }
        v51 = (unsigned __int64 *)(((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v28 = 0xFFFFF6FB7DBED000uLL;
        v52 = *v51;
        if ( (unsigned __int64)v51 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)v51 <= 0xFFFFF6FB7DBED7F8uLL
          && (v52 & 1) != 0
          && ((v52 & 0x20) == 0 || (v52 & 0x42) == 0) )
        {
          v56 = MiPteHasShadow();
          if ( v56 )
          {
            v59 = v56[2].KernelWaitTime;
            if ( v59 )
            {
              v60 = *(_QWORD *)(v59 + 8 * ((v58 >> 3) & 0x1FF));
              if ( (v60 & 0x20) != 0 )
                v57 |= 0x20uLL;
              v28 = 0xFFFFF6FB7DBED000uLL;
              v52 = v57 | 0x42;
              if ( (v60 & 0x42) == 0 )
                v52 = v57;
            }
          }
        }
        v53 = HIBYTE(v52) & 0xF | (16 * ((v52 >> 60) & 7));
        if ( v95 )
        {
          *(_QWORD *)v7 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          goto LABEL_58;
        }
        v54 = *(_QWORD *)v7;
        v55 = ((unsigned __int64)MiFlags >> 28) & 3;
        if ( v55 <= 1 )
        {
          if ( v55 )
          {
            if ( v7 >= 0xFFFFF6FB40000000uLL && v7 <= 0xFFFFF6FB7FFFFFFFuLL && (v54 & 0x80u) == 0LL )
              LOBYTE(v54) = v54 | 0x20;
          }
          else
          {
            LOBYTE(v54) = v54 | 0x20;
          }
        }
        else if ( (MiFlags & 0x8000000) != 0 )
        {
          _mm_lfence();
        }
        if ( (v54 & 0x20) != 0 )
        {
          *(_QWORD *)v7 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        }
        else
        {
          if ( (MiFlags & 0x8000000) != 0 )
            _mm_lfence();
          v71 = _InterlockedExchange64((volatile __int64 *)v7, *(__int64 *)&CLFS_LSN_NULL_EXT);
          if ( v7 >= v28 && v7 <= 0xFFFFF6FB7DBED7F8uLL )
            MiWritePteShadow();
          if ( (v71 & 0x20) == 0 )
          {
            v95 = 0;
            goto LABEL_58;
          }
        }
        v95 = 1;
LABEL_58:
        ProcessorFlushList = v101;
        v30 = 0x1FFFFFFFFFF8LL;
        v34 = v101 + 8LL * *(unsigned int *)(v101 + 16488);
        *(_DWORD *)(v34 + 16496) = 0;
        *(_BYTE *)(v34 + 16497) |= 1u;
        *(_BYTE *)(v34 + 16496) = v53;
        v26 = 0xFFFFFFFFFFLL;
        v29 = 0x800000000000000LL;
        *(_WORD *)(v34 + 16498) = ((unsigned int)v7 >> 3) & 0x1FF;
        ++*(_DWORD *)(ProcessorFlushList + 16488);
        v35 = *(_QWORD *)(v43 + 8) | 0x8000000000000000uLL;
        ++v8;
        goto LABEL_19;
      }
      v49 = *(_DWORD *)(v31 + 184);
      if ( (v49 & 0xF) != 0 )
      {
        if ( !_bittest64(&MiFlags, 0x26u) || (v49 & 0x40) == 0 )
          goto LABEL_48;
      }
      else if ( !*(_QWORD *)(v31 + 624) && (*(_QWORD *)(v31 - 656) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
      {
        goto LABEL_48;
      }
      if ( (*(_DWORD *)(v31 + 184) & 0xF) != 0 )
      {
        if ( (MiGetPagePrivilege((_QWORD *)(48 * (v26 & (v48 >> 12)) - 0x220000000000LL), v94, 0LL) & 0x41) == 0 )
          goto LABEL_48;
      }
      else
      {
        if ( v45 >= 0x7FFFFFFF0000LL )
          goto LABEL_48;
        if ( !*(_QWORD *)(v31 + 624) )
        {
          PagePrivilege = MiGetPagePrivilege((_QWORD *)(48 * (v26 & (v48 >> 12)) - 0x220000000000LL), v94, 0LL);
          if ( !PagePrivilege || (*(_BYTE *)(v31 - 656) & 1) == 0 && (PagePrivilege & 8) != 0 )
            goto LABEL_48;
        }
      }
      if ( (_DWORD)v44 )
        goto LABEL_49;
LABEL_48:
      MiLogPageAccess(v31, v7);
      goto LABEL_49;
    }
    if ( qword_140E2D8C0 )
    {
      v33 = qword_140E2D8C8 & v32;
      v32 &= ~0x10uLL;
      if ( (*(_QWORD *)v7 & 0x10) == 0 )
        v32 = v33;
    }
    v34 = qword_140E37D10;
    if ( (v32 & 0x800000000000000LL) == 0 )
      v34 = qword_140E37D20;
    *(_QWORD *)v7 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    v35 = v34 + ((v32 >> 9) & 0x1FFFFFFFFFF8LL);
LABEL_19:
    v7 += 8LL;
    v27 += 4096LL;
  }
  while ( v7 < v19 );
  v36 = v100;
  if ( v8 )
    MiRemoveWsleList(v100, ProcessorFlushList);
  v37 = (v96 & 2) == 0;
  v96 &= 2u;
  v102[4] = v104 & 0x3FFFFFFFFFFFFFFFLL | 0x8000000000000000uLL;
  if ( !v37 )
  {
    if ( v95 )
    {
      v91 = MiGeneratePteDeleteLazyStamp(v34, ProcessorFlushList, v29, v30);
      if ( v91 )
        *v105 = v91;
    }
  }
  v38 = BugCheckParameter2;
  v39 = 0LL;
  v97 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v97);
    while ( *(__int64 *)(v38 + 24) < 0 );
  }
  if ( (*(_DWORD *)(v38 + 36) & 0x4000000) != 0 )
    v40 = *(_QWORD *)v38 >> 36;
  else
    v40 = *(_QWORD *)(v38 + 16) >> 17;
  v41 = v40 & 0x3FF;
  if ( v41 < (unsigned int)v107 )
    KeBugCheckEx(0x1Au, 0x41790uLL, v38, v41, (unsigned int)v107);
  MiInitializeUsedPtesCount(v38, v41 - (unsigned int)v107, v29, v30);
  if ( v8 )
  {
    v72 = 0xC000000000000000uLL;
    v73 = *(_QWORD *)(v38 + 24) - v8;
    *(_QWORD *)(v38 + 24) = v73 ^ (v73 ^ *(_QWORD *)(v38 + 24)) & 0xC000000000000000uLL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_DWORD *)(v101 + 16488) = 0;
  MiReleaseProcessorFlushList(v73, v72, v74);
  MiUnlockPageTableInternal(v36, v108);
  LOBYTE(v75) = 17;
  MiUnlockWorkingSetShared(v36, v75);
  v76 = 0;
  if ( v8 )
  {
    v77 = 0LL;
    do
    {
      v78 = v115[v77];
      if ( (v78 & 1) != 0 )
      {
        v93[0] = (v78 & 0x42) != 0;
        MiAddPageToInsertList(v111, v93);
      }
      v77 = ++v76;
    }
    while ( v76 < v8 );
  }
  MiInsertPagesInList(v111);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v92);
  __writecr8(v92);
  v80 = v109;
  v81 = v102;
  v82 = v109;
  v83 = (__int64 *)v109;
  MiManageSubsectionView((_QWORD *)v109, v102, v99, v79);
  while ( 1 )
  {
    v84 = *(unsigned int *)(v80 + 44);
    v85 = *(_QWORD *)(v80 + 8);
    v39 += v84;
    if ( v35 >= v85 && v35 < v85 + 8 * v84 )
      break;
    v80 = *(_QWORD *)(v80 + 16);
  }
  v86 = *v83;
  v87 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v86 + 60) & 0x3FF));
  v88 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v86 + 72));
  v89 = MiRemoveViewsFromSection(v82);
  --*(_QWORD *)(v86 + 40);
  --*(_DWORD *)(v86 + 88);
  v90 = v89;
  MiCheckControlArea(v86, v88);
  if ( v90 )
    MiReturnCrossPartitionSectionCharges(v87, 1LL, v90);
  if ( !v96 )
  {
    if ( v95 )
      MiReleaseSystemCacheView(0LL, v103);
    else
      MiReleaseNoFlushSystemCacheView(v110, v81);
  }
}
