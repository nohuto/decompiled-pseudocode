/*
 * XREFs of HalpIommuDeleteDevice @ 0x140589F30
 * Callers:
 *     HalpIommuBlockDevice @ 0x1404F8D00 (HalpIommuBlockDevice.c)
 *     HalpIommuUnblockDevice @ 0x140505B10 (HalpIommuUnblockDevice.c)
 *     IommuCreateAtsDevice @ 0x14059DE70 (IommuCreateAtsDevice.c)
 *     IommuDeleteAtsDevice @ 0x14059E020 (IommuDeleteAtsDevice.c)
 *     IommuMapDevice @ 0x14059ED30 (IommuMapDevice.c)
 *     IommuUnmapDevice @ 0x14059F520 (IommuUnmapDevice.c)
 *     IommuDomainAttachDevice @ 0x1405A12E0 (IommuDomainAttachDevice.c)
 *     IommuDomainDetachDevice @ 0x1405A16E0 (IommuDomainDetachDevice.c)
 *     HalpIommuHandleFaultWorkerRoutine @ 0x1405A2820 (HalpIommuHandleFaultWorkerRoutine.c)
 *     IommuDeviceCreate @ 0x140789730 (IommuDeviceCreate.c)
 *     IommuDeviceDelete @ 0x1407897F0 (IommuDeviceDelete.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     IommupHvUnregisterDeviceId @ 0x1405A11F8 (IommupHvUnregisterDeviceId.c)
 *     IommupDeviceUnregisterFaultCallback @ 0x1405A2E70 (IommupDeviceUnregisterFaultCallback.c)
 *     IidAreIdsStrictlyEqual @ 0x14071E4B4 (IidAreIdsStrictlyEqual.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     IommupDeviceDisableSvm @ 0x140B679EC (IommupDeviceDisableSvm.c)
 */

__int64 __fastcall HalpIommuDeleteDevice(__int64 *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v5; // bp
  struct _KTHREAD *v6; // r14
  char v7; // si
  AutoBoost *v8; // rax
  volatile unsigned __int8 *v9; // rdx
  signed __int8 v10; // cf
  AutoBoost *v11; // rdi
  unsigned __int8 CurrentIrql; // di
  struct _KTHREAD *i; // r11
  __int64 v14; // r11
  bool v15; // zf
  int v16; // edx
  __int64 *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int8 v21; // si
  __int64 *v22; // rbp
  unsigned __int64 *InitialStack; // rdx
  unsigned __int64 **v24; // rax
  unsigned __int8 v25; // di
  struct _LIST_ENTRY *v26; // rdx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  unsigned int v31; // edi
  __int64 v32; // rdx
  void *v33; // rcx

  v5 = 0;
  v6 = 0LL;
  v7 = 0;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)&HalpDeviceBlockUnblockPushLock.Header.WaitListHead, 0LL, 0LL, a4);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.Header.WaitListHead, 0LL);
  v11 = v8;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&HalpDeviceBlockUnblockPushLock.Header.WaitListHead,
      v8,
      (__int64)&HalpDeviceBlockUnblockPushLock.Header.WaitListHead);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v9) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v11 + 33), v9, 1);
    }
    else
    {
      *((_BYTE *)v11 + 10) = 1;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v9) = 15;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, (int)v9);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&HalpIommuDeviceCreatedListSpinLock);
  for ( i = (struct _KTHREAD *)HalpDeviceBlockUnblockPushLock.Header.WaitListHead.Blink;
        i != (struct _KTHREAD *)&HalpDeviceBlockUnblockPushLock.Header.WaitListHead.Blink;
        i = *(struct _KTHREAD **)v14 )
  {
    v6 = i;
    if ( (unsigned __int8)IidAreIdsStrictlyEqual(i->Header.WaitListHead.Blink, *a1) )
    {
      v15 = (*(_DWORD *)(v14 + 32))-- == 1;
      if ( v15 )
      {
        v5 = 1;
        break;
      }
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&HalpIommuDeviceCreatedListSpinLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( !v5 )
  {
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&HalpDeviceBlockUnblockPushLock.Header.WaitListHead.Flink,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HalpDeviceBlockUnblockPushLock.Header.WaitListHead);
    KeAbPostRelease((unsigned __int64)&HalpDeviceBlockUnblockPushLock.Header.WaitListHead);
    return 0LL;
  }
  v18 = a1 + 53;
  v19 = a1[53];
  if ( v19 )
  {
    if ( HalpHvIommu )
    {
      v20 = a1[4];
    }
    else
    {
      *(_QWORD *)(v19 + 32) = a1[6];
      v19 = *v18;
      v20 = *(_QWORD *)(a1[5] + 8);
    }
    *(_QWORD *)(v19 + 24) = v20;
    *(_QWORD *)(*v18 + 16) = *a1;
    v21 = KeGetCurrentIrql();
    v22 = a1 + 53;
    if ( v21 != 15 )
    {
      __writecr8(0xFuLL);
      v22 = a1 + 53;
    }
    if ( KiIrqlFlags )
    {
      LOBYTE(v16) = 15;
      KiRaiseIrqlProcessIrqlFlags(v21, v16);
      v18 = v22;
    }
    ExAcquireSpinLockExclusiveAtDpcLevel(&HalpIommuFaultIgnoreListSpinLock);
    InitialStack = (unsigned __int64 *)HalpDeviceBlockUnblockPushLock.InitialStack;
    v24 = (unsigned __int64 **)*v18;
    if ( *(struct _KTHREAD **)HalpDeviceBlockUnblockPushLock.InitialStack != (struct _KTHREAD *)&HalpDeviceBlockUnblockPushLock.QuantumTarget )
LABEL_60:
      __fastfail(3u);
    *v24 = &HalpDeviceBlockUnblockPushLock.QuantumTarget;
    v24[1] = InitialStack;
    *InitialStack = (unsigned __int64)v24;
    HalpDeviceBlockUnblockPushLock.InitialStack = v24;
    *v18 = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel(&HalpIommuFaultIgnoreListSpinLock);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v21);
    __writecr8(v21);
    v7 = 1;
  }
  v25 = KeGetCurrentIrql();
  if ( v25 != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v16) = 15;
    KiRaiseIrqlProcessIrqlFlags(v25, v16);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&HalpIommuDeviceCreatedListSpinLock);
  v26 = *(struct _LIST_ENTRY **)&v6->Header.Lock;
  if ( *(struct _KTHREAD **)(*(_QWORD *)&v6->Header.Lock + 8LL) != v6 )
    goto LABEL_60;
  Flink = v6->Header.WaitListHead.Flink;
  if ( (struct _KTHREAD *)Flink->Flink != v6 )
    goto LABEL_60;
  Flink->Flink = v26;
  v26->Blink = Flink;
  ExReleaseSpinLockExclusiveFromDpcLevel(&HalpIommuDeviceCreatedListSpinLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v25);
  __writecr8(v25);
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&HalpDeviceBlockUnblockPushLock.Header.WaitListHead.Flink,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&HalpDeviceBlockUnblockPushLock.Header.WaitListHead);
  KeAbPostRelease((unsigned __int64)&HalpDeviceBlockUnblockPushLock.Header.WaitListHead);
  HalpMmAllocCtxFree(v28, (__int64)v6->Header.WaitListHead.Blink);
  HalpMmAllocCtxFree(v29, (__int64)v6);
  if ( v7 )
  {
    v15 = HalpHvIommu == 0;
    *a1 = 0LL;
    if ( v15 )
      a1[6] = 0LL;
  }
  if ( a1[12] )
    IommupDeviceUnregisterFaultCallback(a1);
  v31 = IommupDeviceDisableSvm(a1);
  if ( HalpHvIommu )
  {
    if ( !v7 )
      v31 = IommupHvUnregisterDeviceId(a1[4]);
  }
  else
  {
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a1[4] + 16), a1[5]);
    v32 = a1[6];
    if ( v32 )
      HalpMmAllocCtxFree(v30, v32);
  }
  if ( *a1 )
    HalpMmAllocCtxFree(v30, *a1);
  v33 = (void *)a1[1];
  if ( v33 )
  {
    ObfDereferenceObjectWithTag(v33, 0x446C6148u);
    a1[1] = 0LL;
  }
  HalpMmAllocCtxFree((__int64)v33, (__int64)a1);
  return v31;
}
