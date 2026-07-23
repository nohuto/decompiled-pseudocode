/*
 * XREFs of VmSecureBackingMemory @ 0x140B41220
 * Callers:
 *     <none>
 * Callees:
 *     MmSecureVirtualMemoryEx @ 0x14077A5F0 (MmSecureVirtualMemoryEx.c)
 */

__int64 __fastcall VmSecureBackingMemory(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( (a1 & 0xFFF) == 0 && a2 && (a2 & 0xFFF) == 0 )
    return MmSecureVirtualMemoryEx(a1, a2, 1u, 14);
  return result;
}
