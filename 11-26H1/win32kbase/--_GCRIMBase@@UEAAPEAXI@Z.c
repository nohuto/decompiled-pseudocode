/*
 * XREFs of ??_GCRIMBase@@UEAAPEAXI@Z @ 0x14016F650
 * Callers:
 *     CHidInput_Destroy @ 0x140219980 (CHidInput_Destroy.c)
 *     CMouseSensor_Destroy @ 0x14021A430 (CMouseSensor_Destroy.c)
 * Callees:
 *     ??3CDeviceAcceleration@@SAXPEAX@Z @ 0x14016F6E4 (--3CDeviceAcceleration@@SAXPEAX@Z.c)
 */

CRIMBase *__fastcall CRIMBase::`scalar deleting destructor'(CRIMBase *this, char a2)
{
  *(_QWORD *)this = &CRIMBase::`vftable';
  if ( (a2 & 1) != 0 )
    CDeviceAcceleration::operator delete(this);
  return this;
}
