/*
 * XREFs of ?SubscribeToServices@VoiceAssistantPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180024950
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?CopyTo@?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180024C50 (-CopyTo@-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ??$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVVoiceAssistantPositioner@@@SmartCookie@@QEAAJPEAUIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVVoiceAssistantPositioner@@@Z @ 0x180506358 (--$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEv_ea_180506358.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VoiceAssistantPositioner::SubscribeToServices(
        VoiceAssistantPositioner *this,
        struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  char *v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  char *v11; // r15
  HRESULT (__stdcall *v12)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v13; // eax
  __int64 v14; // rcx
  HRESULT (__stdcall *v15)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  HRESULT (__stdcall *v19)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v20; // eax
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rcx
  int v25; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v27; // [rsp+50h] [rbp+20h] BYREF

  QueryService = a2->lpVtbl->QueryService;
  v5 = (char *)this + 144;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 18);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))QueryService)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC3,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)v6,
      v25);
    return v7;
  }
  v27 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
  v9 = Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::CopyTo(v5, v8, &v27);
  v7 = v9;
  if ( v9 < 0 )
  {
    v10 = 197LL;
    goto LABEL_7;
  }
  v11 = (char *)this - 40;
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v27 + 24LL))(
         v27,
         ((unsigned __int64)this + 88) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 40) >> 64),
         (char *)this + 152);
  v7 = v9;
  if ( v9 < 0 )
  {
    v10 = 199LL;
    goto LABEL_7;
  }
  v12 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 20);
  v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v12)(
         a2,
         &SID_InputHostLayout,
         &GUID_3a67c20b_df2d_4437_a761_0c41b441ac25,
         (char *)this + 160);
  v7 = v9;
  if ( v9 < 0 )
  {
    v10 = 201LL;
    goto LABEL_7;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)v11 + 25) + 24LL))(
          *((_QWORD *)v11 + 25),
          ((unsigned __int64)this + 96) & ((unsigned __int128)-(__int128)(unsigned __int64)v11 >> 64),
          (char *)this + 168);
  v7 = v13;
  if ( v13 >= 0 )
  {
    v15 = a2->lpVtbl->QueryService;
    v16 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((char *)this + 176);
    v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64))v15)(
           a2,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           v16);
    v7 = v9;
    if ( v9 < 0 )
    {
      v10 = 206LL;
      goto LABEL_7;
    }
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 22) + 96LL))(
            *((_QWORD *)this + 22),
            ((unsigned __int64)this + 112) & ((unsigned __int128)-(__int128)(unsigned __int64)v11 >> 64),
            (char *)this + 184);
    v7 = v17;
    if ( v17 >= 0 )
    {
      v19 = a2->lpVtbl->QueryService;
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((char *)this + 192);
      v20 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v19)(
              a2,
              &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
              &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
              (char *)this + 192);
      v7 = v20;
      if ( v20 >= 0 )
      {
        v9 = SmartCookie::Register<IViewPresentationMediator,long (IViewPresentationMediator::*)(IWindowManagementShowMoveSizeEvents *,unsigned long *),long (IViewPresentationMediator::*)(unsigned long),VoiceAssistantPositioner *>(
               (int)this + 200,
               *((_QWORD *)this + 24),
               v21,
               v22,
               (__int64)this - 40);
        v7 = v9;
        if ( v9 >= 0 )
        {
          v7 = 0;
          goto LABEL_27;
        }
        v10 = 214LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
          (const char *)(unsigned int)v9,
          v25);
LABEL_27:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
        return v7;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD1,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
        (const char *)(unsigned int)v20,
        v25);
      v23 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCF,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
        (const char *)(unsigned int)v17,
        v25);
      v18 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCA,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)v13,
      v25);
    v14 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  return v7;
}
