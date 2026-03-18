/*
 * XREFs of ProbeForRead_0 @ 0x1400044A6
 * Callers:
 *     RtlCopyFromUser @ 0x140004420 (RtlCopyFromUser.c)
 *     RtlWriteULongToUser @ 0x14000D1F4 (RtlWriteULongToUser.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ProbeForRead_0(volatile void *Address, SIZE_T Length, ULONG Alignment)
{
  ProbeForRead(Address, Length, Alignment);
}
