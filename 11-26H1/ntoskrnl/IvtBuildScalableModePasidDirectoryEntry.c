/*
 * XREFs of IvtBuildScalableModePasidDirectoryEntry @ 0x140510548
 * Callers:
 *     IvtInitializeScalableModePasidTables @ 0x1405A98F4 (IvtInitializeScalableModePasidTables.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 */

PHYSICAL_ADDRESS __fastcall IvtBuildScalableModePasidDirectoryEntry(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5)
{
  PHYSICAL_ADDRESS result; // rax

  *a5 = 1LL;
  result = MmGetPhysicalAddress(*(PVOID *)(a2 + 8LL * ((a3 >> 6) & 0x3FFF) + 64));
  *a5 ^= (result.QuadPart ^ *a5) & 0xFFFFFFFFFFFFF000uLL;
  return result;
}
