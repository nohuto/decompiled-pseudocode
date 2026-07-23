/*
 * XREFs of HalpKdReadPCIConfig @ 0x1405A8090
 * Callers:
 *     <none>
 * Callees:
 *     HaliPciInterfaceReadConfig @ 0x14042C850 (HaliPciInterfaceReadConfig.c)
 */

__int64 __fastcall HalpKdReadPCIConfig(unsigned int a1, unsigned int a2, _WORD *a3, int a4, int a5)
{
  ULONG_PTR v6; // [rsp+20h] [rbp-18h]
  size_t v7; // [rsp+28h] [rbp-10h]

  if ( *(_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.Lock
    && *(_BYTE *)(*(_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.Lock + 19LL) )
  {
    a1 |= *(unsigned __int16 *)(*(_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.Lock + 8LL) << 8;
  }
  LODWORD(v7) = a5;
  LODWORD(v6) = a4;
  return HaliPciInterfaceReadConfig(0LL, a1, a2, a3, v6, v7);
}
