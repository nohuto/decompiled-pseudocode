/*
 * XREFs of ZwAllocateVirtualMemoryEx @ 0x14069C040
 * Callers:
 *     PspSetupReservedUserMappings @ 0x140A4428C (PspSetupReservedUserMappings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAllocateVirtualMemoryEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
