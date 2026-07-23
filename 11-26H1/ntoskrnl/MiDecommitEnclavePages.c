/*
 * XREFs of MiDecommitEnclavePages @ 0x140A05608
 * Callers:
 *     MiFreeVirtualMemory @ 0x140A05050 (MiFreeVirtualMemory.c)
 * Callees:
 *     MiDecommitHardwareEnclavePages @ 0x140342EB4 (MiDecommitHardwareEnclavePages.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 */

__int64 __fastcall MiDecommitEnclavePages(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5)
{
  unsigned __int64 PteAddress; // rax
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r10

  if ( (*(_DWORD *)(a2 + 72) & 1) == 0 )
  {
    if ( (a5 & 0x10000000) != 0 )
      return 3221225494LL;
    return 3221225632LL;
  }
  if ( (*(_DWORD *)(a2 + 80) & 1) == 0 )
    return 3221225632LL;
  PteAddress = MiGetPteAddress(a3);
  MiDecommitHardwareEnclavePages(v9, v8, PteAddress, PteAddress + 8 * ((v7 >> 12) - 1 + ((v7 & 0xFFF) != 0)), 0);
  return 0LL;
}
