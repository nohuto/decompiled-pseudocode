/*
 * XREFs of ??1CKernelSensorThread@@UEAA@XZ @ 0x1402233B0
 * Callers:
 *     ??_GCKernelSensorThread@@UEAAPEAXI@Z @ 0x140223410 (--_GCKernelSensorThread@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?DestroyEventHandles@CKernelSensorThread@@QEAAXXZ @ 0x140150F40 (-DestroyEventHandles@CKernelSensorThread@@QEAAXXZ.c)
 */

void __fastcall CKernelSensorThread::~CKernelSensorThread(CKernelSensorThread *this)
{
  *(_QWORD *)this = &CKernelSensorThread::`vftable';
  CKernelSensorThread::DestroyEventHandles(this);
  *(_QWORD *)this = &CInputThreadBase::`vftable';
}
