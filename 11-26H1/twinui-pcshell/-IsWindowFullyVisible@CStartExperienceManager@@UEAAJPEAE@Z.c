/*
 * XREFs of ?IsWindowFullyVisible@CStartExperienceManager@@UEAAJPEAE@Z @ 0x1801BEE90
 * Callers:
 *     <none>
 * Callees:
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     _lambda_0be4a072d54d679db2d5c07ef8ed037a_::operator() @ 0x180681824 (_lambda_0be4a072d54d679db2d5c07ef8ed037a_--operator().c)
 */

__int64 __fastcall CStartExperienceManager::IsWindowFullyVisible(CStartExperienceManager *this, unsigned __int8 *a2)
{
  unsigned __int8 v3; // bl
  __int64 v5; // rax
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 80) != 2
    || (v3 = 1,
        v7 = 1,
        v5 = _lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
               v6,
               (char *)this + 280,
               &v7),
        lambda_0be4a072d54d679db2d5c07ef8ed037a_::operator()(v5),
        v7) )
  {
    v3 = 0;
  }
  *a2 = v3;
  return 0LL;
}
