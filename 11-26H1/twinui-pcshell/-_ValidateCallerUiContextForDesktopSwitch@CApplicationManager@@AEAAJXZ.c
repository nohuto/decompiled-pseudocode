/*
 * XREFs of ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x1801FB0D8
 * Callers:
 *     ?_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ @ 0x1801FB070 (-_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ.c)
 *     ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x1802973E0 (-SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_.c)
 * Callees:
 *     ?IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z @ 0x18002E6B4 (-IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??1?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800F5760 (--1-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details.c)
 *     ?GetProcessHandleForClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@KAEAV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@1@@Z @ 0x18028FD4C (-GetProcessHandleForClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@KAEAV-$unique_any_t@V-$unique_s.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x1802B6B50 (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_ValidateCallerUiContextForDesktopSwitch(CApplicationManager *this, __int64 a2)
{
  int v2; // edi
  int ProcessHandleForClientOfObject_nothrow; // eax
  signed int v4; // ebx
  unsigned __int16 **v5; // rdx
  const unsigned __int16 *v6; // rdx
  LPCWCH lpString2; // [rsp+20h] [rbp-20h] BYREF
  __int64 v9; // [rsp+28h] [rbp-18h]
  __int64 v10; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  void *v12; // [rsp+58h] [rbp+18h] BYREF
  __int64 v13; // [rsp+60h] [rbp+20h] BYREF

  v2 = 0;
  v12 = 0LL;
  ProcessHandleForClientOfObject_nothrow = wil::GetProcessHandleForClientOfObject_nothrow(this, a2, &v12);
  v4 = ProcessHandleForClientOfObject_nothrow;
  if ( ProcessHandleForClientOfObject_nothrow >= 0 )
  {
    v13 = 0LL;
    if ( (unsigned int)GetProcessUIContextInformation(v12, &v13) )
    {
      v4 = 0;
      v2 = v13;
    }
    else
    {
      v4 = -2147024890;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10,
      (int)"onecore\\internal\\shell\\inc\\CallerIdentityForClient.h",
      (const char *)(unsigned int)ProcessHandleForClientOfObject_nothrow);
  }
  wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v12);
  if ( v4 >= 0 )
  {
    v4 = v2 != 2 ? 0x80070005 : 0;
    lpString2 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    if ( v2 != 2 )
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
      v9 = -1LL;
      v10 = -1LL;
      if ( (int)CallerIdentity::GetCallingProcessAppId((CallerIdentity *)&lpString2, v5) >= 0 )
        v4 = CallerIdentity::IsShellExperienceAppId(lpString2, v6) == 0 ? 0x80070005 : 0;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
  }
  return (unsigned int)v4;
}
