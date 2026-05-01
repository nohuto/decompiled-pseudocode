/*
 * XREFs of ?QueryGameBarMajorMinorVersion@GamingOverlayExperienceManager@@AEAA?AU?$pair@GG@std@@XZ @ 0x1803511E4
 * Callers:
 *     ?GameBarSupportsDirectUriActivation@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x18034733C (-GameBarSupportsDirectUriActivation@GamingOverlayExperienceManager@@AEAA_NXZ.c)
 *     ?GameBarSupportsGamepadCommands@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x180347394 (-GameBarSupportsGamepadCommands@GamingOverlayExperienceManager@@AEAA_NXZ.c)
 * Callees:
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _lambda_df5a6dce8e36ce53da929a0e2f03a030_::operator() @ 0x180344AA4 (_lambda_df5a6dce8e36ce53da929a0e2f03a030_--operator().c)
 */

_WORD *__fastcall GamingOverlayExperienceManager::QueryGameBarMajorMinorVersion(__int64 a1, _WORD *a2)
{
  _QWORD *v3; // rax
  _WORD *result; // rax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  _WORD v6[2]; // [rsp+30h] [rbp-18h] BYREF
  __int16 v7; // [rsp+34h] [rbp-14h] BYREF

  v6[0] = 0;
  v7 = 0;
  v3 = _lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
         &v5,
         (__int64)v6,
         (__int64)&v7);
  lambda_df5a6dce8e36ce53da929a0e2f03a030_::operator()((_WORD **)v3);
  result = a2;
  *a2 = v6[0];
  a2[1] = v7;
  return result;
}
