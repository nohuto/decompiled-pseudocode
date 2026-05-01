/*
 * XREFs of ?First@?$SimpleVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@345@@Z @ 0x180418A60
 * Callers:
 *     <none>
 * Callees:
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     ??$Do@V_lambda_59dce73b2c8b9037abf7c0a6fa7076cc_@@V_lambda_8b1d0033280602c03791bb8470462811_@@@?$InvalidationChecker@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEBV_lambda_59dce73b2c8b9037abf7c0a6fa7076cc_@@AEBV_lambda_8b1d0033280602c03791bb8470462811_@@@Z @ 0x18040EBD4 (--$Do@V_lambda_59dce73b2c8b9037abf7c0a6fa7076cc_@@V_lambda_8b1d0033280602c03791bb8470462811_@@@-.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,XWinRT::IntVersionTag,1>::First(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 **v6; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  *a2 = 0LL;
  v6 = &v7;
  v2 = _lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(v5, a1 - 16, (__int64)&v7);
  return XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_59dce73b2c8b9037abf7c0a6fa7076cc_,_lambda_8b1d0033280602c03791bb8470462811_>(
           (int *)(v3 + 80),
           *(_QWORD *)(v3 + 72),
           (_QWORD **)v2,
           &v6);
}
