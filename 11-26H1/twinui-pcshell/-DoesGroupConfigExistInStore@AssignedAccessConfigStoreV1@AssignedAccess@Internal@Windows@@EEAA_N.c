/*
 * XREFs of ?DoesGroupConfigExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_NXZ @ 0x1801B5FF0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_7a32b90734f372e87ecd5e5e89c702f7_::operator() @ 0x1801B6038 (_lambda_7a32b90734f372e87ecd5e5e89c702f7_--operator().c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 */

bool __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::DoesGroupConfigExistInStore(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1 *this)
{
  char v1; // bl
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v4 = 0;
  _lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(v3, this, &v4);
  if ( (int)lambda_7a32b90734f372e87ecd5e5e89c702f7_::operator()(v3) >= 0 )
    return v4 != 0;
  return v1;
}
