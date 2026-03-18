/*
 * XREFs of PopShutdownSystem @ 0x140BFDFD4
 * Callers:
 *     PopGracefulShutdown @ 0x140BF9180 (PopGracefulShutdown.c)
 * Callees:
 *     DbgUnLoadImageSymbols @ 0x1404FDB4C (DbgUnLoadImageSymbols.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     HalReturnToFirmware @ 0x14057F640 (HalReturnToFirmware.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1405B8380 (HvlConfigureMemoryZeroingOnReset.c)
 *     VslNotifyShutdown @ 0x1405C36C0 (VslNotifyShutdown.c)
 *     PopSetMemoryOverwriteRequestAction @ 0x140BF90C8 (PopSetMemoryOverwriteRequestAction.c)
 *     PopNotifyShutdownListener @ 0x140BFDF58 (PopNotifyShutdownListener.c)
 *     PopInvokeSystemStateHandler @ 0x140C04104 (PopInvokeSystemStateHandler.c)
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
  if ( (*(_WORD *)&stru_140F10828.WaitBlockFill11[100] & 0x800) == 0 || ((v2 - 4) & 0xFFFFFFFD) != 0 )
  {
    v3 = v2 - 4;
    if ( !v3 )
    {
      if ( stru_140F10070.ApcStateFill[24] )
        qword_140F107C8 = (__int64)PopShutdownHandler;
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
