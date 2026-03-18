/*
 * XREFs of ?FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z @ 0x1400678B0
 * Callers:
 *     ??1DXGTRACKEDWORKLOAD@@QEAA@XZ @ 0x140209E70 (--1DXGTRACKEDWORKLOAD@@QEAA@XZ.c)
 *     ?VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140225B00 (-VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1402E600C (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1403B77F0 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 * Callees:
 *     Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline @ 0x14006798C (Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1402E98A0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

void __fastcall DXGPROCESS::FreeHandleUnsafe(DXGPROCESS *this, unsigned int a2)
{
  Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline();
  HMGRTABLE::FreeHandle((DXGPROCESS *)((char *)this + 280), a2);
}
