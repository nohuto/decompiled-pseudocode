/*
 * XREFs of HalpAcpiPmRegisterRead @ 0x14046B750
 * Callers:
 *     HaliHaltSystem @ 0x14057F6B0 (HaliHaltSystem.c)
 *     HalpCheckPowerButton @ 0x14057F750 (HalpCheckPowerButton.c)
 *     HalpShutdown @ 0x14057FA90 (HalpShutdown.c)
 *     HaliAcpiSleep @ 0x1405A2710 (HaliAcpiSleep.c)
 *     HalpAcpiPostSleep @ 0x140BECAA0 (HalpAcpiPostSleep.c)
 *     HalpDpPostReplace @ 0x140BEDF84 (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x140BEE240 (HalpDpPreReplace.c)
 *     HalpAcpiPreSleep @ 0x140C08988 (HalpAcpiPreSleep.c)
 *     HalpCheckFixedWakeSources @ 0x140C0D340 (HalpCheckFixedWakeSources.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpAcpiPmRegisterRead(int a1, unsigned int a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  char *v8; // rbx

  v6 = 48LL * a1;
  v7 = *(unsigned int *)((char *)&IommuInterfaceStateChangeCallbackPushLock.AbWaitObject + v6);
  v8 = (char *)&IommuInterfaceStateChangeCallbackPushLock.ThreadTimerDelay + v6;
  if ( (unsigned int)v7 > a4 )
    return 3221225507LL;
  guard_dispatch_icall_no_overrides(IommuInterfaceStateChangeCallbackPushLock.TracingPrivate[v6 / 8] + a2, v7);
  if ( a5 )
    *a5 = *((_DWORD *)v8 + 6);
  return 0LL;
}
