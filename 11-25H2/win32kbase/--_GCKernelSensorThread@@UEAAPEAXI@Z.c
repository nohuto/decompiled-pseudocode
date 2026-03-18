/*
 * XREFs of ??_GCKernelSensorThread@@UEAAPEAXI@Z @ 0x140223410
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDeviceAcceleration@@SAXPEAX@Z @ 0x14014B1E4 (--3CDeviceAcceleration@@SAXPEAX@Z.c)
 *     ??1CKernelSensorThread@@UEAA@XZ @ 0x1402233B0 (--1CKernelSensorThread@@UEAA@XZ.c)
 */

CKernelSensorThread *__fastcall CKernelSensorThread::`scalar deleting destructor'(CKernelSensorThread *this, char a2)
{
  CKernelSensorThread::~CKernelSensorThread(this);
  if ( (a2 & 1) != 0 )
    CDeviceAcceleration::operator delete((char *)this);
  return this;
}
