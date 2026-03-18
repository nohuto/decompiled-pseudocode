/*
 * XREFs of HalpAcpiPmRegisterAvailable @ 0x14046B360
 * Callers:
 *     HalpAcpiPostSleep @ 0x140BECAA0 (HalpAcpiPostSleep.c)
 *     HalpDpPostReplace @ 0x140BEDF84 (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x140BEE240 (HalpDpPreReplace.c)
 *     HalpAcpiPreSleep @ 0x140C08988 (HalpAcpiPreSleep.c)
 *     HalpCheckFixedWakeSources @ 0x140C0D340 (HalpCheckFixedWakeSources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAcpiPmRegisterAvailable(int a1)
{
  __int64 result; // rax

  result = 3221225659LL;
  if ( *((_BYTE *)&IommuInterfaceStateChangeCallbackPushLock.ThreadTimerDelay + 48 * a1) )
    return 0LL;
  return result;
}
