/*
 * XREFs of ??0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z @ 0x140149E18
 * Callers:
 *     RIMDeviceIoControl @ 0x14017EA70 (RIMDeviceIoControl.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x140213D10 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     ?_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ @ 0x140214114 (-_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 */

RIMDropAndReAcquireSyncLock *__fastcall RIMDropAndReAcquireSyncLock::RIMDropAndReAcquireSyncLock(
        RIMDropAndReAcquireSyncLock *this,
        struct RawInputManagerObject *a2)
{
  *(_QWORD *)this = 0LL;
  if ( *((struct _KTHREAD **)a2 + 14) == KeGetCurrentThread() )
  {
    *(_QWORD *)this = a2;
    ObReferenceObjectByPointer(a2, 3u, ExRawInputManagerObjectType, 1);
    RIMUnlockExclusive(*(_QWORD *)this + 104LL);
  }
  return this;
}
