/*
 * XREFs of ??_EFxUsbUrb@@MEAAPEAXI@Z @ 0x1400522F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14002CA80 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x140052560 (--1FxObject@@UEAA@XZ.c)
 */

FxUsbUrb *__fastcall FxUsbUrb::`vector deleting destructor'(FxUsbUrb *this, char a2)
{
  this->FxMemoryBufferPreallocated::FxMemoryObject::FxObject::__vftable = (FxUsbUrb_vtbl *)FxMemoryBufferPreallocated::`vftable'{for `FxObject'};
  this->FxMemoryBufferPreallocated::FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
  FxObject::~FxObject(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
