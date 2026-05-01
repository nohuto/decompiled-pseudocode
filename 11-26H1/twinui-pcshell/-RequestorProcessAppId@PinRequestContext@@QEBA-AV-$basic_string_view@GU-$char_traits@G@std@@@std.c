/*
 * XREFs of ?RequestorProcessAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1802C07E8
 * Callers:
 *     ?AreEquivalentPinSources@@YA_NV?$shared_ptr@VPinRequestContext@@@std@@0@Z @ 0x1805E4840 (-AreEquivalentPinSources@@YA_NV-$shared_ptr@VPinRequestContext@@@std@@0@Z.c)
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 */

_OWORD *__fastcall PinRequestContext::RequestorProcessAppId(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rcx
  _OWORD *result; // rax
  __int128 v4; // [rsp+20h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 16);
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
