/*
 * XREFs of ?RequestorImagePath@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1802C05B0
 * Callers:
 *     ??R_lambda_843bb4f9d601a8a476333f903392fa1f_@@QEAA@W4PinManagerRequestPinItemResult@PinManagerTelemetry@@J@Z @ 0x1805E40B4 (--R_lambda_843bb4f9d601a8a476333f903392fa1f_@@QEAA@W4PinManagerRequestPinItemResult@PinManagerTe.c)
 *     ?AreEquivalentPinSources@@YA_NV?$shared_ptr@VPinRequestContext@@@std@@0@Z @ 0x1805E4840 (-AreEquivalentPinSources@@YA_NV-$shared_ptr@VPinRequestContext@@@std@@0@Z.c)
 *     ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@PEFBU_ITEMIDLIST@@V?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x1805E50B4 (-Create@PinOperationContext@@SA-AV-$shared_ptr@VPinOperationContext@@@std@@V-$share_ea_1805E50B4.c)
 *     _anonymous_namespace_::DoRequestorAndForegroundPublisherMatch @ 0x1805E56A4 (_anonymous_namespace_--DoRequestorAndForegroundPublisherMatch.c)
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x1805EB83C (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 */

_OWORD *__fastcall PinRequestContext::RequestorImagePath(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rcx
  _OWORD *result; // rax
  __int128 v4; // [rsp+20h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    *(_QWORD *)&v4 = v2;
    *((_QWORD *)&v4 + 1) = std::_WChar_traits<wchar_t>::length(v2);
  }
  else
  {
    v4 = 0uLL;
  }
  result = a2;
  *a2 = v4;
  return result;
}
