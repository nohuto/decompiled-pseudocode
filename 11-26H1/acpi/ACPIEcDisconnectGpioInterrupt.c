/*
 * XREFs of ACPIEcDisconnectGpioInterrupt @ 0x1400AEF30
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x14005FC00 (ACPIEcInitOpRegionHandler.c)
 *     ACPIEcDisconnectInterrupt @ 0x1400AEF7C (ACPIEcDisconnectInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIEcDisconnectGpioInterrupt(__int64 a1)
{
  __int64 result; // rax
  struct _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-18h] BYREF

  Parameters.ConnectionContext.Generic = *(PVOID *)(a1 + 2224);
  *(_QWORD *)&Parameters.Version = 1LL;
  IoDisconnectInterruptEx(&Parameters);
  result = 0LL;
  *(_QWORD *)(a1 + 2224) = 0LL;
  return result;
}
