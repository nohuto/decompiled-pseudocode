/*
 * XREFs of Uart16550SetBaudCommon @ 0x140699C60
 * Callers:
 *     Uart16550SetBaud @ 0x140699C40 (Uart16550SetBaud.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall Uart16550SetBaudCommon(__int64 a1, int a2)
{
  char result; // al

  if ( !a1 || !*(_QWORD *)a1 || !a2 )
    return 0;
  guard_dispatch_icall_no_overrides(a1);
  guard_dispatch_icall_no_overrides(a1);
  guard_dispatch_icall_no_overrides(a1);
  guard_dispatch_icall_no_overrides(a1);
  guard_dispatch_icall_no_overrides(a1);
  result = 1;
  *(_DWORD *)(a1 + 8) = a2;
  return result;
}
