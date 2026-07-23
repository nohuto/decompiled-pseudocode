/*
 * XREFs of PsReturnProcessNonPagedPoolQuota @ 0x1403C6FA0
 * Callers:
 *     MiFreeVadRange @ 0x1403C67C8 (MiFreeVadRange.c)
 *     MiSetCloneParentForkInProgress @ 0x140511B1C (MiSetCloneParentForkInProgress.c)
 *     ExEnableHandleTracing @ 0x14077C508 (ExEnableHandleTracing.c)
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 *     MiDeleteAweBitMap @ 0x14087F1E0 (MiDeleteAweBitMap.c)
 *     MiCreatePlaceholderStorage @ 0x14099782C (MiCreatePlaceholderStorage.c)
 *     MiReturnVadCharges @ 0x140997954 (MiReturnVadCharges.c)
 *     MiDeleteVadEventBlock @ 0x140A01DE0 (MiDeleteVadEventBlock.c)
 *     MiReturnCloneResources @ 0x140A07D98 (MiReturnCloneResources.c)
 *     MiReturnVadQuotaCharges @ 0x140A81B4C (MiReturnVadQuotaCharges.c)
 *     ExDereferenceHandleDebugInfo @ 0x140A9431C (ExDereferenceHandleDebugInfo.c)
 *     MiDeleteVadEventPlaceholder @ 0x140B01CC0 (MiDeleteVadEventPlaceholder.c)
 *     MiFreeCloneDescriptor @ 0x140B46704 (MiFreeCloneDescriptor.c)
 *     MiBuildNewCloneDescriptor @ 0x140B58184 (MiBuildNewCloneDescriptor.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 *     ViIrpAllocateLockedPacket @ 0x140C327C0 (ViIrpAllocateLockedPacket.c)
 *     IovFreeIrpPrivate @ 0x140C4B9D0 (IovFreeIrpPrivate.c)
 * Callees:
 *     PspUnlockQuotaExpansion @ 0x1403C7A7C (PspUnlockQuotaExpansion.c)
 *     PspLockQuotaExpansion @ 0x1403C7AF4 (PspLockQuotaExpansion.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PsReturnProcessNonPagedPoolQuota(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter3)
{
  unsigned __int64 *v4; // r14
  unsigned __int8 v5; // bp
  volatile signed __int64 *v6; // r15
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  ULONG_PTR BugCheckParameter4; // rdx
  signed __int64 v11; // rcx
  signed __int64 v12; // rax
  unsigned __int64 v13; // rtt
  unsigned __int64 v14; // rax
  __int64 v15; // r12
  unsigned __int8 v16; // [rsp+60h] [rbp+8h] BYREF

  if ( (PEPROCESS)BugCheckParameter1 != PsInitialSystemProcess )
  {
    v4 = *(unsigned __int64 **)(BugCheckParameter1 + 760);
    v5 = stru_140FC11F0.SchedulerApcFill3[40];
    v6 = (volatile signed __int64 *)v4;
    _m_prefetchw(v4);
    v7 = *v4;
    v8 = v4[8];
    if ( v4[10] )
    {
      if ( v8 > v7 )
      {
        v9 = *(_QWORD *)&PsAltSystemCallRegistrationLock.Timer.Processor;
        if ( v8 - v7 > *(_QWORD *)&PsAltSystemCallRegistrationLock.Timer.Processor )
        {
          if ( *(_QWORD *)&PsAltSystemCallRegistrationLock.Timer.Processor > BugCheckParameter3 )
            v9 = BugCheckParameter3;
          v13 = v4[8];
          if ( v13 == _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 8, v8 - v9, v8) )
          {
            v14 = v9 + _InterlockedExchangeAdd64((volatile signed __int64 *)v4 + 9, v9);
            if ( v14 > *(_QWORD *)&PsAltSystemCallRegistrationLock.Timer.Processor )
            {
              v15 = _InterlockedExchange64((volatile __int64 *)v4 + 9, 0LL);
              if ( v15 )
              {
                v16 = 0;
                PspLockQuotaExpansion(&PsAltSystemCallRegistrationLock.Timer.Dpc, &v16);
                guard_dispatch_icall_no_overrides(0LL, v15);
                PspUnlockQuotaExpansion(&PsAltSystemCallRegistrationLock.Timer.Dpc, v16);
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
      if ( v4 == (unsigned __int64 *)&PspSystemQuotaBlock )
        KeBugCheckEx(0x21u, BugCheckParameter1, 0LL, BugCheckParameter3, BugCheckParameter4);
      v4 = (unsigned __int64 *)&PspSystemQuotaBlock;
      v6 = &PspSystemQuotaBlock;
      _m_prefetchw(&PspSystemQuotaBlock);
      v7 = PspSystemQuotaBlock;
    }
    if ( (v5 & 4) != 0 )
      _InterlockedAdd64((volatile signed __int64 *)(BugCheckParameter1 + 512), -(__int64)BugCheckParameter3);
  }
}
