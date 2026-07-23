/*
 * XREFs of KiRetireDpcList @ 0x140337730
 * Callers:
 *     KiExecuteSmtIsolationThread @ 0x1405F8FD0 (KiExecuteSmtIsolationThread.c)
 *     KiExecuteDpcDelegate @ 0x1405FD980 (KiExecuteDpcDelegate.c)
 *     KiIdleLoop @ 0x14072D980 (KiIdleLoop.c)
 *     KxSwapStacksAndRetireDpcList @ 0x140731030 (KxSwapStacksAndRetireDpcList.c)
 * Callees:
 *     KiRcuCheckQuiescent @ 0x1402237A0 (KiRcuCheckQuiescent.c)
 *     KiEndThreadCycleAccumulation @ 0x140227B30 (KiEndThreadCycleAccumulation.c)
 *     KiExecuteAllDpcs @ 0x14032FD30 (KiExecuteAllDpcs.c)
 *     KiStartThreadCycleAccumulation @ 0x140336EE0 (KiStartThreadCycleAccumulation.c)
 *     KiCheckRuntimeHistoryHashTableCleanup @ 0x140337B0C (KiCheckRuntimeHistoryHashTableCleanup.c)
 *     KiEndPartialDpcProcessing @ 0x140337EB4 (KiEndPartialDpcProcessing.c)
 *     KiTimer2Expiration @ 0x140338AC0 (KiTimer2Expiration.c)
 *     KiTimerExpiration @ 0x1403B5048 (KiTimerExpiration.c)
 *     KiNormalPriorityReadyScan @ 0x1403C90A4 (KiNormalPriorityReadyScan.c)
 *     KeSignalGate @ 0x1403CC9D0 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

signed __int16 __fastcall KiRetireDpcList(struct _KPRCB *a1)
{
  unsigned __int64 CurrentThread; // r15
  __int64 v3; // r9
  __int16 v4; // di
  __int64 v5; // r9
  signed __int16 result; // ax
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // ebp
  unsigned __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  bool v13; // si
  bool v14; // r12
  struct _KPRCB *v15; // rcx
  unsigned __int32 *v16; // r8
  unsigned __int32 *v17; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned int v20; // eax
  unsigned __int32 v21; // eax
  __int64 v22; // rdx
  unsigned __int32 v23; // ett
  struct _KPRCB *v24; // rcx
  struct _KPRCB *v25; // rcx
  unsigned __int32 *v26; // r8
  unsigned __int32 v27; // eax
  __int64 v28; // rdx
  unsigned __int32 v29; // ett
  unsigned __int32 v30; // eax
  __int64 v31; // rdx
  unsigned __int32 v32; // ett
  unsigned __int32 v33; // eax
  __int64 v34; // rdx
  unsigned __int32 v35; // ett
  struct _KPRCB *v36; // rcx
  unsigned __int32 *v37; // r8
  unsigned __int32 v38; // eax
  __int64 v39; // rdx
  unsigned __int32 v40; // ett
  int v41; // [rsp+30h] [rbp-1C8h] BYREF
  _BYTE v42[4]; // [rsp+34h] [rbp-1C4h] BYREF
  __int64 v43; // [rsp+38h] [rbp-1C0h]

  memset_0(v42, 0, 0x18CuLL);
  CurrentThread = (unsigned __int64)a1->CurrentThread;
  v41 = 0;
  while ( 1 )
  {
    KiEndThreadCycleAccumulation((__int64)a1, CurrentThread, 0LL, 0);
    KiRcuCheckQuiescent((__int64)a1);
    KiCheckRuntimeHistoryHashTableCleanup(a1);
    v4 = a1->DpcRequestSlot[0];
    a1->DpcRequestSlot[0] = 1;
    if ( (v4 & 8) == 0 )
      goto LABEL_3;
    v4 &= ~8u;
    if ( KiSerializeTimerExpiration )
    {
      if ( !a1->ClockOwner )
        goto LABEL_24;
      v7 = KiProcessorBlock[0];
    }
    else
    {
      v7 = (__int64)a1;
    }
    v8 = v7 + 16640;
    if ( !v8 )
    {
LABEL_24:
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v27 = *SchedulerAssist;
        do
        {
          v28 = v27;
          LODWORD(v28) = v27 & 0xFFDFFFFF;
          v29 = v27;
          v27 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v27 & 0xFFDFFFFF, v27);
        }
        while ( v29 != v27 );
        if ( (v27 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, v28, SchedulerAssist, v3);
      }
      _enable();
      v43 = MEMORY[0xFFFFF78000000014];
      goto LABEL_23;
    }
    v9 = *(_DWORD *)(v8 + 16912);
    v10 = MEMORY[0xFFFFF78000000008];
    v3 = KiLastNonHrTimerExpiration;
    v11 = KiLastPseudoHrTimerExpiration;
    v12 = *(_QWORD *)(v8 + 16896);
    v13 = KiLastNonHrTimerExpiration != *(_QWORD *)(v8 + 16904);
    v14 = KiLastPseudoHrTimerExpiration != v12;
    if ( KiGlobalTimerResolutionRequests )
      v13 = KiLastPseudoHrTimerExpiration != v12;
    if ( KiLastPseudoHrTimerExpiration != v12 )
    {
      *(_QWORD *)(v8 + 16896) = KiLastPseudoHrTimerExpiration;
      *(_DWORD *)(v8 + 16912) = v10 >> 18;
    }
    if ( v13 )
    {
      v20 = *(_DWORD *)(v8 + 16916);
      *(_QWORD *)(v8 + 16904) = v3;
      if ( v9 >= v20 )
        v9 = v20;
      *(_DWORD *)(v8 + 16916) = v10 >> 18;
    }
    if ( v11 != v12 || v13 )
    {
      v15 = KeGetCurrentPrcb();
      v16 = (unsigned __int32 *)v15->SchedulerAssist;
      if ( v16 )
      {
        _m_prefetchw(v16);
        v21 = *v16;
        do
        {
          v22 = v21;
          LODWORD(v22) = v21 & 0xFFDFFFFF;
          v23 = v21;
          v21 = _InterlockedCompareExchange((volatile signed __int32 *)v16, v21 & 0xFFDFFFFF, v21);
        }
        while ( v23 != v21 );
        if ( (v21 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v15, v22, v16, v3);
      }
      _enable();
      LOBYTE(v3) = v13;
      v43 = MEMORY[0xFFFFF78000000014];
      KiTimerExpiration((_DWORD)a1, v9, v10, v3, (__int64)&v41);
    }
    else
    {
      v24 = KeGetCurrentPrcb();
      v17 = (unsigned __int32 *)v24->SchedulerAssist;
      if ( v17 )
      {
        _m_prefetchw(v17);
        v30 = *v17;
        do
        {
          v31 = v30;
          LODWORD(v31) = v30 & 0xFFDFFFFF;
          v32 = v30;
          v30 = _InterlockedCompareExchange((volatile signed __int32 *)v17, v30 & 0xFFDFFFFF, v30);
        }
        while ( v32 != v30 );
        if ( (v30 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v24, v31, v17, v3);
      }
      _enable();
      v43 = MEMORY[0xFFFFF78000000014];
    }
    if ( a1->ClockOwner )
    {
      LOBYTE(v3) = v13;
      LOBYTE(v17) = v14;
      KiTimer2Expiration((_DWORD)a1, v10, (_DWORD)v17, v3, (__int64)&v41);
    }
LABEL_23:
    _disable();
LABEL_3:
    if ( (v4 & 0x40) != 0 )
    {
      v25 = KeGetCurrentPrcb();
      v4 &= ~0x40u;
      v26 = (unsigned __int32 *)v25->SchedulerAssist;
      if ( v26 )
      {
        _m_prefetchw(v26);
        v33 = *v26;
        do
        {
          v34 = v33;
          LODWORD(v34) = v33 & 0xFFDFFFFF;
          v35 = v33;
          v33 = _InterlockedCompareExchange((volatile signed __int32 *)v26, v33 & 0xFFDFFFFF, v33);
        }
        while ( v35 != v33 );
        if ( (v33 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v25, v34, v26, v3);
      }
      _enable();
      KiNormalPriorityReadyScan(a1);
      _disable();
    }
    if ( !KiExecuteAllDpcs(a1, CurrentThread, &v41, 0LL) )
      break;
    if ( (v4 & 4) != 0 )
    {
      v36 = KeGetCurrentPrcb();
      v37 = (unsigned __int32 *)v36->SchedulerAssist;
      if ( v37 )
      {
        _m_prefetchw(v37);
        v38 = *v37;
        do
        {
          v39 = v38;
          LODWORD(v39) = v38 & 0xFFDFFFFF;
          v40 = v38;
          v38 = _InterlockedCompareExchange((volatile signed __int32 *)v37, v38 & 0xFFDFFFFF, v38);
        }
        while ( v40 != v38 );
        if ( (v38 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v36, v39, v37, v5);
      }
      _enable();
      KeSignalGate(&a1->DpcGate, 0LL);
      _disable();
    }
    KiStartThreadCycleAccumulation((__int64)a1, CurrentThread, 1);
    result = _InterlockedCompareExchange16((volatile signed __int16 *)&a1->14524, 0, 1);
    if ( result == 1 )
    {
      a1->DpcData[0].ActiveDpc = 0LL;
      return result;
    }
  }
  KiStartThreadCycleAccumulation((__int64)a1, CurrentThread, 1);
  return KiEndPartialDpcProcessing(&a1->14524, (unsigned __int16)v4 | 0x80u, a1->DpcData);
}
