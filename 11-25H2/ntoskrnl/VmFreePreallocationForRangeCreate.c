/*
 * XREFs of VmFreePreallocationForRangeCreate @ 0x14078F830
 * Callers:
 *     <none>
 * Callees:
 *     VmpDecodePreallocationRangeHandle @ 0x14078FE1C (VmpDecodePreallocationRangeHandle.c)
 *     VmpFreeMemoryRanges @ 0x140A5BB24 (VmpFreeMemoryRanges.c)
 */

__int64 __fastcall VmFreePreallocationForRangeCreate(__int64 a1)
{
  struct _LIST_ENTRY *Blink; // rcx
  void *v3; // rax

  Blink = KeGetCurrentThread()->ApcState.Process[3].ProcessListEntry.Blink;
  if ( !Blink )
    NT_ASSERT("0");
  v3 = (void *)VmpDecodePreallocationRangeHandle(Blink, a1);
  return VmpFreeMemoryRanges(v3);
}
