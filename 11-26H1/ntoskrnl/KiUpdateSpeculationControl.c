/*
 * XREFs of KiUpdateSpeculationControl @ 0x140305F40
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405F4E30 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     SwapContext @ 0x140734B80 (SwapContext.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiIpiSendRequest @ 0x14032BF00 (KiIpiSendRequest.c)
 *     KiUpdateStibpPairing @ 0x1403F42E0 (KiUpdateStibpPairing.c)
 *     KiUpdateSpecCtrlEnhancedIBRS @ 0x14041CC00 (KiUpdateSpecCtrlEnhancedIBRS.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     KiFlushCurrentRsb @ 0x140741D80 (KiFlushCurrentRsb.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall KiUpdateSpeculationControl(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v3; // rbx
  _KPRCB_BPB_STATE *p_BpbState; // r8
  __int64 v5; // r15
  unsigned __int16 BpbCurrentSpecCtrl; // r13
  __int64 v7; // r10
  __int16 v8; // cx
  unsigned __int16 *p_BpbRetpolineExitSpecCtrl; // r11
  unsigned __int16 v10; // dx
  unsigned __int64 TrappedSecurityDomain; // r12
  unsigned __int16 v12; // cx
  __int64 v13; // rdx
  unsigned __int16 v14; // si
  int updated; // r14d
  unsigned __int16 v16; // r8
  __int64 v17; // r9
  struct _KPRCB *v18; // rcx
  unsigned __int32 *v19; // r8
  __int64 v20; // rdx
  unsigned __int8 CurrentIrql; // si
  unsigned int v22; // r8d
  __int64 v23; // rcx
  __int64 *v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // ebx
  unsigned int i; // ecx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // r9
  struct _KPRCB *v31; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  signed __int16 PairRegister; // ax
  signed __int16 v34; // tt
  unsigned __int16 BpbKernelSpecCtrl; // ax
  unsigned __int16 AllFlags; // ax
  unsigned __int16 BpbUserSpecCtrl; // cx
  _KPRCB_BPB_STATE v38; // ax
  unsigned __int16 v39; // dx
  bool v40; // cf
  unsigned __int32 v41; // eax
  __int64 v42; // rdx
  unsigned __int32 v43; // ett
  unsigned __int32 v44; // eax
  __int64 v45; // rdx
  unsigned __int32 v46; // ett
  unsigned __int16 v47; // ax
  unsigned __int16 BpbRetpolineExitSpecCtrl; // ax
  unsigned __int16 BpbTrappedRetpolineExitSpecCtrl; // ax
  _KPRCB_BPB_STATE *v50; // rax
  _KPRCB_BPB_STATE *v51; // rdx
  unsigned __int16 v52; // cx
  unsigned __int16 v53; // ax
  bool v54; // [rsp+30h] [rbp-178h]
  unsigned __int8 v55; // [rsp+31h] [rbp-177h]
  int v56; // [rsp+34h] [rbp-174h]
  int v57; // [rsp+38h] [rbp-170h]
  __int128 v58; // [rsp+40h] [rbp-168h] BYREF
  __int64 v59; // [rsp+50h] [rbp-158h]
  __int64 (__fastcall *v60)(); // [rsp+58h] [rbp-150h]
  __int64 v61; // [rsp+60h] [rbp-148h] BYREF
  _QWORD v62[33]; // [rsp+68h] [rbp-140h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = KiSpeculationFeatures;
  v59 = qword_140FC0C68;
  if ( (KiSpeculationFeatures & 0x1000000000LL) == 0 )
    return;
  _disable();
  p_BpbState = &CurrentPrcb->BpbState;
  CurrentPrcb->BpbState.AllFlags &= 0xFF01u;
  v5 = *(_QWORD *)(a1 + 1888);
  v56 = *(_DWORD *)(a1 + 1532) & 0x400000;
  if ( !v56 )
    v5 = 1LL;
  if ( (KiSpeculationFeatures & 0x8000000000000LL) != 0 )
  {
    AllFlags = p_BpbState->AllFlags;
    if ( v5 )
      p_BpbState->AllFlags = AllFlags | 0x200;
    else
      p_BpbState->AllFlags = AllFlags & 0xFDFF;
  }
  if ( (v3 & 1) != 0 )
  {
    KiUpdateSpecCtrlEnhancedIBRS(CurrentPrcb, a1);
    v31 = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)v31->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v44 = *SchedulerAssist;
      do
      {
        v45 = v44;
        LODWORD(v45) = v44 & 0xFFDFFFFF;
        v46 = v44;
        v44 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v44 & 0xFFDFFFFF, v44);
      }
      while ( v46 != v44 );
      if ( (v44 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v31, v45, SchedulerAssist, v30);
    }
    _enable();
    return;
  }
  BpbCurrentSpecCtrl = CurrentPrcb->BpbCurrentSpecCtrl;
  v55 = 0;
  v54 = 0;
  v7 = v3 & 0x20000000000LL;
  if ( (v3 & 0x20000000000LL) != 0 && (CurrentPrcb->BpbRetpolineState.AllFlags & 3) == 1 )
  {
    BpbCurrentSpecCtrl = CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl;
    v55 = 1;
    v54 = (CurrentPrcb->PrcbPad12a[1] & 0x100000) != 0;
  }
  v8 = 0;
  if ( (v3 & 0x4000000000LL) != 0 && KiSsbdMsr == 72 )
  {
    BpbCurrentSpecCtrl |= 4u;
    v8 = 4;
  }
  p_BpbRetpolineExitSpecCtrl = &CurrentPrcb->BpbRetpolineExitSpecCtrl;
  CurrentPrcb->BpbKernelSpecCtrl = v8;
  CurrentPrcb->BpbUserSpecCtrl = v8;
  v10 = v8;
  CurrentPrcb->BpbRetpolineExitSpecCtrl = v8;
  if ( (v3 & 0x2000) != 0 )
  {
    v10 = v8 | 0x80;
    CurrentPrcb->BpbKernelSpecCtrl = v8 | 0x80;
    *p_BpbRetpolineExitSpecCtrl = v8 | 0x80;
    v8 |= 0x80u;
  }
  if ( (v3 & 0x80000000000LL) != 0 )
  {
    v8 |= 2u;
    v10 |= 2u;
    CurrentPrcb->BpbKernelSpecCtrl = v8;
    *p_BpbRetpolineExitSpecCtrl = v10;
  }
  if ( (v3 & 0x40000000000000LL) != 0 )
  {
    CurrentPrcb->BpbKernelSpecCtrl = v8 | 0x400;
    *p_BpbRetpolineExitSpecCtrl = v10 | 0x400;
  }
  TrappedSecurityDomain = CurrentPrcb->TrappedSecurityDomain;
  v57 = *(_DWORD *)(a1 + 1532) & 0x800000;
  if ( (v3 & 0x2000000000LL) == 0 )
  {
    if ( !v5 )
    {
      if ( (v3 & 2) != 0 )
      {
        if ( (v3 & 0x40) != 0 )
        {
          *p_BpbRetpolineExitSpecCtrl |= 2u;
          if ( !v7 )
            CurrentPrcb->BpbKernelSpecCtrl |= 2u;
        }
        else if ( (v3 & 0x10) != 0 )
        {
          *p_BpbRetpolineExitSpecCtrl |= 1u;
          if ( !v7 )
            CurrentPrcb->BpbKernelSpecCtrl |= 1u;
        }
      }
      goto LABEL_16;
    }
    if ( (v3 & 0x300000008000LL) == 0x8000 || (v3 & 0x1800000200000LL) == 0x200000 )
    {
      v47 = p_BpbState->AllFlags | 8;
      p_BpbState->AllFlags = v47;
      if ( (v3 & 8) == 0 )
        p_BpbState->AllFlags = v47 | 2;
      if ( (v3 & 2) != 0 )
      {
        if ( (v3 & 0x40) != 0 )
        {
          *p_BpbRetpolineExitSpecCtrl |= 2u;
          if ( !v7 )
            CurrentPrcb->BpbKernelSpecCtrl |= 2u;
        }
        else if ( (v3 & 0x10) != 0 )
        {
          *p_BpbRetpolineExitSpecCtrl |= 1u;
          if ( !v7 )
            CurrentPrcb->BpbKernelSpecCtrl |= 1u;
        }
      }
      goto LABEL_75;
    }
    if ( (v3 & 0x10) != 0 )
    {
      *p_BpbRetpolineExitSpecCtrl |= 1u;
      if ( !v7 )
        CurrentPrcb->BpbKernelSpecCtrl |= 1u;
      if ( (v3 & 0x20) == 0 )
        p_BpbState->AllFlags |= 2u;
    }
    else
    {
      if ( (v3 & 0x42) != 0x42 || (*p_BpbRetpolineExitSpecCtrl |= 2u, v7) )
      {
        v50 = &CurrentPrcb->BpbState;
        v51 = &CurrentPrcb->BpbState;
        if ( v7 )
        {
          v52 = p_BpbState->AllFlags;
          p_BpbState->AllFlags |= 0x10u;
          if ( (v3 & 0x20) != 0 )
          {
            if ( (v3 & 8) == 0 )
              p_BpbState->AllFlags = v52 | 0x50;
          }
          else
          {
            p_BpbState->AllFlags = v52 | 0x12;
          }
          goto LABEL_75;
        }
      }
      else
      {
        CurrentPrcb->BpbKernelSpecCtrl |= 2u;
        v50 = &CurrentPrcb->BpbState;
        v51 = &CurrentPrcb->BpbState;
      }
      v53 = v50->AllFlags | 8;
      v51->AllFlags = v53;
      if ( (v3 & 8) == 0 )
        p_BpbState->AllFlags = v53 | 2;
    }
LABEL_75:
    if ( (CurrentPrcb->BpbFeatures.AllFlags & 0x30) != 0 )
      CurrentPrcb->BpbState.AllFlags = p_BpbState->AllFlags | 0x80;
    goto LABEL_77;
  }
  if ( !v5 )
  {
LABEL_16:
    CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl &= ~4u;
    goto LABEL_17;
  }
LABEL_77:
  if ( (v3 & 0x8000000000LL) == 0 )
    goto LABEL_16;
  CurrentPrcb->BpbRetpolineExitSpecCtrl |= 4u;
  CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl |= 4u;
  CurrentPrcb->BpbKernelSpecCtrl |= 4u;
  BpbCurrentSpecCtrl |= 4u;
LABEL_17:
  if ( (v3 & 0x42) == 0x42 && ((v3 & 0x100000000LL) != 0 || (*(_DWORD *)(a1 + 1872) & 0x40000000) != 0) )
  {
    CurrentPrcb->BpbUserSpecCtrl |= 2u;
    if ( (v3 & 0x20000000000LL) != 0 && (PEPROCESS)a1 != PsInitialSystemProcess )
      CurrentPrcb->BpbKernelSpecCtrl |= 2u;
  }
  if ( (v3 & 0x80000000000LL) != 0 )
    CurrentPrcb->BpbUserSpecCtrl |= 2u;
  if ( (v3 & 0x8000000000LL) != 0 && (*(_DWORD *)(a1 + 1876) & 0x2000) != 0 )
    CurrentPrcb->BpbUserSpecCtrl |= 4u;
  if ( (v3 & 0x40000000000000LL) != 0 )
    CurrentPrcb->BpbUserSpecCtrl |= 0x400u;
  if ( !TrappedSecurityDomain || TrappedSecurityDomain == v5 || TrappedSecurityDomain == *(_QWORD *)(a1 + 1896) )
    goto LABEL_24;
  if ( (BpbCurrentSpecCtrl & 1) == 0 )
  {
    if ( (v3 & 0x2000000000LL) != 0
      || (v3 & 0x10) != 0
      || (v3 & 0x20000000000LL) != 0 && (CurrentPrcb->BpbRetpolineState.AllFlags & 2) == 0 )
    {
      goto LABEL_112;
    }
LABEL_24:
    LODWORD(p_BpbState) = v54;
    goto LABEL_25;
  }
  if ( (v3 & 0x100000000000000LL) == 0 )
  {
    if ( (v3 & 2) != 0 )
    {
      if ( (CurrentPrcb->PairRegister & 4) == 0 )
      {
        if ( (v3 & 0x20000000000LL) == 0 || (CurrentPrcb->BpbRetpolineState.AllFlags & 1) != 0 )
        {
          if ( (v3 & 0x40) != 0 )
            BpbCurrentSpecCtrl = BpbCurrentSpecCtrl & 4 | 2;
        }
        else
        {
          BpbCurrentSpecCtrl &= 4u;
        }
      }
    }
    else
    {
      BpbCurrentSpecCtrl &= 4u;
    }
  }
  if ( (BpbCurrentSpecCtrl & 1) == 0 )
  {
    LOBYTE(p_BpbState) = 1;
    v55 = 1;
    goto LABEL_25;
  }
LABEL_112:
  LODWORD(p_BpbState) = v54;
  v38.AllFlags = CurrentPrcb->BpbState.AllFlags | 4;
  CurrentPrcb->BpbState = v38;
  if ( (v3 & 8) == 0 )
    CurrentPrcb->BpbState.AllFlags = v38.AllFlags | 0x20;
LABEL_25:
  v12 = BpbCurrentSpecCtrl | 0x80;
  if ( (v3 & 0x2000) == 0 )
    v12 = BpbCurrentSpecCtrl;
  v13 = v12;
  LOWORD(v13) = v12 | 2;
  if ( (v3 & 0x80000000000LL) == 0 )
    LOWORD(v13) = v12;
  v14 = v13 | 0x400;
  if ( (v3 & 0x40000000000000LL) == 0 )
    v14 = v13;
  if ( (_BYTE)p_BpbState )
  {
    v13 = 0LL;
    __writemsr(0x49u, 1uLL);
    if ( (v3 & 8) == 0 )
      KiFlushCurrentRsb(73, 0, (_DWORD)p_BpbState, 1832);
    CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl = v14;
    CurrentPrcb->TrappedSecurityDomain = 0LL;
    CurrentPrcb->BpbState.AllFlags &= 0xFFDBu;
    CurrentPrcb->BpbTrappedBpbState.AllFlags &= 0xFFAFu;
  }
  updated = 0;
  v16 = v14;
  if ( (CurrentPrcb->PairRegister & 4) == 0 )
    goto LABEL_33;
  if ( TrappedSecurityDomain == v5 )
  {
    BpbUserSpecCtrl = CurrentPrcb->BpbUserSpecCtrl;
    if ( (CurrentPrcb->PairPrcb->PairRegister & 1) != 0 )
    {
      v13 = 65533LL;
      CurrentPrcb->BpbUserSpecCtrl = BpbUserSpecCtrl & 0xFFFD;
      if ( (v3 & 0x20000000000LL) != 0 )
        CurrentPrcb->BpbKernelSpecCtrl &= ~2u;
    }
    else
    {
      CurrentPrcb->BpbUserSpecCtrl = BpbUserSpecCtrl | 2;
      if ( (v3 & 0x20000000000LL) != 0 )
        CurrentPrcb->BpbKernelSpecCtrl |= 2u;
    }
  }
  else
  {
    _InterlockedOr16(&CurrentPrcb->PairRegister, 2u);
  }
  if ( v5 )
  {
    if ( !v57 )
    {
LABEL_33:
      v17 = v55;
      goto LABEL_34;
    }
    _m_prefetchw(&CurrentPrcb->PrcbPad12a[2]);
    PairRegister = CurrentPrcb->PairRegister;
    do
    {
      v34 = PairRegister;
      PairRegister = _InterlockedCompareExchange16(&CurrentPrcb->PairRegister, PairRegister | 0x100, PairRegister);
    }
    while ( v34 != PairRegister );
    updated = PairRegister & 1;
    if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
    {
      BpbRetpolineExitSpecCtrl = CurrentPrcb->BpbRetpolineExitSpecCtrl;
      if ( (BpbRetpolineExitSpecCtrl & 3) == 0 )
        CurrentPrcb->BpbRetpolineExitSpecCtrl = BpbRetpolineExitSpecCtrl | 2;
      BpbTrappedRetpolineExitSpecCtrl = CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl;
      if ( (BpbTrappedRetpolineExitSpecCtrl & 3) == 0 )
        CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl = BpbTrappedRetpolineExitSpecCtrl | 2;
      if ( (CurrentPrcb->BpbRetpolineState.AllFlags & 1) == 0 || (v14 & 3) != 0 )
        goto LABEL_95;
    }
    else
    {
      BpbKernelSpecCtrl = CurrentPrcb->BpbKernelSpecCtrl;
      if ( (BpbKernelSpecCtrl & 3) == 0 )
        CurrentPrcb->BpbKernelSpecCtrl = BpbKernelSpecCtrl | 2;
      if ( (v14 & 3) != 0 )
        goto LABEL_95;
    }
    v16 = v14 | 2;
LABEL_95:
    _InterlockedOr16(&CurrentPrcb->PairRegister, 2u);
    goto LABEL_33;
  }
  updated = KiUpdateStibpPairing(a1, v13, v14);
  v39 = CurrentPrcb->BpbRetpolineExitSpecCtrl;
  v17 = v39;
  LOWORD(v17) = v39 & 3;
  CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl ^= ((unsigned __int8)CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl ^ (unsigned __int8)v39) & 3;
  if ( (v3 & 0x20000000000LL) != 0 && (CurrentPrcb->BpbRetpolineState.AllFlags & 1) != 0 )
  {
    LOWORD(v17) = -(__int16)v17;
    v40 = (_WORD)v17 != 0;
  }
  else
  {
    v40 = (CurrentPrcb->PrcbPad12a[3] & 3) != 0;
  }
  LOBYTE(v17) = 1;
  v16 = (v40 ? 2 : 0) | v14 & 0xFFFC;
  if ( !v56 )
    _InterlockedOr16(&CurrentPrcb->PairRegister, 2u);
LABEL_34:
  if ( v16 != CurrentPrcb->BpbCurrentSpecCtrl )
  {
    CurrentPrcb->BpbCurrentSpecCtrl = v16;
    __writemsr(0x48u, v16);
  }
  if ( (_BYTE)v17 )
    CurrentPrcb->BpbRetpolineState.AllFlags |= 2u;
  _mm_lfence();
  v18 = KeGetCurrentPrcb();
  v19 = (unsigned __int32 *)v18->SchedulerAssist;
  if ( v19 )
  {
    _m_prefetchw(v19);
    v41 = *v19;
    do
    {
      v42 = v41;
      LODWORD(v42) = v41 & 0xFFDFFFFF;
      v43 = v41;
      v41 = _InterlockedCompareExchange((volatile signed __int32 *)v19, v41 & 0xFFDFFFFF, v41);
    }
    while ( v43 != v41 );
    if ( (v41 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v18, v42, v19, v17);
  }
  _enable();
  if ( !updated )
    return;
  memset_0(v62, 0, 0x100uLL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 12 )
    __writecr8(0xCuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v20) = 12;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v20);
  }
  v61 = 2097153LL;
  memset_0(v62, 0, 0x100uLL);
  v22 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + CurrentPrcb->PairPrcb->Number) & 0x3F;
  v23 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV
                      + CurrentPrcb->PairPrcb->Number) >> 6;
  if ( (_DWORD)v23 )
  {
    if ( WORD1(v61) <= (unsigned int)v23 )
      goto LABEL_46;
    LOWORD(v61) = v23 + 1;
  }
  v24 = &v62[v23];
  v25 = *v24;
  _bittestandset64(&v25, v22);
  *v24 = v25;
LABEL_46:
  v60 = KiSynchronizeStibpPairingTarget;
  v59 = 0LL;
  v58 = 0LL;
  KiIpiSendRequest((unsigned int)KeGetCurrentPrcb(), 0, (unsigned int)&v61, (unsigned int)&v58, 5LL);
  v26 = 0;
  while ( CurrentPrcb->PacketBarrier )
  {
    if ( (++v26 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
    {
      if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
      {
LABEL_63:
        HvlNotifyLongSpinWait(v26);
        continue;
      }
      for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
      {
        v28 = KiProcessorBlock[i];
        if ( (*(_BYTE *)(v28 + 35) & 1) != 0 )
        {
          v29 = *(_QWORD *)(v28 + 36600);
          if ( !v29 || !*(_BYTE *)(v29 + 65) || !*(_BYTE *)(v29 + 64) )
            goto LABEL_63;
        }
      }
    }
    _mm_pause();
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
}
