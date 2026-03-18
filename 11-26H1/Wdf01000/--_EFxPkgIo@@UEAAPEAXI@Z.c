/*
 * XREFs of ??_EFxPkgIo@@UEAAPEAXI@Z @ 0x14003A3A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14002CA80 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxPkgIo@@UEAA@XZ @ 0x14003A3D8 (--1FxPkgIo@@UEAA@XZ.c)
 */

FxPkgIo *__fastcall FxPkgIo::`vector deleting destructor'(FxPkgIo *this, char a2)
{
  FxPkgIo::~FxPkgIo(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
