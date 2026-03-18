/*
 * XREFs of ??_ECSceneMesh@@MEAAPEAXI@Z @ 0x18027F7C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CSceneMesh@@MEAA@XZ @ 0x18027F720 (--1CSceneMesh@@MEAA@XZ.c)
 */

CSceneMesh *__fastcall CSceneMesh::`vector deleting destructor'(CSceneMesh *this, char a2)
{
  CSceneMesh::~CSceneMesh(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
