/*
 * XREFs of ??_EFxWorkItem@@UEAAPEAXI@Z @ 0x14003B5F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14002CA80 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxWorkItem@@UEAA@XZ @ 0x14003B628 (--1FxWorkItem@@UEAA@XZ.c)
 */

FxWorkItem *__fastcall FxWorkItem::`vector deleting destructor'(FxWorkItem *this, char a2)
{
  FxWorkItem::~FxWorkItem(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
