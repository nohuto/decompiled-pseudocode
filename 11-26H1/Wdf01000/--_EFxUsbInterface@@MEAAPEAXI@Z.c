/*
 * XREFs of ??_EFxUsbInterface@@MEAAPEAXI@Z @ 0x14009FE50
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14002CA80 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxUsbInterface@@MEAA@XZ @ 0x14003CAA4 (--1FxUsbInterface@@MEAA@XZ.c)
 */

FxUsbInterface *__fastcall FxUsbInterface::`vector deleting destructor'(FxUsbInterface *this, char a2)
{
  FxUsbInterface::~FxUsbInterface(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
