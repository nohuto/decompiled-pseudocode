/*
 * XREFs of ??_ECImmersiveWindowFactoryBase@@MEAAPEAXI@Z @ 0x1806A1E30
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveWindowFactoryBase@@MEAA@XZ @ 0x1801C4DA8 (--1CImmersiveWindowFactoryBase@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 */

CImmersiveWindowFactoryBase *__fastcall CImmersiveWindowFactoryBase::`vector deleting destructor'(
        CImmersiveWindowFactoryBase *this,
        char a2)
{
  CImmersiveWindowFactoryBase::~CImmersiveWindowFactoryBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
