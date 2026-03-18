/*
 * XREFs of ??_GCTouchpadAcceleration@@UEAAPEAXI@Z @ 0x140171B20
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDeviceAcceleration@@SAXPEAX@Z @ 0x14016F6E4 (--3CDeviceAcceleration@@SAXPEAX@Z.c)
 */

CTouchpadAcceleration *__fastcall CTouchpadAcceleration::`scalar deleting destructor'(
        CTouchpadAcceleration *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  *(_QWORD *)this = &CDeviceAcceleration::`vftable';
  if ( (a2 & 1) != 0 )
    CDeviceAcceleration::operator delete((char *)this, a2, a3, a4);
  return this;
}
