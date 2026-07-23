/*
 * XREFs of MiMakeHyperRangeAccessible @ 0x1403188A0
 * Callers:
 *     MiMapPageTableCommit @ 0x140998B70 (MiMapPageTableCommit.c)
 *     MiExpandVadBitMap @ 0x140A090FC (MiExpandVadBitMap.c)
 *     MiExpandVadBitMapDown @ 0x140A093B8 (MiExpandVadBitMapDown.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiFillHyperPtes @ 0x140317670 (MiFillHyperPtes.c)
 *     MiFastReadLeafPte @ 0x140318DA0 (MiFastReadLeafPte.c)
 *     MiGetNextPageTable @ 0x14031A080 (MiGetNextPageTable.c)
 *     MiIncreaseUsedPtes @ 0x140367CC0 (MiIncreaseUsedPtes.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiChargeFullProcessCommitment @ 0x140998924 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x140A88A04 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiMakeHyperRangeAccessible(unsigned __int64 a1, unsigned __int64 a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // rbp
  __int64 *v6; // rsi
  unsigned __int64 v7; // r13
  _KPROCESS *Process; // r14
  __int64 p_Blink; // r15
  unsigned __int8 v10; // al
  __int64 *p_SchedulingGroup; // rcx
  _DWORD *v12; // rbx
  unsigned __int8 v13; // r12
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  _DWORD *MmInternal; // rcx
  unsigned __int8 CurrentIrql; // r8
  int v18; // edx
  __int64 v19; // r12
  __int128 v20; // rcx
  KIRQL v21; // r12
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rax
  __int64 v25; // rbx
  __int64 result; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  volatile signed __int64 *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r15
  int v33; // r12d
  unsigned __int64 v34; // rsi
  __int64 PteShadow; // rax
  unsigned __int64 DemandZeroPte; // rbx
  __int64 v37; // rcx
  unsigned __int64 v38; // [rsp+30h] [rbp-98h]
  unsigned __int8 v39; // [rsp+38h] [rbp-90h]
  unsigned __int64 NextPageTable; // [rsp+40h] [rbp-88h] BYREF
  int v41; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v42[20]; // [rsp+4Ch] [rbp-7Ch]
  unsigned __int64 v43; // [rsp+60h] [rbp-68h]
  __int64 v44; // [rsp+68h] [rbp-60h]
  unsigned __int64 v45; // [rsp+70h] [rbp-58h]
  _KPROCESS *v46; // [rsp+78h] [rbp-50h]
  unsigned __int64 v48; // [rsp+D8h] [rbp+10h]
  __int64 v50; // [rsp+E8h] [rbp+20h] BYREF

  v48 = a2;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = a1;
  v50 = 0LL;
  *a3 = 0LL;
  v6 = a3;
  v7 = a2;
  Process = CurrentThread->ApcState.Process;
  v46 = Process;
  *(_OWORD *)v42 = 0LL;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  if ( ((a2 ^ a1) & 0xFFFFFFFFF000LL) != 0 || (int)MiFastReadLeafPte(a1, &v50) < 0 || !v50 )
  {
    v10 = Process[2].ContextSwitches & 0xF;
    v41 = 0;
    if ( v10 > 5u )
    {
      CurrentIrql = KeGetCurrentIrql();
      v39 = CurrentIrql;
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
        CurrentIrql = v39;
      }
    }
    else
    {
      if ( (Process[2].ContextSwitches & 0xF) == 1 )
        p_SchedulingGroup = &qword_140E37980;
      else
        p_SchedulingGroup = (__int64 *)&Process[2].SchedulingGroup;
      v50 = (KeGetPcr()->Prcb.Number >> 1) & 3;
      v12 = (_DWORD *)(*p_SchedulingGroup + ((unsigned __int64)(unsigned int)v50 << 6));
      v13 = KeGetCurrentIrql();
      if ( v13 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 2;
        KiRaiseIrqlProcessIrqlFlags(v13, a2);
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(v12);
        v14 = *v12 & 0x7FFFFFFF;
        do
        {
          v15 = v14;
          v14 = _InterlockedCompareExchange(v12, v14 + 1, v14);
          if ( v15 == v14 )
            goto LABEL_14;
        }
        while ( v14 >= 0 );
        ExpWaitForSpinLockSharedAndAcquire(v12, v13, (__int64)a3);
      }
      else
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v12, v13);
      }
LABEL_14:
      MmInternal = KeGetCurrentPrcb()->MmInternal;
      if ( MmInternal )
        MmInternal[81] = v50;
      CurrentIrql = v13;
      v39 = v13;
    }
    v18 = 0;
    v44 = 0LL;
    v19 = 0LL;
    while ( 1 )
    {
      LODWORD(v50) = v18;
      v20 = 0uLL;
      *(_QWORD *)&v42[4] = 0LL;
      *(_QWORD *)&v42[12] = 0LL;
      v38 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v43 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v38 <= v43 )
        break;
LABEL_25:
      if ( v18 || !(_QWORD)v20 )
      {
        if ( *((_QWORD *)&v20 + 1) )
        {
          if ( (*(_DWORD *)(p_Blink + 184) & 0xF) == 1 )
            v29 = (volatile signed __int64 *)&unk_140E379B0;
          else
            v29 = (volatile signed __int64 *)(p_Blink + 240);
          _InterlockedAdd64(v29, *((unsigned __int64 *)&v20 + 1));
        }
        MiUnlockWorkingSetShared(p_Blink, CurrentIrql);
        v30 = *v6;
        v31 = *(_QWORD *)&v42[4];
        if ( *(_QWORD *)&v42[4] != *v6 )
        {
          *v6 = *(_QWORD *)&v42[4];
          v4 = v30 - v31;
        }
        if ( *((_QWORD *)&v20 + 1) != v19 )
          v4 += v19 - *((_QWORD *)&v20 + 1);
        if ( v4 )
          MiReturnFullProcessCommitment(Process, v4);
        return 0LL;
      }
      MiUnlockWorkingSetShared(p_Blink, CurrentIrql);
      v19 = *((_QWORD *)&v20 + 1);
      v44 = *((_QWORD *)&v20 + 1);
      v25 = *(_QWORD *)&v42[4];
      result = MiChargeFullProcessCommitment(Process, *(_QWORD *)&v42[4] + v19);
      if ( (int)result < 0 )
        return result;
      *v6 = v25;
      v41 = 1;
      MiLockWorkingSetShared(p_Blink, v27, v28);
      CurrentIrql = v39;
      v18 = 1;
    }
    v21 = v39;
    v22 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v23 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    while ( 1 )
    {
      NextPageTable = MiGetNextPageTable(v22, v23, v21, 0, (__int64)&NextPageTable);
      if ( NextPageTable )
      {
        v45 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( NextPageTable == v22 )
        {
          v32 = *(_QWORD *)&v42[4];
          v33 = v41;
          v34 = (v22 & 0xFFFFFFFFFFFFF000uLL) + 4088;
          if ( v34 > v23 )
            v34 = v23;
          do
          {
            if ( v22 > v34 )
              break;
            PteShadow = *(_QWORD *)v22;
            if ( v22 >= 0xFFFFF6FB7DBED000uLL && v22 <= 0xFFFFF6FB7DBED7F8uLL )
              PteShadow = MiReadPteShadow(v22, *(_QWORD *)v22);
            if ( !PteShadow )
            {
              if ( v33 )
              {
                DemandZeroPte = MiMakeDemandZeroPte(4);
                MiIncreaseUsedPtes(v37, ((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL, 0LL);
                *(_QWORD *)v38 = DemandZeroPte;
                v22 = v38;
              }
              ++v32;
            }
            v22 += 8LL;
            v38 = v22;
          }
          while ( (v22 & 0xFFF) != 0 );
          Process = v46;
          *(_QWORD *)&v42[4] = v32;
          p_Blink = (__int64)&v46[2].ReadyListHead.Blink;
          MiUnlockPageTableInternal((__int64)&v46[2].ReadyListHead.Blink, v45);
          v21 = v39;
          v23 = v43;
          goto LABEL_23;
        }
        MiUnlockPageTableInternal(p_Blink, ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v24 = NextPageTable - 8;
      }
      else
      {
        v24 = v23;
      }
      NextPageTable = v24;
      MiFillHyperPtes(v22, v24, v21, (__int64)&v41);
      v22 = NextPageTable + 8;
      v38 = NextPageTable + 8;
LABEL_23:
      if ( v22 > v23 )
      {
        v6 = a3;
        v4 = 0LL;
        v5 = a1;
        v19 = v44;
        v7 = v48;
        v20 = *(_OWORD *)&v42[4];
        CurrentIrql = v39;
        v18 = v50;
        goto LABEL_25;
      }
    }
  }
  return 0LL;
}
