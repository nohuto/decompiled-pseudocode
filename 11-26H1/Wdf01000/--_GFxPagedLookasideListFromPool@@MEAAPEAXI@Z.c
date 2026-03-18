/*
 * XREFs of ??_GFxPagedLookasideListFromPool@@MEAAPEAXI@Z @ 0x140095EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14002CA80 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxPagedLookasideListFromPool@@MEAA@XZ @ 0x140095E28 (--1FxPagedLookasideListFromPool@@MEAA@XZ.c)
 */

FxPagedLookasideListFromPool *__fastcall FxPagedLookasideListFromPool::`scalar deleting destructor'(
        FxPagedLookasideListFromPool *this,
        char a2)
{
  FxPagedLookasideListFromPool::~FxPagedLookasideListFromPool(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
