/*
 * XREFs of ??1CAnimationDependencies@@QEAA@XZ @ 0x1800AD360
 * Callers:
 *     ??1CResource@@MEAA@XZ @ 0x1800AD07C (--1CResource@@MEAA@XZ.c)
 *     ??1CPropertySet@@UEAA@XZ @ 0x1800AD1AC (--1CPropertySet@@UEAA@XZ.c)
 *     ??1CBrush@@MEAA@XZ @ 0x1800AD2A8 (--1CBrush@@MEAA@XZ.c)
 * Callees:
 *     ??1CSparseAnimationDependencySet@@QEAA@XZ @ 0x18004F9A0 (--1CSparseAnimationDependencySet@@QEAA@XZ.c)
 *     ??1CFullAnimationDependencySet@@QEAA@XZ @ 0x1800AE2BC (--1CFullAnimationDependencySet@@QEAA@XZ.c)
 */

void __fastcall CAnimationDependencies::~CAnimationDependencies(CSparseAnimationDependencySet **this)
{
  CSparseAnimationDependencySet *v1; // rbx
  CSparseAnimationDependencySet *v2; // rcx

  v1 = *this;
  if ( *this )
  {
    v2 = *this;
    if ( *(_DWORD *)v1 )
      CSparseAnimationDependencySet::~CSparseAnimationDependencySet(v2);
    else
      CFullAnimationDependencySet::~CFullAnimationDependencySet(v2);
    operator delete(v1, 0x20uLL);
  }
}
