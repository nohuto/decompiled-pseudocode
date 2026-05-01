/*
 * XREFs of ??$?RPEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@_lambda_bda40f208add80671c741db162d8e880_@@QEBA?A_P$$QEAPEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@$$QEAH@Z @ 0x18033B33C
 * Callers:
 *     ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_bda40f208add80671c741db162d8e880_@@$0?0PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@EAAJPEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@3@H@Z@Details@WRL@Microsoft@@UEAAJPEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Z @ 0x1803482D0 (-Invoke@-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft_ea_1803482D0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1801AB028 (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall _lambda_bda40f208add80671c741db162d8e880_::operator()<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,int>(
        Microsoft::WRL::AgileRef *a1,
        _QWORD *a2,
        unsigned int *a3)
{
  int v5; // ebx
  void *v7; // [rsp+20h] [rbp-28h] BYREF

  v7 = 0LL;
  v5 = Microsoft::WRL::AgileRef::InternalResolve(a1, &GUID_5d12e0c1_6673_5064_b480_7b7a9f07cba1, &v7);
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)v7 + 24LL))(v7, *a2, *a3);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  return (unsigned int)v5;
}
