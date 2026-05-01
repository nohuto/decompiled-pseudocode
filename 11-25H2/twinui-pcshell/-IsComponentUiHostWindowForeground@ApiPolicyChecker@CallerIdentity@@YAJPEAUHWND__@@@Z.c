/*
 * XREFs of ?IsComponentUiHostWindowForeground@ApiPolicyChecker@CallerIdentity@@YAJPEAUHWND__@@@Z @ 0x1801EAF8C
 * Callers:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180075F98 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B86EC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CallerIdentity::ApiPolicyChecker::IsComponentUiHostWindowForeground(
        CallerIdentity::ApiPolicyChecker *this,
        HWND a2)
{
  unsigned int v2; // r14d
  bool v3; // si
  HRESULT v4; // eax
  int v5; // edx
  unsigned int v6; // r8d
  HSTRING v7; // rbx
  __int64 v8; // rbx
  int (__fastcall *v9)(__int64, _QWORD, __int64 *); // rdi
  HWND Ancestor; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15; // [rsp+28h] [rbp-48h] BYREF
  HWND hwnd; // [rsp+30h] [rbp-40h] BYREF
  int v17; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-18h] BYREF

  v15 = 0LL;
  string = 0LL;
  v2 = (unsigned int)this;
  v3 = 0;
  v4 = WindowsCreateStringReference(L"Windows.Internal.Shell.Popups.PopupClient", 0x29u, &hstringHeader, &string);
  if ( v4 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4, v5, v6);
    __debugbreak();
  }
  v7 = string;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v15);
  if ( (int)RoGetActivationFactory(v7, &GUID_b2571928_3f1d_4f6d_8930_fd9f7d5a69fc, &v15) >= 0 )
  {
    v8 = v15;
    v14 = 0LL;
    v9 = *(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v15 + 56LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v14);
    if ( v9(v8, v2, &v14) >= 0 )
    {
      hwnd = 0LL;
      v17 = 0;
      if ( (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v14 + 72LL))(v14, &hwnd) >= 0 )
      {
        Ancestor = 0LL;
        if ( HIDWORD(hwnd) )
          Ancestor = GetAncestor((HWND)HIDWORD(hwnd), 2u);
        v3 = GetForegroundWindow() == Ancestor;
      }
    }
    v11 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return !v3 ? 0x80070005 : 0;
}
