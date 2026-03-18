/*
 * XREFs of ??_GCMasterInputThread@@UEAAPEAXI@Z @ 0x1402233E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDeviceAcceleration@@SAXPEAX@Z @ 0x14014B1E4 (--3CDeviceAcceleration@@SAXPEAX@Z.c)
 */

CMasterInputThread *__fastcall CMasterInputThread::`scalar deleting destructor'(CMasterInputThread *this, char a2)
{
  *(_QWORD *)this = &CInputThreadBase::`vftable';
  if ( (a2 & 1) != 0 )
    CDeviceAcceleration::operator delete((char *)this);
  return this;
}
