/*
 * XREFs of ??0collection_version@impl@winrt@@QEAA@XZ @ 0x1800DA59C
 * Callers:
 *     ??0?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@QEAA@XZ @ 0x1800DA35C (--0-$iterable_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResiz.c)
 * Callees:
 *     ??$?0I$0A@@?$atomic@I@std@@QEAA@XZ @ 0x1800D972C (--$-0I$0A@@-$atomic@I@std@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::collection_version::collection_version(winrt::impl::collection_version *this)
{
  __int64 v1; // rcx

  std::atomic<unsigned int>::atomic<unsigned int>(this);
  return v1;
}
