/*
 * XREFs of ProbeForRead_0 @ 0x1401A4EE6
 * Callers:
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     RtlCopyToUser @ 0x1402C9008 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x1402C906C (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x1402C90A8 (RtlWriteULong64ToUser.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ProbeForRead_0(volatile void *Address, SIZE_T Length, ULONG Alignment)
{
  ProbeForRead(Address, Length, Alignment);
}
