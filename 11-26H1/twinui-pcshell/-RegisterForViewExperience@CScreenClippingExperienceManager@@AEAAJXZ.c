/*
 * XREFs of ?RegisterForViewExperience@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1800D8188
 * Callers:
 *     ?RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1800D8284 (-RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x18002D1A0 (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1800BFF10 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     _anonymous_namespace_::GetScreenClippingAUMID @ 0x1802BC1B4 (_anonymous_namespace_--GetScreenClippingAUMID.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall CScreenClippingExperienceManager::RegisterForViewExperience(CScreenClippingExperienceManager *this)
{
  CScreenClippingExperienceManager *ScreenClippingAUMID; // rax
  __int64 v3; // rdx
  HRESULT v4; // eax
  int v5; // edx
  unsigned int v6; // r8d
  int v7; // eax
  unsigned int v8; // ebx
  volatile signed __int32 *v10; // [rsp+30h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-30h] BYREF
  HSTRING string; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  ScreenClippingAUMID = (CScreenClippingExperienceManager *)anonymous_namespace_::GetScreenClippingAUMID((winrt::hstring *)&v10);
  if ( (CScreenClippingExperienceManager *)((char *)this + 336) != ScreenClippingAUMID )
  {
    v3 = *(_QWORD *)ScreenClippingAUMID;
    *(_QWORD *)ScreenClippingAUMID = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::attach((_QWORD *)this + 42, v3);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
  string = 0LL;
  v4 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.ScreenClipping", 0x2Fu, &hstringHeader, &string);
  if ( v4 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4, v5, v6);
  v7 = CSingleViewShellExperience::RuntimeClassInitialize(
         (CScreenClippingExperienceManager *)((char *)this + 56),
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         *((struct IServiceProvider **)this + 33),
         *((HSTRING *)this + 42),
         string);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2F7,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
