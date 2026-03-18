/*
 * XREFs of ??1CKernelSensorThread@@UEAA@XZ @ 0x140225388
 * Callers:
 *     ??_GCKernelSensorThread@@UEAAPEAXI@Z @ 0x1402253F0 (--_GCKernelSensorThread@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?DestroyEventHandles@CKernelSensorThread@@QEAAXXZ @ 0x14018FE24 (-DestroyEventHandles@CKernelSensorThread@@QEAAXXZ.c)
 */

void __fastcall CKernelSensorThread::~CKernelSensorThread(CKernelSensorThread *this)
{
  *(_QWORD *)this = &CKernelSensorThread::`vftable';
  CKernelSensorThread::DestroyEventHandles(this);
  *(_QWORD *)this = &CInputThreadBase::`vftable';
}
