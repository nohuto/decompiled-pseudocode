/*
 * XREFs of ??_GFxSystemWorkItem@@UEAAPEAXI@Z @ 0x14003B490
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14002CA80 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxSystemWorkItem@@UEAA@XZ @ 0x14003B4C8 (--1FxSystemWorkItem@@UEAA@XZ.c)
 */

FxSystemWorkItem *__fastcall FxSystemWorkItem::`scalar deleting destructor'(FxSystemWorkItem *this, char a2)
{
  FxSystemWorkItem::~FxSystemWorkItem(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
