/*
 * XREFs of IoGetAttachedDeviceReference @ 0x1402F8660
 * Callers:
 *     HalpQueryPccInterface @ 0x140789EF4 (HalpQueryPccInterface.c)
 *     ExpQueryPrmInterface @ 0x140845358 (ExpQueryPrmInterface.c)
 *     CmpGetVolumeClusterSize @ 0x1408BCE30 (CmpGetVolumeClusterSize.c)
 *     WmipForwardWmiIrp @ 0x140A0E218 (WmipForwardWmiIrp.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140A2FA8C (CmpVolumeManagerGetContextForFile.c)
 *     IopFilterResourceRequirementsCall @ 0x140AA0E80 (IopFilterResourceRequirementsCall.c)
 *     WmipRegisterDevice @ 0x140ACFB28 (WmipRegisterDevice.c)
 *     WmipGetFilePDO @ 0x140B30428 (WmipGetFilePDO.c)
 *     IoBuildPoDeviceNotifyList @ 0x140C0B000 (IoBuildPoDeviceNotifyList.c)
 *     IoShutdownSystem @ 0x140C12A68 (IoShutdownSystem.c)
 *     VfIrpSendSynchronousIrp @ 0x140C32600 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FA03C (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiWakeAddressAll @ 0x140305268 (KiWakeAddressAll.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

PDEVICE_OBJECT __stdcall IoGetAttachedDeviceReference(PDEVICE_OBJECT DeviceObject)
{
  unsigned __int8 CurrentIrql; // si
  void *ArbitraryUserPointer; // rax
  __int64 v4; // rcx
  volatile __int64 *v5; // rdx
  struct _DEVICE_OBJECT *i; // rax
  __int64 v7; // r8
  volatile signed __int64 **v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF
  void *retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
  v4 = (__int64)ArbitraryUserPointer + 160;
  v5 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 21);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _InterlockedExchange64(v5, v4) )
      KxWaitForLockOwnerShip(v4);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(v4, v5);
  }
  for ( i = DeviceObject->AttachedDevice; i; i = i->AttachedDevice )
    DeviceObject = i;
  ObfReferenceObjectWithTag(DeviceObject, 0x746C6644u);
  v8 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v8);
    v9 = (__int64)*v8;
    if ( !*v8 )
    {
      if ( v8 == (volatile signed __int64 **)_InterlockedCompareExchange64(v8[1], 0LL, (signed __int64)v8) )
        goto LABEL_16;
      v9 = KxWaitForLockChainValid(v8);
    }
    *v8 = 0LL;
    v10 = (__int64)v8[1];
    if ( (((unsigned __int8)v10 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v9 + 8), v10)) & 4) != 0 )
    {
      _InterlockedOr(v12, 0);
      KiWakeAddressAll(v9 + 8, v10, v7);
    }
  }
  else
  {
    KiReleaseQueuedSpinLockInstrumented(v8, retaddr);
  }
LABEL_16:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return DeviceObject;
}
