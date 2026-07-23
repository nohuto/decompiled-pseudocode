/*
 * XREFs of VfUtilAddressRangeRemoveCheckEmpty @ 0x140C276C8
 * Callers:
 *     ViPendingCompleteAfterWait @ 0x140C361C4 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140C3FD80 (VfIrpDatabaseEntryReleaseLock.c)
 *     IovpCompleteRequest2 @ 0x140C4B8AC (IovpCompleteRequest2.c)
 *     IovFreeIrpPrivate @ 0x140C4B9D0 (IovFreeIrpPrivate.c)
 *     VfPendingMoreProcessingRequired @ 0x140C4BF10 (VfPendingMoreProcessingRequired.c)
 * Callees:
 *     VfUtilAddressRangeRemove @ 0x140C27694 (VfUtilAddressRangeRemove.c)
 */

__int64 __fastcall VfUtilAddressRangeRemoveCheckEmpty(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 != *a1 )
    return VfUtilAddressRangeRemove(a1, a2, 208LL);
  result = a1[1];
  if ( a2 + 208 != result )
    return VfUtilAddressRangeRemove(a1, a2, 208LL);
  *a1 = 0LL;
  a1[1] = 0LL;
  return result;
}
