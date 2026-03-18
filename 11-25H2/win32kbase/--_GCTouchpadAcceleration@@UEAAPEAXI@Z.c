/*
 * XREFs of ??_GCTouchpadAcceleration@@UEAAPEAXI@Z @ 0x140152410
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDeviceAcceleration@@SAXPEAX@Z @ 0x14014B1E4 (--3CDeviceAcceleration@@SAXPEAX@Z.c)
 */

CTouchpadAcceleration *__fastcall CTouchpadAcceleration::`scalar deleting destructor'(
        CTouchpadAcceleration *this,
        char a2)
{
  *(_QWORD *)this = &CDeviceAcceleration::`vftable';
  if ( (a2 & 1) != 0 )
    CDeviceAcceleration::operator delete((char *)this);
  return this;
}
