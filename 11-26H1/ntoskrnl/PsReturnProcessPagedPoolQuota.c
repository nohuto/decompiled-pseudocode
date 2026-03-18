/*
 * XREFs of PsReturnProcessPagedPoolQuota @ 0x1403BCF90
 * Callers:
 *     MiPerformVadSplitting @ 0x140315B44 (MiPerformVadSplitting.c)
 *     FsRtlCancelNotify @ 0x1404A3F80 (FsRtlCancelNotify.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1408E8010 (AlpcpReleasePagedPoolQuota.c)
 *     ExpFreeTablePagedPool @ 0x14092CA10 (ExpFreeTablePagedPool.c)
 *     ExpFreeHandleTable @ 0x1409588DC (ExpFreeHandleTable.c)
 *     ExpAllocateHandleTable @ 0x140971C08 (ExpAllocateHandleTable.c)
 *     MiReturnVadCharges @ 0x1409C6974 (MiReturnVadCharges.c)
 *     AlpcMessageDestroyProcedure @ 0x1409E04E0 (AlpcMessageDestroyProcedure.c)
 *     LpcExitProcess @ 0x140A41C24 (LpcExitProcess.c)
 *     AlpcSecurityDestroyProcedure @ 0x140A677E0 (AlpcSecurityDestroyProcedure.c)
 *     MiReturnVadQuotaCharges @ 0x140A79C0C (MiReturnVadQuotaCharges.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x140A856F4 (FsRtlNotifyCleanupOneEntry.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140A85820 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x140A85F54 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlNotifyFilterReportChange @ 0x140AF6420 (FsRtlNotifyFilterReportChange.c)
 * Callees:
 *     PspUnlockQuotaExpansion @ 0x1403BDC0C (PspUnlockQuotaExpansion.c)
 *     PspLockQuotaExpansion @ 0x1403BDC84 (PspLockQuotaExpansion.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PsReturnProcessPagedPoolQuota(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter3)
{
  __int64 *v4; // r15
  unsigned __int8 v5; // bp
  volatile signed __int64 *v6; // r14
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  _DISPATCHER_HEADER *volatile Queue; // rdx
  ULONG_PTR BugCheckParameter4; // rdx
  signed __int64 v11; // rcx
  signed __int64 v12; // rax
  __int64 v13; // rtt
  _DISPATCHER_HEADER *v14; // rax
  __int64 v15; // r12
  unsigned __int8 v16; // [rsp+60h] [rbp+8h] BYREF

  if ( (PEPROCESS)BugCheckParameter1 != PsInitialSystemProcess )
  {
    v4 = *(__int64 **)(BugCheckParameter1 + 760);
    v5 = stru_140FC01F0.SchedulerApcFill3[56];
    v6 = v4 + 16;
    _m_prefetchw(v4 + 16);
    v7 = v4[16];
    v8 = v4[24];
    if ( v4[26] )
    {
      if ( v8 > v7 )
      {
        Queue = PsAltSystemCallRegistrationLock.Queue;
        if ( (_DISPATCHER_HEADER *volatile)(v8 - v7) > PsAltSystemCallRegistrationLock.Queue )
        {
          if ( PsAltSystemCallRegistrationLock.Queue > (_DISPATCHER_HEADER *volatile)BugCheckParameter3 )
            Queue = (_DISPATCHER_HEADER *volatile)BugCheckParameter3;
          v13 = v4[24];
          if ( v13 == _InterlockedCompareExchange64(v4 + 24, v8 - (_QWORD)Queue, v8) )
          {
            v14 = (_DISPATCHER_HEADER *volatile)((char *)Queue
                                               + _InterlockedExchangeAdd64(v4 + 25, (unsigned __int64)Queue));
            if ( v14 > PsAltSystemCallRegistrationLock.Queue )
            {
              v15 = _InterlockedExchange64(v4 + 25, 0LL);
              if ( v15 )
              {
                v16 = 0;
                PspLockQuotaExpansion(&PsAltSystemCallRegistrationLock.SwapListEntry + 1, &v16);
                guard_dispatch_icall_no_overrides(1LL, v15);
                PspUnlockQuotaExpansion(&PsAltSystemCallRegistrationLock.SwapListEntry + 1, v16);
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
      v6 = &qword_140E27240;
      _m_prefetchw(&qword_140E27240);
      v7 = qword_140E27240;
    }
    if ( (v5 & 4) != 0 )
      _InterlockedAdd64((volatile signed __int64 *)(BugCheckParameter1 + 520), -(__int64)BugCheckParameter3);
  }
}
