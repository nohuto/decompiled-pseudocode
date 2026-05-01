/*
 * XREFs of ShellPositionerHelpers::PerformCallbackOnView__lambda_2b23a0664410194b06926212d84c9639___ @ 0x180322358
 * Callers:
 *     ?ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x180322F20 (-ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18008BE90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_2b23a0664410194b06926212d84c9639_____lambda_2b23a0664410194b06926212d84c9639___ @ 0x1803220D4 (Microsoft--WRL--Details--Make_ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_2.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ShellPositionerHelpers::PerformCallbackOnView__lambda_2b23a0664410194b06926212d84c9639___(
        IUnknown *punk,
        __int64 a2,
        __int128 *a3)
{
  HRESULT v6; // eax
  unsigned int v7; // ebx
  void *v8; // rbx
  __int64 (__fastcall *v9)(void *, __int64, __int64 *); // rdi
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rdx
  volatile signed __int32 *v13; // rbx
  int v14; // edi
  void *ppvOut; // [rsp+20h] [rbp-10h] BYREF
  volatile signed __int32 *v17; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v19; // [rsp+68h] [rbp+38h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v6 = IUnknown_QueryService(
         punk,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &ppvOut);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (int)"desktop\\internal\\shell\\inc\\private\\shellpositionerhelpers.h",
      (const char *)(unsigned int)v6);
    goto LABEL_11;
  }
  v8 = ppvOut;
  v19 = 0LL;
  v9 = *(__int64 (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)ppvOut + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
  v10 = v9(v8, a2, &v19);
  v7 = v10;
  if ( v10 < 0 )
  {
    v11 = (unsigned int)v10;
    v12 = 83LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"desktop\\internal\\shell\\inc\\private\\shellpositionerhelpers.h",
      (const char *)v11);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    goto LABEL_11;
  }
  Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_2b23a0664410194b06926212d84c9639_____lambda_2b23a0664410194b06926212d84c9639___(
    &v17,
    a3);
  v13 = v17;
  if ( !v17 )
  {
    v7 = -2147024882;
    v12 = 87LL;
    v11 = 2147942414LL;
    goto LABEL_5;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, volatile signed __int32 *))(*(_QWORD *)v19 + 24LL))(v19, v17);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(v13);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
  if ( v14 >= 0 )
    v7 = 0;
  else
    v7 = v14;
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  return v7;
}
