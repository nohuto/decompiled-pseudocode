/*
 * XREFs of ??0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z @ 0x140184324
 * Callers:
 *     RIMDeviceIoControl @ 0x14005E7A0 (RIMDeviceIoControl.c)
 *     ?_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ @ 0x140219D44 (-_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
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
