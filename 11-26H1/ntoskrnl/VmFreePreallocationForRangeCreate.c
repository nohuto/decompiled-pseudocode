/*
 * XREFs of VmFreePreallocationForRangeCreate @ 0x14081C090
 * Callers:
 *     <none>
 * Callees:
 *     VmpFreeMemoryRanges @ 0x140B0037C (VmpFreeMemoryRanges.c)
 *     VmpDecodePreallocationRangeHandle @ 0x140B39CDC (VmpDecodePreallocationRangeHandle.c)
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
