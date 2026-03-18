/*
 * XREFs of ??1FxCollection@@UEAA@XZ @ 0x14003B328
 * Callers:
 *     ??_EFxIoResList@@UEAAPEAXI@Z @ 0x1400396D0 (--_EFxIoResList@@UEAAPEAXI@Z.c)
 *     ??_GFxCmResList@@MEAAPEAXI@Z @ 0x14003AE50 (--_GFxCmResList@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x14003B36C (-Clear@FxCollectionInternal@@QEAAXXZ.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x14003B790 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

void __fastcall FxCollection::~FxCollection(FxCollection *this)
{
  this->__vftable = (FxCollection_vtbl *)FxIoResList::`vftable';
  FxCollectionInternal::Clear(&this->FxCollectionInternal);
  FxCollectionInternal::Clear(&this->FxCollectionInternal);
  FxNonPagedObject::~FxNonPagedObject(this);
}
