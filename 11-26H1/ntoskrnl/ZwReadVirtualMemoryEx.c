/*
 * XREFs of ZwReadVirtualMemoryEx @ 0x1407262F0
 * Callers:
 *     MmCopyMemory @ 0x140339450 (MmCopyMemory.c)
 *     DifZwReadVirtualMemoryExWrapper @ 0x1406B60C0 (DifZwReadVirtualMemoryExWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwReadVirtualMemoryEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
