/*
 * XREFs of HalpReleaseSecondaryIcEntryShared @ 0x140430218
 * Callers:
 *     HalpDisableSecondaryInterrupt @ 0x140430154 (HalpDisableSecondaryInterrupt.c)
 *     HalpInterruptRequestSecondaryInterrupt @ 0x1405920B0 (HalpInterruptRequestSecondaryInterrupt.c)
 *     HalpUnregisterSecondaryIcInterface @ 0x140592240 (HalpUnregisterSecondaryIcInterface.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x140B49A2C (HalpQueryPrimaryInterruptInformation.c)
 *     HalpEnableSecondaryInterrupt @ 0x140B62114 (HalpEnableSecondaryInterrupt.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     HalpInsertSecondarySignalList @ 0x140591EFC (HalpInsertSecondarySignalList.c)
 */

LONG __fastcall HalpReleaseSecondaryIcEntryShared(__int64 a1, __int64 a2)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 112));
  if ( (_BYTE)a2 )
  {
    if ( result == 1 )
    {
      result = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 116), 0, 0);
      if ( result )
      {
        if ( KeGetCurrentIrql() <= 2u )
          return KeSetEvent((PRKEVENT)(a1 + 120), 0, 0);
        else
          return HalpInsertSecondarySignalList(a1, a2, 0LL);
      }
    }
  }
  return result;
}
