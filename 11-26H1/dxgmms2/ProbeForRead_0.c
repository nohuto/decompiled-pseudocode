/*
 * XREFs of ProbeForRead_0 @ 0x14004CD22
 * Callers:
 *     RtlCopyFromUser @ 0x14004CC90 (RtlCopyFromUser.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ProbeForRead_0(volatile void *Address, SIZE_T Length, ULONG Alignment)
{
  ProbeForRead(Address, Length, Alignment);
}
