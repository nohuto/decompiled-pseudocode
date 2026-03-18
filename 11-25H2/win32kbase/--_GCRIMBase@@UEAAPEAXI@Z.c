/*
 * XREFs of ??_GCRIMBase@@UEAAPEAXI@Z @ 0x14014B150
 * Callers:
 *     CHidInput_Destroy @ 0x140212CA0 (CHidInput_Destroy.c)
 *     CMouseSensor_Destroy @ 0x140214880 (CMouseSensor_Destroy.c)
 * Callees:
 *     ??3CDeviceAcceleration@@SAXPEAX@Z @ 0x14014B1E4 (--3CDeviceAcceleration@@SAXPEAX@Z.c)
 */

CRIMBase *__fastcall CRIMBase::`scalar deleting destructor'(CRIMBase *this, char a2)
{
  *(_QWORD *)this = &CRIMBase::`vftable';
  if ( (a2 & 1) != 0 )
    CDeviceAcceleration::operator delete(this);
  return this;
}
