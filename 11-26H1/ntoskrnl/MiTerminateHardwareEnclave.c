/*
 * XREFs of MiTerminateHardwareEnclave @ 0x140C08014
 * Callers:
 *     MiTerminateEnclave @ 0x14087D03C (MiTerminateEnclave.c)
 *     MiDeleteEnclavePages @ 0x140C07CE8 (MiDeleteEnclavePages.c)
 * Callees:
 *     MiDecommitHardwareEnclavePages @ 0x140342EB4 (MiDecommitHardwareEnclavePages.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 */

void __fastcall MiTerminateHardwareEnclave(__int64 a1, __int64 a2)
{
  unsigned int v4; // r10d
  __int64 v5; // r11
  unsigned __int64 PteAddress; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // r9

  MiGetPteAddress(((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) | 0xFFF);
  PteAddress = MiGetPteAddress((v5 | ((unsigned __int64)v4 << 32)) << 12);
  MiDecommitHardwareEnclavePages(a1, v7, PteAddress, v8, 1);
  *(_DWORD *)(a2 + 72) |= 8u;
}
