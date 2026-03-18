/*
 * XREFs of VfReleaseInactiveDmaAdapter @ 0x140C25B84
 * Callers:
 *     PpvDmaReleaseInactiveDmaAdapter @ 0x1405DCFC0 (PpvDmaReleaseInactiveDmaAdapter.c)
 *     VfGetDmaAdapter @ 0x140C248E0 (VfGetDmaAdapter.c)
 * Callees:
 *     VF_FIND_INACTIVE_ADAPTER_AND_REMOVE @ 0x140C2301C (VF_FIND_INACTIVE_ADAPTER_AND_REMOVE.c)
 *     ViReleaseDmaAdapter @ 0x140C27B3C (ViReleaseDmaAdapter.c)
 */

struct _LIST_ENTRY *__fastcall VfReleaseInactiveDmaAdapter(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *i; // rbx
  struct _LIST_ENTRY *result; // rax

  for ( i = a1; ; a1 = i )
  {
    result = VF_FIND_INACTIVE_ADAPTER_AND_REMOVE(a1);
    if ( !result )
      break;
    ViReleaseDmaAdapter((__int64)result);
  }
  return result;
}
