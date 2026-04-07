/*
 * XREFs of ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008C934
 * Callers:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z @ 0x180091C70 (-MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z.c)
 *     ??$to_hstring@PEBD$0A@@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x1800D0974 (--$to_hstring@PEBD$0A@@winrt@@YA-AUhstring@0@AEBQEBD@Z.c)
 *     ?NonDelegatingGetRuntimeClassName@?$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x1800D115C (-NonDelegatingGetRuntimeClassName@-$root_implements@UWindowJointResizeTransition@implementation@.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1800D26DC (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@im.c)
 *     ?NonDelegatingGetRuntimeClassName@?$root_implements@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x1800D327C (-NonDelegatingGetRuntimeClassName@-$root_implements@Uiterator@-$iterable_base@U-$vector_impl@UUs.c)
 *     ?NonDelegatingGetRuntimeClassName@?$root_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x1800D8D90 (-NonDelegatingGetRuntimeClassName@-$root_implements@UTransitionState@implementation@Transitions@.c)
 *     _winrt::to_hresult_::_1_::catch$15 @ 0x1800E928D (_winrt--to_hresult_--_1_--catch$15.c)
 *     _winrt::to_hresult_::_1_::catch$16 @ 0x1800E9339 (_winrt--to_hresult_--_1_--catch$16.c)
 *     _winrt::to_hresult_::_1_::catch$17 @ 0x1800E93E8 (_winrt--to_hresult_--_1_--catch$17.c)
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x18002FBE8 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     WINRT_IMPL_HeapFree @ 0x18008F043 (WINRT_IMPL_HeapFree.c)
 *     WINRT_IMPL_GetProcessHeap @ 0x18008F073 (WINRT_IMPL_GetProcessHeap.c)
 */

void __fastcall winrt::handle_type<winrt::impl::hstring_traits>::close(void **a1)
{
  void *v1; // rbx
  HANDLE ProcessHeap; // rax

  v1 = *a1;
  if ( *a1 )
  {
    if ( !(unsigned int)winrt::impl::atomic_ref_count::operator--((__int64)v1 + 24) )
    {
      ProcessHeap = WINRT_IMPL_GetProcessHeap();
      WINRT_IMPL_HeapFree(ProcessHeap, 0, v1);
    }
    *a1 = 0LL;
  }
}
