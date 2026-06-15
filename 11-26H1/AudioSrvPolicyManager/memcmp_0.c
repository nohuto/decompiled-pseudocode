/*
 * XREFs of memcmp_0 @ 0x180030A04
 * Callers:
 *     _anonymous_namespace_::__std_search_impl__anonymous_namespace_::_Find_traits_2_unsigned_short_ @ 0x18002F1D0 (_anonymous_namespace_--__std_search_impl__anonymous_namespace_--_Find_traits_2_unsigned_short_.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x1800325A4 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ??0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ @ 0x18004B2B0 (--0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp_0(const void *Buf1, const void *Buf2, size_t Size)
{
  return memcmp(Buf1, Buf2, Size);
}
