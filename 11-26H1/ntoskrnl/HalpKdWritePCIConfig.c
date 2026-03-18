/*
 * XREFs of HalpKdWritePCIConfig @ 0x1405A58D0
 * Callers:
 *     <none>
 * Callees:
 *     HaliPciInterfaceWriteConfig @ 0x14043A4B0 (HaliPciInterfaceWriteConfig.c)
 */

__int64 __fastcall HalpKdWritePCIConfig(unsigned int a1, unsigned int a2, __int64 a3, int a4, unsigned int a5)
{
  if ( HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink
    && BYTE3(HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink[1].Flink) )
  {
    a1 |= LOWORD(HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink->Blink) << 8;
  }
  return HaliPciInterfaceWriteConfig(0LL, a1, a2, a3, a4, a5);
}
