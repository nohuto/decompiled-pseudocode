/*
 * XREFs of ExpShareAddressSpaceWithDevice @ 0x1406D5A4C
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x140847050 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402FF300 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExpAllocateAsid @ 0x1406D546C (ExpAllocateAsid.c)
 *     ExpConvertSvmDevice @ 0x1406D5640 (ExpConvertSvmDevice.c)
 *     ExpPrepareNewSvmDevice @ 0x1406D57A8 (ExpPrepareNewSvmDevice.c)
 *     ExpSvmDereferenceDevice @ 0x1406D6100 (ExpSvmDereferenceDevice.c)
 *     MmEnableProcessSvm @ 0x1406EA14C (MmEnableProcessSvm.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExpAssignPasid @ 0x1408470D8 (ExpAssignPasid.c)
 *     IoQueryInterface @ 0x1409DC050 (IoQueryInterface.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpShareAddressSpaceWithDevice(__int64 a1, __int64 a2, unsigned int *a3)
{
  _QWORD *v5; // r15
  struct _KTHREAD *CurrentThread; // r14
  __int64 Process; // r13
  int Interface; // esi
  struct _KLOCK_ENTRIES *v10; // r9
  AutoBoost *v11; // rax
  volatile unsigned __int8 *v12; // rdx
  __int64 v13; // rcx
  struct _KLOCK_ENTRIES *v14; // r9
  AutoBoost *v15; // rdi
  int Asid; // edi
  __int64 v17; // rdx
  unsigned int v18; // edi
  unsigned __int8 CurrentIrql; // di
  AutoBoost *v20; // rax
  volatile unsigned __int8 *v21; // rdx
  __int64 v22; // r9
  signed __int8 v23; // cf
  AutoBoost *v24; // rdi
  struct _KTHREAD *Blink; // rax
  void *SListFaultAddress; // rcx
  struct _KTHREAD *v27; // r14
  _QWORD *p_Lock; // rdi
  char v29; // r14
  __int64 Pool2; // rax
  char v31; // r12
  unsigned __int8 v32; // r14
  _QWORD *v33; // rcx
  __int64 v34; // r8
  _QWORD *v35; // rdx
  unsigned __int8 v36; // di
  __int64 v37; // rcx
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // [rsp+48h] [rbp-69h]
  PVOID P; // [rsp+50h] [rbp-61h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-59h] BYREF
  struct _KTHREAD *v43; // [rsp+70h] [rbp-41h]
  _BYTE v44[8]; // [rsp+78h] [rbp-39h] BYREF
  __int64 v45; // [rsp+80h] [rbp-31h]
  unsigned int v48; // [rsp+130h] [rbp+7Fh]

  memset_0(v44, 0, 0x50uLL);
  *a3 = -1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  P = 0LL;
  v5 = 0LL;
  if ( !ExSaPageGroupDescriptorArrayLock.Timer.DueTime.QuadPart )
    return 3221225659LL;
  if ( !a1 )
    return 3221225711LL;
  CurrentThread = KeGetCurrentThread();
  v43 = CurrentThread;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( (*(_DWORD *)(Process + 1532) & 0x1000) != 0 )
    return 3221225659LL;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(Process + 488)) )
    return 3221225738LL;
  Interface = IoQueryInterface(a1, 0LL, &GUID_IOMMU_BUS_INTERFACE, 80LL, 1, a1, v44);
  if ( Interface >= 0 )
  {
    --CurrentThread->KernelApcDisable;
    v11 = (AutoBoost *)KeAbPreAcquire(Process + 1552, 0LL, 0LL, v10);
    v15 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(Process + 1552), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Process + 1552), v11, Process + 1552);
    if ( v15 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v12) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v15 + 33), v12, 1);
      }
      else
      {
        *((_BYTE *)v15 + 10) = 1;
      }
    }
    Asid = *(_DWORD *)(Process + 1536);
    if ( !Asid )
    {
      Asid = ExpAllocateAsid(v13, Process);
      if ( !Asid )
      {
        Interface = -1073741709;
LABEL_94:
        guard_dispatch_icall_no_overrides(v45, v17);
        CurrentThread = v43;
        goto LABEL_95;
      }
      if ( !(unsigned int)ExpAssignPasid((PVOID)Process) )
        Asid = *(_DWORD *)(Process + 1536);
    }
    v18 = Asid - 1;
    v48 = v18;
    v40 = *(_QWORD *)(Process + 1544);
    if ( !v40 )
    {
      Interface = guard_dispatch_icall_no_overrides(v18, 0LL);
      if ( Interface < 0 )
        goto LABEL_94;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 15 )
        __writecr8(0xFuLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v17) = 15;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v17);
      }
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(Process + 1560), &LockHandle);
      if ( *(_QWORD *)(Process + 1544) )
        v40 = *(_QWORD *)(Process + 1544);
      else
        *(_QWORD *)(Process + 1544) = 0LL;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    v20 = (AutoBoost *)KeAbPreAcquire((__int64)&ExSaPageGroupDescriptorArrayLock.152, 0LL, 0LL, v14);
    v23 = _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock.152, 0LL);
    v24 = v20;
    if ( v23 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&ExSaPageGroupDescriptorArrayLock.152,
        v20,
        (__int64)&ExSaPageGroupDescriptorArrayLock.152);
    if ( v24 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v21) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v24 + 33), v21, 1);
      }
      else
      {
        *((_BYTE *)v24 + 10) = 1;
      }
    }
    Blink = (struct _KTHREAD *)ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[0].Blink;
    if ( (unsigned __int8 *)ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[0].Blink == &ExSaPageGroupDescriptorArrayLock.ApcStateFill[8] )
      goto LABEL_42;
    do
    {
      SListFaultAddress = Blink->SListFaultAddress;
      v27 = Blink;
      P = Blink;
      p_Lock = &Blink->Header.Lock;
      if ( SListFaultAddress == (void *)a1 )
        goto LABEL_46;
      Blink = *(struct _KTHREAD **)&Blink->Header.Lock;
    }
    while ( Blink != (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.ApcStateFill[8] );
    if ( SListFaultAddress != (void *)a1 )
    {
      P = 0LL;
LABEL_42:
      Interface = ExpPrepareNewSvmDevice(a1, v40, (__int64)v44, v22, (struct _LIST_ENTRY **)&P);
      if ( Interface < 0 )
      {
        if ( (_InterlockedExchangeAdd64(
                (volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.152,
                0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.152);
        KeAbPostRelease((unsigned __int64)&ExSaPageGroupDescriptorArrayLock.152);
        p_Lock = P;
LABEL_52:
        v29 = 0;
LABEL_81:
        if ( p_Lock && v29 )
          ExpSvmDereferenceDevice(p_Lock);
        if ( !v5 )
          goto LABEL_94;
        v36 = KeGetCurrentIrql();
        if ( v36 != 15 )
          __writecr8(0xFuLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v17) = 15;
          KiRaiseIrqlProcessIrqlFlags(v36, v17);
        }
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(Process + 1560), &LockHandle);
        v37 = *v5;
        if ( *(_QWORD **)(*v5 + 8LL) == v5 )
        {
          v38 = (_QWORD *)v5[1];
          if ( (_QWORD *)*v38 == v5 )
          {
            *v38 = v37;
            *(_QWORD *)(v37 + 8) = v38;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v36);
            __writecr8(v36);
            ExFreePoolWithTag(v5, 0);
            goto LABEL_94;
          }
        }
LABEL_98:
        __fastfail(3u);
      }
      p_Lock = P;
LABEL_58:
      v29 = 1;
      if ( (_InterlockedExchangeAdd64(
              (volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.152,
              0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.152);
      KeAbPostRelease((unsigned __int64)&ExSaPageGroupDescriptorArrayLock.152);
      Pool2 = ExAllocatePool2(0x40uLL);
      v5 = (_QWORD *)Pool2;
      if ( !Pool2 )
      {
        Interface = -1073741670;
        goto LABEL_81;
      }
      *(_QWORD *)(Pool2 + 16) = p_Lock;
      v31 = 0;
      v32 = KeGetCurrentIrql();
      if ( v32 != 15 )
        __writecr8(0xFuLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v17) = 15;
        KiRaiseIrqlProcessIrqlFlags(v32, v17);
      }
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(Process + 1560), &LockHandle);
      v33 = (_QWORD *)(Process + 1568);
      v34 = *(_QWORD *)(Process + 1568);
      v35 = (_QWORD *)v34;
      if ( v34 == Process + 1568 )
      {
LABEL_69:
        if ( *(_QWORD **)(v34 + 8) != v33 )
          goto LABEL_98;
        *v5 = v34;
        v5[1] = v33;
        *(_QWORD *)(v34 + 8) = v5;
        *v33 = v5;
      }
      else
      {
        while ( *(_QWORD *)(v35[2] + 24LL) != a1 )
        {
          v35 = (_QWORD *)*v35;
          if ( v35 == v33 )
            goto LABEL_69;
        }
        v31 = 1;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v32);
      __writecr8(v32);
      if ( v31 )
      {
        ExFreePoolWithTag(v5, 0);
        v5 = 0LL;
      }
      else
      {
        MmEnableProcessSvm();
        Interface = guard_dispatch_icall_no_overrides(v40, p_Lock[22]);
        if ( Interface < 0 )
        {
LABEL_80:
          v29 = 1;
          goto LABEL_81;
        }
        Interface = guard_dispatch_icall_no_overrides(v40, *(_QWORD *)(Process + 40) & 0xFFFFFFFFFFFFF000uLL);
      }
      if ( Interface >= 0 )
      {
        *a3 = v48;
        goto LABEL_94;
      }
      goto LABEL_80;
    }
LABEL_46:
    if ( !v27 )
      goto LABEL_42;
    if ( BYTE1(v27->Header.WaitListHead.Blink) )
    {
      Interface = -1073741637;
LABEL_49:
      if ( (_InterlockedExchangeAdd64(
              (volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.152,
              0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.152);
      KeAbPostRelease((unsigned __int64)&ExSaPageGroupDescriptorArrayLock.152);
      goto LABEL_52;
    }
    if ( LOBYTE(v27->Header.WaitListHead.Blink) )
    {
      Interface = ExpConvertSvmDevice(v40, p_Lock);
      if ( Interface < 0 )
        goto LABEL_49;
      LOBYTE(v27->Header.WaitListHead.Blink) = 0;
    }
    ++*((_DWORD *)p_Lock + 8);
    ++*((_DWORD *)p_Lock + 9);
    goto LABEL_58;
  }
LABEL_95:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Process + 1552), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(Process + 1552));
  KeAbPostRelease(Process + 1552);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v39);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(Process + 488));
  return (unsigned int)Interface;
}
