/*
 * XREFs of ZwAllocateVirtualMemoryEx @ 0x1407242F0
 * Callers:
 *     DifZwAllocateVirtualMemoryExWrapper @ 0x140699D30 (DifZwAllocateVirtualMemoryExWrapper.c)
 *     PspSetupReservedUserMappings @ 0x140ADE30C (PspSetupReservedUserMappings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAllocateVirtualMemoryEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
