/*
 * XREFs of MmCopyVirtualMemory @ 0x140A2B2B0
 * Callers:
 *     PsQueryProcessCommandLine @ 0x1404AE810 (PsQueryProcessCommandLine.c)
 *     KiTpWriteUmMemory @ 0x1405FF2E8 (KiTpWriteUmMemory.c)
 * Callees:
 *     MiCopyVirtualMemory @ 0x140A2B990 (MiCopyVirtualMemory.c)
 */

__int64 __fastcall MmCopyVirtualMemory(int a1, int a2, int a3, int a4, __int64 a5, char a6, __int64 a7)
{
  return MiCopyVirtualMemory(a1, a2, a3, a4, a5, a6, a7, 0);
}
