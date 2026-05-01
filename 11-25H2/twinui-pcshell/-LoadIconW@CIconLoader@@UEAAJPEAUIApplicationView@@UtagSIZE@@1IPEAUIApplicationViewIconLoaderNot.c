/*
 * XREFs of ?LoadIconW@CIconLoader@@UEAAJPEAUIApplicationView@@UtagSIZE@@1IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x1800F0EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800F10D0 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef.c)
 *     ?CIconLoadingFunctions_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F1108 (-CIconLoadingFunctions_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?LoadWindowIcon@@YAJPEAUIWin32ApplicationView@@AEBUtagSIZE@@PEAUIApplicationViewIconLoaderNotifications@@PEAUIIconLoadingFunctions@@@Z @ 0x1800F12D8 (-LoadWindowIcon@@YAJPEAUIWin32ApplicationView@@AEBUtagSIZE@@PEAUIApplicationViewIconLoaderNotifi.c)
 *     ?LoadWinRTIcon@@YAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x180499E6C (-LoadWinRTIcon@@YAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAUIApplicationViewIconLoaderNoti.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CIconLoader::LoadIconW(
        CIconLoader *this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64),
        struct tagSIZE a3,
        struct tagSIZE a4,
        unsigned int a5,
        struct IApplicationViewIconLoaderNotifications *a6)
{
  __int64 (__fastcall *v7)(struct IApplicationView *, GUID *, __int64); // rbx
  __int64 v8; // rax
  int v9; // eax
  const struct _GUID *v10; // rcx
  int Instance; // eax
  unsigned int v12; // ebx
  struct IIconLoadingFunctions *v13; // rcx
  struct IWin32ApplicationView *v14; // rcx
  int v15; // eax
  struct IIconLoadingFunctions *v16; // rcx
  struct IWin32ApplicationView *v17; // rcx
  __int64 (__fastcall *v18)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 *v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  struct IWin32ApplicationView *v23[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IIconLoadingFunctions *v25; // [rsp+68h] [rbp+28h] BYREF
  struct tagSIZE v26; // [rsp+70h] [rbp+30h] BYREF
  struct tagSIZE v27; // [rsp+78h] [rbp+38h] BYREF

  v27 = a4;
  v26 = a3;
  v23[0] = 0LL;
  v7 = **a2;
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IWin32ApplicationView>>(v23);
  v9 = v7((struct IApplicationView *)a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, v8);
  v25 = 0LL;
  if ( v9 < 0 )
  {
    v18 = (__int64 (__fastcall *)(struct IApplicationView *, GUID *, __int64 *))**a2;
    v19 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v25);
    v20 = v18((struct IApplicationView *)a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, v19);
    v12 = v20;
    if ( v20 >= 0 )
    {
      v20 = LoadWinRTIcon(v25, &v26, &v26, &v27, a5, a6);
      v12 = v20;
      if ( v20 >= 0 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
        goto LABEL_21;
      }
      v21 = 136LL;
    }
    else
    {
      v21 = 128LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\iconloader.cpp",
      (const char *)(unsigned int)v20);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
LABEL_22:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v23);
    return v12;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
  Instance = CIconLoadingFunctions_CreateInstance(v10, (void **)&v25);
  v12 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\iconloader.cpp",
      (const char *)(unsigned int)Instance);
    v13 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(struct IIconLoadingFunctions *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v14 = v23[0];
    if ( v23[0] )
    {
      v23[0] = 0LL;
      (*(void (__fastcall **)(struct IWin32ApplicationView *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    return v12;
  }
  v15 = LoadWindowIcon(v23[0], &v26, a6, v25);
  v12 = v15;
  if ( v15 >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
LABEL_21:
    v12 = 0;
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7B,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\iconloader.cpp",
    (const char *)(unsigned int)v15);
  v16 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(struct IIconLoadingFunctions *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = v23[0];
  if ( v23[0] )
  {
    v23[0] = 0LL;
    (*(void (__fastcall **)(struct IWin32ApplicationView *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return v12;
}
