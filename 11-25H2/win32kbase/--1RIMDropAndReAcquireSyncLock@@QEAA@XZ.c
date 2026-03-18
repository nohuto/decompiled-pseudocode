/*
 * XREFs of ??1RIMDropAndReAcquireSyncLock@@QEAA@XZ @ 0x14014A2FC
 * Callers:
 *     RIMDeviceIoControl @ 0x14017EA70 (RIMDeviceIoControl.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x140213D10 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     ?_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ @ 0x140214114 (-_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 */

void __fastcall RIMDropAndReAcquireSyncLock::~RIMDropAndReAcquireSyncLock(PVOID *this)
{
  PVOID v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    RIMLockExclusive((__int64)v2 + 104);
    ObfDereferenceObject(*this);
  }
}
