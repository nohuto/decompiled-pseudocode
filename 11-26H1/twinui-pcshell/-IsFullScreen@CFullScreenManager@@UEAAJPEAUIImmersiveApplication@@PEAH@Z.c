/*
 * XREFs of ?IsFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x180047020
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800476E4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18008BE90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180177550 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHand.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFullScreenManager::IsFullScreen(
        CFullScreenManager *this,
        struct IImmersiveApplication *a2,
        int *a3)
{
  IUnknown *v6; // rbx
  HRESULT v7; // eax
  int v8; // ebx
  int v9; // eax
  __int64 v10; // rsi
  int (__fastcall *v11)(__int64, __int64 *); // rbx
  IUnknown *v12; // rbx
  HRESULT v13; // eax
  void *v14; // rbx
  __int64 (__fastcall *v15)(void *, __int64, __int64 *); // rdi
  int v16; // eax
  _QWORD *v17; // rax
  _QWORD *v18; // rbx
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // [rsp+20h] [rbp-10h] BYREF
  __int64 v23; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  void *ppvOut; // [rsp+60h] [rbp+30h] BYREF
  void *v26; // [rsp+70h] [rbp+40h] BYREF
  __int64 v27; // [rsp+78h] [rbp+48h] BYREF

  *a3 = 0;
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
  v6 = (IUnknown *)*((_QWORD *)this - 9);
  v22 = 0LL;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v7 = IUnknown_QueryService(
         v6,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &ppvOut);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E,
      (int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
      (const char *)(unsigned int)v7);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(void *, struct IImmersiveApplication *, __int64 *))(*(_QWORD *)ppvOut + 56LL))(
           ppvOut,
           a2,
           &v22);
    v8 = 0;
    if ( v9 < 0 )
      v8 = v9;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10E,
      (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_14;
  }
  v10 = v22;
  *a3 = 0;
  v23 = 0LL;
  v11 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 264LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
  if ( v11(v10, &v23) >= 0 )
  {
    LOBYTE(ppvOut) = 0;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::__private_IsEnabledPreCheck(&`wil::Feature<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::GetImpl'::`2'::impl);
    v12 = (IUnknown *)*((_QWORD *)this - 9);
    v26 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
    v13 = IUnknown_QueryService(
            v12,
            &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
            &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
            &v26);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x50,
        (int)"desktop\\internal\\shell\\inc\\private\\shellpositionerhelpers.h",
        (const char *)(unsigned int)v13);
LABEL_11:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
      if ( !(_BYTE)ppvOut )
        *a3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 24LL))(v23) == 4;
      goto LABEL_13;
    }
    v14 = v26;
    v27 = 0LL;
    v15 = *(__int64 (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)v26 + 48LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
    v16 = v15(v14, v10, &v27);
    if ( v16 < 0 )
    {
      v20 = (unsigned int)v16;
      v21 = 83LL;
    }
    else
    {
      v17 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
      v18 = v17;
      if ( v17 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>(v17);
        v18[6] = v10;
        v18[7] = a3;
        v18[8] = &ppvOut;
        *v18 = off_18071DE10;
        v18[1] = &ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_1f0bee7b591eec396a7438297aca16b6_>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v27 + 24LL))(v27, v18);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(v18);
LABEL_10:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
        goto LABEL_11;
      }
      v20 = 2147942414LL;
      v21 = 87LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"desktop\\internal\\shell\\inc\\private\\shellpositionerhelpers.h",
      (const char *)v20);
    goto LABEL_10;
  }
LABEL_13:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
  v8 = 0;
LABEL_14:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
  return (unsigned int)v8;
}
