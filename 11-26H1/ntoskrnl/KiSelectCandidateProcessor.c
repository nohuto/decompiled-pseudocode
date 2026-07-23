/*
 * XREFs of KiSelectCandidateProcessor @ 0x140236870
 * Callers:
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiChooseTargetProcessor @ 0x1402370C0 (KiChooseTargetProcessor.c)
 * Callees:
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x140230F44 (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall KiSelectCandidateProcessor(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned __int64 *a5)
{
  __int64 v5; // rax
  __int64 v6; // r15
  _QWORD *v8; // r13
  _WORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbx
  _DWORD *v12; // rcx
  signed __int32 v13; // eax
  __int64 v14; // rdx
  signed __int32 v15; // ett
  __int64 v16; // rax
  __int64 v17; // r8
  char v18; // cl
  unsigned __int64 v19; // rax
  int v20; // edx
  unsigned __int8 *v21; // rbx
  int v22; // edx
  unsigned __int64 *v23; // r12
  unsigned int v24; // ebx
  _BYTE *v25; // rax
  unsigned int v26; // ecx
  __int64 *v27; // r14
  __int64 v28; // rbp
  __int64 v29; // rdi
  unsigned int v30; // esi
  volatile signed __int32 *v31; // rcx
  __int64 i; // rcx
  __int64 v34; // rdx
  __int64 v35; // r9
  void *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v37; // [rsp+60h] [rbp+8h] BYREF
  int v38; // [rsp+78h] [rbp+20h]

  v38 = a4;
  v5 = *(unsigned __int8 *)(a1 + 208);
  v6 = a1;
  v8 = *(_QWORD **)(a1 + 192);
  v9 = *(_WORD **)(a2 + 576);
  if ( (unsigned __int16)v5 >= *v9 )
    v10 = 0LL;
  else
    v10 = *(_QWORD *)&v9[4 * v5 + 4];
  v11 = v10 & v8[16];
  v12 = v8 + 15;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v12);
    v13 = *v12 & 0x7FFFFFFF;
    while ( 1 )
    {
      v14 = (unsigned int)(v13 + 1);
      v15 = v13;
      v13 = _InterlockedCompareExchange(v12, v14, v13);
      if ( v15 == v13 )
        break;
      if ( v13 < 0 )
      {
        LOBYTE(v14) = -1;
        ExpWaitForSpinLockSharedAndAcquire(v12, v14);
        goto LABEL_46;
      }
    }
  }
  else
  {
    LOBYTE(a2) = -1;
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v12, a2);
LABEL_46:
    a4 = v38;
  }
  if ( KiForceParkingConfiguration )
    v11 &= ~v8[13];
  v16 = v11 & v8[10];
  if ( !v16 )
    v16 = v11;
  v17 = a3 & v16;
  if ( (a3 & v16) != 0 || (v17 = v16) != 0 )
  {
    v18 = *(_BYTE *)(v6 + 209);
    _BitScanForward64(&v19, __ROR8__(v17, v18));
    v20 = *(unsigned __int8 *)(v6 + 208) << 6;
    LODWORD(v37) = 0;
    v6 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
                          + v20
                          + (((_BYTE)v19 + v18) & 0x3Fu))];
  }
  v21 = *(unsigned __int8 **)(v6 + 56);
  v22 = a4;
  v23 = a5;
  v37 = v6;
  v24 = *v21;
  if ( a4 < (int)(v24 >> 7) )
    v22 = v24 >> 7;
  *a5 = v22 ^ (v6 ^ v22) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( !v22 )
  {
    v27 = &v37;
    v26 = 1;
    goto LABEL_17;
  }
  if ( v22 == 1 )
  {
    v25 = *(_BYTE **)(v6 + 36504);
    v26 = (unsigned __int8)*v25;
    v27 = (__int64 *)(v25 + 8);
    if ( *v25 )
    {
LABEL_17:
      v28 = v26;
      while ( 1 )
      {
        v29 = *v27;
        v30 = 0;
LABEL_19:
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 48), 0LL) )
          break;
        ++v27;
        if ( !--v28 )
        {
          a4 = v38;
          goto LABEL_22;
        }
      }
      while ( 1 )
      {
        if ( (++v30 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
        {
          if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
          {
LABEL_39:
            HvlNotifyLongSpinWait(v30);
            goto LABEL_28;
          }
          for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
          {
            v34 = KiProcessorBlock[i];
            if ( (*(_BYTE *)(v34 + 35) & 1) != 0 )
            {
              v35 = *(_QWORD *)(v34 + 36600);
              if ( !v35 || !*(_BYTE *)(v35 + 65) || !*(_BYTE *)(v35 + 64) )
                goto LABEL_39;
            }
          }
        }
        _mm_pause();
LABEL_28:
        if ( !*(_QWORD *)(v29 + 48) )
          goto LABEL_19;
      }
    }
  }
LABEL_22:
  if ( ((**(_BYTE **)(v6 + 56) ^ v24) & 0x80u) != 0 )
    KiAcquirePrcbLocksForPreemptionAttemptSlowPath(v6, a4, v23);
  v31 = (volatile signed __int32 *)(v8 + 15);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd(v31, 0xBFFFFFFF);
    _InterlockedDecrement(v31);
    return v6;
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v31, retaddr);
    return v6;
  }
}
