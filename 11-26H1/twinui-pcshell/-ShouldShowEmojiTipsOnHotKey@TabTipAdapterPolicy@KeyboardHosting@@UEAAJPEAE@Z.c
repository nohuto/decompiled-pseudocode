/*
 * XREFs of ?ShouldShowEmojiTipsOnHotKey@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAE@Z @ 0x180485010
 * Callers:
 *     <none>
 * Callees:
 *     ?_Equal@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_NQEBG@Z @ 0x1800303F0 (-_Equal@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_NQEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180030E44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::ShouldShowEmojiTipsOnHotKey(
        KeyboardHosting::TabTipAdapterPolicy *this,
        unsigned __int8 *a2)
{
  unsigned __int8 v3; // bl
  _QWORD v5[4]; // [rsp+20h] [rbp-38h] BYREF

  std::wstring::wstring((__int64)v5, (_QWORD *)this + 114);
  v3 = 0;
  if ( std::wstring::_Equal((__int64)v5, (__int64)L"Chrome")
    || std::wstring::_Equal((__int64)v5, (__int64)L"MSEdge")
    || std::wstring::_Equal((__int64)v5, (__int64)L"MSEdgeDev") )
  {
    v3 = 1;
  }
  *a2 = v3;
  std::wstring::_Tidy_deallocate(v5);
  return 0LL;
}
