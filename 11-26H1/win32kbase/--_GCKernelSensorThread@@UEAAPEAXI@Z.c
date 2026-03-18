/*
 * XREFs of ??_GCKernelSensorThread@@UEAAPEAXI@Z @ 0x1402253F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDeviceAcceleration@@SAXPEAX@Z @ 0x14016F6E4 (--3CDeviceAcceleration@@SAXPEAX@Z.c)
 *     ??1CKernelSensorThread@@UEAA@XZ @ 0x140225388 (--1CKernelSensorThread@@UEAA@XZ.c)
 */

CKernelSensorThread *__fastcall CKernelSensorThread::`scalar deleting destructor'(CKernelSensorThread *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  CKernelSensorThread::~CKernelSensorThread(this);
  if ( (a2 & 1) != 0 )
    CDeviceAcceleration::operator delete((char *)this, v4, v5, v6);
  return this;
}
