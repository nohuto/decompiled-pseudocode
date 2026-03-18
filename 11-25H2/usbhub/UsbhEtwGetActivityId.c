/*
 * XREFs of UsbhEtwGetActivityId @ 0x14003642C
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x14002F8C0 (UsbhFdoSystemPowerState.c)
 *     UsbhAcquirePowerContext @ 0x14003180C (UsbhAcquirePowerContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhEtwGetActivityId(__int64 a1, __int64 a2)
{
  if ( a1 && g_IoGetActivityIdIrp )
    return g_IoGetActivityIdIrp(a1, a2);
  else
    return 3221225473LL;
}
