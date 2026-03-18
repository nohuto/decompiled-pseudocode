/*
 * XREFs of ??_GFxCallbackMutexLock@@UEAAPEAXI@Z @ 0x140094DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x14002E4F4 (--3FxStump@@SAXPEAX@Z.c)
 *     ??1FxCallbackMutexLock@@UEAA@XZ @ 0x14003B9E0 (--1FxCallbackMutexLock@@UEAA@XZ.c)
 */

FxCallbackMutexLock *__fastcall FxCallbackMutexLock::`scalar deleting destructor'(
        FxCallbackMutexLock *this,
        unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  FxCallbackMutexLock::~FxCallbackMutexLock(this, a2);
  if ( (v2 & 1) != 0 )
    FxStump::operator delete(this);
  return this;
}
