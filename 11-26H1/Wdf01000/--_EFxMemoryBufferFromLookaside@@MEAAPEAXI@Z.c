/*
 * XREFs of ??_EFxMemoryBufferFromLookaside@@MEAAPEAXI@Z @ 0x140095EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14002CA80 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x140052560 (--1FxObject@@UEAA@XZ.c)
 */

FxMemoryBufferFromPoolLookaside *__fastcall FxMemoryBufferFromLookaside::`vector deleting destructor'(
        FxMemoryBufferFromPoolLookaside *this,
        char a2)
{
  this->FxMemoryBufferFromLookaside::FxMemoryObject::FxObject::__vftable = (FxMemoryBufferFromPoolLookaside_vtbl *)FxMemoryBufferFromLookaside::`vftable'{for `FxObject'};
  this->FxMemoryBufferFromLookaside::FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
  FxObject::~FxObject(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
