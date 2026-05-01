/*
 * XREFs of ?IsGlobalProfileConfiguredInStore@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@EEAA_NXZ @ 0x180220660
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_715f26a8cf03ec1bdf3d6747fabae5e9_::operator() @ 0x1800F9D2C (_lambda_715f26a8cf03ec1bdf3d6747fabae5e9_--operator().c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 */

bool __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2::IsGlobalProfileConfiguredInStore(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2 *this)
{
  char v1; // bl
  _BYTE *v3[3]; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v4 = 0;
  _lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(v3, this, &v4);
  if ( (int)lambda_715f26a8cf03ec1bdf3d6747fabae5e9_::operator()(v3) >= 0 )
    return v4 != 0;
  return v1;
}
