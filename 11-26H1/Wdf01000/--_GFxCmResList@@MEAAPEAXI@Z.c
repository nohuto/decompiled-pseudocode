/*
 * XREFs of ??_GFxCmResList@@MEAAPEAXI@Z @ 0x14003AE50
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14002CA80 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxCollection@@UEAA@XZ @ 0x14003B328 (--1FxCollection@@UEAA@XZ.c)
 */

FxCmResList *__fastcall FxCmResList::`scalar deleting destructor'(FxCmResList *this, char a2)
{
  this->__vftable = (FxCmResList_vtbl *)FxCmResList::`vftable';
  FxCollection::~FxCollection(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
