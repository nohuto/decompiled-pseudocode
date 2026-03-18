/*
 * XREFs of ??_EFxWmiProvider@@UEAAPEAXI@Z @ 0x14003B260
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14002CA80 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x14003B790 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

FxWmiProvider *__fastcall FxWmiProvider::`vector deleting destructor'(FxWmiProvider *this, char a2)
{
  this->__vftable = (FxWmiProvider_vtbl *)FxWmiProvider::`vftable';
  FxNonPagedObject::~FxNonPagedObject(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
