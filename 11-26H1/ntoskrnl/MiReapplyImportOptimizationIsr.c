/*
 * XREFs of MiReapplyImportOptimizationIsr @ 0x140700340
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeCanUseHaltOnAddress @ 0x1403E8980 (KeCanUseHaltOnAddress.c)
 *     KiHaltOnAddress @ 0x1403E89D8 (KiHaltOnAddress.c)
 *     MiApplyDynamicRelocationFixups @ 0x14047A8A8 (MiApplyDynamicRelocationFixups.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     MmIsVerifierApplicableToImage @ 0x1406F8588 (MmIsVerifierApplicableToImage.c)
 */

ULONG_PTR __fastcall MiReapplyImportOptimizationIsr(ULONG_PTR Argument)
{
  __int64 CurrentIrql; // rax
  bool v3; // al
  __int64 v4; // r13
  signed __int32 v5; // ecx
  unsigned int v6; // edi
  volatile signed __int32 *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r12
  int IsVerifierApplicableToImage; // r15d
  unsigned int v11; // ebp
  __int64 v12; // r8
  __int64 **v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 *i; // rcx
  __int64 j; // rdx
  __int64 v18; // r10
  unsigned int v19; // edi
  unsigned int v20; // ebp
  __int64 v21; // r15
  __int64 v22; // r14
  unsigned __int16 *v23; // r9
  unsigned int v24; // ebp
  char v25; // r14
  signed __int32 v26; // ecx
  unsigned int v27; // eax
  signed __int32 v28; // edx
  signed __int32 v29; // r8d
  int v30; // esi
  signed __int32 v31; // eax
  unsigned int v32; // edi
  int v33; // edi
  unsigned int v34; // ebp
  char v35; // r12
  signed __int32 v36; // ecx
  unsigned int v37; // eax
  signed __int32 v38; // edx
  signed __int32 v39; // r8d
  int v40; // r14d
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v43; // eax
  signed __int32 v44; // ett
  unsigned __int8 v45; // bl
  bool v47; // [rsp+70h] [rbp+8h]
  __int64 v48; // [rsp+78h] [rbp+10h] BYREF
  __int64 v49; // [rsp+80h] [rbp+18h]

  CurrentIrql = KeGetCurrentIrql();
  v49 = CurrentIrql;
  if ( (_BYTE)CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  v3 = KeDisableInterrupts();
  v4 = *(_QWORD *)(Argument + 24);
  v47 = v3;
  v5 = _InterlockedDecrement((volatile signed __int32 *)Argument);
  v6 = ~v5 & 0x80000000;
  if ( (v5 & 0x3FFFFFFF) != 0 )
  {
    v24 = 0;
    v25 = 0;
    while ( (*(_DWORD *)Argument & 0x80000000) != v6 )
    {
      if ( (++v24 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v25;
        if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v25 & 7) == 0 )
        {
          v26 = *(_DWORD *)Argument;
          v27 = *(_DWORD *)Argument & 0x80000000;
          LODWORD(v48) = *(_DWORD *)Argument;
          if ( v27 != v6 )
          {
            v28 = v26;
            v29 = v26;
            do
            {
              v30 = v26 | 0x40000000;
              v26 = _InterlockedCompareExchange((volatile signed __int32 *)Argument, v26 | 0x40000000, v28);
              if ( v26 == v29 )
              {
                LODWORD(v48) = v30;
                do
                {
                  KiHaltOnAddress(Argument, &v48, 4LL);
                  v26 = *(_DWORD *)Argument;
                }
                while ( *(_DWORD *)Argument == v30 );
              }
              LODWORD(v48) = v26;
              v28 = v26;
              v29 = v26;
            }
            while ( (v26 & 0x80000000) != v6 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v24);
        }
      }
      else
      {
        _mm_pause();
      }
    }
    v7 = (volatile signed __int32 *)(Argument + 4);
LABEL_45:
    IsVerifierApplicableToImage = 0;
    goto LABEL_46;
  }
  v7 = (volatile signed __int32 *)(Argument + 4);
  if ( (_InterlockedExchange((volatile __int32 *)Argument, *(_DWORD *)(Argument + 4) | v6) & 0x40000000) != 0 )
    KeWakeAddressAll();
  v8 = *(_QWORD *)(Argument + 16);
  v9 = *(_QWORD *)(*(_QWORD *)(Argument + 32) + 24LL);
  v48 = *(_QWORD *)(v4 + 24);
  IsVerifierApplicableToImage = MmIsVerifierApplicableToImage(v8);
  if ( IsVerifierApplicableToImage >= 0 )
  {
    v11 = 0;
    if ( *(unsigned int *)(Argument + 48) / 0x18uLL )
    {
      v12 = 0LL;
      v13 = (__int64 **)(Argument + 56);
      do
      {
        v14 = *(_QWORD *)(Argument + 40);
        v15 = *(int *)(v14 + 24 * v12);
        *(_QWORD *)(v14 + 24 * v12 + 16) = *(_QWORD *)(v9 + 8 * v15);
        *(_QWORD *)(v9 + 8 * v15) = *(_QWORD *)(v14 + 24 * v12 + 8);
        for ( i = *v13; i != (__int64 *)v13; i = (__int64 *)*i )
        {
          for ( j = 0LL; (unsigned int)j < *((_DWORD *)i + 34) >> 3; j = (unsigned int)(j + 1) )
          {
            v18 = i[16];
            if ( *(_QWORD *)(v18 + 8 * j) == *(_QWORD *)(v14 + 24 * v12 + 16) )
            {
              *(_QWORD *)(v18 + 8 * j) = *(_QWORD *)(v14 + 24 * v12 + 8);
              break;
            }
          }
        }
        v12 = ++v11;
      }
      while ( v11 < *(unsigned int *)(Argument + 48) / 0x18uLL );
    }
    v19 = 0;
    v20 = (*(_DWORD *)(v4 + 40) >> 12) + ((*(_DWORD *)(v4 + 40) & 0xFFF) != 0);
    if ( v20 )
    {
      v21 = v48;
      v22 = 64LL;
      do
      {
        v23 = *(unsigned __int16 **)(v22 + *(_QWORD *)(Argument + 32));
        if ( v23
          && (*(_QWORD *)(((((unsigned __int64)(v19 << 12) + v21) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0 )
        {
          MiApplyDynamicRelocationFixups((v19 << 12) + v21, v19 << 12, *(_QWORD *)(Argument + 32), v23, 0);
        }
        ++v19;
        v22 += 8LL;
      }
      while ( v19 < v20 );
    }
    goto LABEL_45;
  }
LABEL_46:
  v31 = _InterlockedDecrement((volatile signed __int32 *)Argument);
  v32 = ~v31 & 0x80000000;
  if ( (v31 & 0x3FFFFFFF) != 0 )
  {
    v34 = 0;
    v35 = 0;
    while ( (*(_DWORD *)Argument & 0x80000000) != v32 )
    {
      if ( (++v34 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v35;
        if ( KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v35 & 7) == 0 )
        {
          v36 = *(_DWORD *)Argument;
          v37 = *(_DWORD *)Argument & 0x80000000;
          LODWORD(v48) = *(_DWORD *)Argument;
          if ( v37 != v32 )
          {
            v38 = v36;
            v39 = v36;
            do
            {
              v40 = v36 | 0x40000000;
              v36 = _InterlockedCompareExchange((volatile signed __int32 *)Argument, v36 | 0x40000000, v38);
              if ( v36 == v39 )
              {
                LODWORD(v48) = v40;
                do
                {
                  KiHaltOnAddress(Argument, &v48, 4LL);
                  v36 = *(_DWORD *)Argument;
                }
                while ( *(_DWORD *)Argument == v40 );
              }
              LODWORD(v48) = v36;
              v38 = v36;
              v39 = v36;
            }
            while ( (v36 & 0x80000000) != v32 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v34);
        }
      }
      else
      {
        _mm_pause();
      }
    }
    _InterlockedIncrement(v7);
  }
  else
  {
    v33 = *v7 | v32;
    *v7 = 1;
    if ( (_InterlockedExchange((volatile __int32 *)Argument, v33) & 0x40000000) != 0 )
      KeWakeAddressAll();
  }
  if ( v47 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v43 = *SchedulerAssist;
      do
      {
        v44 = v43;
        v43 = _InterlockedCompareExchange(SchedulerAssist, v43 & 0xFFDFFFFF, v43);
      }
      while ( v44 != v43 );
      if ( (v43 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  v45 = v49;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v49);
  __writecr8(v45);
  return IsVerifierApplicableToImage;
}
