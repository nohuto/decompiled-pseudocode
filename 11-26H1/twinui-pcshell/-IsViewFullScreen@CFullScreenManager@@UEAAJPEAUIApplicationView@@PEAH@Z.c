/*
 * XREFs of ?IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1800472C0
 * Callers:
 *     ?EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x180322C70 (-EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FUL.c)
 *     ?ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x180322F20 (-ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800476E4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18008BE90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180177550 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHand.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFullScreenManager::IsViewFullScreen(CFullScreenManager *this, struct IApplicationView *a2, int *a3)
{
  int v3; // esi
  __int64 v5; // rax
  int (__fastcall *v8)(struct IApplicationView *, __int64 *); // rbx
  IUnknown *v9; // rbx
  HRESULT v10; // eax
  void *v11; // rbx
  __int64 (__fastcall *v12)(void *, struct IApplicationView *, __int64 *); // rdi
  int v13; // eax
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  char v21; // [rsp+68h] [rbp+38h] BYREF
  void *ppvOut; // [rsp+70h] [rbp+40h] BYREF
  __int64 v23; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  *a3 = 0;
  v5 = *(_QWORD *)a2;
  v19[0] = 0LL;
  v8 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(v5 + 264);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v19);
  if ( v8(a2, v19) < 0 )
    goto LABEL_9;
  v21 = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::__private_IsEnabledPreCheck(&`wil::Feature<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::GetImpl'::`2'::impl);
  v9 = (IUnknown *)*((_QWORD *)this - 9);
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v10 = IUnknown_QueryService(
          v9,
          &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
          &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
          &ppvOut);
  if ( v10 >= 0 )
  {
    v11 = ppvOut;
    v23 = 0LL;
    v12 = *(__int64 (__fastcall **)(void *, struct IApplicationView *, __int64 *))(*(_QWORD *)ppvOut + 48LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    v13 = v12(v11, a2, &v23);
    if ( v13 < 0 )
    {
      v17 = (unsigned int)v13;
      v18 = 83LL;
    }
    else
    {
      v14 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
      v15 = v14;
      if ( v14 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>(v14);
        v15[6] = a2;
        v15[7] = a3;
        v15[8] = &v21;
        *v15 = off_18071DE10;
        v15[1] = &ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_1f0bee7b591eec396a7438297aca16b6_>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v23 + 24LL))(v23, v15);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(v15);
LABEL_6:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
        goto LABEL_7;
      }
      v17 = 2147942414LL;
      v18 = 87LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"desktop\\internal\\shell\\inc\\private\\shellpositionerhelpers.h",
      (const char *)v17);
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x50,
    (int)"desktop\\internal\\shell\\inc\\private\\shellpositionerhelpers.h",
    (const char *)(unsigned int)v10);
LABEL_7:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  if ( !v21 )
  {
    LOBYTE(v3) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v19[0] + 24LL))(v19[0]) == 4;
    *a3 = v3;
  }
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v19);
  return 0LL;
}
