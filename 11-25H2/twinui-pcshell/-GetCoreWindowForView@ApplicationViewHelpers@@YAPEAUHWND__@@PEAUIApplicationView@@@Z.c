/*
 * XREFs of ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180074264
 * Callers:
 *     ?IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1800741A8 (-IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x180074750 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ApplicationViewHelpers::GetCoreWindowForView(
        ApplicationViewHelpers *this,
        struct IApplicationView *a2)
{
  struct IImmersiveApplication **v3; // r8
  __int64 v4; // rbx
  int (__fastcall *v5)(__int64, __int64, GUID *, __int64 *); // rdi
  __int64 *v6; // rax
  __int64 v7; // rbx
  __int64 v9; // [rsp+58h] [rbp+28h] BYREF
  __int64 v10; // [rsp+60h] [rbp+30h] BYREF
  __int64 v11; // [rsp+68h] [rbp+38h] BYREF

  v11 = 0LL;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  if ( ApplicationViewHelpers::GetApplicationFromView(this, (struct IApplicationView *)&v9, v3) >= 0 )
  {
    v4 = v9;
    v10 = 0LL;
    v5 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v9 + 24LL);
    v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v10);
    if ( v5(v4, 1LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, v6) >= 0 )
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 32LL))(v10, &v11);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  }
  v7 = v11;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  return v7;
}
