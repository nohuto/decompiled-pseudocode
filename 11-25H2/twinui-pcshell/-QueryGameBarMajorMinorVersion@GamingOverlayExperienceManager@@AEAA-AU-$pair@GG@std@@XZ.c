/*
 * XREFs of ?QueryGameBarMajorMinorVersion@GamingOverlayExperienceManager@@AEAA?AU?$pair@GG@std@@XZ @ 0x18034D10C
 * Callers:
 *     ?GameBarSupportsDirectUriActivation@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x180344690 (-GameBarSupportsDirectUriActivation@GamingOverlayExperienceManager@@AEAA_NXZ.c)
 *     ?GameBarSupportsGamepadCommands@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x1803446E8 (-GameBarSupportsGamepadCommands@GamingOverlayExperienceManager@@AEAA_NXZ.c)
 * Callees:
 *     ??0?$initializer_list@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@std@@QEAA@PEBV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0@Z @ 0x180230458 (--0-$initializer_list@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _lambda_b6c2403f3db44623a1beeb65b351b949_::operator() @ 0x180342110 (_lambda_b6c2403f3db44623a1beeb65b351b949_--operator().c)
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
  v3 = std::initializer_list<std::vector<Windows::UI::Color>>::initializer_list<std::vector<Windows::UI::Color>>(
         &v5,
         (__int64)v6,
         (__int64)&v7);
  lambda_b6c2403f3db44623a1beeb65b351b949_::operator()((_WORD **)v3);
  result = a2;
  *a2 = v6[0];
  a2[1] = v7;
  return result;
}
