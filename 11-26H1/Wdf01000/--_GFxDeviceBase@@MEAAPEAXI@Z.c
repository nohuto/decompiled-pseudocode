/*
 * XREFs of ??_GFxDeviceBase@@MEAAPEAXI@Z @ 0x140094680
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14002CA80 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxDeviceBase@@MEAA@XZ @ 0x14003A260 (--1FxDeviceBase@@MEAA@XZ.c)
 */

FxDeviceBase *__fastcall FxDeviceBase::`scalar deleting destructor'(FxDeviceBase *this, char a2)
{
  FxDeviceBase::~FxDeviceBase(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
