/*
 * XREFs of PsReturnProcessPagedPoolQuota @ 0x1403C6E00
 * Callers:
 *     MiPerformVadSplitting @ 0x140317B74 (MiPerformVadSplitting.c)
 *     FsRtlCancelNotify @ 0x1403FB5E0 (FsRtlCancelNotify.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1408EE5D0 (AlpcpReleasePagedPoolQuota.c)
 *     ExpFreeTablePagedPool @ 0x140908540 (ExpFreeTablePagedPool.c)
 *     MiReturnVadCharges @ 0x140997954 (MiReturnVadCharges.c)
 *     AlpcMessageDestroyProcedure @ 0x1409B8750 (AlpcMessageDestroyProcedure.c)
 *     ExpAllocateHandleTable @ 0x1409BCEF8 (ExpAllocateHandleTable.c)
 *     ExpFreeHandleTable @ 0x1409BE364 (ExpFreeHandleTable.c)
 *     LpcExitProcess @ 0x1409FD5D4 (LpcExitProcess.c)
 *     AlpcSecurityDestroyProcedure @ 0x140A747B0 (AlpcSecurityDestroyProcedure.c)
 *     MiReturnVadQuotaCharges @ 0x140A81B4C (MiReturnVadQuotaCharges.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x140A8A2F4 (FsRtlNotifyCleanupOneEntry.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140A8A420 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x140A8AB54 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlNotifyFilterReportChange @ 0x140AF8AC0 (FsRtlNotifyFilterReportChange.c)
 * Callees:
 *     PspUnlockQuotaExpansion @ 0x1403C7A7C (PspUnlockQuotaExpansion.c)
 *     PspLockQuotaExpansion @ 0x1403C7AF4 (PspLockQuotaExpansion.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PsReturnProcessPagedPoolQuota(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter3)
{
  __int64 *v4; // r15
  unsigned __int8 v5; // bp
  volatile signed __int64 *v6; // r14
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  struct _LIST_ENTRY *Flink; // rdx
  ULONG_PTR BugCheckParameter4; // rdx
  signed __int64 v11; // rcx
  signed __int64 v12; // rax
  __int64 v13; // rtt
  struct _LIST_ENTRY *v14; // rax
  __int64 v15; // r12
  unsigned __int8 v16; // [rsp+60h] [rbp+8h] BYREF

  if ( (PEPROCESS)BugCheckParameter1 != PsInitialSystemProcess )
  {
    v4 = *(__int64 **)(BugCheckParameter1 + 760);
    v5 = stru_140FC11F0.SchedulerApcFill3[48];
    v6 = v4 + 16;
    _m_prefetchw(v4 + 16);
    v7 = v4[16];
    v8 = v4[24];
    if ( v4[26] )
    {
      if ( v8 > v7 )
      {
        Flink = PsAltSystemCallRegistrationLock.WaitBlock[1].WaitListEntry.Flink;
        if ( (struct _LIST_ENTRY *)(v8 - v7) > PsAltSystemCallRegistrationLock.WaitBlock[1].WaitListEntry.Flink )
        {
          if ( PsAltSystemCallRegistrationLock.WaitBlock[1].WaitListEntry.Flink > (struct _LIST_ENTRY *)BugCheckParameter3 )
            Flink = (struct _LIST_ENTRY *)BugCheckParameter3;
          v13 = v4[24];
          if ( v13 == _InterlockedCompareExchange64(v4 + 24, v8 - (_QWORD)Flink, v8) )
          {
            v14 = (struct _LIST_ENTRY *)((char *)Flink + _InterlockedExchangeAdd64(v4 + 25, (unsigned __int64)Flink));
            if ( v14 > PsAltSystemCallRegistrationLock.WaitBlock[1].WaitListEntry.Flink )
            {
              v15 = _InterlockedExchange64(v4 + 25, 0LL);
              if ( v15 )
              {
                v16 = 0;
                PspLockQuotaExpansion(&PsAltSystemCallRegistrationLock.WaitBlockFill11[40], &v16);
                guard_dispatch_icall_no_overrides(1LL, v15);
                PspUnlockQuotaExpansion(&PsAltSystemCallRegistrationLock.WaitBlockFill11[40], v16);
              }
            }
          }
        }
      }
    }
    BugCheckParameter4 = BugCheckParameter3;
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = 0LL;
        if ( BugCheckParameter4 < v7 )
          v11 = v7 - BugCheckParameter4;
        v12 = _InterlockedCompareExchange64(v6, v11, v7);
        if ( v7 == v12 )
          break;
        v7 = v12;
      }
      if ( BugCheckParameter4 < v7 )
        v7 = BugCheckParameter4;
      BugCheckParameter4 -= v7;
      if ( !BugCheckParameter4 )
        break;
      if ( v4 == &PspSystemQuotaBlock )
        KeBugCheckEx(0x21u, BugCheckParameter1, 1uLL, BugCheckParameter3, BugCheckParameter4);
      v4 = &PspSystemQuotaBlock;
      v6 = &qword_140E27380;
      _m_prefetchw(&qword_140E27380);
      v7 = qword_140E27380;
    }
    if ( (v5 & 4) != 0 )
      _InterlockedAdd64((volatile signed __int64 *)(BugCheckParameter1 + 520), -(__int64)BugCheckParameter3);
  }
}
