/*
 * XREFs of Uart16550InitializePortCommon @ 0x140699974
 * Callers:
 *     IaLpssInitializePort @ 0x1406993B0 (IaLpssInitializePort.c)
 *     IaLpssSetPowerD0 @ 0x140699650 (IaLpssSetPowerD0.c)
 *     Uart16550InitializePort @ 0x140699950 (Uart16550InitializePort.c)
 *     Uart16550LegacyInitializePort @ 0x140699A30 (Uart16550LegacyInitializePort.c)
 *     Uart16550MmInitializePort @ 0x140699AA0 (Uart16550MmInitializePort.c)
 * Callees:
 *     Uart16550SetBaud @ 0x140699C40 (Uart16550SetBaud.c)
 *     UartpSetAccess @ 0x14069A38C (UartpSetAccess.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall Uart16550InitializePortCommon(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  char v5; // al
  char v6; // r10
  __int64 v7; // rbx

  v5 = a4;
  v6 = a3;
  LOBYTE(a4) = a5;
  v7 = a2;
  LOBYTE(a3) = v5;
  LOBYTE(a2) = v6;
  UartpSetAccess(v7, a2, a3, a4);
  guard_dispatch_icall_no_overrides(v7);
  guard_dispatch_icall_no_overrides(v7);
  guard_dispatch_icall_no_overrides(v7);
  guard_dispatch_icall_no_overrides(v7);
  Uart16550SetBaud(v7, *(unsigned int *)(v7 + 8));
  guard_dispatch_icall_no_overrides(v7);
  guard_dispatch_icall_no_overrides(v7);
  if ( (guard_dispatch_icall_no_overrides(v7) & 0x40) != 0 )
    *(_WORD *)(v7 + 12) |= 2u;
  return 1;
}
