/*
 * XREFs of ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x14007EAA8
 * Callers:
 *     ??1FxCallbackSpinLock@@UEAA@XZ @ 0x14003B9A0 (--1FxCallbackSpinLock@@UEAA@XZ.c)
 *     ??1FxCallbackMutexLock@@UEAA@XZ @ 0x14003B9E0 (--1FxCallbackMutexLock@@UEAA@XZ.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x140081EF0 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z @ 0x140094DD8 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z.c)
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x14002E4F4 (--3FxStump@@SAXPEAX@Z.c)
 *     ??1FxVerifierLock@@QEAA@XZ @ 0x140083DE8 (--1FxVerifierLock@@QEAA@XZ.c)
 */

FxVerifierLock *__fastcall FxVerifierLock::`scalar deleting destructor'(FxVerifierLock *this)
{
  FxVerifierLock::~FxVerifierLock(this);
  FxStump::operator delete(this);
  return this;
}
