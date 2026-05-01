/*
 * XREFs of ?GetHwndFromView@PeoplePaneViewManager@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1804007C8
 * Callers:
 *     ?FindPendingViewByHwnd@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x1804003CC (-FindPendingViewByHwnd@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PeoplePaneViewManager::GetHwndFromView(
        PeoplePaneViewManager *this,
        int (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *))
{
  __int64 v3; // rsi
  int (__fastcall *v4)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 *v5; // rax
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, PeoplePaneViewManager **); // rdi
  int v8; // eax
  PeoplePaneViewManager *v9; // rbx
  __int64 (__fastcall *v10)(PeoplePaneViewManager *, _QWORD, GUID *, __int64 *); // rdi
  __int64 *v11; // rax
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  PeoplePaneViewManager *v17; // [rsp+60h] [rbp+28h] BYREF
  __int64 v18; // [rsp+68h] [rbp+30h] BYREF
  __int64 v19; // [rsp+70h] [rbp+38h] BYREF
  __int64 v20; // [rsp+78h] [rbp+40h] BYREF

  v17 = this;
  v3 = 0LL;
  v19 = 0LL;
  v4 = **a2;
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v19);
  if ( v4((struct IApplicationView *)a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, v5) >= 0 )
  {
    v17 = 0LL;
    v6 = v19;
    v7 = *(__int64 (__fastcall **)(__int64, PeoplePaneViewManager **))(*(_QWORD *)v19 + 24LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
    v8 = v7(v6, &v17);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3A6,
        (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v8);
LABEL_11:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
      goto LABEL_12;
    }
    v18 = 0LL;
    v9 = v17;
    v10 = *(__int64 (__fastcall **)(PeoplePaneViewManager *, _QWORD, GUID *, __int64 *))(*(_QWORD *)v17 + 24LL);
    v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v18);
    v12 = v10(v9, 0LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, v11);
    v13 = retaddr;
    if ( v12 >= 0 )
    {
      v20 = 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 32LL))(v18, &v20);
      v13 = retaddr;
      if ( v12 >= 0 )
      {
        v3 = v20;
        goto LABEL_10;
      }
      v14 = 940LL;
    }
    else
    {
      v14 = 937LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v13,
      (void *)v14,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v12);
LABEL_10:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
    goto LABEL_11;
  }
LABEL_12:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
  return v3;
}
