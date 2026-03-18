/*
 * XREFs of ??_EFxPkgFdo@@MEAAPEAXI@Z @ 0x1400395F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14002CA80 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxPkgFdo@@MEAA@XZ @ 0x14003A64C (--1FxPkgFdo@@MEAA@XZ.c)
 */

FxPkgFdo *__fastcall FxPkgFdo::`vector deleting destructor'(FxPkgFdo *this, char a2)
{
  FxPkgFdo::~FxPkgFdo(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
