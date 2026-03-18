/*
 * XREFs of MmCopyVirtualMemory @ 0x140A21C90
 * Callers:
 *     PsQueryProcessCommandLine @ 0x1404B54B0 (PsQueryProcessCommandLine.c)
 *     KiTpWriteUmMemory @ 0x1405FC898 (KiTpWriteUmMemory.c)
 * Callees:
 *     MiCopyVirtualMemory @ 0x140A22370 (MiCopyVirtualMemory.c)
 */

__int64 __fastcall MmCopyVirtualMemory(int a1, int a2, int a3, int a4, __int64 a5, char a6, __int64 a7)
{
  return MiCopyVirtualMemory(a1, a2, a3, a4, a5, a6, a7, 0);
}
