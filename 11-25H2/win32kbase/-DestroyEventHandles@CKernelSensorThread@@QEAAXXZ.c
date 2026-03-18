/*
 * XREFs of ?DestroyEventHandles@CKernelSensorThread@@QEAAXXZ @ 0x140150F40
 * Callers:
 *     UserKSTInitialize @ 0x140219140 (UserKSTInitialize.c)
 *     ??1CKernelSensorThread@@UEAA@XZ @ 0x1402233B0 (--1CKernelSensorThread@@UEAA@XZ.c)
 *     ?DeactivateInputProcessing@CKernelSensorThread@@UEAA_NXZ @ 0x140223510 (-DeactivateInputProcessing@CKernelSensorThread@@UEAA_NXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?DestroyEventHandlesNoLock@CKernelSensorThread@@AEAAXXZ @ 0x140150F80 (-DestroyEventHandlesNoLock@CKernelSensorThread@@AEAAXXZ.c)
 */

void __fastcall CKernelSensorThread::DestroyEventHandles(CKernelSensorThread *this)
{
  W32AcquirePushLockExclusiveEx((CKernelSensorThread *)((char *)this + 8), 0);
  CKernelSensorThread::DestroyEventHandlesNoLock(this);
  W32ReleasePushLockExclusiveEx((CKernelSensorThread *)((char *)this + 8), 0LL);
}
