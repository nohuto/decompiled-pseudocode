/*
 * XREFs of ??_ECImmersiveWindowFactoryBase@@MEAAPEAXI@Z @ 0x1806C9E40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveWindowFactoryBase@@MEAA@XZ @ 0x180091E04 (--1CImmersiveWindowFactoryBase@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
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
