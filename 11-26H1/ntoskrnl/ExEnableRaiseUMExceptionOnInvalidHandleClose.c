/*
 * XREFs of ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x140AEA4E8
 * Callers:
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 * Callees:
 *     ExpUnlockHandleTableExclusive @ 0x1403151FC (ExpUnlockHandleTableExclusive.c)
 *     ExpLockHandleTableExclusive @ 0x1404839F0 (ExpLockHandleTableExclusive.c)
 */

__int64 __fastcall ExEnableRaiseUMExceptionOnInvalidHandleClose(
        __int64 a1,
        int a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rsi

  CurrentThread = KeGetCurrentThread();
  ExpLockHandleTableExclusive(a1, (__int64)CurrentThread, a3, a4);
  if ( a2 )
  {
    if ( a2 == 1 )
      *(_BYTE *)(a1 + 44) |= 0x10u;
  }
  else
  {
    *(_BYTE *)(a1 + 44) &= ~0x10u;
  }
  return ExpUnlockHandleTableExclusive(a1, (__int64)CurrentThread);
}
