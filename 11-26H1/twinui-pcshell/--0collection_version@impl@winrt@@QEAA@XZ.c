/*
 * XREFs of ??0collection_version@impl@winrt@@QEAA@XZ @ 0x1800271D4
 * Callers:
 *     ??0?$iterable_base@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UWindowId@UI@Windows@3@Ucollection_version@23@@winrt@@QEAA@XZ @ 0x1800271BC (--0-$iterable_base@U-$vector_impl@UWindowId@UI@Windows@winrt@@V-$vector@UWindowId@UI@Windows@win.c)
 * Callees:
 *     ??$?0I$0A@@?$atomic@I@std@@QEAA@XZ @ 0x18028E7A4 (--$-0I$0A@@-$atomic@I@std@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::collection_version::collection_version(winrt::impl::collection_version *this)
{
  __int64 v1; // rcx

  std::atomic<unsigned int>::atomic<unsigned int>(this);
  return v1;
}
