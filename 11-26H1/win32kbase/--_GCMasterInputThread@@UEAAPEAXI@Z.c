/*
 * XREFs of ??_GCMasterInputThread@@UEAAPEAXI@Z @ 0x1402253C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDeviceAcceleration@@SAXPEAX@Z @ 0x14016F6E4 (--3CDeviceAcceleration@@SAXPEAX@Z.c)
 */

CMasterInputThread *__fastcall CMasterInputThread::`scalar deleting destructor'(
        CMasterInputThread *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  *(_QWORD *)this = &CInputThreadBase::`vftable';
  if ( (a2 & 1) != 0 )
    CDeviceAcceleration::operator delete((char *)this, a2, a3, a4);
  return this;
}
