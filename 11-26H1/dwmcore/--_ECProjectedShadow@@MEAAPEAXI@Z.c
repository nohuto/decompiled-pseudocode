/*
 * XREFs of ??_ECProjectedShadow@@MEAAPEAXI@Z @ 0x18018E940
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1CProjectedShadow@@MEAA@XZ @ 0x18018E98C (--1CProjectedShadow@@MEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x1801C0A10 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CProjectedShadow *__fastcall CProjectedShadow::`vector deleting destructor'(CProjectedShadow *this, char a2)
{
  CProjectedShadow::~CProjectedShadow(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 392LL);
    else
      operator delete(this);
  }
  return this;
}
