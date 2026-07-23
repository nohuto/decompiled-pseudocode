/*
 * XREFs of PopShutdownSystem @ 0x140C04024
 * Callers:
 *     PopGracefulShutdown @ 0x140BFF180 (PopGracefulShutdown.c)
 * Callees:
 *     DbgUnLoadImageSymbols @ 0x1404F708C (DbgUnLoadImageSymbols.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalReturnToFirmware @ 0x140581B60 (HalReturnToFirmware.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1405BABF0 (HvlConfigureMemoryZeroingOnReset.c)
 *     VslNotifyShutdown @ 0x1405C5F30 (VslNotifyShutdown.c)
 *     PopSetMemoryOverwriteRequestAction @ 0x140BFF0C8 (PopSetMemoryOverwriteRequestAction.c)
 *     PopNotifyShutdownListener @ 0x140C03FA4 (PopNotifyShutdownListener.c)
 *     PopInvokeSystemStateHandler @ 0x140C0A314 (PopInvokeSystemStateHandler.c)
 */

void __fastcall __noreturn PopShutdownSystem(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v3; // ebx
  int v4; // ebx

  v2 = a1;
  PopNotifyShutdownListener(a1, a2);
  VslNotifyShutdown(0);
  if ( HvlHypervisorConnected )
    HvlConfigureMemoryZeroingOnReset(0);
  PopSetMemoryOverwriteRequestAction();
  DbgUnLoadImageSymbols(0LL, -1LL, 0LL);
  if ( (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 0x800) == 0 || ((v2 - 4) & 0xFFFFFFFD) != 0 )
  {
    v3 = v2 - 4;
    if ( !v3 )
    {
      if ( PopShutdownPowerOffPolicy )
        PpmIdlePolicyLock.WaitBlock[0].SparePtr = PopShutdownHandler;
      goto LABEL_12;
    }
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
LABEL_13:
        HalReturnToFirmware(3);
LABEL_12:
      PopInvokeSystemStateHandler(4LL);
      HalReturnToFirmware(1);
    }
  }
  PopInvokeSystemStateHandler(5LL);
  goto LABEL_13;
}
