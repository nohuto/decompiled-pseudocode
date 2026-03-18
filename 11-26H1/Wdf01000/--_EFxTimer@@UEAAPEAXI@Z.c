/*
 * XREFs of ??_EFxTimer@@UEAAPEAXI@Z @ 0x14003B3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14002CA80 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxTimer@@UEAA@XZ @ 0x14003B408 (--1FxTimer@@UEAA@XZ.c)
 */

FxTimer *__fastcall FxTimer::`vector deleting destructor'(FxTimer *this, char a2)
{
  FxTimer::~FxTimer(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
