/*
 * XREFs of KiOptimizeSpecCtrlSettingsWorker @ 0x1405F4E30
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     KiUpdateSpeculationControl @ 0x140305F40 (KiUpdateSpeculationControl.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeCanUseHaltOnAddress @ 0x1403E8980 (KeCanUseHaltOnAddress.c)
 *     KiHaltOnAddress @ 0x1403E89D8 (KiHaltOnAddress.c)
 *     KeExitRetpoline @ 0x14048727C (KeExitRetpoline.c)
 *     KiSetMicrocodeUpdateOptions @ 0x140530140 (KiSetMicrocodeUpdateOptions.c)
 *     KiSetVirtualMitigationControl @ 0x140535B50 (KiSetVirtualMitigationControl.c)
 *     HvlIsCoreSharingPossible @ 0x1405BAFE8 (HvlIsCoreSharingPossible.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x1405F43C4 (KiDetectAmdNonArchSsbdSupport.c)
 *     KiIsBranchConfusionMitigationDesired @ 0x1405F4B18 (KiIsBranchConfusionMitigationDesired.c)
 *     KiIsBranchConfusionMitigationSupported @ 0x1405F4B58 (KiIsBranchConfusionMitigationSupported.c)
 *     KiIsBranchConfusionPresent @ 0x1405F4B84 (KiIsBranchConfusionPresent.c)
 *     KiIsSrsoMitigationDesired @ 0x1405F4CD8 (KiIsSrsoMitigationDesired.c)
 *     KiIsTsaMitigationDesired @ 0x1405F4D60 (KiIsTsaMitigationDesired.c)
 *     KiIsTsaMitigationSupported @ 0x1405F4D7C (KiIsTsaMitigationSupported.c)
 *     KiSelectBhbFlushSequence @ 0x1405F5AD4 (KiSelectBhbFlushSequence.c)
 */

ULONG_PTR __fastcall KiOptimizeSpecCtrlSettingsWorker(volatile signed __int32 *Argument)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v3; // rax
  signed __int32 v4; // eax
  unsigned int v5; // edi
  unsigned int v6; // r15d
  char v7; // r12
  signed __int32 v8; // ecx
  unsigned int v9; // eax
  signed __int32 v10; // edx
  signed __int32 v11; // r8d
  int v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // ax
  __int16 v17; // r11
  char v18; // al
  signed __int32 v19; // eax
  unsigned int v20; // edi
  unsigned int v21; // r15d
  char v22; // r12
  unsigned int v23; // eax
  int v24; // r8d
  int v25; // r14d
  unsigned __int32 v26; // eax
  int v27; // r8d
  __int64 v28; // rdx
  unsigned __int64 CoreProcessorSet; // rdx
  unsigned __int64 v30; // rcx
  char v31; // cl
  unsigned __int64 v32; // rax
  _QWORD *v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  signed __int32 v38; // eax
  unsigned int v39; // edi
  unsigned int v40; // r14d
  char v41; // r12
  signed __int32 v42; // ecx
  unsigned int v43; // eax
  signed __int32 v44; // edx
  signed __int32 v45; // r8d
  int v46; // r15d
  unsigned __int16 BpbKernelSpecCtrl; // ax
  unsigned int v48; // eax
  __int64 v50; // [rsp+60h] [rbp+40h] BYREF
  struct _KPRCB *v51; // [rsp+68h] [rbp+48h]

  CurrentPrcb = KeGetCurrentPrcb();
  v51 = CurrentPrcb;
  if ( ((CurrentPrcb->CoreProcessorSet - 1) & CurrentPrcb->CoreProcessorSet) != 0 )
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 2uLL);
  if ( HvlHypervisorConnected && HvlIsCoreSharingPossible() )
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 2uLL);
  if ( (KiFeatureSettings & 0x80u) != 0 )
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x10000000000uLL);
  if ( CurrentPrcb->CpuVendor == 1 )
    KiDetectAmdNonArchSsbdSupport((__int64)CurrentPrcb);
  if ( (KiSpeculationFeatures & 0x80) != 0 && (KiSpeculationFeatures & 0x100) == 0 )
  {
    if ( (KiFeatureSettings & 8) != 0 )
      goto LABEL_16;
    if ( (KiFeatureSettings & 0x10) == 0 )
      goto LABEL_17;
    if ( KiSsbdMsr != 72 )
LABEL_16:
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x4000000000uLL);
    else
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x8000000000uLL);
  }
LABEL_17:
  if ( (KiSpeculationFeatures & 4) == 0 )
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x800000000uLL);
  if ( (KiFeatureSettings & 4) != 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x400000000uLL);
  }
  else if ( (KiFeatureSettings & 1) != 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x400000000uLL);
    if ( HvlHypervisorConnected )
    {
      if ( (HvlpFlags & 2) != 0 && HvlIsCoreSharingPossible() && (KiSpeculationFeatures & 0x40) != 0 )
      {
        CurrentPrcb->BpbKernelSpecCtrl = 2;
        CurrentPrcb->BpbUserSpecCtrl = 2;
        CurrentPrcb->BpbRetpolineExitSpecCtrl = 2;
      }
    }
  }
  if ( (KiFeatureSettings & 0x2000000) != 0 )
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x400000000000uLL);
  if ( (KiSpeculationFeatures & 0x800000) != 0 )
  {
    if ( (KiSpeculationFeatures & 0x1000000) == 0 )
    {
      v3 = 0x4000000000000LL;
LABEL_34:
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v3);
      goto LABEL_37;
    }
    if ( (KiFeatureSettings & 0x8000000) != 0 )
    {
      v3 = 0x2000000000000LL;
      goto LABEL_34;
    }
    if ( !KiKvaShadow )
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x8000000000000uLL);
  }
LABEL_37:
  if ( (KiSpeculationFeatures & 0x8000000000000LL) != 0 )
  {
    CurrentPrcb->BpbState.AllFlags |= 0x200u;
    CurrentPrcb->VerwSelector = 24;
  }
  if ( Argument )
  {
    v4 = _InterlockedDecrement(Argument);
    v5 = ~v4 & 0x80000000;
    if ( (v4 & 0x3FFFFFFF) != 0 )
    {
      v6 = 0;
      v7 = 0;
      if ( (*Argument & 0x80000000) != v5 )
      {
        do
        {
          if ( (++v6 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            ++v7;
            if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v7 & 7) == 0 )
            {
              v8 = *Argument;
              v9 = *Argument & 0x80000000;
              LODWORD(v50) = *Argument;
              if ( v9 != v5 )
              {
                v10 = v8;
                v11 = v8;
                do
                {
                  v12 = v8 | 0x40000000;
                  v8 = _InterlockedCompareExchange(Argument, v8 | 0x40000000, v10);
                  if ( v8 == v11 )
                  {
                    LODWORD(v50) = v12;
                    do
                    {
                      KiHaltOnAddress((unsigned __int64)Argument, &v50, 4LL);
                      v8 = *Argument;
                    }
                    while ( *Argument == v12 );
                  }
                  LODWORD(v50) = v8;
                  v10 = v8;
                  v11 = v8;
                }
                while ( (v8 & 0x80000000) != v5 );
              }
            }
            else
            {
              HvlNotifyLongSpinWait(v6);
            }
          }
          else
          {
            _mm_pause();
          }
        }
        while ( (*Argument & 0x80000000) != v5 );
        CurrentPrcb = v51;
      }
    }
    else if ( (_InterlockedExchange(Argument, *((_DWORD *)Argument + 1) | v5) & 0x40000000) != 0 )
    {
      KeWakeAddressAll();
    }
  }
  if ( (KiSpeculationFeatures & 0x400000000LL) != 0 || (KiSpeculationFeatures & 0x800000000LL) != 0 )
  {
    if ( (KiSpeculationFeatures & 0x8000000000LL) != 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x4000000000uLL);
      _InterlockedAnd64((volatile signed __int64 *)&KiSpeculationFeatures, 0xFFFFFF7FFFFFFFFFuLL);
    }
    if ( (KiSpeculationFeatures & 0x4000000000LL) != 0 )
    {
      BpbKernelSpecCtrl = CurrentPrcb->BpbKernelSpecCtrl;
      if ( KiSsbdMsr == 72 )
        BpbKernelSpecCtrl |= 4u;
      CurrentPrcb->BpbKernelSpecCtrl = BpbKernelSpecCtrl;
      CurrentPrcb->BpbUserSpecCtrl = BpbKernelSpecCtrl;
    }
  }
  else
  {
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x1000000000uLL);
    CurrentPrcb->BpbFeatures.AllFlags |= 2u;
    v13 = 0x10000000000000LL;
    v14 = 0x80000000000000LL;
    if ( (KiSpeculationFeatures & 1) != 0 )
    {
      v15 = ((unsigned __int64)KiSpeculationFeatures >> 13) & 2 | 1;
      CurrentPrcb->BpbKernelSpecCtrl = v15;
      CurrentPrcb->BpbUserSpecCtrl = v15;
      CurrentPrcb->BpbRetpolineExitSpecCtrl = v15;
      if ( (KiSpeculationFeatures & 0x4000000000LL) != 0 || (KiSpeculationFeatures & 0x8000000000LL) != 0 )
      {
        v16 = CurrentPrcb->BpbKernelSpecCtrl;
        if ( KiSsbdMsr == 72 )
          v16 |= 4u;
        CurrentPrcb->BpbKernelSpecCtrl = v16;
        CurrentPrcb->BpbUserSpecCtrl = v16;
        CurrentPrcb->BpbRetpolineExitSpecCtrl = v16;
      }
      CurrentPrcb->BpbNmiSpecCtrl = 1;
      if ( ((KiSpeculationFeatures & 0x4000000000LL) != 0 || (KiSpeculationFeatures & 0x8000000000LL) != 0)
        && KiSsbdMsr == 72 )
      {
        CurrentPrcb->BpbNmiSpecCtrl |= 4u;
      }
      if ( (KiSpeculationFeatures & 0x4000) != 0 )
        CurrentPrcb->BpbNmiSpecCtrl |= 2u;
      v17 = 128;
      if ( (KiSpeculationFeatures & 0x2000) != 0 )
        CurrentPrcb->BpbNmiSpecCtrl |= 0x80u;
      if ( (KiSpeculationFeatures & 0x10000) != 0 )
      {
        if ( (KiFeatureSettings & 0x800000) != 0 )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x80000000000000uLL);
          v18 = KiSelectBhbFlushSequence(CurrentPrcb);
          LOBYTE(v13) = CurrentPrcb->BpbFeatures.AllFlags;
          CurrentPrcb->BpbFeatures.AllFlags = v13 ^ (v13 ^ (16 * v18)) & 0x30;
        }
        else
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x10000000000000uLL);
        }
      }
      if ( (KiSpeculationFeatures & 0x8000000000LL) == 0 )
        goto LABEL_217;
    }
    else
    {
      v17 = 128;
    }
    if ( (KiSpeculationFeatures & 0x10) != 0 )
    {
      CurrentPrcb->BpbNmiSpecCtrl = 1;
    }
    else if ( (KiSpeculationFeatures & 0x40) != 0 && (KiSpeculationFeatures & 2) != 0 )
    {
      CurrentPrcb->BpbNmiSpecCtrl = 2;
    }
    if ( (KiSpeculationFeatures & 0x4000) != 0 )
      CurrentPrcb->BpbNmiSpecCtrl |= 2u;
    if ( (KiSpeculationFeatures & 0x2000) != 0 )
      CurrentPrcb->BpbNmiSpecCtrl |= v17;
    if ( ((KiSpeculationFeatures & 0x4000000000LL) != 0 || (KiSpeculationFeatures & 0x8000000000LL) != 0)
      && KiSsbdMsr == 72 )
    {
      CurrentPrcb->BpbNmiSpecCtrl |= 4u;
    }
    if ( (KiSpeculationFeatures & 1) == 0 )
    {
      if ( CurrentPrcb->CpuVendor == 1 )
        _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x100000000000000uLL);
      if ( Argument )
      {
        v19 = _InterlockedDecrement(Argument);
        v20 = ~v19 & 0x80000000;
        if ( (v19 & 0x3FFFFFFF) != 0 )
        {
          v21 = 0;
          v22 = 0;
          while ( (*Argument & 0x80000000) != v20 )
          {
            if ( (++v21 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              ++v22;
              if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v22 & 7) == 0 )
              {
                v13 = *(unsigned int *)Argument;
                v23 = *Argument & 0x80000000;
                LODWORD(v50) = *Argument;
                if ( v23 != v20 )
                {
                  LODWORD(v14) = v13;
                  v24 = v13;
                  do
                  {
                    v25 = v13 | 0x40000000;
                    v26 = _InterlockedCompareExchange(Argument, v13 | 0x40000000, v14);
                    v13 = v26;
                    if ( v26 == v24 )
                    {
                      LODWORD(v50) = v25;
                      do
                      {
                        KiHaltOnAddress((unsigned __int64)Argument, &v50, 4LL);
                        v13 = *(unsigned int *)Argument;
                      }
                      while ( (_DWORD)v13 == v25 );
                    }
                    LODWORD(v50) = v13;
                    v14 = (unsigned int)v13;
                    v24 = v13;
                  }
                  while ( (v13 & 0x80000000) != v20 );
                }
              }
              else
              {
                HvlNotifyLongSpinWait(v21);
              }
            }
            else
            {
              _mm_pause();
            }
          }
        }
        else if ( (_InterlockedExchange(Argument, *((_DWORD *)Argument + 1) | v20) & 0x40000000) != 0 )
        {
          KeWakeAddressAll();
        }
      }
      if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
      {
        CurrentPrcb->BpbRetpolineState.AllFlags |= 4u;
        KeExitRetpoline(v13, v14);
      }
      if ( (KiSpeculationFeatures & 2) != 0
        && (KiSpeculationFeatures & 0x4000) == 0
        && !HvlHypervisorConnected
        && ((KiSpeculationFeatures & 0x10) != 0 || (KiSpeculationFeatures & 0x40) != 0) )
      {
        _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x200000000uLL);
        CurrentPrcb->BpbFeatures.AllFlags |= 1u;
      }
      v27 = 0;
      if ( (KiSpeculationFeatures & 2) != 0
        && (KiSpeculationFeatures & 0x40) != 0
        && (KiSpeculationFeatures & 0x10) != 0 )
      {
        v28 = 0x10000000000LL;
        if ( (KiSpeculationFeatures & 0x4000) != 0 || (KiSpeculationFeatures & 0x10000000000LL) != 0 )
          goto LABEL_146;
        CoreProcessorSet = CurrentPrcb->CoreProcessorSet;
        if ( (unsigned int)__popcnt(CoreProcessorSet) == 2 )
        {
          if ( !HvlHypervisorConnected
            || !HvlIsCoreSharingPossible()
            || (HvlpFlags & 2) != 0
            && (HvlpFlags & 0x400000) != 0
            && HvlpSchedulerType != 1
            && HvlpSchedulerType != 2
            && (HvlpSchedulerType == 3
             || HvlpSchedulerType == 4 && (v30 = KeGetCurrentPrcb()->CoreProcessorSet, ((v30 - 1) & v30) != 0)) )
          {
            v31 = CurrentPrcb->GroupIndex + 1;
            LODWORD(v50) = 0;
            _BitScanForward64(&v32, __ROR8__(CoreProcessorSet, v31));
            CurrentPrcb->PairPrcb = (_KPRCB *)KeGetPrcb(*((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * CurrentPrcb->Group].Flink
                                                        + (((unsigned __int8)v32 + v31) & 0x3F)));
            v27 = 1;
            CurrentPrcb->PairRegister = 6;
          }
        }
      }
      v28 = 0x10000000000LL;
LABEL_146:
      if ( (KiFeatureSettings & 0x20) != 0 && (KiSpeculationFeatures & 2) != 0 && (KiSpeculationFeatures & 0x40) != 0
        || (KiSpeculationFeatures & 2) != 0
        && (KiSpeculationFeatures & 0x40) != 0
        && !v27
        && (KiSpeculationFeatures & 0x10000000000LL) == 0
        && HvlHypervisorConnected
        && HvlIsCoreSharingPossible() )
      {
        _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x100000000uLL);
      }
      if ( (KiSpeculationFeatures & 2) != 0
        && (KiSpeculationFeatures & 0x40) != 0
        && (KiSpeculationFeatures & 0x4000) != 0
        && !v27
        && ((unsigned __int64)KiSpeculationFeatures & v28) == 0 )
      {
        _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x80000000000uLL);
      }
      if ( CurrentPrcb->CpuVendor == 1 && (KiSpeculationFeatures & 0x10) == 0 && (KiFeatureSettings & 0x40) == 0 )
      {
        _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x2000000000uLL);
        goto LABEL_217;
      }
      if ( (unsigned int)KiIsBranchConfusionPresent((__int64)CurrentPrcb) )
      {
        _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x8000uLL);
        if ( (unsigned int)KiIsBranchConfusionMitigationDesired((__int64)CurrentPrcb, &KiSpeculationFeatures) )
        {
          if ( KiIsBranchConfusionMitigationSupported(v34, v33) )
            goto LABEL_172;
          v35 = 0x200000000000LL;
        }
        else
        {
          v35 = 0x100000000000LL;
        }
        _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v35);
      }
LABEL_172:
      if ( (KiSpeculationFeatures & 0x8000000) == 0 )
        goto LABEL_179;
      if ( (unsigned int)KiIsTsaMitigationDesired() )
      {
        if ( KiIsTsaMitigationSupported((__int64)CurrentPrcb) )
        {
          CurrentPrcb->BpbFeatures.AllFlags |= 0x40u;
LABEL_179:
          if ( (KiSpeculationFeatures & 0x10000) != 0 )
          {
            if ( (KiFeatureSettings & 0x800000) != 0 )
            {
              _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x80000000000000uLL);
              CurrentPrcb->BpbFeatures.AllFlags ^= (CurrentPrcb->BpbFeatures.AllFlags ^ (16
                                                                                       * KiSelectBhbFlushSequence(CurrentPrcb))) & 0x30;
            }
            else
            {
              _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x10000000000000uLL);
            }
          }
          if ( (KiSpeculationFeatures & 0x200000) == 0 )
            goto LABEL_189;
          if ( (KiSpeculationFeatures & 4) != 0 )
          {
            if ( (unsigned int)KiIsSrsoMitigationDesired((__int64)CurrentPrcb) )
            {
LABEL_189:
              if ( Argument )
              {
                v38 = _InterlockedDecrement(Argument);
                v39 = ~v38 & 0x80000000;
                if ( (v38 & 0x3FFFFFFF) != 0 )
                {
                  v40 = 0;
                  v41 = 0;
                  while ( (*Argument & 0x80000000) != v39 )
                  {
                    if ( (++v40 & HvlLongSpinCountMask) == 0
                      && (HvlEnlightenments & 0x40) != 0
                      && KiCheckVpBackingLongSpinWaitHypercall() )
                    {
                      ++v41;
                      if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v41 & 7) == 0 )
                      {
                        v42 = *Argument;
                        v43 = *Argument & 0x80000000;
                        LODWORD(v50) = *Argument;
                        if ( v43 != v39 )
                        {
                          v44 = v42;
                          v45 = v42;
                          do
                          {
                            v46 = v42 | 0x40000000;
                            v42 = _InterlockedCompareExchange(Argument, v42 | 0x40000000, v44);
                            if ( v42 == v45 )
                            {
                              LODWORD(v50) = v46;
                              do
                              {
                                KiHaltOnAddress((unsigned __int64)Argument, &v50, 4LL);
                                v42 = *Argument;
                              }
                              while ( *Argument == v46 );
                            }
                            LODWORD(v50) = v42;
                            v44 = v42;
                            v45 = v42;
                          }
                          while ( (v42 & 0x80000000) != v39 );
                        }
                      }
                      else
                      {
                        HvlNotifyLongSpinWait(v40);
                      }
                    }
                    else
                    {
                      _mm_pause();
                    }
                  }
                }
                else if ( (_InterlockedExchange(Argument, *((_DWORD *)Argument + 1) | v39) & 0x40000000) != 0 )
                {
                  KeWakeAddressAll();
                }
              }
              KiUpdateSpeculationControl((__int64)KeGetCurrentThread()->ApcState.Process);
              goto LABEL_217;
            }
            v37 = 0x800000000000LL;
          }
          else
          {
            v37 = 0x1000000000000LL;
          }
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v37);
          goto LABEL_189;
        }
        v36 = 0x400000000000000LL;
      }
      else
      {
        v36 = 0x200000000000000LL;
      }
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v36);
      goto LABEL_179;
    }
  }
LABEL_217:
  v48 = CurrentPrcb->BpbKernelSpecCtrl;
  CurrentPrcb->BpbCurrentSpecCtrl = v48;
  if ( (_WORD)v48 )
    __writemsr(0x48u, v48);
  if ( (KiSpeculationFeatures & 0x4000000000LL) != 0 && KiSsbdMsr != 72 )
    __writemsr(KiSsbdMsr, KiSsbdBit | __readmsr(KiSsbdMsr));
  KiSetMicrocodeUpdateOptions();
  KiSetVirtualMitigationControl((__int64)CurrentPrcb);
  return 0LL;
}
