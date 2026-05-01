/*
 * XREFs of ?GetWindowingPolicy@ViewSizePreferenceHelpers@@YA?AW4AppModelPolicy_PolicyValue@@PEAUHWND__@@@Z @ 0x1802C7928
 * Callers:
 *     ?SetViewValueSet@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18010BA58 (-SetViewValueSet@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAUIPropertySet@Collections@Founda.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800B029C (--1-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800B718C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800D2B94 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x1804D5F40 (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewSizePreferenceHelpers::GetWindowingPolicy(HWND a1)
{
  unsigned int v1; // edi
  HANDLE v2; // rbx
  __int64 v3; // rdx
  __int64 v5; // [rsp+30h] [rbp-10h] BYREF
  void *v6; // [rsp+38h] [rbp-8h] BYREF
  DWORD dwProcessId; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+28h] BYREF
  void *TokenHandle; // [rsp+70h] [rbp+30h] BYREF
  __int64 v10; // [rsp+78h] [rbp+38h] BYREF

  v1 = 0;
  v8 = 0;
  if ( a1 )
  {
    dwProcessId = 0;
    GetWindowThreadProcessId(a1, &dwProcessId);
    TokenHandle = 0LL;
    v2 = OpenProcess(0x1000u, 0, dwProcessId);
    v6 = v2;
    if ( v2 )
    {
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        &TokenHandle,
        0LL);
      if ( OpenProcessToken(v2, 8u, &TokenHandle) )
      {
        v10 = 0LL;
        v5 = 0LL;
        AppModelPolicy_GetPolicy_Internal(TokenHandle, v3, &v8, &v5, &v10);
        v1 = v8;
      }
    }
    wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v6);
    wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
  }
  return v1;
}
