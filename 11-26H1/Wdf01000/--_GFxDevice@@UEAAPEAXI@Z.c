/*
 * XREFs of ??_GFxDevice@@UEAAPEAXI@Z @ 0x140039990
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14002CA80 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxDevice@@UEAA@XZ @ 0x140039D90 (--1FxDevice@@UEAA@XZ.c)
 */

FxDevice *__fastcall FxDevice::`scalar deleting destructor'(FxDevice *this, char a2)
{
  FxDevice::~FxDevice(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
