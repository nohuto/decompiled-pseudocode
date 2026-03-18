/*
 * XREFs of ZwWriteVirtualMemory @ 0x140723B30
 * Callers:
 *     DifZwWriteVirtualMemoryWrapper @ 0x1406C0090 (DifZwWriteVirtualMemoryWrapper.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x140B6DC5C (SepAdtCopyToLsaSharedMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwWriteVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
