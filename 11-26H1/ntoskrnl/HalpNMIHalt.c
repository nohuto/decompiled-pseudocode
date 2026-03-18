/*
 * XREFs of HalpNMIHalt @ 0x14057ED64
 * Callers:
 *     HalBugCheckSystem @ 0x14057A730 (HalBugCheckSystem.c)
 *     HalHandleNMI @ 0x14057EA20 (HalHandleNMI.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn HalpNMIHalt(unsigned __int8 a1)
{
  LOBYTE(HalpDeviceBlockUnblockPushLock.Timer.TimerListEntry.Flink) = 1;
  HalpBugcheckInProgress = 1;
  KeBugCheckEx(0x80u, 0x4F4454uLL, a1, 0LL, 0LL);
}
