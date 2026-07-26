/*
 * XREFs of ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140157B40
 * Callers:
 *     NdisEnumerateFilterModules @ 0x14000B080 (NdisEnumerateFilterModules.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140051420 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x140057E90 (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisWdfDevicePowerOn @ 0x140082F10 (ndisWdfDevicePowerOn.c)
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1400857F0 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     NdisWdfMiniportDataPathPause @ 0x140096820 (NdisWdfMiniportDataPathPause.c)
 *     NdisWdfMiniportDataPathStart @ 0x140096900 (NdisWdfMiniportDataPathStart.c)
 *     ?ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x14009B2C4 (-ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 *     _lambda_f57a5082c6497a0052959e1defd60ec1_::_lambda_invoker_cdecl_ @ 0x14009BDA0 (_lambda_f57a5082c6497a0052959e1defd60ec1_--_lambda_invoker_cdecl_.c)
 *     _lambda_6b9a11642f9024760fce603cfec52f9a_::operator() @ 0x14009BE28 (_lambda_6b9a11642f9024760fce603cfec52f9a_--operator().c)
 *     NdisMSetMiniportSecondary @ 0x1400A2D10 (NdisMSetMiniportSecondary.c)
 *     ?ndisBindRequest@@YAXPEAXAEAUBindEngine@Ndis@@AEAVBindState@2@PEBU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1400A9640 (-ndisBindRequest@@YAXPEAXAEAUBindEngine@Ndis@@AEAVBindState@2@PEBU_NET_PNP_EVENT_NOTIFICATION@@@.c)
 *     _lambda_4e297ad311dc1a3d34a346ff598c8a24_::operator() @ 0x1400BA7B8 (_lambda_4e297ad311dc1a3d34a346ff598c8a24_--operator().c)
 *     ?ndisQueuedStatusUnbindAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1400BB4A0 (-ndisQueuedStatusUnbindAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1400BB7B4 (-ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140137280 (-ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisMQueuedPromoteMiniport@@YAXPEAX@Z @ 0x14013B060 (-ndisMQueuedPromoteMiniport@@YAXPEAX@Z.c)
 *     ndisHandleLegacyBindIoctl @ 0x14013BE50 (ndisHandleLegacyBindIoctl.c)
 *     _lambda_ecdb32753e2b7a1d37d87608ec168c64_::_lambda_invoker_cdecl_ @ 0x140144EC0 (_lambda_ecdb32753e2b7a1d37d87608ec168c64_--_lambda_invoker_cdecl_.c)
 *     _lambda_b246ce06b62e0fe260ebdade75b833fa_::_lambda_invoker_cdecl_ @ 0x14014B140 (_lambda_b246ce06b62e0fe260ebdade75b833fa_--_lambda_invoker_cdecl_.c)
 *     _lambda_f04dbbba9fe6a1cf15f4fb42f8ba953a_::_lambda_invoker_cdecl_ @ 0x14014B180 (_lambda_f04dbbba9fe6a1cf15f4fb42f8ba953a_--_lambda_invoker_cdecl_.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x140157970 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x140164210 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ?ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z @ 0x140167060 (-ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1401676B0 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z @ 0x140168B90 (-ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140169CA0 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ndisHandleProtocolReconfigNotification @ 0x140174EC4 (ndisHandleProtocolReconfigNotification.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140179FD0 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x140183FD0 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1401847E0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400457F0 (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x140087E90 (-ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?Wait@?$KWaitEventBase@U?$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ @ 0x140138EA0 (-Wait@-$KWaitEventBase@U-$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ.c)
 *     ?DispatchPendingWork@BindEngine@Ndis@@AEAAXW4CallRunMode@@AEAVKLockThisExclusive@@@Z @ 0x140157CA0 (-DispatchPendingWork@BindEngine@Ndis@@AEAAXW4CallRunMode@@AEAVKLockThisExclusive@@@Z.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x14015C6A0 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ndisMStopPowerSavingsForBindings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016E070 (-ndisMStopPowerSavingsForBindings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall Ndis::BindEngine::ApplyBindChanges(Ndis::BindEngine *this, enum CallRunMode a2, char a3)
{
  bool v6; // zf
  _NDIS_MINIPORT_BLOCK *m_miniport; // rbx
  KLockHolder v8; // [rsp+20h] [rbp-28h] BYREF

  if ( a3 && a2 == RunSynchronous )
    ndisMStopPowerSavingsForBindings(this->m_miniport);
  v8.m_Lock = &this->m_lock;
  KeEnterCriticalRegion();
  v8.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(&this->m_lock, 0LL);
  v6 = this->m_bindThread == 0LL;
  v8.m_State = Exclusive;
  if ( v6 )
  {
    Ndis::BindEngine::DispatchPendingWork(this, a2, (struct KLockThisExclusive *)&v8);
  }
  else
  {
    KLockHolder::ReleaseExclusive(&v8);
    if ( a2 == RunSynchronous )
      KWaitEventBase<wistd::integral_constant<enum _EVENT_TYPE,0>>::Wait(&this->m_bindCompleteEvent);
  }
  if ( a3 && a2 == RunSynchronous )
  {
    m_miniport = this->m_miniport;
    if ( m_miniport->SelectiveSuspend )
      ndisSelectiveSuspendClearStop(m_miniport, 13);
    if ( m_miniport->AoAc )
      ndisAoAcClearStop(m_miniport, 13);
  }
  if ( v8.m_State == Shared )
  {
    ExReleasePushLockEx(v8.m_Lock, 0LL);
    goto LABEL_8;
  }
  if ( v8.m_State == Exclusive )
  {
    ExReleasePushLockExclusiveEx(v8.m_Lock, 0LL);
LABEL_8:
    KeLeaveCriticalRegion();
    return;
  }
  if ( v8.m_Region.m_Entered )
    goto LABEL_8;
}
