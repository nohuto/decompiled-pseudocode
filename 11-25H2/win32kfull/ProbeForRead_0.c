/*
 * XREFs of ProbeForRead_0 @ 0x140270914
 * Callers:
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     RtlCopyToUser @ 0x1403D30E8 (RtlCopyToUser.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ProbeForRead_0(volatile void *Address, SIZE_T Length, ULONG Alignment)
{
  ProbeForRead(Address, Length, Alignment);
}
