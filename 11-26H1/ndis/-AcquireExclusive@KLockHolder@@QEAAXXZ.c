/*
 * XREFs of ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x14015C400
 * Callers:
 *     ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x14013F4AC (-ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z.c)
 *     ?DereferenceWdi@@YAXXZ @ 0x1401455EC (-DereferenceWdi@@YAXXZ.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x140145760 (-ReferenceWdi@@YA_NXZ.c)
 *     ?Register@MINIPORT_HOOK_DRIVER@@QEAAJPEAXPEBU_NDIS_MINIPORT_HOOK_DRIVER_PROVIDER_CHARACTERISTICS@@@Z @ 0x140145CB4 (-Register@MINIPORT_HOOK_DRIVER@@QEAAJPEAXPEBU_NDIS_MINIPORT_HOOK_DRIVER_PROVIDER_CHARACTERISTICS.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x14015C1E0 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015C3D0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall KLockHolder::AcquireExclusive(KLockHolder *this)
{
  KPushLockBase *m_Lock; // rcx

  KeEnterCriticalRegion();
  m_Lock = this->m_Lock;
  this->m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(m_Lock, 0LL);
  this->m_State = Exclusive;
}
