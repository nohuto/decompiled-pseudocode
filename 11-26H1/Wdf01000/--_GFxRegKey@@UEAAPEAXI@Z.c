/*
 * XREFs of ??_GFxRegKey@@UEAAPEAXI@Z @ 0x140052150
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14002CA80 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxRegKey@@UEAA@XZ @ 0x140052188 (--1FxRegKey@@UEAA@XZ.c)
 */

FxRegKey *__fastcall FxRegKey::`scalar deleting destructor'(FxRegKey *this, char a2)
{
  FxRegKey::~FxRegKey(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
