/*
 * XREFs of PsReturnProcessNonPagedPoolQuota @ 0x1403BD130
 * Callers:
 *     MiFreeVadRange @ 0x1403BC958 (MiFreeVadRange.c)
 *     MiSetCloneParentForkInProgress @ 0x1405180AC (MiSetCloneParentForkInProgress.c)
 *     ExEnableHandleTracing @ 0x1407795D8 (ExEnableHandleTracing.c)
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 *     MiDeleteAweBitMap @ 0x140878E00 (MiDeleteAweBitMap.c)
 *     MiDeleteVadEventBlock @ 0x14095C520 (MiDeleteVadEventBlock.c)
 *     MiReturnCloneResources @ 0x1409620A4 (MiReturnCloneResources.c)
 *     MiCreatePlaceholderStorage @ 0x1409C684C (MiCreatePlaceholderStorage.c)
 *     MiReturnVadCharges @ 0x1409C6974 (MiReturnVadCharges.c)
 *     MiReturnVadQuotaCharges @ 0x140A79C0C (MiReturnVadQuotaCharges.c)
 *     ExDereferenceHandleDebugInfo @ 0x140A8F64C (ExDereferenceHandleDebugInfo.c)
 *     MiDeleteVadEventPlaceholder @ 0x140B00030 (MiDeleteVadEventPlaceholder.c)
 *     MiFreeCloneDescriptor @ 0x140B44944 (MiFreeCloneDescriptor.c)
 *     MiBuildNewCloneDescriptor @ 0x140B558E4 (MiBuildNewCloneDescriptor.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 *     ViIrpAllocateLockedPacket @ 0x140C2C7B0 (ViIrpAllocateLockedPacket.c)
 *     IovFreeIrpPrivate @ 0x140C459C0 (IovFreeIrpPrivate.c)
 * Callees:
 *     PspUnlockQuotaExpansion @ 0x1403BDC0C (PspUnlockQuotaExpansion.c)
 *     PspLockQuotaExpansion @ 0x1403BDC84 (PspLockQuotaExpansion.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PsReturnProcessNonPagedPoolQuota(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter3)
{
  unsigned __int64 *v4; // r14
  unsigned __int8 v5; // bp
  volatile signed __int64 *v6; // r15
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  struct _LIST_ENTRY *Blink; // rdx
  ULONG_PTR BugCheckParameter4; // rdx
  signed __int64 v11; // rcx
  signed __int64 v12; // rax
  unsigned __int64 v13; // rtt
  struct _LIST_ENTRY *v14; // rax
  __int64 v15; // r12
  unsigned __int8 v16; // [rsp+60h] [rbp+8h] BYREF

  if ( (PEPROCESS)BugCheckParameter1 != PsInitialSystemProcess )
  {
    v4 = *(unsigned __int64 **)(BugCheckParameter1 + 760);
    v5 = stru_140FC01F0.SchedulerApcFill3[48];
    v6 = (volatile signed __int64 *)v4;
    _m_prefetchw(v4);
    v7 = *v4;
    v8 = v4[8];
    if ( v4[10] )
    {
      if ( v8 > v7 )
      {
        Blink = PsAltSystemCallRegistrationLock.ApcState.ApcListHead[1].Blink;
        if ( (struct _LIST_ENTRY *)(v8 - v7) > PsAltSystemCallRegistrationLock.ApcState.ApcListHead[1].Blink )
        {
          if ( PsAltSystemCallRegistrationLock.ApcState.ApcListHead[1].Blink > (struct _LIST_ENTRY *)BugCheckParameter3 )
            Blink = (struct _LIST_ENTRY *)BugCheckParameter3;
          v13 = v4[8];
          if ( v13 == _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 8, v8 - (_QWORD)Blink, v8) )
          {
            v14 = (struct _LIST_ENTRY *)((char *)Blink
                                       + _InterlockedExchangeAdd64(
                                           (volatile signed __int64 *)v4 + 9,
                                           (unsigned __int64)Blink));
            if ( v14 > PsAltSystemCallRegistrationLock.ApcState.ApcListHead[1].Blink )
            {
              v15 = _InterlockedExchange64((volatile __int64 *)v4 + 9, 0LL);
              if ( v15 )
              {
                v16 = 0;
                PspLockQuotaExpansion(&PsAltSystemCallRegistrationLock.ApcStateFill[16], &v16);
                guard_dispatch_icall_no_overrides(0LL, v15);
                PspUnlockQuotaExpansion(&PsAltSystemCallRegistrationLock.ApcStateFill[16], v16);
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
