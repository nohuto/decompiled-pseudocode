/*
 * XREFs of ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x14007E7A8
 * Callers:
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x140053FFC (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x140074C44 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 * Callees:
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1400054FC (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?AcquireInterfaceIterationLock@FxUsbDevice@@IEAAXXZ @ 0x1400405C4 (-AcquireInterfaceIterationLock@FxUsbDevice@@IEAAXXZ.c)
 *     ?ReleaseInterfaceIterationLock@FxUsbDevice@@IEAAXXZ @ 0x14004083C (-ReleaseInterfaceIterationLock@FxUsbDevice@@IEAAXXZ.c)
 *     ?CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z @ 0x140082A18 (-CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z.c)
 *     ?FailPendedRequest@FxIoTarget@@IEAAXPEAVFxRequestBase@@J@Z @ 0x14009BEEC (-FailPendedRequest@FxIoTarget@@IEAAXPEAVFxRequestBase@@J@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxUsbDevice::CleanupInterfacePipesAndDelete(FxUsbDevice *this, _FX_DRIVER_GLOBALS *UsbInterface)
{
  unsigned int v2; // ebx
  unsigned __int8 v5; // r8
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 v7; // r8
  unsigned __int8 v8; // r14
  unsigned int i; // r15d
  FxUsbPipe **Flink; // rax
  _LIST_ENTRY *v11; // rcx
  _LIST_ENTRY *v12; // rax
  unsigned __int8 v13; // dl
  FxUsbPipe *v14; // rcx
  _FX_DRIVER_GLOBALS *v15; // rdx
  int v16; // [rsp+20h] [rbp-30h]
  _LIST_ENTRY pendHead; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 wait; // [rsp+80h] [rbp+30h] BYREF
  _SINGLE_LIST_ENTRY sentHead; // [rsp+88h] [rbp+38h] BYREF

  v2 = 0;
  pendHead.Blink = &pendHead;
  wait = 0;
  pendHead.Flink = &pendHead;
  sentHead.Next = 0LL;
  FxUsbDevice::AcquireInterfaceIterationLock(this, UsbInterface);
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (Blink = this[-1].m_InterfaceIterationLock.m_Event.m_Event.Header.WaitListHead.Blink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Blink, &wait, v5);
    v8 = wait;
  }
  else
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  for ( i = 0; i < *(&UsbInterface->FxPoolFrameworks.PagedLock.m_DbgFlagIsInitialized + 1); ++i )
  {
    Flink = (FxUsbPipe **)UsbInterface->FxPoolFrameworks.NonPagedHead.Flink;
    wait = 0;
    LOBYTE(v16) = 1;
    Flink[i]->GotoRemoveState(Flink[i], WdfIoTargetDeleted, &pendHead, &sentHead, v16, &wait);
  }
  FxNonPagedObject::Unlock(this, v8, v7);
  while ( 1 )
  {
    v11 = pendHead.Flink;
    if ( pendHead.Flink == &pendHead )
      break;
    if ( pendHead.Flink->Blink != &pendHead
      || (v12 = pendHead.Flink->Flink, pendHead.Flink->Flink->Blink != pendHead.Flink) )
    {
      __fastfail(3u);
    }
    pendHead.Flink = pendHead.Flink->Flink;
    v12->Blink = &pendHead;
    v11->Blink = v11;
    v11->Flink = v11;
    FxIoTarget::FailPendedRequest((FxIoTarget *)v11[2].Blink, (FxRequestBase *)&v11[-8].Blink, -1071644154);
  }
  FxIoTarget::_CancelSentRequests(&sentHead);
  if ( *(&UsbInterface->FxPoolFrameworks.PagedLock.m_DbgFlagIsInitialized + 1) )
  {
    do
    {
      v14 = (FxUsbPipe *)*((_QWORD *)&UsbInterface->FxPoolFrameworks.NonPagedHead.Flink->Flink + v2);
      v14->WaitForSentIoToComplete(v14);
      ++v2;
    }
    while ( v2 < *(&UsbInterface->FxPoolFrameworks.PagedLock.m_DbgFlagIsInitialized + 1) );
  }
  FxUsbInterface::CleanUpAndDelete((FxUsbInterface *)UsbInterface, v13);
  FxUsbDevice::ReleaseInterfaceIterationLock(this, v15);
}
