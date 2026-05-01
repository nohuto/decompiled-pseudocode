/*
 * XREFs of ?SubscribeToServices@VoiceAssistantPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180066F80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?CopyTo@?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180067270 (-CopyTo@-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVVoiceAssistantPositioner@@@SmartCookie@@QEAAJPEAUIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVVoiceAssistantPositioner@@@Z @ 0x1804E5BF4 (--$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEv_ea_1804E5BF4.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VoiceAssistantPositioner::SubscribeToServices(
        VoiceAssistantPositioner *this,
        struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  char *v5; // r14
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v12; // eax
  __int64 v13; // rcx
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 *v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  HRESULT (__stdcall *v18)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v19; // eax
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v25; // [rsp+50h] [rbp+20h] BYREF

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
      (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  v25 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
  v9 = Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::CopyTo(v5, v8, &v25);
  v7 = v9;
  if ( v9 < 0 )
  {
    v10 = 197LL;
    goto LABEL_7;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v25 + 24LL))(
         v25,
         ((unsigned __int64)this + 88) & -(__int64)(this != (VoiceAssistantPositioner *)40),
         (char *)this + 152);
  v7 = v9;
  if ( v9 < 0 )
  {
    v10 = 199LL;
    goto LABEL_7;
  }
  v11 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 20);
  v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v11)(
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
  v12 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 20) + 24LL))(
          *((_QWORD *)this + 20),
          ((unsigned __int64)this + 96) & -(__int64)(this != (VoiceAssistantPositioner *)40),
          (char *)this + 168);
  v7 = v12;
  if ( v12 >= 0 )
  {
    v14 = a2->lpVtbl->QueryService;
    v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)this + 22);
    v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v14)(
           a2,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           v15);
    v7 = v9;
    if ( v9 < 0 )
    {
      v10 = 206LL;
      goto LABEL_7;
    }
    v16 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 22) + 96LL))(
            *((_QWORD *)this + 22),
            ((unsigned __int64)this + 112) & -(__int64)(this != (VoiceAssistantPositioner *)40),
            (char *)this + 184);
    v7 = v16;
    if ( v16 >= 0 )
    {
      v18 = a2->lpVtbl->QueryService;
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((char *)this + 192);
      v19 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v18)(
              a2,
              &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
              &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
              (char *)this + 192);
      v7 = v19;
      if ( v19 >= 0 )
      {
        v9 = SmartCookie::Register<IViewPresentationMediator,long (IViewPresentationMediator::*)(IWindowManagementShowMoveSizeEvents *,unsigned long *),long (IViewPresentationMediator::*)(unsigned long),VoiceAssistantPositioner *>(
               (int)this + 200,
               *((_QWORD *)this + 24),
               v20,
               v21,
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
          (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
          (const char *)(unsigned int)v9);
LABEL_27:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
        return v7;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD1,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
        (const char *)(unsigned int)v19);
      v22 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCF,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
        (const char *)(unsigned int)v16);
      v17 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCA,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)v12);
    v13 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  return v7;
}
