/*
 * XREFs of RtlDecodeSystemPointer @ 0x1800DAA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlDecodeSystemPointer(PVOID Ptr)
{
  return (PVOID)(__ROR8__(Ptr, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
}
