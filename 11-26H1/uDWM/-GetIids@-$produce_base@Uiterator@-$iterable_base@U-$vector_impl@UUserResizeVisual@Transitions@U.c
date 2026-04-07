/*
 * XREFs of ?GetIids@?$produce_base@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800D30E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUTrailPoint@CTouchDragVisual@@PEAPEAU12@@std@@YAPEAPEAUTrailPoint@CTouchDragVisual@@PEAPEAU12@00@Z @ 0x18008D528 (--$_Copy_memmove@PEAPEAUTrailPoint@CTouchDragVisual@@PEAPEAU12@@std@@YAPEAPEAUTrailPoint@CTouchD.c)
 *     WINRT_IMPL_CoTaskMemAlloc @ 0x18008F27A (WINRT_IMPL_CoTaskMemAlloc.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::produce_base<winrt::iterable_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Udwm::Transitions::UserResizeVisual>,void>::GetIids(
        __int64 a1,
        unsigned int *a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // ebx
  void *v8; // rax
  unsigned int v10; // [rsp+20h] [rbp-18h] BYREF
  void *v11; // [rsp+28h] [rbp-10h]

  v5 = (a1 - 16) & -(__int64)(a1 != 0);
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 32LL))(v5, &v10);
  v6 = v10;
  v7 = 0;
  if ( v10 )
  {
    *a2 = v10;
    v8 = WINRT_IMPL_CoTaskMemAlloc(16LL * v6);
    *a3 = v8;
    if ( v8 )
      std::_Copy_memmove<CTouchDragVisual::TrailPoint * *,CTouchDragVisual::TrailPoint * *>(
        v11,
        (__int64)v11 + 16 * v10,
        v8);
    else
      return (unsigned int)-2147024882;
  }
  else
  {
    *a2 = 0;
    *a3 = 0LL;
  }
  return v7;
}
