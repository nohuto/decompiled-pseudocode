/*
 * XREFs of ??_EFxNPagedLookasideList@@MEAAPEAXI@Z @ 0x140095CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14002CA80 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxNPagedLookasideList@@MEAA@XZ @ 0x140052068 (--1FxNPagedLookasideList@@MEAA@XZ.c)
 */

FxNPagedLookasideList *__fastcall FxNPagedLookasideList::`vector deleting destructor'(
        FxNPagedLookasideList *this,
        char a2)
{
  FxNPagedLookasideList::~FxNPagedLookasideList(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
