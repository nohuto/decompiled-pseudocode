/*
 * XREFs of ??_EFxInterrupt@@UEAAPEAXI@Z @ 0x1400A9D60
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14002CA80 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxInterrupt@@UEAA@XZ @ 0x1400A9CB4 (--1FxInterrupt@@UEAA@XZ.c)
 */

FxInterrupt *__fastcall FxInterrupt::`vector deleting destructor'(FxInterrupt *this, char a2)
{
  FxInterrupt::~FxInterrupt(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
