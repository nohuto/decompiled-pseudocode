/*
 * XREFs of ?TryOpenFileMappingHandleForWindow@Util@@YA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@_JAEBUhstring@winrt@@@Z @ 0x18062C548
 * Callers:
 *     ?ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA?AUIBuffer@Streams@Storage@Windows@winrt@@QEAUHWND__@@AEBUhstring@7@@Z @ 0x1806298F0 (-ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA-AUIBuffer@Streams@Storage@Windows@winr.c)
 *     Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1 @ 0x18062BE80 (Util--TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180065104 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B0C98 (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800B718C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ??Hwinrt@@YA?AUhstring@0@PEBGAEBU10@@Z @ 0x180150860 (--Hwinrt@@YA-AUhstring@0@PEBGAEBU10@@Z.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x180198578 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?GetProcessNamedObjectPath@UserAwareProcessIdentity@@YAJKEPEAU_UNICODE_STRING@@@Z @ 0x180627880 (-GetProcessNamedObjectPath@UserAwareProcessIdentity@@YAJKEPEAU_UNICODE_STRING@@@Z.c)
 *     ?IsProcessAppContainer@UserAwareProcessIdentity@@YAJKPEA_N@Z @ 0x180628630 (-IsProcessAppContainer@UserAwareProcessIdentity@@YAJKPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=5
volatile signed __int32 *__fastcall Util::TryOpenFileMappingHandleForWindow(
        volatile signed __int32 *a1,
        HWND a2,
        __int64 *a3)
{
  void *v6; // rbx
  char v7; // si
  bool *v8; // r8
  const char *v9; // r9
  int IsProcessAppContainer; // eax
  __int64 v11; // rdx
  struct _UNICODE_STRING *v12; // r9
  __int64 *v13; // rax
  __int64 *v14; // rax
  int ProcessNamedObjectPath; // eax
  const WCHAR *v16; // r8
  unsigned int v18; // [rsp+20h] [rbp-59h] BYREF
  DWORD dwProcessId[2]; // [rsp+28h] [rbp-51h] BYREF
  void *v20; // [rsp+30h] [rbp-49h] BYREF
  volatile signed __int32 *v21; // [rsp+38h] [rbp-41h] BYREF
  void *Src; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-31h]
  struct _UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-29h] BYREF
  struct _UNICODE_STRING *p_UnicodeString; // [rsp+68h] [rbp-11h]
  char v26; // [rsp+70h] [rbp-9h]
  LPCWSTR lpName[2]; // [rsp+78h] [rbp-1h] BYREF
  __m128i si128; // [rsp+88h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v21 = a1;
  v6 = 0LL;
  v20 = 0LL;
  *(_OWORD *)lpName = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(lpName[0]) = 0;
  v7 = 1;
  LOBYTE(v18) = 1;
  dwProcessId[0] = 0;
  if ( GetWindowThreadProcessId(a2, dwProcessId) )
  {
    IsProcessAppContainer = UserAwareProcessIdentity::IsProcessAppContainer(dwProcessId[0], (bool *)&v18, v8);
    if ( IsProcessAppContainer >= 0 )
    {
      v7 = v18;
      goto LABEL_7;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7F,
      (int)"onecoreuap\\internal\\shell\\inc\\FileMappingHelpers.h",
      (const char *)(unsigned int)IsProcessAppContainer);
LABEL_18:
    *(_QWORD *)a1 = v6;
    v20 = 0LL;
    goto LABEL_19;
  }
  if ( (int)wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0x7D,
              (unsigned int)"onecoreuap\\internal\\shell\\inc\\FileMappingHelpers.h",
              v9) < 0 )
    goto LABEL_18;
LABEL_7:
  if ( !v7 )
  {
    winrt::hstring::operator std::basic_string_view<unsigned short>(a3, &Src);
    std::wstring::assign((void **)lpName, Src, v23);
    goto LABEL_15;
  }
  UnicodeString = 0LL;
  dwProcessId[0] = 0;
  if ( GetWindowThreadProcessId(a2, dwProcessId) )
  {
    ProcessNamedObjectPath = UserAwareProcessIdentity::GetProcessNamedObjectPath(
                               dwProcessId[0],
                               v11,
                               (__int64)&UnicodeString,
                               v12);
    if ( ProcessNamedObjectPath >= 0 )
      goto LABEL_10;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8D,
      (int)"onecoreuap\\internal\\shell\\inc\\FileMappingHelpers.h",
      (const char *)(unsigned int)ProcessNamedObjectPath);
  }
  else if ( (int)wil::details::in1diag3::Return_GetLastError(
                   retaddr,
                   (void *)0x8B,
                   (unsigned int)"onecoreuap\\internal\\shell\\inc\\FileMappingHelpers.h",
                   (const char *)v12) >= 0 )
  {
LABEL_10:
    p_UnicodeString = &UnicodeString;
    v26 = 1;
    v13 = (__int64 *)winrt::operator+((__int64)&v21, (__int64)L"\\", a3);
    v14 = (__int64 *)winrt::operator+((__int64)dwProcessId, (__int64)UnicodeString.Buffer, v13);
    winrt::hstring::operator std::basic_string_view<unsigned short>(v14, &Src);
    std::wstring::assign((void **)lpName, Src, v23);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)dwProcessId);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v21);
    RtlFreeUnicodeString(&UnicodeString);
LABEL_15:
    v16 = (const WCHAR *)lpName;
    if ( si128.m128i_i64[1] > 7uLL )
      v16 = lpName[0];
    *(_QWORD *)dwProcessId = OpenFileMappingW(0xF001Fu, 1, v16);
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=(
      &v20,
      (void **)dwProcessId);
    wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)dwProcessId);
    v6 = v20;
    goto LABEL_18;
  }
  *(_QWORD *)a1 = 0LL;
LABEL_19:
  std::wstring::_Tidy_deallocate((void **)lpName);
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v20);
  return a1;
}
