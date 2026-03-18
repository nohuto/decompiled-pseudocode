/*
 * XREFs of ?DestroyEventHandles@CKernelSensorThread@@QEAAXXZ @ 0x14018FE24
 * Callers:
 *     UserKSTInitialize @ 0x140181AD0 (UserKSTInitialize.c)
 *     ??1CKernelSensorThread@@UEAA@XZ @ 0x140225388 (--1CKernelSensorThread@@UEAA@XZ.c)
 *     ?DeactivateInputProcessing@CKernelSensorThread@@UEAA_NXZ @ 0x1402254F0 (-DeactivateInputProcessing@CKernelSensorThread@@UEAA_NXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?DestroyEventHandlesNoLock@CKernelSensorThread@@AEAAXXZ @ 0x14018FE60 (-DestroyEventHandlesNoLock@CKernelSensorThread@@AEAAXXZ.c)
 */

void __fastcall CKernelSensorThread::DestroyEventHandles(CKernelSensorThread *this)
{
  W32AcquirePushLockExclusiveEx((CKernelSensorThread *)((char *)this + 8));
  CKernelSensorThread::DestroyEventHandlesNoLock(this);
  W32ReleasePushLockExclusiveEx((CKernelSensorThread *)((char *)this + 8));
}
