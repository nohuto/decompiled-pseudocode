/*
 * XREFs of ??_EFxMemoryBufferFromPool@@MEAAPEAXI@Z @ 0x140052030
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14002CA80 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxMemoryBufferFromPool@@MEAA@XZ @ 0x1400520F8 (--1FxMemoryBufferFromPool@@MEAA@XZ.c)
 */

FxMemoryPagedBufferFromPool *__fastcall FxMemoryBufferFromPool::`vector deleting destructor'(
        FxMemoryPagedBufferFromPool *this,
        char a2)
{
  FxMemoryBufferFromPool::~FxMemoryBufferFromPool(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
