/*
 * XREFs of HalpKdWritePCIConfig @ 0x1405A80E0
 * Callers:
 *     <none>
 * Callees:
 *     HaliPciInterfaceWriteConfig @ 0x14042CD60 (HaliPciInterfaceWriteConfig.c)
 */

__int64 __fastcall HalpKdWritePCIConfig(unsigned int a1, unsigned int a2, __int64 a3, int a4, unsigned int a5)
{
  if ( *(_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.Lock
    && *(_BYTE *)(*(_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.Lock + 19LL) )
  {
    a1 |= *(unsigned __int16 *)(*(_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.Lock + 8LL) << 8;
  }
  return HaliPciInterfaceWriteConfig(0LL, a1, a2, a3, a4, a5);
}
