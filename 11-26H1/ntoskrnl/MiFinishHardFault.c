/*
 * XREFs of MiFinishHardFault @ 0x14031F860
 * Callers:
 *     MiIssueHardFault @ 0x14038F100 (MiIssueHardFault.c)
 *     MiPfCompleteInPageSupport @ 0x1403A1878 (MiPfCompleteInPageSupport.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140295200 (MiReleaseFreshPageAtDpc.c)
 *     MiInsertPagesInList @ 0x1402AF3C0 (MiInsertPagesInList.c)
 *     MiGetPrototypePteDirect @ 0x1402B2B80 (MiGetPrototypePteDirect.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402CAC30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockLowestValidPageTableEx @ 0x1402E2690 (MiLockLowestValidPageTableEx.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiInvalidateCollidedIos @ 0x1402F1414 (MiInvalidateCollidedIos.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     MiRelockProtoPoolPage @ 0x14031E024 (MiRelockProtoPoolPage.c)
 *     MiIsPrototypePteVadLookup @ 0x14031E380 (MiIsPrototypePteVadLookup.c)
 *     MiFindActualFaultingPte @ 0x14031E6D4 (MiFindActualFaultingPte.c)
 *     MiHardFaultPageRelease @ 0x14031E950 (MiHardFaultPageRelease.c)
 *     MiFlowThroughRemoveNode @ 0x14031F584 (MiFlowThroughRemoveNode.c)
 *     MiFreeInPageSupportBlock @ 0x14031F608 (MiFreeInPageSupportBlock.c)
 *     MiReturnPfnReferenceCountAtDpc @ 0x140320354 (MiReturnPfnReferenceCountAtDpc.c)
 *     MiAddPageToInsertList @ 0x140320F90 (MiAddPageToInsertList.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     MiInPageGapPage @ 0x14038E580 (MiInPageGapPage.c)
 *     MiReleaseFaultState @ 0x14038FB40 (MiReleaseFaultState.c)
 *     MiCheckVirtualAddress @ 0x1403A7340 (MiCheckVirtualAddress.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     MiCreateDecayPfn @ 0x14045A320 (MiCreateDecayPfn.c)
 *     MiDecayPfnFullyInitialized @ 0x140491EA8 (MiDecayPfnFullyInitialized.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiFinishHardFault(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 *v9; // r15
  int v10; // eax
  __int64 v11; // r14
  _DWORD *v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rax
  int v20; // r12d
  __int64 CurrentIrql; // rax
  bool v22; // zf
  unsigned __int64 v23; // rbx
  __int64 v24; // r14
  unsigned __int8 v25; // r15
  unsigned __int64 valid; // rax
  __int64 v27; // r13
  int v28; // r14d
  int v29; // ebx
  bool v30; // sf
  __int64 v31; // r12
  __int64 *ActualFaultingPte; // rax
  __int64 *v33; // r9
  __int64 v34; // r8
  int v35; // eax
  unsigned __int64 v36; // r8
  __int64 *PrototypePteDirect; // rax
  unsigned __int64 v38; // r15
  _SLIST_ENTRY *DecayPfn; // rcx
  __int64 v40; // r14
  _QWORD *i; // rbx
  __int64 v42; // rcx
  _QWORD *v43; // rcx
  unsigned __int8 *v44; // rdx
  _QWORD *v45; // rcx
  _KPROCESS *v46; // rax
  __int64 v47; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v49; // rax
  ULONG_PTR v50; // rbx
  unsigned __int64 v51; // rdx
  __int64 v52; // r8
  int v53; // edi
  __int64 v54; // rax
  char v55; // bl
  __int64 v56; // rdx
  int v57; // ebx
  ULONG_PTR v58; // r14
  signed __int64 v59; // rax
  bool v60; // cc
  signed __int64 BugCheckParameter4; // rax
  __int64 v62; // rcx
  int v63; // ebx
  _DWORD *v65; // r14
  __int64 *v66; // r14
  int v67; // r12d
  unsigned __int8 v68; // r13
  _QWORD *v69; // r15
  __int64 v70; // rax
  __int64 v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rbx
  __int64 v74; // rcx
  int v75; // eax
  unsigned __int8 v76; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v77; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v78; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v79; // [rsp+48h] [rbp-B8h]
  __int64 v80; // [rsp+50h] [rbp-B0h]
  _QWORD *v81; // [rsp+58h] [rbp-A8h]
  __int64 *v82; // [rsp+60h] [rbp-A0h]
  __int64 v83; // [rsp+68h] [rbp-98h]
  _DWORD *v84; // [rsp+70h] [rbp-90h]
  unsigned __int64 v85; // [rsp+78h] [rbp-88h]
  __int64 v86; // [rsp+80h] [rbp-80h] BYREF
  __int64 v87; // [rsp+88h] [rbp-78h]
  __int128 v88; // [rsp+90h] [rbp-70h]
  __int64 v89; // [rsp+A0h] [rbp-60h]
  __int16 v90; // [rsp+A8h] [rbp-58h]
  int v91; // [rsp+AAh] [rbp-56h]
  __int16 v92; // [rsp+AEh] [rbp-52h]
  __int64 v93; // [rsp+B0h] [rbp-50h]
  PSLIST_ENTRY ListEntry; // [rsp+B8h] [rbp-48h]
  __int64 v95; // [rsp+C0h] [rbp-40h]
  __int64 v96; // [rsp+C8h] [rbp-38h]
  __int64 v97; // [rsp+D0h] [rbp-30h]
  __int128 v98; // [rsp+D8h] [rbp-28h]
  __int64 v99; // [rsp+E8h] [rbp-18h]
  _QWORD v100[4]; // [rsp+F0h] [rbp-10h] BYREF
  int v101; // [rsp+110h] [rbp+10h]
  _SLIST_ENTRY *v102; // [rsp+148h] [rbp+48h]
  int v103; // [rsp+160h] [rbp+60h]

  v4 = a3;
  v97 = a3;
  v79 = a1;
  v96 = a4;
  memset_0(v100, 0, 0x78uLL);
  v7 = *(_QWORD *)(a1 + 56);
  v8 = 0LL;
  v9 = *(__int64 **)(v4 + 240);
  v10 = *(_DWORD *)(v4 + 188);
  v11 = *(_QWORD *)(v4 + 152);
  v87 = 0LL;
  v88 = 0LL;
  v91 = 0;
  v92 = 0;
  ListEntry = 0LL;
  v90 = 0;
  v95 = v7;
  v82 = v9;
  if ( (v10 & 0x400000) != 0 || (v12 = *(_DWORD **)(v4 + 208), (v84 = v12) == 0LL) )
  {
    v12 = (_DWORD *)(v4 + 272);
    v84 = (_DWORD *)(v4 + 272);
  }
  v13 = v12 + 12;
  v14 = (v12[8] + v12[11]) & 0xFFF;
  v15 = (unsigned int)v12[10] + 4095LL;
  v81 = 0LL;
  v77 = &v13[((unsigned __int64)(v14 + v15) >> 12) - 1];
  v16 = *(unsigned int *)(v4 + 116);
  if ( (_DWORD)v16 == -1 )
    *((_QWORD *)&v88 + 1) = -1LL;
  else
    *((_QWORD *)&v88 + 1) = &v13[v16];
  v17 = *(_QWORD *)(v4 + 160);
  v18 = *(_DWORD *)(v4 + 188);
  v85 = *(_QWORD *)(v4 + 232);
  v19 = 3221226548LL;
  v83 = v17;
  if ( (v18 & 0x200000) == 0 && v7 && (v18 & 0x20) == 0 )
  {
    v20 = 0;
    LODWORD(v87) = 0;
    v76 = 17;
    goto LABEL_10;
  }
  LODWORD(v87) = -1073740748;
  v20 = -1073740748;
  v76 = 17;
  if ( v7 )
  {
LABEL_10:
    CurrentIrql = KeGetCurrentIrql();
    v80 = CurrentIrql;
    if ( (_BYTE)CurrentIrql != 1 )
      __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, 1LL);
      v7 = v95;
    }
    if ( (v18 & 0x2000000) == 0 )
    {
      if ( (*(_DWORD *)(v7 + 184) & 0xF) != 0 )
      {
        v22 = (*(_WORD *)(v11 + 486))++ == 0xFFFF;
        if ( v22 && *(_QWORD *)(v11 + 152) != v11 + 152 )
          KiCheckForKernelApcDelivery(v17, v7);
      }
      else
      {
        KeLeaveCriticalRegionThread(v11);
      }
    }
    if ( (v18 & 0x10000000) != 0 )
    {
      v22 = (*(_WORD *)(v11 + 486))++ == 0xFFFF;
      if ( v22 && *(_QWORD *)(v11 + 152) != v11 + 152 )
        KiCheckForKernelApcDelivery(v17, v7);
    }
    v23 = 0LL;
    v24 = *(_QWORD *)(v79 + 56);
    if ( a2 )
    {
      v25 = MiLockWorkingSetShared(*(_QWORD *)(v79 + 56), v7, v8);
      valid = MiLockLowestValidPageTableEx(v24, a2 << 25 >> 16, &v78, 0);
      v23 = valid;
      if ( valid == a2 )
      {
        if ( valid )
        {
          v27 = v79;
LABEL_25:
          LOBYTE(v19) = v80;
          v9 = v82;
          v17 = v83;
          *(_QWORD *)(v27 + 72) = v23;
          *(_BYTE *)(v27 + 68) = v19;
          goto LABEL_26;
        }
      }
      else
      {
        MiUnlockPageTableInternal(v24, valid);
        MiUnlockWorkingSetShared(v24, v25);
        v23 = 0LL;
      }
    }
    v27 = v79;
    *(_BYTE *)(v79 + 69) |= 1u;
    MiLockWorkingSetExclusive(v24, v7, v8);
    goto LABEL_25;
  }
  LOBYTE(v19) = 17;
  v80 = v19;
LABEL_26:
  if ( v17 )
  {
    v44 = &v76;
    if ( (_BYTE)v19 != 17 )
      v44 = 0LL;
    MiRelockProtoPoolPage(v17, v44);
  }
  if ( *(_DWORD *)(v4 + 180) )
  {
    *(_DWORD *)(v4 + 80) = -1073741670;
    *(_QWORD *)(v4 + 88) = 0LL;
  }
  v28 = *(_DWORD *)(v4 + 80);
  if ( *(_QWORD *)(v4 + 16) != v4 + 16 )
  {
    HIBYTE(v90) = MiInvalidateCollidedIos(v4);
    if ( !HIBYTE(v90) )
    {
      *(_DWORD *)(v4 + 80) = -1073741801;
      *(_QWORD *)(v4 + 88) = 0LL;
    }
  }
  MiFlowThroughRemoveNode(v4);
  v29 = *(_DWORD *)(v4 + 188);
  if ( v83 )
    MiReturnPfnReferenceCountAtDpc(v83);
  if ( (v29 & 0x4000000) != 0 )
    v82 = *(__int64 **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(*(_QWORD *)(v4 + 256) + 40LL) >> 43) & 0x3FFLL));
  else
    v82 = 0LL;
  v30 = v20 < 0;
  v31 = v79;
  if ( v30 )
    goto LABEL_44;
  ActualFaultingPte = (__int64 *)MiFindActualFaultingPte(v79, v85);
  v33 = ActualFaultingPte;
  if ( !ActualFaultingPte )
    goto LABEL_84;
  v34 = *ActualFaultingPte;
  if ( (unsigned __int64)ActualFaultingPte >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)ActualFaultingPte <= 0xFFFFF6FB7DBED7F8uLL
    && (v34 & 1) != 0
    && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
  {
    v46 = MiPteHasShadow();
    if ( v46 )
    {
      KernelWaitTime = v46[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v49 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)v33 >> 3) & 0x1FF));
        if ( (v49 & 0x20) != 0 )
          v47 |= 0x20uLL;
        v34 = v47 | 0x42;
        if ( (v49 & 0x42) == 0 )
          v34 = v47;
      }
    }
  }
  if ( v33 != v9 )
  {
    if ( (v34 & 0x400) == 0 )
      goto LABEL_84;
    LOBYTE(v35) = MiIsPrototypePteVadLookup(v34);
    if ( v35 )
    {
      LODWORD(v78) = 0;
      PrototypePteDirect = (__int64 *)MiCheckVirtualAddress(v85, &v78, 0LL);
    }
    else
    {
      PrototypePteDirect = (__int64 *)MiGetPrototypePteDirect(v36);
    }
    if ( PrototypePteDirect != v9 )
      goto LABEL_84;
    v34 = *PrototypePteDirect;
  }
  if ( v34 != *(_QWORD *)(v4 + 168) )
LABEL_84:
    LODWORD(v87) = -1073740748;
LABEL_44:
  if ( v28 < 0 )
    goto LABEL_49;
  if ( (v29 & 0x20) != 0 || (*(_DWORD *)(v4 + 188) & 0x400000) == 0 && *(_QWORD *)(v4 + 208) )
  {
    v38 = (unsigned __int64)v77;
  }
  else
  {
    v38 = (unsigned __int64)v77;
    if ( v77 == (_QWORD *)(v84 + 12) || *((_QWORD *)&v88 + 1) <= (unsigned __int64)(v84 + 14) )
      goto LABEL_49;
  }
  if ( (v29 & 0x100000) == 0 || (v29 & 0x3800) == 0 || (v29 & 0x20000) != 0 )
  {
LABEL_49:
    v38 = (unsigned __int64)v77;
    DecayPfn = 0LL;
    ListEntry = 0LL;
    goto LABEL_50;
  }
  DecayPfn = (_SLIST_ENTRY *)MiCreateDecayPfn();
  ListEntry = DecayPfn;
LABEL_50:
  v40 = 0LL;
  v89 = *(_QWORD *)(v31 + 56);
  v93 = v96;
  v100[0] = 0x3FFFFFFFFFLL;
  v100[1] = 0x3FFFFFFFFFLL;
  v103 = 2;
  v86 = v4;
  v101 = 0;
  v102 = DecayPfn;
  v99 = 0LL;
  v98 = 0LL;
  for ( i = 0LL; (unsigned __int64)v13 <= v38; ++v13 )
  {
    v42 = 48LL * *v13 - 0x220000000000LL;
    if ( v42 == qword_140E36170 || (*(_DWORD *)(v42 + 32) & 0x70000) == 0x70000 && *(_QWORD *)(v42 + 8) == -3LL )
    {
      if ( (unsigned int)MiInPageGapPage(v42, 0xFFFFDE0000000000uLL) )
      {
        ++v40;
        *v45 = i;
        v99 = v40;
        i = v45;
      }
    }
    else if ( v42 == *(_QWORD *)(v4 + 256) )
    {
      v81 = v13;
    }
    else
    {
      *(_QWORD *)&v88 = v13;
      MiAddPageToInsertList(v100, &v86);
    }
  }
  MiInsertPagesInList(v100);
  if ( v99 )
  {
    while ( 1 )
    {
      v43 = i;
      if ( !i )
        break;
      i = (_QWORD *)*i;
      MiReturnPfnReferenceCountAtDpc(v43);
    }
  }
  v50 = *(_QWORD *)(v4 + 256);
  LODWORD(v78) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v50 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v78);
    while ( *(__int64 *)(v50 + 24) < 0 );
  }
  *(_DWORD *)(v50 + 32) &= ~0x200000u;
  *(_QWORD *)&v88 = v81;
  *(_QWORD *)v50 = 0LL;
  MiHardFaultPageRelease(&v86, v50);
  v53 = *(_DWORD *)(v4 + 80);
  v54 = *(_QWORD *)(v4 + 256);
  LODWORD(v81) = v53;
  _InterlockedAnd64((volatile signed __int64 *)(v54 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v55 = v80;
  if ( v83 )
  {
    v56 = v76;
    if ( (_BYTE)v80 != 17 )
      v56 = 17LL;
    MiUnlockProtoPoolPage(v83, v56, v52);
  }
  if ( (*(_DWORD *)(v4 + 188) & 0x20000) != 0 )
  {
    v65 = v84;
    MmCheckCachedPageStates(v85 + (*(_DWORD *)(v4 + 96) & 0x3FFFF), (unsigned int)v84[10], 2, 0LL);
    v66 = (__int64 *)(v65 + 12);
    v67 = 0;
    if ( v55 == 17 )
    {
      v68 = KeGetCurrentIrql();
      if ( v68 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v51) = 2;
        KiRaiseIrqlProcessIrqlFlags(v68, v51);
      }
    }
    else
    {
      v68 = 17;
    }
    if ( (unsigned __int64)v66 <= v38 )
    {
      v51 = (unsigned __int64)v77;
      v69 = v66 + 1;
      do
      {
        if ( *v66 < 0 )
        {
          v70 = *v66 & 0x7FFFFFFFFFFFFFFFLL;
          *v66 = v70;
          v71 = 48 * v70 - 0x220000000000LL;
          LODWORD(v78) = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v71 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v78);
            while ( *(__int64 *)(v71 + 24) < 0 );
          }
          MiRemoveLockedPageChargeAndDecRef(v71);
          _InterlockedAnd64((volatile signed __int64 *)(v71 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (++v67 & 0x3F) == 0 && v69 <= v77 && v68 != 17 )
          {
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v68);
            __writecr8(v68);
            v74 = KeGetCurrentIrql();
            if ( (_BYTE)v74 != 2 )
              __writecr8(2uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v72) = 2;
              KiRaiseIrqlProcessIrqlFlags(v74, v72);
            }
          }
          v51 = (unsigned __int64)v77;
        }
        ++v66;
        ++v69;
      }
      while ( (unsigned __int64)v66 <= v51 );
      v4 = v97;
      v53 = (int)v81;
    }
    if ( v68 != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v68);
      __writecr8(v68);
    }
    v31 = v79;
  }
  if ( ListEntry )
    MiDecayPfnFullyInitialized(ListEntry);
  v57 = *(_DWORD *)(v4 + 188);
  if ( v95 && (v57 & 0x2000000) != 0 )
  {
    LOBYTE(v51) = 17;
    MiReleaseFaultState(v31 + 56, v51, 0LL);
    LOBYTE(v80) = 17;
  }
  if ( (v57 & 0x400000) == 0 )
  {
    if ( (*(_DWORD *)(v4 + 188) & 0x400000) != 0 )
      v58 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 24LL);
    else
      v58 = *(_QWORD *)(v4 + 200);
    if ( ObpTraceFlags )
      ObpPushStackInfo(v58 - 48, -1, 0x63536D4Du);
    v59 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v58 - 48), 0xFFFFFFFFFFFFFFFFuLL);
    v60 = v59 <= 1;
    BugCheckParameter4 = v59 - 1;
    if ( v60 )
    {
      if ( *(_QWORD *)(v58 - 40) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v58 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v58 - 48) >> 8)],
          v58,
          3uLL,
          *(_QWORD *)(v58 - 40));
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, v58, 4uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(v58 - 48);
    }
  }
  if ( *(int *)(v4 + 176) > 1 )
    KeSetEvent((PRKEVENT)(v4 + 56), 0, 0);
  v62 = *(_QWORD *)(v4 + 104);
  if ( v62 )
  {
    v73 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v62 + 40) >> 43) & 0x3FFLL));
    if ( (_BYTE)v80 == 17 )
      MiReleaseFreshPage(v62, stru_140E2ED08.ThreadLock, v52);
    else
      MiReleaseFreshPageAtDpc(v62, stru_140E2ED08.ThreadLock, v52);
    MiReleaseNonPagedResources(v73, 1LL);
  }
  if ( v53 < 0 )
  {
    v75 = *(_DWORD *)(v4 + 112);
    if ( (v75 & 1) != 0 && (v53 == -1073741670 || v53 == -1073741801 || v53 == -1073741663) && (v75 & 2) == 0 )
      v53 = -1073740748;
  }
  else
  {
    v53 = v87;
    if ( !(_BYTE)v90 )
      v53 = -1073740748;
  }
  if ( v82 )
  {
    v63 = *(_DWORD *)(v4 + 188);
    PsDereferencePartition(v82[32], 1883860301LL);
    *(_DWORD *)(v4 + 188) = v63 & 0xFBFFFFFF;
  }
  MiFreeInPageSupportBlock((PSLIST_ENTRY)v4);
  return (unsigned int)v53;
}
