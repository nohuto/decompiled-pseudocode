/*
 * XREFs of HalpKdReadPCIConfig @ 0x1405A5880
 * Callers:
 *     <none>
 * Callees:
 *     HaliPciInterfaceReadConfig @ 0x140439FA0 (HaliPciInterfaceReadConfig.c)
 */

__int64 __fastcall HalpKdReadPCIConfig(unsigned int a1, unsigned int a2, _WORD *a3, int a4, int a5)
{
  ULONG_PTR v6; // [rsp+20h] [rbp-18h]
  size_t v7; // [rsp+28h] [rbp-10h]

  if ( HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink
    && BYTE3(HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink[1].Flink) )
  {
    a1 |= LOWORD(HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink->Blink) << 8;
  }
  LODWORD(v7) = a5;
  LODWORD(v6) = a4;
  return HaliPciInterfaceReadConfig(0LL, a1, a2, a3, v6, v7);
}
