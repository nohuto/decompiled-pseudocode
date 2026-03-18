/*
 * XREFs of VfUtilAddressRangeRemoveCheckEmpty @ 0x140B731D8
 * Callers:
 *     ViPendingCompleteAfterWait @ 0x140B81D48 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140B94004 (VfIrpDatabaseEntryReleaseLock.c)
 *     IovpCompleteRequest2 @ 0x140B96E04 (IovpCompleteRequest2.c)
 *     IovFreeIrpPrivate @ 0x140B96F50 (IovFreeIrpPrivate.c)
 *     VfPendingMoreProcessingRequired @ 0x140B97020 (VfPendingMoreProcessingRequired.c)
 * Callees:
 *     VfUtilAddressRangeRemove @ 0x140B731AC (VfUtilAddressRangeRemove.c)
 */

__int64 __fastcall VfUtilAddressRangeRemoveCheckEmpty(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 != *a1 )
    return VfUtilAddressRangeRemove(a1, a2, 208LL);
  result = a2 + 208;
  if ( a2 + 208 != a1[1] )
    return VfUtilAddressRangeRemove(a1, a2, 208LL);
  *a1 = 0LL;
  a1[1] = 0LL;
  return result;
}
