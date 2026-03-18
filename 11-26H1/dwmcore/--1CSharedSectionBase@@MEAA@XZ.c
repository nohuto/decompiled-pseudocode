/*
 * XREFs of ??1CSharedSectionBase@@MEAA@XZ @ 0x180128D58
 * Callers:
 *     ??_ECSharedSection@@UEAAPEAXI@Z @ 0x180128D00 (--_ECSharedSection@@UEAAPEAXI@Z.c)
 *     ??_ECSharedSectionBase@@MEAAPEAXI@Z @ 0x180246DD0 (--_ECSharedSectionBase@@MEAAPEAXI@Z.c)
 *     ??_GCCrossContainerGuestReadWriteSharedSection@@UEAAPEAXI@Z @ 0x18026C500 (--_GCCrossContainerGuestReadWriteSharedSection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ @ 0x180129018 (-UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ.c)
 */

void __fastcall CSharedSectionBase::~CSharedSectionBase(CSharedSectionBase *this)
{
  *(_QWORD *)this = &CSharedSectionBase::`vftable';
  CSharedSectionBase::UnmapSharedMemory(this);
  CResource::~CResource(this);
}
