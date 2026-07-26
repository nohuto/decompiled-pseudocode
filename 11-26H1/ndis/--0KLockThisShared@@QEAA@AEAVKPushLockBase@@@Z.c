/*
 * XREFs of ??0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z @ 0x140163240
 * Callers:
 *     ndisDmaTelemetryBucketizeTimeInUs @ 0x1400CC014 (ndisDmaTelemetryBucketizeTimeInUs.c)
 *     NdisRegisterUserThreadExitCallback @ 0x1400E7110 (NdisRegisterUserThreadExitCallback.c)
 *     ?MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z @ 0x1401379C0 (-MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z.c)
 *     ?UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140137EA0 (-UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1401387B0 (-CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?ndisMpHookGetHook@@YA?AV?$KRundownPtr@$$CBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@@@W4_NDIS_MINIPORT_HOOK_DRIVER_TYPE@@@Z @ 0x140145DAC (-ndisMpHookGetHook@@YA-AV-$KRundownPtr@$$CBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@@@W4_NDIS_MINIPORT.c)
 *     _lambda_1b37a015b038c0fb9460a3d4ca11395f_::_lambda_invoker_cdecl_ @ 0x14014F060 (_lambda_1b37a015b038c0fb9460a3d4ca11395f_--_lambda_invoker_cdecl_.c)
 *     ?Ioctl@KnobNamespace@@SAJ_NKKKPEAX1PEAK@Z @ 0x14014F4A4 (-Ioctl@KnobNamespace@@SAJ_NKKKPEAX1PEAK@Z.c)
 *     ?CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x14015B1C0 (-CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 * Callees:
 *     ?AcquireShared@KLockHolder@@QEAAXXZ @ 0x140163270 (-AcquireShared@KLockHolder@@QEAAXXZ.c)
 */

KLockThisShared *__fastcall KLockThisShared::KLockThisShared(KLockThisShared *this, struct KPushLockBase *a2)
{
  this->m_State = Unlocked;
  this->m_Lock = a2;
  this->m_Region.m_Entered = 0;
  KLockHolder::AcquireShared(this);
  return this;
}
