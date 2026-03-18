/*
 * XREFs of IoGetAttachedDeviceReference @ 0x1403EB070
 * Callers:
 *     HalpQueryPccInterface @ 0x1407873C4 (HalpQueryPccInterface.c)
 *     ExpQueryPrmInterface @ 0x14083F118 (ExpQueryPrmInterface.c)
 *     CmpGetVolumeClusterSize @ 0x1408B685C (CmpGetVolumeClusterSize.c)
 *     CmpVolumeManagerGetContextForFile @ 0x14090792C (CmpVolumeManagerGetContextForFile.c)
 *     WmipForwardWmiIrp @ 0x140A0F03C (WmipForwardWmiIrp.c)
 *     IopFilterResourceRequirementsCall @ 0x140AA5C88 (IopFilterResourceRequirementsCall.c)
 *     WmipRegisterDevice @ 0x140ACD8E8 (WmipRegisterDevice.c)
 *     WmipGetFilePDO @ 0x140B2E4D8 (WmipGetFilePDO.c)
 *     IoBuildPoDeviceNotifyList @ 0x140C04DF0 (IoBuildPoDeviceNotifyList.c)
 *     IoShutdownSystem @ 0x140C0C858 (IoShutdownSystem.c)
 *     VfIrpSendSynchronousIrp @ 0x140C2C5F0 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402BA360 (KxWaitForLockChainValid.c)
 *     KiWakeAddressAll @ 0x1402BA5A8 (KiWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1403EB6FC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

PDEVICE_OBJECT __stdcall IoGetAttachedDeviceReference(PDEVICE_OBJECT DeviceObject)
{
  __int64 v1; // r8
  unsigned __int8 CurrentIrql; // si
  void *ArbitraryUserPointer; // rax
  __int64 v5; // rcx
  volatile __int64 *v6; // rdx
  __int64 v7; // rax
  struct _DEVICE_OBJECT *i; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  volatile signed __int64 **v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  signed __int32 v15[10]; // [rsp+0h] [rbp-28h] BYREF
  void *retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
  v5 = (__int64)ArbitraryUserPointer + 160;
  v6 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 21);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    v7 = _InterlockedExchange64(v6, v5);
    if ( v7 )
      KxWaitForLockOwnerShip(v5, v7, v1);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(v5, v6);
  }
  for ( i = DeviceObject->AttachedDevice; i; i = i->AttachedDevice )
    DeviceObject = i;
  ObfReferenceObjectWithTag(DeviceObject, 0x746C6644u);
  v11 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    _m_prefetchw(v11);
    v12 = (__int64)*v11;
    if ( !*v11 )
    {
      if ( v11 == (volatile signed __int64 **)_InterlockedCompareExchange64(v11[1], 0LL, (signed __int64)v11) )
        goto LABEL_16;
      v12 = KxWaitForLockChainValid((__int64 *)v11, v9, v10);
    }
    *v11 = 0LL;
    v13 = (__int64)v11[1];
    if ( (((unsigned __int8)v13 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v12 + 8), v13)) & 4) != 0 )
    {
      _InterlockedOr(v15, 0);
      KiWakeAddressAll();
    }
  }
  else
  {
    KiReleaseQueuedSpinLockInstrumented(v11, retaddr);
  }
LABEL_16:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return DeviceObject;
}
