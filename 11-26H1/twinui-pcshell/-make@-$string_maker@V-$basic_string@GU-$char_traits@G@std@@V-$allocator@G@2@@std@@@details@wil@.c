/*
 * XREFs of ?make@?$string_maker@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@QEAAJPEBG_K@Z @ 0x180032D0C
 * Callers:
 *     ??$AdaptFixedSizeToAllocatedResult@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x1800332BC (--$AdaptFixedSizeToAllocatedResult@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ??$str_build_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAPEBG_K@Z @ 0x1803D93E0 (--$str_build_nothrow@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wil@.c)
 *     ??$str_vprintf_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEAPEAD@Z @ 0x1803D9708 (--$str_vprintf_nothrow@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wi.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031E08 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??$_Construct@$0A@G@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXG_K@Z @ 0x180032C58 (--$_Construct@$0A@G@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXG_K@Z.c)
 *     ?_Take_contents@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXAEAV12@@Z @ 0x1800336B0 (-_Take_contents@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXAEAV12@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::string_maker<std::wstring>::make(_QWORD *a1, const void *a2, unsigned __int64 a3)
{
  _OWORD *v4; // rdi
  char v5; // bl
  __int64 result; // rax
  _OWORD v7[2]; // [rsp+28h] [rbp-60h] BYREF
  _OWORD v8[2]; // [rsp+48h] [rbp-40h] BYREF

  try
  {
    if ( a2 )
    {
      memset(v8, 0, sizeof(v8));
      std::wstring::_Construct<1,unsigned short const *>((char **)v8, a2, a3);
      v4 = v8;
      v5 = 1;
    }
    else
    {
      memset(v7, 0, sizeof(v7));
      std::wstring::_Construct<0,unsigned short>((__int64)v7, 0, a3);
      v4 = v7;
      v5 = 2;
    }
    if ( a1 != (_QWORD *)v4 )
    {
      std::wstring::_Tidy_deallocate(a1);
      std::wstring::_Take_contents(a1, v4);
    }
    if ( (v5 & 2) != 0 )
    {
      v5 &= ~2u;
      std::wstring::_Tidy_deallocate(v7);
    }
    if ( (v5 & 1) != 0 )
      std::wstring::_Tidy_deallocate(v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return 2147942414LL;
  }
  return result;
}
