/*
 * XREFs of ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x1801C71DC
 * Callers:
 *     ?_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18008501C (-_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImme.c)
 *     ?_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180118318 (-_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveM.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x1801C6A58 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 *     ?IsViewPresentedOnActivationVirtualDesktop@CAppViewManager@@UEAAJPEAUHWND__@@_KPEAE@Z @ 0x1802F7BA0 (-IsViewPresentedOnActivationVirtualDesktop@CAppViewManager@@UEAAJPEAUHWND__@@_KPEAE@Z.c)
 *     ?UnensureApplication@CAppViewManager@@AEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1802FA520 (-UnensureApplication@CAppViewManager@@AEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_EvaluateFrameworkViewTypeForSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEA_N@Z @ 0x1802FAF0C (-_EvaluateFrameworkViewTypeForSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0PEAUIViewWrapper@V.c)
 *     ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x1802FB8D0 (-_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransf.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppViewManager::_GetGlomForWindow(
        CAppViewManager *this,
        HWND a2,
        struct IImmersiveApplicationInternal **a3,
        bool *a4)
{
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, HWND, GUID *, struct IImmersiveApplicationInternal **); // rbx
  int v9; // ebx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int64, GUID *, __int64 *); // rdi
  __int64 *v12; // rax
  struct IImmersiveApplicationInternal *v13; // rax
  __int64 v14; // rcx
  struct IImmersiveApplicationInternal *v16; // [rsp+60h] [rbp+30h] BYREF
  __int64 v17; // [rsp+70h] [rbp+40h] BYREF
  HWND v18; // [rsp+78h] [rbp+48h] BYREF

  *a3 = 0LL;
  *a4 = 0;
  v16 = 0LL;
  v7 = *((_QWORD *)this + 15);
  v8 = *(__int64 (__fastcall **)(__int64, HWND, GUID *, struct IImmersiveApplicationInternal **))(*(_QWORD *)v7 + 40LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  v9 = v8(v7, a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v16);
  if ( v9 >= 0 )
  {
    v17 = 0LL;
    v10 = (__int64)v16;
    v11 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v16 + 352LL);
    v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v17);
    v9 = v11(v10, 1LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, v12);
    if ( v9 >= 0 )
    {
      v18 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v17 + 32LL))(v17, &v18);
      if ( v9 >= 0 )
      {
        *a4 = a2 == v18;
        v13 = v16;
        v16 = 0LL;
        *a3 = v13;
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  }
  v14 = (__int64)v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return (unsigned int)v9;
}
