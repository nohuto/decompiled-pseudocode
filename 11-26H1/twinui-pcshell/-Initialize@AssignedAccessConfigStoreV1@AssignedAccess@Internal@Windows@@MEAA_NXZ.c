/*
 * XREFs of ?Initialize@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@MEAA_NXZ @ 0x1800F7090
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_53a10622b8c115a42f3ae5bcca2992b2_::operator() @ 0x1800F70D4 (_lambda_53a10622b8c115a42f3ae5bcca2992b2_--operator().c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 */

bool __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::Initialize(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1 *this)
{
  char v1; // bl
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v4 = 0;
  _lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(v3, this, &v4);
  if ( (int)lambda_53a10622b8c115a42f3ae5bcca2992b2_::operator()(v3) >= 0 )
    return v4 != 0;
  return v1;
}
