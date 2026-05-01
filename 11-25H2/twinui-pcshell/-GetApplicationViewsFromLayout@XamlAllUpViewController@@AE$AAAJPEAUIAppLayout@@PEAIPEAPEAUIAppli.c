/*
 * XREFs of ?GetApplicationViewsFromLayout@XamlAllUpViewController@@AE$AAAJPEAUIAppLayout@@PEAIPEAPEAUIApplicationView@@2@Z @ 0x18068D6A4
 * Callers:
 *     ?GetContextMenu@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@4567@@Z @ 0x18068D988 (-GetContextMenu@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlAllUpViewController::GetApplicationViewsFromLayout(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 *a4,
        _QWORD *a5)
{
  _QWORD *v8; // r13
  int v9; // r14d
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64, GUID *); // rbx
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, GUID *, __int64 *); // rdi
  __int64 *v14; // rax
  int v15; // eax
  __int64 (__fastcall *v16)(__int64, __int64, __int64, GUID *); // rbx
  int v17; // eax
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, GUID *, __int64 *); // rdi
  __int64 *v20; // rax
  int v21; // eax
  __int64 v22; // rax
  _QWORD *v23; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  __int64 v26; // [rsp+70h] [rbp+40h] BYREF
  __int64 v27; // [rsp+78h] [rbp+48h] BYREF

  v26 = a1;
  *a4 = 0LL;
  v8 = a5;
  *a5 = 0LL;
  *a3 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 80LL))(a2, 1LL);
  if ( v9 )
  {
    v27 = 0LL;
    a5 = 0LL;
    v26 = 0LL;
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *))(*(_QWORD *)a2 + 104LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
    v11 = v10(a2, 0LL, 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1EF,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
        (const char *)(unsigned int)v11,
        (int)&v26);
    v12 = v26;
    v13 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v26 + 48LL);
    v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v27);
    v15 = v13(v12, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v14);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1F0,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
        (const char *)(unsigned int)v15,
        (int)&v26);
    if ( v9 == 2 )
    {
      v16 = *(__int64 (__fastcall **)(__int64, __int64, __int64, GUID *))(*(_QWORD *)a2 + 104LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
      v17 = v16(a2, 1LL, 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1F4,
          (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
          (const char *)(unsigned int)v17,
          (int)&v26);
      v18 = v26;
      v19 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v26 + 48LL);
      v20 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&a5);
      v21 = v19(v18, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v20);
      if ( v21 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1F5,
          (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
          (const char *)(unsigned int)v21,
          (int)&v26);
    }
    v22 = v27;
    v27 = 0LL;
    *a4 = v22;
    v23 = a5;
    a5 = 0LL;
    *v8 = v23;
    *a3 = v9;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&a5);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
  }
  return 0LL;
}
