/*
 * XREFs of HalpReleaseSecondaryIcEntryShared @ 0x140423128
 * Callers:
 *     HalpDisableSecondaryInterrupt @ 0x140423064 (HalpDisableSecondaryInterrupt.c)
 *     HalpInterruptRequestSecondaryInterrupt @ 0x14058F930 (HalpInterruptRequestSecondaryInterrupt.c)
 *     HalpUnregisterSecondaryIcInterface @ 0x14058FAC0 (HalpUnregisterSecondaryIcInterface.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x140B47C9C (HalpQueryPrimaryInterruptInformation.c)
 *     HalpEnableSecondaryInterrupt @ 0x140B5EF94 (HalpEnableSecondaryInterrupt.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     HalpInsertSecondarySignalList @ 0x14058F77C (HalpInsertSecondarySignalList.c)
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
