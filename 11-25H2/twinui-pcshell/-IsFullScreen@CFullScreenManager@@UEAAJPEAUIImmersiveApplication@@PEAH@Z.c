/*
 * XREFs of ?IsFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x18003A2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180038A20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180038A88 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180039850 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHand.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  char v12; // dl
  IUnknown *v13; // rbx
  HRESULT v14; // eax
  void *v15; // rbx
  __int64 (__fastcall *v16)(void *, __int64, __int64 *); // rdi
  int v17; // eax
  _OWORD *v18; // rax
  _OWORD *v19; // rbx
  __int128 v20; // xmm0
  void **v21; // xmm1_8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // [rsp+20h] [rbp-30h] BYREF
  __int64 v26; // [rsp+28h] [rbp-28h] BYREF
  __int128 v27; // [rsp+30h] [rbp-20h]
  void **p_ppvOut; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  void *ppvOut; // [rsp+80h] [rbp+30h] BYREF
  void *v31; // [rsp+90h] [rbp+40h] BYREF
  __int64 v32; // [rsp+98h] [rbp+48h] BYREF

  *a3 = 0;
  v25 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
  v6 = (IUnknown *)*((_QWORD *)this - 9);
  v25 = 0LL;
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
           &v25);
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
  v10 = v25;
  *a3 = 0;
  v26 = 0LL;
  v11 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 264LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
  if ( v11(v10, &v26) >= 0 )
  {
    LOBYTE(ppvOut) = 0;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::__private_IsEnabledPreCheck(
      `wil::Feature<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::GetImpl'::`2'::impl,
      v12);
    v13 = (IUnknown *)*((_QWORD *)this - 9);
    v31 = 0LL;
    p_ppvOut = &ppvOut;
    *(_QWORD *)&v27 = v10;
    *((_QWORD *)&v27 + 1) = a3;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
    v14 = IUnknown_QueryService(
            v13,
            &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
            &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
            &v31);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x50,
        (int)"desktop\\internal\\shell\\inc\\private\\shellpositionerhelpers.h",
        (const char *)(unsigned int)v14);
LABEL_11:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
      if ( !(_BYTE)ppvOut )
        *a3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 24LL))(v26) == 4;
      goto LABEL_13;
    }
    v15 = v31;
    v32 = 0LL;
    v16 = *(__int64 (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)v31 + 48LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
    v17 = v16(v15, v10, &v32);
    if ( v17 < 0 )
    {
      v23 = (unsigned int)v17;
      v24 = 83LL;
    }
    else
    {
      v18 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
      v19 = v18;
      if ( v18 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>((__int64)v18);
        v20 = v27;
        v21 = p_ppvOut;
        *(_QWORD *)v19 = off_1806E3D78;
        v19[3] = v20;
        *((_QWORD *)v19 + 1) = &ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_1f0bee7b591eec396a7438297aca16b6_>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
        *((_QWORD *)v19 + 8) = v21;
        (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v32 + 24LL))(v32, v19);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release((volatile signed __int32 *)v19);
LABEL_10:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
        goto LABEL_11;
      }
      v23 = 2147942414LL;
      v24 = 87LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (int)"desktop\\internal\\shell\\inc\\private\\shellpositionerhelpers.h",
      (const char *)v23);
    goto LABEL_10;
  }
LABEL_13:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
  v8 = 0;
LABEL_14:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
  return (unsigned int)v8;
}
