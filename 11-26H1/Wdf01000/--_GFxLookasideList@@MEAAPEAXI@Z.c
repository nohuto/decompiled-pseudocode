/*
 * XREFs of ??_GFxLookasideList@@MEAAPEAXI@Z @ 0x1400962C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14002CA80 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x140052560 (--1FxObject@@UEAA@XZ.c)
 */

FxLookasideList *__fastcall FxLookasideList::`scalar deleting destructor'(FxLookasideList *this, char a2)
{
  this->__vftable = (FxLookasideList_vtbl *)FxLookasideList::`vftable';
  FxObject::~FxObject(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
