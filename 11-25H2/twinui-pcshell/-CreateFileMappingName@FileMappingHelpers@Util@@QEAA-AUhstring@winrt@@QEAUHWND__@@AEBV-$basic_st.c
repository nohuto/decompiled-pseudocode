/*
 * XREFs of ?CreateFileMappingName@FileMappingHelpers@Util@@QEAA?AUhstring@winrt@@QEAUHWND__@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEBU34@@Z @ 0x180625218
 * Callers:
 *     ?ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA?AUIBuffer@Streams@Storage@Windows@winrt@@QEAUHWND__@@AEBUhstring@7@@Z @ 0x1806298F0 (-ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA-AUIBuffer@Streams@Storage@Windows@winr.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800AD0B4 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??B?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@1@XZ @ 0x1801BD538 (--B-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string_view@GU-$c.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@0@Z @ 0x1802A392C (--Hwinrt@@YA-AUhstring@0@AEBU10@0@Z.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@PEBG@Z @ 0x1802AB088 (--Hwinrt@@YA-AUhstring@0@AEBU10@PEBG@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@K@Z @ 0x18046A0A0 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@K@Z.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1806248F0 (--Hwinrt@@YA-AUhstring@0@AEBU10@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@_K@Z @ 0x18062F428 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
struct winrt::impl::shared_hstring_header *__fastcall Util::FileMappingHelpers::CreateFileMappingName(
        _BYTE *a1,
        struct winrt::impl::shared_hstring_header *a2,
        unsigned int a3,
        __int64 *a4,
        __int64 *a5)
{
  __int64 v7; // rdi
  char **v8; // rax
  __int64 *v9; // rbx
  _QWORD *v10; // rax
  __int64 *v11; // rax
  __int64 *v12; // rax
  char **v13; // rax
  __int64 *v14; // rax
  struct winrt::impl::shared_hstring_header *v16[2]; // [rsp+20h] [rbp-51h] BYREF
  volatile signed __int32 *v17; // [rsp+30h] [rbp-41h] BYREF
  volatile signed __int32 *v18; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-31h] BYREF
  void *v20[4]; // [rsp+50h] [rbp-21h] BYREF
  void *v21[4]; // [rsp+70h] [rbp-1h] BYREF

  v16[0] = a2;
  if ( *a1 )
  {
    v7 = *a4;
    v8 = std::to_wstring((char **)v20, a3);
    std::wstring::operator std::basic_string_view<unsigned short>(v8, v19);
    v9 = (__int64 *)winrt::hstring::hstring(v16, (__int64)v19);
    v10 = (_QWORD *)std::to_wstring(v21, a4[1]);
    v11 = (__int64 *)winrt::operator+((volatile signed __int32 *)&v18, (__int64)a5, v10);
    v12 = (__int64 *)winrt::operator+((volatile signed __int32 *)&v17, v11, v9);
    winrt::operator+((volatile signed __int32 *)a2, v12, v7);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v17);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v18);
    std::wstring::_Tidy_deallocate(v21);
  }
  else
  {
    v13 = std::to_wstring((char **)v20, a3);
    std::wstring::operator std::basic_string_view<unsigned short>(v13, v19);
    v14 = (__int64 *)winrt::hstring::hstring(v16, (__int64)v19);
    winrt::operator+((volatile signed __int32 *)a2, a5, v14);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v16);
  std::wstring::_Tidy_deallocate(v20);
  return a2;
}
