/*
 * XREFs of ?SubscribeToServices@BroadcastDVRComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800BADC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?IsAllowedSku@@YA_NXZ @ 0x1800BB138 (-IsAllowedSku@@YA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall BroadcastDVRComponent::SubscribeToServices(BroadcastDVRComponent *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  HRESULT (__stdcall *v8)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 *v9; // rax
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v23; // [rsp+90h] [rbp+40h] BYREF
  __int64 v24; // [rsp+98h] [rbp+48h] BYREF

  if ( IsAllowedSku() )
  {
    v21[0] = 0LL;
    v24 = 0LL;
    v23 = 0LL;
    QueryService = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v21);
    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
           a2,
           &IID_IImmersiveApplicationNotificationService,
           &GUID_7860c098_fb29_49aa_a512_adacc0ffee84,
           v21);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 784LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)v5);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v21);
      return v6;
    }
    v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v21[0] + 24LL))(
           v21[0],
           ((unsigned __int64)this + 64) & -(__int64)(this != (BroadcastDVRComponent *)56),
           (char *)this + 168);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 785LL;
      goto LABEL_16;
    }
    v8 = a2->lpVtbl->QueryService;
    v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)this + 24);
    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v8)(
           a2,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           v9);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 788LL;
      goto LABEL_16;
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 24) + 96LL))(
           *((_QWORD *)this + 24),
           ((unsigned __int64)this + 72) & -(__int64)(this != (BroadcastDVRComponent *)56),
           (char *)this + 172);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 789LL;
      goto LABEL_16;
    }
    v10 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v10)(
           a2,
           &IID_IImmersiveSessionIdleDetector,
           &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
           &v24);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 792LL;
      goto LABEL_16;
    }
    v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v24 + 32LL))(
           v24,
           ((unsigned __int64)this + 80) & -(__int64)(this != (BroadcastDVRComponent *)56),
           (char *)this + 176);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 793LL;
      goto LABEL_16;
    }
    v11 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v11)(
           a2,
           &SID_ImmersiveShellHookService,
           &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
           &v23);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 796LL;
      goto LABEL_16;
    }
    v13 = (*(__int64 (__fastcall **)(__int64, void *, __int64, unsigned __int64, char *))(*(_QWORD *)v23 + 24LL))(
            v23,
            &unk_180755500,
            1LL,
            ((unsigned __int64)this + 96) & -(__int64)(this != (BroadcastDVRComponent *)56),
            (char *)this + 180);
    v6 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31D,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)v13);
      v14 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      v15 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      v16 = v21[0];
      if ( v21[0] )
      {
        v21[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      return v6;
    }
    v17 = RtlSubscribeWnfStateChangeNotification(
            (char *)this + 416,
            WNF_SHEL_LOGON_COMPLETE,
            0LL,
            BroadcastDVRComponent::StaticShellReadyWNFCallback);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x32A,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)v17);
    v18 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v19 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v20 = v21[0];
    if ( v21[0] )
    {
      v21[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
  }
  return 0LL;
}
