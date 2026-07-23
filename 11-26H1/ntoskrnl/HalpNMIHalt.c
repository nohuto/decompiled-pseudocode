/*
 * XREFs of HalpNMIHalt @ 0x140581284
 * Callers:
 *     HalBugCheckSystem @ 0x14057CC60 (HalBugCheckSystem.c)
 *     HalHandleNMI @ 0x140580F40 (HalHandleNMI.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall __noreturn HalpNMIHalt(unsigned __int8 a1)
{
  LOBYTE(HalpDeviceBlockUnblockPushLock.Timer.DueTime.LowPart) = 1;
  HalpBugcheckInProgress = 1;
  KeBugCheckEx(0x80u, 0x4F4454uLL, a1, 0LL, 0LL);
}
