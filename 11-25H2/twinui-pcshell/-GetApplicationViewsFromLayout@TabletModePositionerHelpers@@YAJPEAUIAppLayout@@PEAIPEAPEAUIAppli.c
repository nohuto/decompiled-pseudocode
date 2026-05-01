/*
 * XREFs of ?GetApplicationViewsFromLayout@TabletModePositionerHelpers@@YAJPEAUIAppLayout@@PEAIPEAPEAUIApplicationView@@2@Z @ 0x1804AABA4
 * Callers:
 *     ?GetAppViewCloseOverrideOperation@ScreenManager@@UEAAJPEAUIAppLayout@@PEAUIApplicationView@@_NPEAPEAUIAppLayoutOperation@@@Z @ 0x1804FF720 (-GetAppViewCloseOverrideOperation@ScreenManager@@UEAAJPEAUIAppLayout@@PEAUIApplicationView@@_NPE.c)
 *     ?IsRelatedWin32ViewPresentInLayout@ScreenManagerHelpers@@YAJPEAUIAppLayout@@PEAUIApplicationView@@PEAPEAU3@@Z @ 0x1804FFC54 (-IsRelatedWin32ViewPresentInLayout@ScreenManagerHelpers@@YAJPEAUIAppLayout@@PEAUIApplicationView.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabletModePositionerHelpers::GetApplicationViewsFromLayout(
        TabletModePositionerHelpers *this,
        struct IAppLayout *a2,
        unsigned int *a3,
        struct IApplicationView **a4)
{
  int v8; // r14d
  __int64 (__fastcall *v9)(TabletModePositionerHelpers *, _QWORD, __int64, GUID *, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, GUID *, __int64 *); // rdi
  __int64 *v15; // rax
  __int64 (__fastcall *v16)(TabletModePositionerHelpers *, __int64, __int64, GUID *, __int64 *); // rbx
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, GUID *, __int64 *); // rdi
  __int64 *v19; // rax
  __int64 v21; // rax
  struct IApplicationView *v22; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  __int64 v24; // [rsp+70h] [rbp+40h] BYREF
  struct IApplicationView *v25; // [rsp+78h] [rbp+48h] BYREF
  __int64 v26; // [rsp+80h] [rbp+50h] BYREF

  *(_QWORD *)a3 = 0LL;
  *a4 = 0LL;
  *(_DWORD *)a2 = 0;
  v8 = (*(__int64 (__fastcall **)(TabletModePositionerHelpers *, __int64))(*(_QWORD *)this + 80LL))(this, 1LL);
  if ( v8 )
  {
    v26 = 0LL;
    v25 = 0LL;
    v24 = 0LL;
    v9 = *(__int64 (__fastcall **)(TabletModePositionerHelpers *, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)this + 104LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
    v10 = v9(this, 0LL, 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v24);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 38LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"desktop\\internal\\shell\\inc\\private\\TabletModePositionerHelpers.h",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
      return v11;
    }
    v13 = v24;
    v14 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v24 + 48LL);
    v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v26);
    v10 = v14(v13, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v15);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 39LL;
      goto LABEL_11;
    }
    if ( v8 == 2 )
    {
      v16 = *(__int64 (__fastcall **)(TabletModePositionerHelpers *, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)this + 104LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
      v10 = v16(this, 1LL, 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v24);
      v11 = v10;
      if ( v10 < 0 )
      {
        v12 = 43LL;
        goto LABEL_11;
      }
      v17 = v24;
      v18 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v24 + 48LL);
      v19 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v25);
      v10 = v18(v17, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v19);
      v11 = v10;
      if ( v10 < 0 )
      {
        v12 = 44LL;
        goto LABEL_11;
      }
    }
    v21 = v26;
    v26 = 0LL;
    *(_QWORD *)a3 = v21;
    v22 = v25;
    v25 = 0LL;
    *a4 = v22;
    *(_DWORD *)a2 = v8;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
  }
  return 0LL;
}
