/*
 * XREFs of HalpAcpiPmRegisterAvailable @ 0x140464AE0
 * Callers:
 *     HalpAcpiPostSleep @ 0x140BF2AA0 (HalpAcpiPostSleep.c)
 *     HalpDpPostReplace @ 0x140BF3F84 (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x140BF4240 (HalpDpPreReplace.c)
 *     HalpAcpiPreSleep @ 0x140C0EB98 (HalpAcpiPreSleep.c)
 *     HalpCheckFixedWakeSources @ 0x140C13550 (HalpCheckFixedWakeSources.c)
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
