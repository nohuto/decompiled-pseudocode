/*
 * XREFs of MiAllocateWsle @ 0x1402B9CD8
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x1402B8530 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x1402BAC10 (MiCompleteProtoPteFault.c)
 *     MiMakeSystemCachePtesValid @ 0x1402C7F80 (MiMakeSystemCachePtesValid.c)
 *     MiResolveProtoCombine @ 0x1402EAA7C (MiResolveProtoCombine.c)
 *     MiBuildForkPageTable @ 0x1402EFCDC (MiBuildForkPageTable.c)
 *     MiCompleteRestrictedImageFault @ 0x140376250 (MiCompleteRestrictedImageFault.c)
 *     MiIssueHardFault @ 0x14038F100 (MiIssueHardFault.c)
 *     MiResolveTransitionFault @ 0x1403A8C64 (MiResolveTransitionFault.c)
 *     MiMakeModifiedSystemCachePteValid @ 0x140485680 (MiMakeModifiedSystemCachePteValid.c)
 *     MiFinishLastForkPageTable @ 0x1404CA0CC (MiFinishLastForkPageTable.c)
 *     MiInitializeWorkingSetList @ 0x1404CD360 (MiInitializeWorkingSetList.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiProcessWsInSwapFault @ 0x14029E50C (MiProcessWsInSwapFault.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAddWorkingSetEntries @ 0x1402CDB00 (MiAddWorkingSetEntries.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiWritePteShadow @ 0x14031E2BC (MiWritePteShadow.c)
 *     MiSanitizeShadowPxe @ 0x140344188 (MiSanitizeShadowPxe.c)
 *     MiGetEffectivePagePriorityThread @ 0x140373760 (MiGetEffectivePagePriorityThread.c)
 *     MiCompleteSecureProcessFault @ 0x14038CC80 (MiCompleteSecureProcessFault.c)
 *     MiMarkPfnVerified @ 0x14038E794 (MiMarkPfnVerified.c)
 *     MiIncrementVmFaultCount @ 0x140445910 (MiIncrementVmFaultCount.c)
 *     MiLockSetPfnPriority @ 0x14044F280 (MiLockSetPfnPriority.c)
 *     MiUpdateSecurePte @ 0x1404AA50C (MiUpdateSecurePte.c)
 *     MiFillVirtualFaultInfo @ 0x1404AC080 (MiFillVirtualFaultInfo.c)
 *     MiLogAllocateWsleEvent @ 0x14050F86C (MiLogAllocateWsleEvent.c)
 *     MiGetVirtualFaultPageInfo @ 0x140528228 (MiGetVirtualFaultPageInfo.c)
 *     MiReplicatePteChange @ 0x14052ABE0 (MiReplicatePteChange.c)
 *     MiPromoteVirtualizationFault @ 0x1407044DC (MiPromoteVirtualizationFault.c)
 *     KdpSetOwedBreakpoints @ 0x140C1D5F0 (KdpSetOwedBreakpoints.c)
 */

__int64 __fastcall MiAllocateWsle(__int64 a1, signed __int64 *a2, _QWORD *a3, char a4, __int64 a5, char a6, __int64 a7)
{
  ULONG_PTR v8; // r15
  int v9; // r14d
  unsigned __int8 v10; // si
  unsigned __int64 v11; // r13
  int v12; // edx
  char EffectivePagePriorityThread; // al
  int v14; // edx
  char v15; // r8
  int v16; // r10d
  signed __int64 v17; // rdi
  unsigned int v18; // eax
  unsigned int v19; // r9d
  unsigned int v20; // ebx
  int v21; // ebx
  unsigned __int64 v22; // r8
  char v23; // r13
  ULONG_PTR v24; // r9
  __int64 v25; // r9
  __int64 v26; // r12
  _QWORD *VirtualFaultPageInfo; // rax
  struct _KPRCB *CurrentPrcb; // r13
  signed __int64 *v29; // r10
  unsigned __int64 v30; // r8
  signed __int64 v31; // rdx
  int v32; // ecx
  int v33; // eax
  int v34; // eax
  int v35; // r13d
  char v36; // r12
  char v37; // al
  __int64 v38; // rdi
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  unsigned int v41; // eax
  __int64 v42; // r9
  __int64 v44; // [rsp+20h] [rbp-60h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-48h]
  signed __int64 v46; // [rsp+40h] [rbp-40h] BYREF
  _QWORD *v47; // [rsp+48h] [rbp-38h] BYREF
  int v48; // [rsp+50h] [rbp-30h]
  __int64 v49; // [rsp+58h] [rbp-28h]
  __int128 v50; // [rsp+60h] [rbp-20h] BYREF
  __int64 v51; // [rsp+70h] [rbp-10h]
  _QWORD *v54; // [rsp+D0h] [rbp+50h] BYREF

  v54 = a3;
  v50 = 0LL;
  v51 = 0LL;
  v8 = (ULONG_PTR)a3;
  v9 = *(_DWORD *)(a1 + 184);
  v10 = 0;
  v11 = (__int64)((_QWORD)a2 << 25) >> 16;
  BugCheckParameter2 = v11;
  v48 = 0;
  v12 = -1;
  if ( v11 < 0xFFFFF68000000000uLL || v11 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v49 = 1LL;
    v48 = 1;
  }
  else
  {
    v49 = 0LL;
    if ( (v9 & 0xF) == 0 && ((*a3 >> 46) & 7) != 0 )
    {
      v12 = -1;
      *a3 &= 0xFFFE3FFFFFFFFFFFuLL;
    }
  }
  if ( (a6 & 1) != 0 )
    MiProcessWsInSwapFault(a1, (ULONG_PTR)a3, v11, &a5);
  LOBYTE(v12) = 0;
  LODWORD(v46) = v12;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(KeGetCurrentThread());
  v17 = a5;
  v18 = EffectivePagePriorityThread & 7;
  v19 = 5;
  v20 = 8 * v18;
  if ( v49 )
  {
    if ( (v15 & 2) != 0 )
    {
      LOBYTE(v14) = 9;
    }
    else if ( v18 >= 5 )
    {
      if ( (v15 & 8) != 0 )
      {
        LOBYTE(v14) = 6;
      }
      else
      {
        if ( ((unsigned __int8)a5 & (unsigned __int8)v16) == 0 )
        {
LABEL_23:
          v10 = v14 | (16 * (a4 & 7));
          goto LABEL_24;
        }
        v14 = (unsigned __int8)v14;
        if ( (a5 & 0x20) == 0 )
          v14 = v16;
      }
    }
    else
    {
      LOBYTE(v14) = 7;
    }
    LODWORD(v46) = v14;
    goto LABEL_23;
  }
  v21 = 5;
  if ( v18 > 5 )
    v21 = v18;
  v20 = 8 * v21;
LABEL_24:
  v22 = *(unsigned int *)(v8 + 32);
  if ( (*(_QWORD *)(v8 + 40) & 0x20000000000000LL) == 0
    && (((*(_DWORD *)(v8 + 32) >> 27) & (unsigned __int8)v16) == 0
     || v8 >= 0xFFFFDE0000000000uLL
     && v8 < 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
     && !(unsigned int)MiIsDecayPfn((__int64)(v8 + 0x220000000000LL) / 48)
     && ((v22 & 0x70000) == 0x60000 || (unsigned int)MiGetPfnSlabType(v8) != 9)) )
  {
    v19 = BYTE3(v22) & 7;
  }
  if ( v19 < v20 >> 3 )
    MiLockSetPfnPriority(v8);
  if ( (*(_QWORD *)v8 & 1) == 0 )
  {
    LODWORD(v47) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v47);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    if ( (*(_QWORD *)v8 & 1) == 0 )
      *(_QWORD *)v8 |= 1uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( (v17 & 1) == 0 )
    goto LABEL_107;
  v23 = v9 & 0xF;
  if ( (v9 & 0xF) == 1 )
  {
    v17 |= 0x8000000000000000uLL;
    a5 = v17;
LABEL_57:
    v24 = BugCheckParameter2;
    goto LABEL_58;
  }
  if ( (MiFlags & 0x20000) == 0 )
    goto LABEL_57;
  v24 = BugCheckParameter2;
  if ( (BugCheckParameter2 < 0xFFFFF68000000000uLL || BugCheckParameter2 > 0xFFFFF6FFFFFFFFFFuLL)
    && (v17 & 0x8000000000000000uLL) == 0
    && (MiFlags & 0x80000) != 0 )
  {
    LODWORD(v47) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v47);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    if ( !(unsigned int)MiGetPagePrivilege(v8) )
      MiMarkPfnVerified(v8, 7LL, v22, v25);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_57;
  }
LABEL_58:
  if ( (MiFlags & 0x10000) != 0 && ((*(_QWORD *)(v8 + 40) >> 60) & 7) == 3 && v23 == 3 )
    MiUpdateSecurePte(v24);
  v26 = a7;
  v47 = 0LL;
  if ( a7 )
  {
    VirtualFaultPageInfo = (_QWORD *)MiGetVirtualFaultPageInfo(a7, BugCheckParameter2, 1LL);
    v47 = VirtualFaultPageInfo;
    if ( VirtualFaultPageInfo )
    {
      if ( *VirtualFaultPageInfo < 0x10000000000000uLL
        && ((*(_DWORD *)(v26 + 56) & 0x20) == 0
         || *(__int64 *)(v8 + 8) <= 0
         || (*(_QWORD *)(v8 + 40) & 0x10000000000LL) != 0) )
      {
        if ( (*(_DWORD *)(v26 + 56) & 0x10) != 0 && (unsigned __int8)v46 < 6u )
          v10 = v10 & 0xF0 | 6;
      }
      else
      {
        v47 = 0LL;
      }
    }
  }
  if ( v49 )
  {
    v22 = 0x80FFFFFFFFFFFFFFuLL;
    v17 = ((unsigned __int64)v10 << 56) & 0x7000000000000000LL ^ (v17 & 0x80FFFFFFFFFFFFFFuLL | ((unsigned __int64)(v10 & 0x8F) << 56));
    a5 = v17;
    LOBYTE(v20) = v20 | 2;
  }
  if ( v23 )
  {
    if ( v23 != 3 )
    {
      CurrentPrcb = 0LL;
LABEL_81:
      v29 = a2;
      goto LABEL_82;
    }
  }
  else
  {
    *(_QWORD *)&v50 = KeGetCurrentThread()->ApcState.Process;
  }
  v29 = a2;
  *((_QWORD *)&v50 + 1) = a2;
  v51 = ((unsigned __int64)v17 >> 12) & 0xFFFFFFFFFFLL;
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentPrcb->MmFaultCompletionInfo = &v50;
  if ( !KdPitchDebugger && KdpOweBreakpoint )
  {
    KdpSetOwedBreakpoints(BugCheckParameter2, 0xFFFFFFFFFFLL, v22);
    goto LABEL_81;
  }
LABEL_82:
  v30 = 0xFFFFF6FB7DBED000uLL;
  if ( (unsigned __int64)v29 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v29 <= 0xFFFFF6FB7DBEDFFFuLL
    && (v9 & 0xF) != 0 )
  {
    LOBYTE(v20) = v20 | 1;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E36200);
    v29 = a2;
    v31 = v17;
    v46 = v17;
    v32 = 0;
  }
  else
  {
    v31 = v17;
    v32 = 0;
    v46 = v17;
    if ( (unsigned __int64)v29 < 0xFFFFF6FB7DBED000uLL )
      goto LABEL_89;
  }
  if ( (unsigned __int64)v29 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v33 = MiSanitizeShadowPxe(0LL, &v46, v30);
    v31 = v46;
    v32 = v33;
  }
LABEL_89:
  *v29 = v31;
  if ( v32 )
    MiWritePteShadow(v29, v31, v30, v24);
  if ( (v20 & 1) != 0 )
  {
    MiReplicatePteChange(v29, 1LL);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36200);
  }
  if ( CurrentPrcb )
    CurrentPrcb->MmFaultCompletionInfo = 0LL;
  if ( !v47 )
    goto LABEL_106;
  v34 = *(_DWORD *)(v26 + 56);
  if ( (v34 & 1) != 0 && (v17 & 0x40) == 0 && (v17 & 2) == 0 )
    goto LABEL_106;
  if ( (v34 & 2) != 0 && v17 < 0 )
    goto LABEL_106;
  v35 = a7;
  LOBYTE(v20) = v20 | 4;
  v36 = v20;
  if ( (v34 & 0x20) != 0 )
  {
    LOBYTE(v20) = v20 & 0xFB;
    if ( !*(_QWORD *)(a7 + 48) )
    {
      v37 = MiCompleteSecureProcessFault(&v54, &a5, a7);
      v17 = a5;
      v8 = (ULONG_PTR)v54;
      LOBYTE(v20) = v36 ^ (v36 ^ (4 * v37)) & 4;
    }
  }
  if ( (v20 & 4) == 0 )
  {
LABEL_106:
    v11 = BugCheckParameter2;
LABEL_107:
    v38 = a1;
    goto LABEL_108;
  }
  v44 = v17;
  v38 = a1;
  v39 = MiPromoteVirtualizationFault(a1, v35, BugCheckParameter2, (_DWORD)a2, v44);
  MiFillVirtualFaultInfo(0xFFFFFFFFFFLL, v47, (v39 >> 12) & 0xFFFFFFFFFFLL, v39);
  v11 = BugCheckParameter2;
LABEL_108:
  v40 = v49;
  if ( v49 && (v20 & 2) == 0 )
    *(_BYTE *)v49 = v10;
  if ( (a6 & 2) != 0 )
  {
    MiIncrementVmFaultCount(v38, 1LL);
  }
  else if ( (a6 & 4) == 0 )
  {
    v41 = v48;
    if ( *(__int64 *)(v8 + 40) >= 0 )
      v41 = v48 | 2;
    if ( v40 || (v9 & 0xF) == 0 )
      v41 |= 4u;
    v42 = v41 | 8;
    if ( (a6 & 0x20) == 0 )
      v42 = v41;
    MiAddWorkingSetEntries(v38, v11, 1LL, v42);
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    MiLogAllocateWsleEvent(v8, v9 & 0xF, v11);
  return 1LL;
}
