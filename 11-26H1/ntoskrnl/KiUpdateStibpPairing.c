/*
 * XREFs of KiUpdateStibpPairing @ 0x140402530
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1402BB280 (KiUpdateSpeculationControl.c)
 *     KePrepareToDispatchVirtualProcessor @ 0x14047A440 (KePrepareToDispatchVirtualProcessor.c)
 *     KiCopyCounters @ 0x1405F3410 (KiCopyCounters.c)
 *     NtContinueEx @ 0x1407273F0 (NtContinueEx.c)
 *     NtRaiseException @ 0x1407278B0 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x140728090 (KiRestoreSetContextState.c)
 *     KxStartUserThread @ 0x140729310 (KxStartUserThread.c)
 *     KiChainedDispatch @ 0x140729970 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x14072A050 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x14072A440 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x14072A830 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x14072AC20 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x14072B010 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x14072BC20 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x14072C480 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x14072DEA0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x14072E2A0 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x14072E7F0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x14072EF70 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x14072F700 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x140731220 (NtCallEnclave.c)
 *     KiBoundFault @ 0x1407347C0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x140734F00 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x140737080 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x140738800 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140739380 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140739B00 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x14073B680 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x14073C540 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x14073CA80 (KiFastFailDispatch.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x14073D180 (KiFlushCurrentRsb.c)
 */

__int64 __fastcall KiUpdateStibpPairing(_KPROCESS *Process, int a2, int a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int v4; // esi
  int v5; // r13d
  int v6; // ebp
  int v7; // edi
  __int64 v8; // r14
  _KPRCB *PairPrcb; // r15
  int v10; // eax
  int v11; // r12d
  int v12; // edi
  _KPRCB_BPB_STATE v13; // ax
  signed __int16 *p_PairRegister; // rdx
  signed __int16 v15; // ax
  signed __int16 v16; // tt
  signed __int16 v17; // r8
  __int64 TrappedSecurityDomain; // rax
  int v19; // r10d
  signed __int16 v20; // ax
  signed __int16 PairRegister; // r9
  __int16 v22; // cx
  signed __int16 v23; // cx
  unsigned __int16 BpbKernelSpecCtrl; // dx
  signed __int16 v26; // ax
  signed __int16 v27; // tt
  signed __int16 v28; // tt
  signed __int16 v29; // tt
  int v30; // [rsp+50h] [rbp+8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  v5 = 0;
  v6 = 1;
  if ( !Process )
  {
    v6 = 0;
    Process = KeGetCurrentThread()->Process;
  }
  v7 = HIDWORD(Process[3].ActiveGroupsMask.Masks[1]);
  v8 = *(_QWORD *)&Process[4].ProcessLock;
  PairPrcb = CurrentPrcb->PairPrcb;
  v10 = v7 & 0x400000;
  v11 = v7 & 0x800000;
  v30 = 0;
  v12 = v7 & 0xC00000;
  if ( v6 )
  {
    if ( v10 && CurrentPrcb->TrappedSecurityDomain )
    {
      __writemsr(0x49u, 1uLL);
      if ( (KiSpeculationFeatures & 8) == 0 )
      {
        KiFlushCurrentRsb(73, 0, a3, 1);
        CurrentPrcb->BpbState.AllFlags &= ~0x20u;
        CurrentPrcb->BpbTrappedBpbState.AllFlags &= ~0x40u;
      }
      CurrentPrcb->BpbState.AllFlags &= ~4u;
      _InterlockedOr16(&PairPrcb->PairRegister, 0x20u);
      CurrentPrcb->TrappedSecurityDomain = v8;
      CurrentPrcb->BpbRetpolineState.AllFlags |= 2u;
      v5 = 1;
      CurrentPrcb->BpbTrappedBpbState.AllFlags &= ~0x10u;
      v30 = 1;
    }
  }
  else
  {
    if ( v8 != CurrentPrcb->TrappedSecurityDomain )
    {
      _InterlockedOr16(&PairPrcb->PairRegister, 0x20u);
      CurrentPrcb->TrappedSecurityDomain = v8;
      v5 = 1;
      CurrentPrcb->BpbState.AllFlags |= 4u;
      if ( (KiSpeculationFeatures & 8) == 0 )
        CurrentPrcb->BpbState.AllFlags |= 0x20u;
    }
    v13.0 = ($D0BDAFF3B03FD62472FDEF8CE1200EC8)CurrentPrcb->BpbState;
    if ( (*(_BYTE *)&v13.0 & 4) != 0 )
    {
      a2 = 0;
      LODWORD(Process) = 73;
      __writemsr(0x49u, 1uLL);
      CurrentPrcb->BpbState.AllFlags &= ~4u;
      v13.0 = ($D0BDAFF3B03FD62472FDEF8CE1200EC8)CurrentPrcb->BpbState;
    }
    if ( (*(_BYTE *)&v13.0 & 0x20) != 0 )
    {
      KiFlushCurrentRsb((_DWORD)Process, a2, a3, 1);
      CurrentPrcb->BpbState.AllFlags &= ~0x20u;
    }
  }
  p_PairRegister = (signed __int16 *)&CurrentPrcb->PairRegister;
  if ( v12 == 0x400000 )
  {
    _m_prefetchw(p_PairRegister);
    v15 = *p_PairRegister;
    do
    {
      v16 = v15;
      v15 = _InterlockedCompareExchange16(p_PairRegister, v15 & 0xFEFD, v15);
    }
    while ( v16 != v15 );
    LOBYTE(v17) = v15;
  }
  else
  {
    if ( v11 )
    {
      v17 = *p_PairRegister;
    }
    else
    {
      _m_prefetchw(p_PairRegister);
      do
      {
        v17 = *p_PairRegister & 0xFEFD | 2;
        v28 = *p_PairRegister;
      }
      while ( v28 != _InterlockedCompareExchange16(p_PairRegister, v17, *p_PairRegister) );
    }
    v8 = 2LL;
  }
  TrappedSecurityDomain = PairPrcb->TrappedSecurityDomain;
  v19 = 0;
  if ( !TrappedSecurityDomain && (v17 & 0x10) != 0 )
  {
    TrappedSecurityDomain = 1LL;
    _InterlockedOr16(p_PairRegister, 2u);
  }
  if ( v8 == TrappedSecurityDomain || (v17 & 8) != 0 )
  {
    do
    {
      PairRegister = PairPrcb->PairRegister;
      v22 = 17;
      if ( !v8 )
        v22 = 1;
      v23 = PairPrcb->PairRegister & 0xFFEF | v22;
      if ( (v17 & 1) == 0 )
        v23 |= 2u;
    }
    while ( (v23 & 0x100) == 0
         && v23 != PairRegister
         && PairRegister != _InterlockedCompareExchange16(&PairPrcb->PairRegister, v23, PairRegister) );
    if ( (PairRegister & 0x100) != 0 )
    {
      TrappedSecurityDomain = 1LL;
    }
    else
    {
      TrappedSecurityDomain = PairPrcb->TrappedSecurityDomain;
      if ( !TrappedSecurityDomain && (v17 & 0x10) != 0 )
      {
        TrappedSecurityDomain = 1LL;
        _InterlockedOr16(p_PairRegister, 2u);
      }
    }
  }
  if ( TrappedSecurityDomain != v8 && (v17 & 8) == 0 || v11 || TrappedSecurityDomain == 1 )
  {
    do
      v20 = PairPrcb->PairRegister;
    while ( (((unsigned __int8)v20 | (unsigned __int8)v17) & 1) != 0
         && v20 != _InterlockedCompareExchange16(&PairPrcb->PairRegister, v20 & 0xFFEC | 2, v20) );
    CurrentPrcb->BpbUserSpecCtrl |= 2u;
    if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
      CurrentPrcb->BpbKernelSpecCtrl |= 2u;
  }
  else
  {
    CurrentPrcb->BpbUserSpecCtrl &= ~2u;
    if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
      CurrentPrcb->BpbKernelSpecCtrl &= ~2u;
    v19 = 1;
  }
  if ( v5 )
  {
    _m_prefetchw(&PairPrcb->PrcbPad12a[2]);
    do
      v29 = PairPrcb->PairRegister;
    while ( v29 != _InterlockedCompareExchange16(&PairPrcb->PairRegister, v29 & 0xFFDD | 2, v29) );
  }
  if ( !v19 )
  {
    if ( v11 )
    {
      _m_prefetchw(p_PairRegister);
      v26 = *p_PairRegister;
      do
      {
        v27 = v26;
        v26 = _InterlockedCompareExchange16(p_PairRegister, v26 | 0x100, v26);
      }
      while ( v27 != v26 );
      if ( (v26 & 1) != 0 && v6 )
        v4 = 1;
    }
  }
  BpbKernelSpecCtrl = CurrentPrcb->BpbKernelSpecCtrl;
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
    BpbKernelSpecCtrl = CurrentPrcb->BpbRetpolineExitSpecCtrl;
  if ( !v8 )
  {
    if ( (v17 & 0x10) == 0 )
    {
      BpbKernelSpecCtrl &= 0xFFFCu;
      CurrentPrcb->BpbRetpolineExitSpecCtrl = BpbKernelSpecCtrl;
      if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
        CurrentPrcb->BpbKernelSpecCtrl &= ~2u;
      else
        CurrentPrcb->BpbKernelSpecCtrl = BpbKernelSpecCtrl;
      CurrentPrcb->BpbUserSpecCtrl &= ~2u;
      goto LABEL_51;
    }
    BpbKernelSpecCtrl = BpbKernelSpecCtrl & 0xFFFC | 2;
    goto LABEL_72;
  }
  if ( (BpbKernelSpecCtrl & 3) == 0 )
  {
    BpbKernelSpecCtrl = BpbKernelSpecCtrl & 0xFFFC | 1;
    CurrentPrcb->BpbRetpolineExitSpecCtrl = BpbKernelSpecCtrl;
    if ( (KiSpeculationFeatures & 0x20000000000LL) == 0 )
LABEL_72:
      CurrentPrcb->BpbKernelSpecCtrl = BpbKernelSpecCtrl;
  }
LABEL_51:
  if ( v30 )
  {
    CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl = BpbKernelSpecCtrl;
    CurrentPrcb->BpbTrappedBpbState.AllFlags &= ~0x10u;
  }
  return v4;
}
