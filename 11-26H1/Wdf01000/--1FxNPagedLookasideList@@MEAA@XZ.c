/*
 * XREFs of ??1FxNPagedLookasideList@@MEAA@XZ @ 0x140052068
 * Callers:
 *     ??_EFxNPagedLookasideList@@MEAAPEAXI@Z @ 0x140095CD0 (--_EFxNPagedLookasideList@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x140052560 (--1FxObject@@UEAA@XZ.c)
 */

void __fastcall FxNPagedLookasideList::~FxNPagedLookasideList(FxNPagedLookasideList *this)
{
  bool v1; // zf

  v1 = this->m_MemoryObjectSize == 0;
  this->__vftable = (FxNPagedLookasideList_vtbl *)FxNPagedLookasideList::`vftable';
  if ( !v1 )
    ExDeleteNPagedLookasideList(&this->m_ObjectLookaside);
  this->__vftable = (FxNPagedLookasideList_vtbl *)FxLookasideList::`vftable';
  FxObject::~FxObject(this);
}
