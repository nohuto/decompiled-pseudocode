/*
 * XREFs of VmUnsecureBackingMemory @ 0x140B55550
 * Callers:
 *     <none>
 * Callees:
 *     MmUnsecureVirtualMemory @ 0x140992B70 (MmUnsecureVirtualMemory.c)
 */

void __fastcall VmUnsecureBackingMemory(void *a1)
{
  MmUnsecureVirtualMemory(a1);
}
