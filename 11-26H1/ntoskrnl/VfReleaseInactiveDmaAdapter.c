/*
 * XREFs of VfReleaseInactiveDmaAdapter @ 0x140C2BB94
 * Callers:
 *     PpvDmaReleaseInactiveDmaAdapter @ 0x1405DF928 (PpvDmaReleaseInactiveDmaAdapter.c)
 *     VfGetDmaAdapter @ 0x140C2A8F0 (VfGetDmaAdapter.c)
 * Callees:
 *     VF_FIND_INACTIVE_ADAPTER_AND_REMOVE @ 0x140C2902C (VF_FIND_INACTIVE_ADAPTER_AND_REMOVE.c)
 *     ViReleaseDmaAdapter @ 0x140C2DB4C (ViReleaseDmaAdapter.c)
 */

_LIST_ENTRY *__fastcall VfReleaseInactiveDmaAdapter(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *i; // rbx
  _LIST_ENTRY *result; // rax

  for ( i = a1; ; a1 = i )
  {
    result = VF_FIND_INACTIVE_ADAPTER_AND_REMOVE(a1);
    if ( !result )
      break;
    ViReleaseDmaAdapter((__int64)result);
  }
  return result;
}
