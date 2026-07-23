/*
 * XREFs of HalpAcpiPmRegisterWrite @ 0x14044EF30
 * Callers:
 *     HalpPowerWriteResetCommand @ 0x140581D44 (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x140581FB0 (HalpShutdown.c)
 *     HalpCheckWakeupTimeAndAdjust @ 0x140596EB4 (HalpCheckWakeupTimeAndAdjust.c)
 *     HaliAcpiSleep @ 0x1405A4F20 (HaliAcpiSleep.c)
 *     HalpAcpiPostSleep @ 0x140BF2AA0 (HalpAcpiPostSleep.c)
 *     HalpDpPostReplace @ 0x140BF3F84 (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x140BF4240 (HalpDpPreReplace.c)
 *     HalpAcpiPreSleep @ 0x140C0EB98 (HalpAcpiPreSleep.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpAcpiPmRegisterWrite(int a1, unsigned int a2, __int64 a3, unsigned int a4, _DWORD *a5)
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
