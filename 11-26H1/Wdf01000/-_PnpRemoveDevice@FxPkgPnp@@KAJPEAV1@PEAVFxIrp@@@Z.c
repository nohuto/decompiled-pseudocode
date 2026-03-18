/*
 * XREFs of ?_PnpRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1400214E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x140020570 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1400216A4 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::_PnpRemoveDevice(FxPkgPnp *This, FxIrp *Irp)
{
  FxDeviceBase *m_DeviceBase; // rax
  _IRP *m_Irp; // rdx
  unsigned __int8 v6; // r8
  FxDeviceBase *v7; // rcx
  const void *_a1; // rdx
  FxPkgPnp_vtbl *v9; // rax
  unsigned int v10; // ebx
  MxEvent eventOnStack; // [rsp+40h] [rbp-28h] BYREF

  eventOnStack.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&eventOnStack.m_Event, SynchronizationEvent, 0);
  m_DeviceBase = This->m_DeviceBase;
  m_Irp = Irp->m_Irp;
  eventOnStack.m_DbgFlagIsInitialized = 1;
  IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, a5, 1u, 0x20u);
  FxObject::AddRef(This, Irp, 2587, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
  Irp->m_Irp->IoStatus.Status = 0;
  This->m_DeviceRemoveProcessed = &eventOnStack;
  FxPkgPnp::PnpProcessEvent(This, PnpEventRemove, v6);
  v7 = This->m_DeviceBase;
  _a1 = (const void *)((unsigned __int64)v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v7->m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_qq(This->m_Globals, 4u, 0xCu, 0x2Au, WPP_FxPkgPnp_cpp_Traceguids, _a1, v7->m_DeviceObject.m_DeviceObject);
  KeWaitForSingleObject(&eventOnStack, Executive, 0, 0, 0LL);
  v9 = This->__vftable;
  This->m_DeviceRemoveProcessed = 0LL;
  v10 = v9->ProcessRemoveDeviceOverload(This, Irp);
  This->Release(This, Irp, 2623, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
  return v10;
}
