/*
 * XREFs of ??_EFxWmiInstanceExternal@@UEAAPEAXI@Z @ 0x14003C410
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14002CA80 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x14003B790 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

FxWmiInstanceInternal *__fastcall FxWmiInstanceExternal::`vector deleting destructor'(
        FxWmiInstanceInternal *this,
        char a2)
{
  this->__vftable = (FxWmiInstanceInternal_vtbl *)FxWmiInstance::`vftable';
  FxNonPagedObject::~FxNonPagedObject(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
