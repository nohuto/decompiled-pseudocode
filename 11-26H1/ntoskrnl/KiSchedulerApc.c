/*
 * XREFs of KiSchedulerApc @ 0x14049B710
 * Callers:
 *     <none>
 * Callees:
 *     ?KiAbpPerformPendingReleases@AutoBoost@@YAXPEAU_KTHREAD@@@Z @ 0x140203BD0 (-KiAbpPerformPendingReleases@AutoBoost@@YAXPEAU_KTHREAD@@@Z.c)
 *     KiInsertQueueApc @ 0x14020B150 (KiInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x14020B2C0 (KiSignalThreadForApc.c)
 *     KiHandleDeferredPreemption @ 0x1402300C0 (KiHandleDeferredPreemption.c)
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     KiReleaseThreadLockLowerIrql @ 0x14030F2A0 (KiReleaseThreadLockLowerIrql.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x14030F3D0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiRemoveQueueApc @ 0x140460F30 (KiRemoveQueueApc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     DbgkForwardException @ 0x1409CEF30 (DbgkForwardException.c)
 */

void __fastcall KiSchedulerApc(AutoBoost *this)
{
  struct _KTHREAD *v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // r14d
  KPROCESSOR_MODE v6; // si
  __int64 v7; // rax
  bool v8; // di
  int v9; // eax
  unsigned int v10; // eax
  char *v11; // rdi
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r14
  bool v14; // zf
  unsigned __int8 v15; // dl
  __int64 v16; // r8
  unsigned __int8 v17[4]; // [rsp+30h] [rbp-99h] BYREF
  _DWORD v18[7]; // [rsp+34h] [rbp-95h] BYREF
  _DWORD v19[40]; // [rsp+50h] [rbp-79h] BYREF

  memset_0(v19, 0, 0x98uLL);
  v5 = *((_DWORD *)this + 30) & 0x8000;
  v17[0] = 0;
  if ( (*((_DWORD *)this + 30) & 0x400) != 0 && !v5 )
    KiHandleDeferredPreemption(this);
  if ( !*((_DWORD *)this + 185) && !v5 )
  {
    v6 = (*((_DWORD *)this + 29) & 0x40000) != 0;
    if ( (*((_DWORD *)this + 29) & 0x40000) == 0 )
    {
      v7 = *((_QWORD *)this + 18);
      if ( v7 )
      {
        --*((_WORD *)this + 243);
        v6 = *(_BYTE *)(v7 + 368) & 1;
        v14 = (*((_WORD *)this + 243))++ == 0xFFFF;
        if ( v14 && *((AutoBoost **)this + 19) != (AutoBoost *)((char *)this + 152) )
          KiCheckForKernelApcDelivery(v3, (__int64)v2);
      }
    }
    v8 = (*((_BYTE *)this + 194) & 2) != 0;
    if ( (*((_BYTE *)this + 194) & 2) != 0 )
    {
      KiAcquireThreadLockRaiseToDpc((__int64)this, v17);
      v15 = v17[0];
      v8 = (*((_BYTE *)this + 194) & 2) != 0;
      *((_BYTE *)this + 194) &= ~2u;
      KiReleaseThreadLockLowerIrql((__int64)this, v15);
    }
    *((_DWORD *)this + 29) |= 0x80000u;
    KeWaitForSingleObject((char *)this + 736, Suspended, v6, 0, 0LL);
    *((_DWORD *)this + 29) &= ~0x80000u;
    if ( v8 )
    {
      KiAcquireThreadLockRaiseToDpc((__int64)this, v17);
      if ( *((AutoBoost **)this + 21) != (AutoBoost *)((char *)this + 168) )
        *((_BYTE *)this + 194) |= 2u;
      KiReleaseThreadLockLowerIrql((__int64)this, v17[0]);
    }
  }
  *((_DWORD *)this + 29) &= ~0x40000u;
  if ( v5 )
  {
    v9 = *((_DWORD *)this + 30);
    v18[1] = -1073741523;
    v18[2] = -1073739996;
    v18[3] = -1073739995;
    v10 = v9 & 0xC0000;
    if ( v10 )
    {
      LOBYTE(v4) = 1;
      v19[1] = 1;
      LOBYTE(v2) = 1;
      v19[0] = v18[(unsigned __int64)v10 >> 18];
      DbgkForwardException(v19, v2, v4);
      LOBYTE(v16) = 1;
      DbgkForwardException(v19, 0LL, v16);
    }
    v11 = (char *)this + 648;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v2) = 2;
      LOBYTE(v3) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v3, v2);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v18[0] = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)this + 16, 0LL) )
    {
      do
        KeYieldProcessorEx(v18);
      while ( *((_QWORD *)this + 8) );
    }
    if ( (*((_DWORD *)this + 29) & 0x4000) != 0 )
    {
      v14 = *((_BYTE *)this + 730) == 0;
      *((_QWORD *)this + 85) = KiSchedulerApcTerminate;
      *((_BYTE *)this + 729) = 1;
      if ( !v14 )
        KiRemoveQueueApc((__int64)v11);
      *((_BYTE *)this + 730) = 1;
      KiInsertQueueApc((__int64)v11);
      KiSignalThreadForApc((__int64)CurrentPrcb, (__int64)this + 648, CurrentIrql, 0);
    }
    *((_QWORD *)this + 8) = 0LL;
    KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  }
  if ( (*((_DWORD *)this + 128) & 4) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)this + 128, 0xFFFFFFFB);
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPerformPendingReleases(this, v2);
  }
}
