/*
 * XREFs of ProbeForRead_0 @ 0x1401C9244
 * Callers:
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 *     RtlCopyToUserFromUser @ 0x1402D20B8 (RtlCopyToUserFromUser.c)
 *     RtlReadUCharFromUser @ 0x1402D212C (RtlReadUCharFromUser.c)
 *     RtlReadULong64FromUser @ 0x1402D2164 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1402D21A0 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x1402D21DC (RtlReadUShortFromUser.c)
 *     RtlSetUserMemory @ 0x1402D2218 (RtlSetUserMemory.c)
 *     RtlWriteUCharToUser @ 0x1402D22D4 (RtlWriteUCharToUser.c)
 *     RtlWriteULong64ToUser @ 0x1402D231C (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1402D2364 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x1402D23A8 (RtlWriteUShortToUser.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ProbeForRead_0(volatile void *Address, SIZE_T Length, ULONG Alignment)
{
  ProbeForRead(Address, Length, Alignment);
}
