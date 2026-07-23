/*
 * XREFs of Uart16550InitializePortCommon @ 0x140726824
 * Callers:
 *     IaLpssInitializePort @ 0x140726270 (IaLpssInitializePort.c)
 *     IaLpssSetPowerD0 @ 0x140726520 (IaLpssSetPowerD0.c)
 *     Uart16550InitializePort @ 0x140726800 (Uart16550InitializePort.c)
 *     Uart16550LegacyInitializePort @ 0x1407268E0 (Uart16550LegacyInitializePort.c)
 *     Uart16550MmInitializePort @ 0x140726950 (Uart16550MmInitializePort.c)
 * Callees:
 *     Uart16550SetBaud @ 0x140726AD0 (Uart16550SetBaud.c)
 *     UartpSetAccess @ 0x14072720C (UartpSetAccess.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall Uart16550InitializePortCommon(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  char v5; // al
  char v6; // r10
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx

  v5 = a4;
  v6 = a3;
  LOBYTE(a4) = a5;
  v7 = a2;
  LOBYTE(a3) = v5;
  LOBYTE(a2) = v6;
  UartpSetAccess(v7, a2, a3, a4);
  LOBYTE(v8) = 3;
  guard_dispatch_icall_no_overrides(v7, v8);
  LOBYTE(v9) = 3;
  guard_dispatch_icall_no_overrides(v7, v9);
  LOBYTE(v10) = 1;
  guard_dispatch_icall_no_overrides(v7, v10);
  LOBYTE(v11) = 2;
  guard_dispatch_icall_no_overrides(v7, v11);
  Uart16550SetBaud(v7, *(unsigned int *)(v7 + 8));
  LOBYTE(v12) = 2;
  guard_dispatch_icall_no_overrides(v7, v12);
  LOBYTE(v13) = 4;
  guard_dispatch_icall_no_overrides(v7, v13);
  LOBYTE(v14) = 6;
  if ( (guard_dispatch_icall_no_overrides(v7, v14) & 0x40) != 0 )
    *(_WORD *)(v7 + 12) |= 2u;
  return 1;
}
