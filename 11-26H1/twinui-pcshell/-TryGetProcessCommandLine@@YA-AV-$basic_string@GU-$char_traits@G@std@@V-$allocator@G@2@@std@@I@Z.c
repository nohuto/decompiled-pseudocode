/*
 * XREFs of ?TryGetProcessCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@Z @ 0x180577DA0
 * Callers:
 *     ?GetAppIdForSpecialCategoryApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGI@Z @ 0x1805769D0 (-GetAppIdForSpecialCategoryApp@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180033808 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800C1DD0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG_K@Z @ 0x1801F7600 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TryGetProcessCommandLine(__int64 a1, DWORD a2)
{
  char *v3; // rbx
  const void **v4; // rax
  const void **v5; // rdi
  ULONG ProcessInformationLength; // [rsp+30h] [rbp-58h] BYREF
  void *v8[3]; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v9[4]; // [rsp+50h] [rbp-38h] BYREF

  v3 = (char *)OpenProcess(0x1000u, 0, a2);
  v8[0] = v3;
  if ( (unsigned __int64)(v3 - 1) > 0xFFFFFFFFFFFFFFFDuLL
    || (ProcessInformationLength = 0,
        NtQueryInformationProcess(v3, ProcessImageFileMapping|ProcessUserModeIOPL, 0LL, 0, &ProcessInformationLength) != -1073741820) )
  {
LABEL_8:
    std::wstring::wstring(a1);
    goto LABEL_9;
  }
  v4 = (const void **)LocalAlloc(0x40u, ProcessInformationLength);
  v5 = v4;
  v8[2] = v4;
  if ( !v4
    || NtQueryInformationProcess(v3, ProcessImageFileMapping|ProcessUserModeIOPL, v4, ProcessInformationLength, 0LL) )
  {
    if ( v5 )
      LocalFree(v5);
    goto LABEL_8;
  }
  std::wstring::wstring((__int64)v9, v5[1], (unsigned __int64)*(unsigned __int16 *)v5 >> 1);
  std::wstring::wstring(a1, (__int64)v9);
  std::wstring::_Tidy_deallocate(v9);
  LocalFree(v5);
LABEL_9:
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(v8);
  return a1;
}
