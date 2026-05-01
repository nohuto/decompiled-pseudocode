/*
 * XREFs of ?reserve@?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@QEAAX_K@Z @ 0x1803538A4
 * Callers:
 *     ?GetNonServiceProcessListAndIds@GamingOverlayExperienceManager@@AEAAXAEAV?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@K@Z @ 0x18034677C (-GetNonServiceProcessListAndIds@GamingOverlayExperienceManager@@AEAAXAEAV-$vector@U-$pair@KV-$ba.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$_Reallocate@$0A@@?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAAXAEA_K@Z @ 0x18033E7D8 (--$_Reallocate@$0A@@-$vector@U-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@s.c)
 */

unsigned __int64 __fastcall std::vector<std::pair<unsigned long,std::wstring>>::reserve(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF

  result = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(a1[2] - *a1) >> 3);
  v5 = a2;
  if ( a2 > result )
  {
    if ( a2 > 0x666666666666666LL )
      std::_Xlength_error("vector too long");
    return std::vector<std::pair<unsigned long,std::wstring>>::_Reallocate<0>(
             a1,
             (unsigned __int64 *)&v5,
             0xCCCCCCCCCCCCCCCDuLL,
             a4,
             v5);
  }
  return result;
}
