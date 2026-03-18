/*
 * XREFs of ??_GFxMemoryBuffer@@MEAAPEAXI@Z @ 0x1400524A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14002CA80 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x140052560 (--1FxObject@@UEAA@XZ.c)
 */

FxMemoryBuffer *__fastcall FxMemoryBuffer::`scalar deleting destructor'(FxMemoryBuffer *this, char a2)
{
  this->FxMemoryObject::FxObject::__vftable = (FxMemoryBuffer_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
  this->FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
  FxObject::~FxObject(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
