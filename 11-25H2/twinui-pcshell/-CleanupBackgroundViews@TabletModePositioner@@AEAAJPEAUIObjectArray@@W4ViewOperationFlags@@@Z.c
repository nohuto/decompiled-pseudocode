/*
 * XREFs of ?CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z @ 0x1804F4F60
 * Callers:
 *     ?InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ @ 0x18007D970 (-InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ.c)
 *     ?InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ @ 0x1804F76DC (-InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ.c)
 *     ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x1804FBABC (-SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180056C00 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1800F44C8 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180217F3C (--0Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Micros.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1804F5F3C (-CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUI.c)
 *     ?GetOperableViews@TabletModePositioner@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x1804F6C34 (-GetOperableViews@TabletModePositioner@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall TabletModePositioner::CleanupBackgroundViews(__int64 a1, __int64 a2, char a3)
{
  HRESULT OperableViews; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rbx
  struct IApplicationView *v9; // rdx
  int inited; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rdx
  struct IApplicationViewOperation *v14; // [rsp+20h] [rbp-59h] BYREF
  void *ppvOut; // [rsp+28h] [rbp-51h] BYREF
  struct IObjectArray *v16; // [rsp+30h] [rbp-49h] BYREF
  __int64 v17; // [rsp+38h] [rbp-41h] BYREF
  unsigned int v18; // [rsp+40h] [rbp-39h] BYREF
  __int64 v19[2]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v20; // [rsp+58h] [rbp-21h] BYREF
  int v21; // [rsp+60h] [rbp-19h]
  int v22; // [rsp+68h] [rbp-11h] BYREF
  __int64 v23[2]; // [rsp+70h] [rbp-9h] BYREF
  __int128 v24; // [rsp+80h] [rbp+7h] BYREF
  int v25; // [rsp+90h] [rbp+17h]
  int v26; // [rsp+94h] [rbp+1Bh]
  __m128i si128; // [rsp+98h] [rbp+1Fh]
  int v28; // [rsp+A8h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v16 = 0LL;
  if ( a2 )
  {
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)&v16, a2);
LABEL_9:
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
      (__int64)&v20,
      (__int64)v16);
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::Iterator(
      (__int64)&v18,
      (__int64)&v20,
      0);
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::Iterator(
      (__int64)&v22,
      (__int64)&v20,
      v21);
    while ( 1 )
    {
      if ( v18 == v22 && v19[1] == v23[1] )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v23);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
        v6 = 0;
        goto LABEL_23;
      }
      v8 = v19[0];
      v17 = v19[0];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
      if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 248) + 184LL))(
              *(_QWORD *)(a1 + 248),
              v8) )
        break;
LABEL_21:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
      ++v18;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v18);
    }
    v14 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    inited = TabletModePositioner::CreateAndInitApplicationViewOperation((TabletModePositioner *)a1, v9, &v14);
    v11 = retaddr;
    if ( inited >= 0 )
    {
      (*(void (__fastcall **)(struct IApplicationViewOperation *, _QWORD))(*(_QWORD *)v14 + 96LL))(v14, 0LL);
      if ( (a3 & 1) != 0 )
      {
        v24 = 0LL;
        v25 = 0;
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        v26 = 1;
        v28 = 1;
        (*(void (__fastcall **)(struct IApplicationViewOperation *, __int128 *))(*(_QWORD *)v14 + 144LL))(v14, &v24);
      }
      inited = (*(__int64 (__fastcall **)(__int64, struct IApplicationViewOperation *))(*(_QWORD *)v8 + 320LL))(v8, v14);
      v11 = retaddr;
      if ( inited >= 0 )
        goto LABEL_20;
      v12 = 1803LL;
    }
    else
    {
      v12 = 1790LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v11,
      (void *)v12,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)inited);
LABEL_20:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    goto LABEL_21;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  OperableViews = IUnknown_QueryService(
                    *(IUnknown **)(a1 + 16),
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                    &ppvOut);
  v6 = OperableViews;
  if ( OperableViews >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
    OperableViews = TabletModePositioner::GetOperableViews(
                      (TabletModePositioner *)a1,
                      (struct IImmersiveMonitor *)ppvOut,
                      &v16);
    v6 = OperableViews;
    if ( OperableViews >= 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      goto LABEL_9;
    }
    v7 = 1779LL;
  }
  else
  {
    v7 = 1778LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)OperableViews);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
LABEL_23:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  return v6;
}
