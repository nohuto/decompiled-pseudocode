/*
 * XREFs of ?CreateFileMappingName@FileMappingHelpers@Util@@QEAA?AUhstring@winrt@@QEAUHWND__@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEBU34@@Z @ 0x18064AF90
 * Callers:
 *     ?ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA?AUIBuffer@Streams@Storage@Windows@winrt@@QEAUHWND__@@AEBUhstring@7@@Z @ 0x18064F3BC (-ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA-AUIBuffer@Streams@Storage@Windows@winr.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801A5654 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??B?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@1@XZ @ 0x1801B5C88 (--B-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string_view@GU-$c.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@0@Z @ 0x18029CB34 (--Hwinrt@@YA-AUhstring@0@AEBU10@0@Z.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@PEBG@Z @ 0x1802A7974 (--Hwinrt@@YA-AUhstring@0@AEBU10@PEBG@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$_Integral_to_string@GK@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@K@Z @ 0x180465D0C (--$_Integral_to_string@GK@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@0@K@.c)
 *     ??$_Integral_to_string@G_K@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@_K@Z @ 0x180645180 (--$_Integral_to_string@G_K@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@0@_.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18064A63C (--Hwinrt@@YA-AUhstring@0@AEBU10@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 */

// Hidden C++ exception states: #wind=5
struct winrt::impl::shared_hstring_header *__fastcall Util::FileMappingHelpers::CreateFileMappingName(
        _BYTE *a1,
        struct winrt::impl::shared_hstring_header *a2,
        unsigned int a3,
        __int64 a4,
        __int64 *a5)
{
  __int64 v7; // rdi
  __int64 *v8; // rbx
  __int64 *v9; // rax
  volatile signed __int32 *v10; // rax
  __int64 *v11; // rax
  struct winrt::impl::shared_hstring_header *v13[2]; // [rsp+20h] [rbp-51h] BYREF
  volatile signed __int32 *v14; // [rsp+30h] [rbp-41h] BYREF
  volatile signed __int32 *v15; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v17[4]; // [rsp+50h] [rbp-21h] BYREF
  _QWORD v18[4]; // [rsp+70h] [rbp-1h] BYREF

  v13[0] = a2;
  if ( *a1 )
  {
    v7 = *(_QWORD *)a4;
    std::_Integral_to_string<unsigned short,unsigned long>((__int64)v17, a3);
    std::wstring::operator std::basic_string_view<unsigned short>(v17, v16);
    v8 = (__int64 *)winrt::hstring::hstring(v13, (__int64)v16);
    std::_Integral_to_string<unsigned short,unsigned __int64>((__int64)v18, *(_QWORD *)(a4 + 8));
    v9 = (__int64 *)winrt::operator+((volatile signed __int32 *)&v15, (__int64)a5, v18);
    v10 = winrt::operator+((volatile signed __int32 *)&v14, v9, v8);
    winrt::operator+((volatile signed __int32 *)a2, (__int64)v10, v7);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v14);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
    std::wstring::_Tidy_deallocate(v18);
  }
  else
  {
    std::_Integral_to_string<unsigned short,unsigned long>((__int64)v17, a3);
    std::wstring::operator std::basic_string_view<unsigned short>(v17, v16);
    v11 = (__int64 *)winrt::hstring::hstring(v13, (__int64)v16);
    winrt::operator+((volatile signed __int32 *)a2, a5, v11);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v13);
  std::wstring::_Tidy_deallocate(v17);
  return a2;
}
