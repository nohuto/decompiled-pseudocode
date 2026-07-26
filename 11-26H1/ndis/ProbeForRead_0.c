/*
 * XREFs of ProbeForRead_0 @ 0x14009104F
 * Callers:
 *     RtlCopyToUser @ 0x140138ED8 (RtlCopyToUser.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ProbeForRead_0(volatile void *Address, SIZE_T Length, ULONG Alignment)
{
  ProbeForRead(Address, Length, Alignment);
}
