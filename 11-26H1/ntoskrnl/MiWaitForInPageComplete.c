/*
 * XREFs of MiWaitForInPageComplete @ 0x14038FFA0
 * Callers:
 *     MiIssueHardFault @ 0x14038F100 (MiIssueHardFault.c)
 *     MiPfCompleteInPageSupport @ 0x1403A1878 (MiPfCompleteInPageSupport.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiFindContiguousPagesEx @ 0x14028E660 (MiFindContiguousPagesEx.c)
 *     MiCopyPage @ 0x140293504 (MiCopyPage.c)
 *     MiZeroPhysicalPage @ 0x1402BA8E0 (MiZeroPhysicalPage.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MmIsAddressValidEx @ 0x140350050 (MmIsAddressValidEx.c)
 *     MiValidateInPage @ 0x14038DF04 (MiValidateInPage.c)
 *     MiValidatePagefilePageHash @ 0x14038ED2C (MiValidatePagefilePageHash.c)
 *     PfHardFaultLog @ 0x140390674 (PfHardFaultLog.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14042AE90 (MiUnmapPageInHyperSpaceWorker.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     MiIsRetryIoStatus @ 0x140467310 (MiIsRetryIoStatus.c)
 *     MiDeleteControlArea @ 0x140481D20 (MiDeleteControlArea.c)
 *     MiPrefetchRestOfCluster @ 0x1404C5E4C (MiPrefetchRestOfCluster.c)
 *     MiRetardMdl @ 0x1404FDE4C (MiRetardMdl.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiFlushAllFilesystemPages @ 0x1405343FC (MiFlushAllFilesystemPages.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiExceptionForMappedVa @ 0x1406FBB6C (MiExceptionForMappedVa.c)
 *     MiStoreLogReadFailure @ 0x14070F7D8 (MiStoreLogReadFailure.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MiWaitForInPageComplete(__int64 a1, ULONG_PTR a2, unsigned int *a3)
{
  __int64 v3; // r8
  __int64 v5; // r13
  unsigned int v7; // ebx
  int v8; // eax
  ULONG_PTR v9; // rax
  unsigned __int64 v10; // r9
  ULONG_PTR v11; // r15
  ULONG_PTR v12; // rsi
  __int64 v13; // rax
  ULONG_PTR v14; // r9
  int *v15; // r12
  int v16; // edi
  unsigned int v17; // r8d
  unsigned __int64 v18; // rax
  __int64 v19; // rdi
  int v20; // r12d
  int v21; // edx
  unsigned int v22; // eax
  int *v23; // rax
  int v24; // eax
  unsigned int *v25; // r13
  unsigned int v26; // edi
  bool v27; // zf
  int IsRetryIoStatus; // r13d
  int v29; // edi
  __int64 v30; // rdx
  int v31; // edi
  ULONG_PTR v32; // rdi
  void *v33; // rcx
  unsigned __int64 v34; // rax
  unsigned int v35; // edx
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  void *v38; // rdi
  __int64 v39; // r8
  __int64 v40; // r10
  unsigned __int64 v41; // rdi
  __int64 *v42; // r15
  __int64 v43; // r15
  __int64 v44; // rdx
  __int64 v45; // rax
  unsigned __int64 DemandZeroPte; // rax
  unsigned __int8 CurrentIrql; // si
  _QWORD *v48; // rax
  __int64 v49; // rax
  int v50; // r12d
  int v51; // r12d
  int v52; // eax
  __int64 v53; // rcx
  ULONG_PTR v54; // rbx
  _KPROCESS *v55; // rax
  ULONG_PTR v56; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v58; // rax
  int v59; // [rsp+70h] [rbp-78h]
  __int64 v60; // [rsp+70h] [rbp-78h]
  ULONG_PTR BugCheckParameter4; // [rsp+78h] [rbp-70h]
  ULONG_PTR v62; // [rsp+80h] [rbp-68h] BYREF
  unsigned __int64 v63; // [rsp+88h] [rbp-60h]
  __int64 v64; // [rsp+90h] [rbp-58h]
  ULONG_PTR BugCheckParameter1; // [rsp+98h] [rbp-50h]
  unsigned __int8 v66; // [rsp+F0h] [rbp+8h] BYREF
  unsigned __int64 v67; // [rsp+F8h] [rbp+10h] BYREF
  unsigned int *v68; // [rsp+100h] [rbp+18h]
  __int64 v69; // [rsp+108h] [rbp+20h]

  v68 = a3;
  v3 = *(_QWORD *)(a2 + 256);
  v5 = *(_QWORD *)(a1 + 56);
  BugCheckParameter1 = *(_QWORD *)(a2 + 240);
  v7 = 0;
  BugCheckParameter4 = *(_QWORD *)(a2 + 232);
  v8 = *(_DWORD *)(a2 + 188);
  v66 = 0;
  v64 = v3;
  if ( (v8 & 0x400000) != 0 )
    v9 = 0LL;
  else
    v9 = *(_QWORD *)(a2 + 208);
  v10 = 0xFFFFDE0000000000uLL;
  v11 = a2 + 272;
  v12 = -1LL;
  if ( v9 )
    v11 = v9;
  v62 = -1LL;
  if ( *(__int64 *)(v3 + 8) > 0
    && (*(_QWORD *)(v3 + 40) & 0x10000000000LL) == 0
    && (unsigned int)MiGetPfnSlabType(v3) == 9 )
  {
    v49 = (*(_QWORD *)(v39 + 40) >> 43) & 0x3FFLL;
    v50 = ~(*(_DWORD *)(a1 + 80) << 9);
    v67 = ((unsigned __int64)((unsigned __int128)((__int64)(v39 - v10) * (__int128)v40) >> 64) >> 63)
        + ((__int64)((unsigned __int128)((__int64)(v39 - v10) * (__int128)v40) >> 64) >> 3);
    v51 = v50 & 0x20000 | 0x40000000;
    v69 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v49);
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)&KeSwapProcessOrStackThread )
      v51 |= 8u;
    v52 = MiPageToNode(
            ((unsigned __int64)((unsigned __int128)((__int64)(v39 - v10) * (__int128)v40) >> 64) >> 63)
          + ((__int64)((unsigned __int128)((__int64)(v39 - v10) * (__int128)v40) >> 64) >> 3));
    MiFindContiguousPagesEx(
      v69,
      v67 + 1,
      qword_140E2D920,
      0LL,
      0,
      1LL,
      (*(_DWORD *)(v64 + 32) >> 22) & 3,
      v52,
      255,
      v51,
      0,
      0LL,
      0LL,
      &v62);
  }
  v13 = *(_QWORD *)(a1 + 16);
  if ( (v13 & 1) != 0 && *(_BYTE *)(v13 & 0xFFFFFFFFFFFFFFFEuLL) == 2 && v5 && !*(_DWORD *)(a2 + 36) )
    MiPrefetchRestOfCluster(a2, *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFEuLL, v5, v10);
  KeWaitForSingleObject((PVOID)(a2 + 32), WrPageIn, 0, 0, 0LL);
  v14 = *(_QWORD *)(a2 + 264);
  if ( v14 )
    KeBugCheckEx(0x1Au, 0x61947uLL, a2, v14, 0LL);
  if ( v5 && (HIBYTE(*(_DWORD *)(v5 + 184)) & 0x30) == 0x30 )
  {
    v48 = &unk_140E379A0;
    if ( (*(_DWORD *)(v5 + 184) & 0xF) != 1 )
      v48 = (_QWORD *)(v5 + 224);
    if ( !*v48 )
      KiUnstackDetachProcess(a2 + 104, 0);
  }
  if ( _bittest16((const signed __int16 *)(v11 + 10), 9u) )
  {
    MiRetardMdl(v11);
    v15 = (int *)(a2 + 80);
    *(_QWORD *)(a2 + 88) = 0LL;
    *(_DWORD *)(a2 + 80) = -1073741670;
  }
  else
  {
    v15 = (int *)(a2 + 80);
  }
  v16 = *(_DWORD *)(a2 + 188);
  v17 = *(_DWORD *)(a2 + 184);
  v18 = ((((*(_DWORD *)(v11 + 32) + *(_DWORD *)(v11 + 44)) & 0xFFF)
        + (unsigned __int64)*(unsigned int *)(v11 + 40)
        + 4095) >> 12)
      + 5;
  LODWORD(v67) = v17;
  LODWORD(v69) = 0;
  v63 = v11 + 8 * v18;
  if ( (v16 & 0x400000) == 0 )
  {
    v19 = *(_QWORD *)(a2 + 192);
    if ( v19 )
    {
      if ( *v15 >= 0 )
      {
        LODWORD(v69) = MiValidateInPage(a2);
        if ( (_DWORD)v69 == -1073740748 )
        {
          v15 = (int *)(a2 + 80);
          *(_DWORD *)(a2 + 188) |= 0x200000u;
        }
      }
      v33 = *(void **)v19;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)v19 + 112LL), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        MiDeleteControlArea(v33);
      v17 = v67;
    }
    v20 = *v15;
    v21 = 0;
LABEL_15:
    __incgsdword(0x2EA4u);
    __addgsdword(0x2EA0u, (v17 >> 12) + ((v17 & 0xFFF) != 0));
    if ( v5 && (*(_DWORD *)(a2 + 188) & 0x20) == 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 168));
    goto LABEL_26;
  }
  if ( (v16 & 0x400) != 0 )
  {
    v22 = *v15;
    v7 = 1;
    v59 = *v15;
    if ( *v15 < 0 )
    {
      if ( v22 == -1073741275 )
      {
        if ( (*(_QWORD *)(48LL * *(_QWORD *)(a2 + 320) - 0x21FFFFFFFFE8LL) & 0x4000000000000000LL) == 0 )
          KeBugCheckEx(0x1Au, 0x6000uLL, a2, *v15, *(unsigned int *)(a2 + 184));
      }
      else if ( v22 != -1073741791 )
      {
        if ( (unsigned int)MiIsRetryIoStatus(v22, 4096LL) )
        {
          v7 = 3;
        }
        else
        {
          if ( v59 == -1073741807 || v59 == -2147483626 )
            KeBugCheckEx(0x1Au, 0x6002uLL, a2, v59, 0LL);
          if ( v59 == -1073740576
            && (*(_QWORD *)(48LL * *(_QWORD *)(a2 + 320) - 0x21FFFFFFFFE8LL) & 0x4000000000000000LL) != 0 )
          {
            *(_DWORD *)(a2 + 80) = -1073741801;
          }
          if ( *(_DWORD *)(a2 + 80) != -1073741801 )
          {
            _InterlockedIncrement(&dword_140E36160);
            if ( stru_140E366D8.FirstArgument )
            {
              if ( *(_DWORD *)stru_140E366D8.FirstArgument
                && (unsigned __int8)tlgKeywordOn(stru_140E366D8.FirstArgument, 0x400000000002LL) )
              {
                MiStoreLogReadFailure(v53, a2);
              }
            }
          }
        }
        v17 = v67;
        goto LABEL_21;
      }
      *v15 = -1073741801;
    }
    else
    {
      *(_QWORD *)(a2 + 88) = (unsigned __int64)(unsigned __int16)*(_DWORD *)(a2 + 88) << 12;
    }
LABEL_21:
    v15 = (int *)(a2 + 80);
  }
  v23 = v15;
  if ( *v15 >= 0 && (v16 & 0x800000) != 0 )
  {
    v24 = MiValidatePagefilePageHash(a2);
    v17 = v67;
    LODWORD(v69) = v24;
    v23 = v15;
  }
  v20 = *v23;
  v21 = v7 & 1;
  if ( (v7 & 1) == 0 )
    goto LABEL_15;
LABEL_26:
  v25 = v68;
  v26 = 2 * v21;
  if ( *(_QWORD *)v68 )
    PfHardFaultLog(*(_QWORD *)v68, v26);
  v27 = (*(_BYTE *)(v11 + 10) & 1) == 0;
  *v25 = v26;
  if ( !v27 )
    MmUnmapLockedPages(*(PVOID *)(v11 + 24), (PMDL)v11);
  IsRetryIoStatus = 0;
  *(_DWORD *)(a2 + 116) = -1;
  v29 = *(_DWORD *)(a2 + 188);
  if ( v20 >= 0 )
  {
    v30 = *(_QWORD *)(a2 + 88);
    if ( v30 != (unsigned int)v67 )
    {
      if ( v30 || (v29 & 0x20) == 0 )
      {
        if ( (v29 & 0x400000) != 0 && (v7 & 1) == 0 )
          KeBugCheckEx(0x7Au, 4uLL, *(_QWORD *)(a2 + 88), a2, BugCheckParameter4);
        v34 = (((*(_DWORD *)(v11 + 32) + *(_DWORD *)(v11 + 44)) & 0xFFF)
             - (unsigned __int64)(unsigned int)(v67 - *(_DWORD *)(v11 + 40))
             + v30
             + 4095) >> 12;
        v35 = v30 & 0xFFF;
        v67 = v35;
        v36 = 8 * v34 + 40;
        v60 = v36;
        if ( v35 )
        {
          v37 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(v11 + v36), &v66, 0x80000000);
          v38 = (void *)((unsigned int)v67 + v37);
          memset_0(v38, 0, (unsigned int)(4096 - v67));
          MiUnmapPageInHyperSpaceWorker(v38, v66, 0x80000000LL);
          v36 = v60;
        }
        if ( v11 + v36 + 8 <= v63 )
          *(_DWORD *)(a2 + 116) = ((v36 - 48) >> 3) + 1;
      }
      else
      {
        v20 = -1073741801;
      }
    }
    v31 = v69;
    if ( (_DWORD)v69 != -1073741761 )
      goto LABEL_33;
LABEL_110:
    if ( BugCheckParameter4 >= 0x7FFFFFFF0000LL
      && (unsigned int)MiGetSystemRegionType(BugCheckParameter4) != 7
      && !(unsigned int)MiExceptionForMappedVa(BugCheckParameter4) )
    {
      if ( !IsRetryIoStatus )
      {
        v54 = BugCheckParameter1;
        if ( MmIsAddressValidEx(BugCheckParameter1) )
        {
          v12 = *(_QWORD *)v54;
          if ( v54 >= 0xFFFFF6FB7DBED000uLL
            && v54 <= 0xFFFFF6FB7DBED7F8uLL
            && (v12 & 1) != 0
            && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
          {
            v55 = MiPteHasShadow();
            if ( v55 )
            {
              KernelWaitTime = v55[2].KernelWaitTime;
              if ( KernelWaitTime )
              {
                v58 = *(_QWORD *)(KernelWaitTime + 8 * ((v54 >> 3) & 0x1FF));
                if ( (v58 & 0x20) != 0 )
                  v56 |= 0x20uLL;
                v12 = v56 | 0x42;
                if ( (v58 & 0x42) == 0 )
                  v12 = v56;
              }
            }
          }
        }
        MiFlushAllFilesystemPages(1LL);
        if ( v31 < 0 )
          v20 = v31;
        KeBugCheckEx(0x7Au, v54, v20, v12, BugCheckParameter4);
      }
      if ( v31 != -1073741761 )
        v20 = -1073741801;
    }
    goto LABEL_33;
  }
  if ( v20 != -1073741807 )
  {
    if ( v20 == -2147483626 )
      goto LABEL_33;
    IsRetryIoStatus = MiIsRetryIoStatus((unsigned int)v20, *(unsigned int *)(v11 + 40));
    if ( IsRetryIoStatus && !dword_140E360D8 && ((v7 & 1) == 0 || v7 >= 2) )
      dword_140E360D8 = 32;
    if ( (v29 & 0x20) != 0 )
    {
      v20 = -1073741801;
      goto LABEL_33;
    }
    v31 = v69;
    goto LABEL_110;
  }
  if ( (v29 & 0x400000) != 0 )
    KeBugCheckEx(0x7Au, 3uLL, 0xFFFFFFFFC0000011uLL, a2, BugCheckParameter4);
  v41 = v63;
  v42 = (__int64 *)(v11 + 48);
  if ( (unsigned __int64)v42 <= v63 )
  {
    do
    {
      MiZeroPhysicalPage(0LL, *v42, 1, (*(_DWORD *)(48 * *v42 - 0x21FFFFFFFFE0LL) >> 22) & 3);
      ++v42;
    }
    while ( (unsigned __int64)v42 <= v41 );
  }
  v20 = 0;
LABEL_33:
  if ( v62 == -1LL )
  {
    v32 = 0LL;
  }
  else
  {
    v43 = v64;
    MiCopyPage(v62, (v64 + 0x220000000000LL) / 48, 1u);
    v32 = 48 * v62 - 0x220000000000LL;
    *(_QWORD *)(v32 + 16) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    v45 = *(_QWORD *)(v32 + 16);
    if ( v45 )
      DemandZeroPte = v45 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    else
      DemandZeroPte = MiMakeDemandZeroPte(4);
    *(_QWORD *)(v32 + 16) = DemandZeroPte;
    if ( ((*(_QWORD *)(v32 + 40) >> 60) & 7) == 3 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v44) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v44);
      }
      LODWORD(v67) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v67);
        while ( *(__int64 *)(v32 + 24) < 0 );
      }
      *(_QWORD *)(v32 + 8) = *(_QWORD *)(v43 + 8);
      _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
    }
  }
  *(_QWORD *)(a2 + 104) = v32;
  *(_DWORD *)(a2 + 112) = v7;
  *(_DWORD *)(a2 + 80) = v20;
}
