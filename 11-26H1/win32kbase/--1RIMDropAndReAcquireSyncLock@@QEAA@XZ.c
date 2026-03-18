/*
 * XREFs of ??1RIMDropAndReAcquireSyncLock@@QEAA@XZ @ 0x140185E40
 * Callers:
 *     ?_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ @ 0x140219D44 (-_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
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
