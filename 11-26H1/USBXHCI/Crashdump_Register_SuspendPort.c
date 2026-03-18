/*
 * XREFs of Crashdump_Register_SuspendPort @ 0x1400528E8
 * Callers:
 *     Crashdump_Cleanup @ 0x1400506A0 (Crashdump_Cleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Crashdump_Register_SuspendPort(__int64 a1, int a2)
{
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Register_SuspendPort: begin: port %u\n", a2);
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 16 * ((unsigned int)(a2 - 1) + 64LL)) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 16 * ((unsigned int)(a2 - 1) + 64LL)) & 0xE00C200 | 0x60;
  _InterlockedOr(v5, 0);
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Register_SuspendPort: end 0x%X\n", 0);
  return 0LL;
}
