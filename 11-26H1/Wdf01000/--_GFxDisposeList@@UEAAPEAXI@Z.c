/*
 * XREFs of ??_GFxDisposeList@@UEAAPEAXI@Z @ 0x14003B220
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14002CA80 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x14003B790 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

FxDisposeList *__fastcall FxDisposeList::`scalar deleting destructor'(FxDisposeList *this, char a2)
{
  this->__vftable = (FxDisposeList_vtbl *)FxDisposeList::`vftable';
  FxNonPagedObject::~FxNonPagedObject(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
