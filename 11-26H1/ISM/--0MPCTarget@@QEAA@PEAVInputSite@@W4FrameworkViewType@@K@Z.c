/*
 * XREFs of ??0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z @ 0x180101558
 * Callers:
 *     ?GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z @ 0x1800FEAA8 (-GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z.c)
 *     ??0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z @ 0x180100E18 (--0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18000D7E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000DE08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetIdForNamespace@InputSite@@QEBA?AV?$optional@_K@std@@W4InputSiteIdNamespace@@@Z @ 0x18001E8F0 (-GetIdForNamespace@InputSite@@QEBA-AV-$optional@_K@std@@W4InputSiteIdNamespace@@@Z.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180024524 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x18002DE18 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ?CreateWatcher@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@SA@XZ @ 0x1800491D4 (-CreateWatcher@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@SA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180049678 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x180049A74 (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?value@?$optional@_K@std@@QEGAAAEA_KXZ @ 0x180061504 (-value@-$optional@_K@std@@QEGAAAEA_KXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Start@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800A6714 (-Start@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatch.c)
 *     ??$as@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800A7778 (--$as@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@Utype.c)
 *     ?UniversalPropertyChanged@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelWatcher@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x1800A9250 (-UniversalPropertyChanged@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversa.c)
 *     ??0_lambda_b15dcbeb2f833aa118e48dddb1066528_@@QEAA@AEBQEAVSpectrumListener@@AEBQ81@EAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@34567@@Z@Z @ 0x1800CFEB8 (--0_lambda_b15dcbeb2f833aa118e48dddb1066528_@@QEAA@AEBQEAVSpectrumListener@@AEBQ81@EAAJPEAUIInpu.c)
 *     ??$?0V_lambda_d7951b2d46f88de3e36d3c8b29e58ea6_@@@?$TypedEventHandler@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@23456@@Foundation@Windows@winrt@@QEAA@V_lambda_d7951b2d46f88de3e36d3c8b29e58ea6_@@@Z @ 0x180101408 (--$-0V_lambda_d7951b2d46f88de3e36d3c8b29e58ea6_@@@-$TypedEventHandler@UIUniversalAppModelWatcher.c)
 *     ?MPCTarget_Create_@ISMTracing@@QEAAXPEAUIMPCTarget@@@Z @ 0x180101A74 (-MPCTarget_Create_@ISMTracing@@QEAAXPEAUIMPCTarget@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall MPCTarget::MPCTarget(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rsi
  const char *v8; // r9
  int v9; // r8d
  const char *v10; // r9
  __int64 *Watcher; // rdi
  _QWORD *v12; // rbx
  __int64 v13; // rax
  __int64 (__fastcall ***v14)(_QWORD, void *, __int64 *); // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // ecx
  unsigned int *i; // rbx
  _DWORD *CompositionInputQueue; // rax
  ISMTracing *v20; // rcx
  __int64 v22; // [rsp+20h] [rbp-A8h] BYREF
  __int64 *v23; // [rsp+28h] [rbp-A0h] BYREF
  __int128 v24; // [rsp+30h] [rbp-98h] BYREF
  __int64 v25; // [rsp+40h] [rbp-88h]
  _BYTE v26[16]; // [rsp+48h] [rbp-80h] BYREF
  _DWORD v27[4]; // [rsp+58h] [rbp-70h] BYREF
  char v28; // [rsp+68h] [rbp-60h] BYREF
  __int128 v29; // [rsp+70h] [rbp-58h] BYREF
  __int64 v30; // [rsp+80h] [rbp-48h]
  _BYTE v31[56]; // [rsp+90h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v7 = a1;
  v25 = a1;
  *(_QWORD *)(a1 + 8) = &RefCountedObject::`vftable';
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)a1 = &MPCTarget::`vftable'{for `IMPCTarget'};
  *(_QWORD *)(a1 + 8) = &MPCTarget::`vftable'{for `RefCountedObject'};
  wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
    (_QWORD *)(a1 + 24),
    a2);
  *(_QWORD *)(v7 + 32) = 0LL;
  *(_DWORD *)(v7 + 44) = a3;
  *(_DWORD *)(v7 + 56) = a4;
  *(_QWORD *)(v7 + 64) = 0LL;
  *(_QWORD *)(v7 + 72) = 0LL;
  *(_BYTE *)(v7 + 40) = a3 == 1;
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
      v8);
  InputSite::GetIdForNamespace(a2, (__int64)v26, 1);
  if ( v26[8] )
  {
    *(_QWORD *)(v7 + 48) = *(_QWORD *)std::optional<unsigned __int64>::value((__int64)v26);
  }
  else
  {
    *(_QWORD *)(v7 + 48) = 0LL;
    if ( !*(_BYTE *)(a2 + 480) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2C,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
        v10);
    v16 = 0LL;
    v17 = v9;
    do
      v27[v16++] = v17++;
    while ( v16 < 4 );
    for ( i = v27; i != (unsigned int *)&v28; ++i )
    {
      CompositionInputQueue = (_DWORD *)LegacyInputSinkData::GetCompositionInputQueue(a2 + 48, *i);
      if ( *CompositionInputQueue == 2 || *CompositionInputQueue == 3 )
      {
        *(_QWORD *)(v7 + 48) = (unsigned int)CompositionInputQueue[2];
        break;
      }
    }
    if ( !*(_QWORD *)(v7 + 48) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x41,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
        v10);
  }
  if ( *(_DWORD *)(v7 + 44) == 6 )
  {
    try
    {
      Watcher = (__int64 *)winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc::CreateWatcher((__int64)&v23);
      v12 = (_QWORD *)(v7 + 64);
      if ( (__int64 *)(v7 + 64) != Watcher )
      {
        if ( *v12 )
          winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)(v7 + 64));
        v13 = *Watcher;
        *Watcher = 0LL;
        *v12 = v13;
      }
      winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v23);
      v14 = *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(v7 + 64);
      if ( v14 )
      {
        winrt::impl::as<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
          &v23,
          v14);
        *(_QWORD *)&v24 = &MPCTarget::OnUniversalPropertyChanged;
        DWORD2(v24) = 0;
        v22 = v7;
        v15 = _lambda_b15dcbeb2f833aa118e48dddb1066528_::_lambda_b15dcbeb2f833aa118e48dddb1066528_(
                (__int64)v31,
                &v22,
                &v24);
        v29 = *(_OWORD *)v15;
        v30 = *(_QWORD *)(v15 + 16);
        winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalPropertyChangedEventArgs>::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalPropertyChangedEventArgs>(
          &v22,
          &v29);
        *(_QWORD *)(v7 + 72) = *winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher>::UniversalPropertyChanged(
                                  &v23,
                                  &v24,
                                  &v22);
        if ( v22 )
          winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v22);
        winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher>::Start((__int64 *)(v7 + 64));
        winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v23);
      }
    }
    catch ( ... )
    {
      v7 = v25;
    }
  }
  if ( ISMTracing::IsEnabled() )
  {
    ISMTracing::Instance();
    ISMTracing::MPCTarget_Create_(v20, (struct IMPCTarget *)v7);
  }
  return v7;
}
