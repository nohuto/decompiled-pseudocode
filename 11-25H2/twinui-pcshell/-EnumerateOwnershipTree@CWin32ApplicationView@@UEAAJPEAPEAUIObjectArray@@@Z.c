/*
 * XREFs of ?EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x18030EDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180039390 (-GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewManager@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@XZ @ 0x180053564 (-GetViewManager@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@VCApplicationViewManager@@@WRL.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007C0D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtm_ea_18007C0D0.c)
 *     ?GetCwm@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIClassicWindowPresentation@@@WRL@Microsoft@@XZ @ 0x180088074 (-GetCwm@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIClassicWindowPresentation@@@WRL@Micr.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x180088FA8 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$CCoSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@@@QEAA@XZ @ 0x18008C828 (--1-$CCoSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper@UENUMERA.c)
 *     ??$As@UIClassicWindowOwnershipQuery@@@?$ComPtr@UIClassicWindowPresentation@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClassicWindowOwnershipQuery@@@WRL@Microsoft@@@Details@12@@Z @ 0x18018C400 (--$As@UIClassicWindowOwnershipQuery@@@-$ComPtr@UIClassicWindowPresentation@@@WRL@Microsoft@@QEBA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CWin32ApplicationView::EnumerateOwnershipTree(CWin32ApplicationView *this, struct IObjectArray **a2)
{
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rdi
  HWND *v7; // rsi
  const struct _GUID *v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  HWND *v12; // r14
  HWND v13; // rdi
  RTL_SRWLOCK *v14; // rbx
  bool v15; // bl
  __int64 v16; // rcx
  int v17; // eax
  struct IApplicationView *v19; // [rsp+30h] [rbp-40h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-38h] BYREF
  HWND *v21; // [rsp+40h] [rbp-30h] BYREF
  __int64 v22; // [rsp+48h] [rbp-28h] BYREF
  HWND *v23; // [rsp+50h] [rbp-20h] BYREF
  __int64 v24; // [rsp+58h] [rbp-18h]
  __int64 v25; // [rsp+60h] [rbp-10h]
  __int64 v26; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  unsigned int v28; // [rsp+B8h] [rbp+48h] BYREF
  void *v29; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v30; // [rsp+C8h] [rbp+58h] BYREF

  *a2 = 0LL;
  ApplicationViewManagement::CGlobals::GetCwm(&v20);
  if ( v20 )
  {
    v30 = 0LL;
    v5 = Microsoft::WRL::ComPtr<IClassicWindowPresentation>::As<IClassicWindowOwnershipQuery>(&v20, &v30);
    v4 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2EA,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v5);
LABEL_20:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
      goto LABEL_21;
    }
    v21 = 0LL;
    v28 = 0;
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, HWND **))(*(_QWORD *)v30 + 32LL))(
           v30,
           *((_QWORD *)this + 27),
           &v28,
           &v21);
    if ( v4 < 0 )
      goto LABEL_20;
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    v26 = 0LL;
    v6 = v28;
    v7 = v21;
    CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>::~CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>((__int64)&v23);
    v23 = v7;
    v24 = v6;
    v26 = v6;
    v29 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
    v10 = CEnumerableObjectCollection::CreateInstance(v9, v8, &v29);
    v4 = v10;
    if ( v10 >= 0 )
    {
      v12 = &v7[v6];
      while ( v7 != v12 )
      {
        v13 = *v7;
        v19 = 0LL;
        v14 = (RTL_SRWLOCK *)*ApplicationViewManagement::CGlobals::GetViewManager(&v22);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
        v15 = (int)CApplicationViewManager::GetViewForHwnd(v14 + 17, v13, &v19) >= 0;
        v16 = v22;
        if ( v22 )
        {
          v22 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl>>::Release(v16);
        }
        if ( v15 )
        {
          v17 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *))(*(_QWORD *)v29 + 40LL))(v29, v19);
          if ( v17 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x305,
              (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
              (const char *)(unsigned int)v17);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
        ++v7;
      }
      v10 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v29)(
              v29,
              &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
              a2);
      v4 = v10;
      if ( v10 >= 0 )
        goto LABEL_19;
      v11 = 776LL;
    }
    else
    {
      v11 = 757LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)v10);
LABEL_19:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
    CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>::~CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>((__int64)&v23);
    goto LABEL_20;
  }
  v4 = -2144927145;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2E7,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
    (const char *)0x80270257LL);
LABEL_21:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
  return (unsigned int)v4;
}
