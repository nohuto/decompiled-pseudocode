/*
 * XREFs of ??_EFxCallbackSpinLock@@UEAAPEAXI@Z @ 0x14003BE60
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x14002E4F4 (--3FxStump@@SAXPEAX@Z.c)
 *     ??1FxCallbackSpinLock@@UEAA@XZ @ 0x14003B9A0 (--1FxCallbackSpinLock@@UEAA@XZ.c)
 */

FxCallbackSpinLock *__fastcall FxCallbackSpinLock::`vector deleting destructor'(
        FxCallbackSpinLock *this,
        unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  FxCallbackSpinLock::~FxCallbackSpinLock(this, a2);
  if ( (v2 & 1) != 0 )
    FxStump::operator delete(this);
  return this;
}
