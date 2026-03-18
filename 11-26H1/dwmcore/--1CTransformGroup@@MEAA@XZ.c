/*
 * XREFs of ??1CTransformGroup@@MEAA@XZ @ 0x18019F6FC
 * Callers:
 *     ??_GCTransformGroup@@MEAAPEAXI@Z @ 0x18019F6B0 (--_GCTransformGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z @ 0x18019F750 (--$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z.c)
 *     ??1CCyclicResourceListEntry@@IEAA@XZ @ 0x18019F8D8 (--1CCyclicResourceListEntry@@IEAA@XZ.c)
 */

void __fastcall CTransformGroup::~CTransformGroup(CTransformGroup *this)
{
  CCyclicResourceListEntry *v1; // rbx

  v1 = (CTransformGroup *)((char *)this + 184);
  *(_QWORD *)this = &CTransformGroup::`vftable'{for `CTransformGroupGeneratedT<CTransformGroup,CTransform>'};
  *((_QWORD *)this + 23) = &CTransform3DGroup::`vftable'{for `CCyclicResourceListEntry'};
  SAFE_DELETE<CMILMatrix>((char *)this + 208);
  CCyclicResourceListEntry::~CCyclicResourceListEntry(v1);
  CTransform3DGroupGeneratedT<CTransform3DGroup,CTransform3D>::~CTransform3DGroupGeneratedT<CTransform3DGroup,CTransform3D>(this);
}
