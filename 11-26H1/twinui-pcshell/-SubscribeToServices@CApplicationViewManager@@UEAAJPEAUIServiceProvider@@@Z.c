/*
 * XREFs of ?SubscribeToServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180233820
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Register@UIImmersiveApplicationNotificationService@@P81@EAAJPEAUIImmersiveApplicationNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@SmartCookie@@QEAAJPEAUIImmersiveApplicationNotificationService@@P81@EAAJPEAUIImmersiveApplicationNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@Z @ 0x1800C5238 (--$Register@UIImmersiveApplicationNotificationService@@P81@EAAJPEAUIImmersiveApplicationNotifica.c)
 *     ??$Register@UIEnterpriseIdChangeNotificationProvider@@P81@EAAJPEAUIEnterpriseIdChangeNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@SmartCookie@@QEAAJPEAUIEnterpriseIdChangeNotificationProvider@@P81@EAAJPEAUIEnterpriseIdChangeNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@Z @ 0x180184378 (--$Register@UIEnterpriseIdChangeNotificationProvider@@P81@EAAJPEAUIEnterpriseIdChangeNotificatio.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationViewManager::SubscribeToServices(
        CApplicationViewManager *this,
        struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  char *v5; // r12
  int v6; // ebx
  __int64 v7; // rdx
  HRESULT (__stdcall *v8)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v12)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v13)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v15)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v17)(_QWORD, GUID *, __int64 *); // rbx
  int v18; // eax
  __int64 v19; // rdx
  HRESULT (__stdcall *v20)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  HRESULT (__stdcall *v25)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  __int64 v32; // [rsp+70h] [rbp+40h] BYREF
  __int64 v33; // [rsp+78h] [rbp+48h] BYREF
  __int64 v34; // [rsp+80h] [rbp+50h] BYREF

  QueryService = a2->lpVtbl->QueryService;
  v5 = (char *)this + 528;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 66);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &IID_IImmersiveApplicationManager,
         &GUID_a63390e7_2828_46fb_9af0_fe36eae5bae0,
         v5);
  if ( v6 >= 0 )
  {
    v8 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 67);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v8)(
           a2,
           &IID_IClassicWindowManager,
           &GUID_c16c342e_f6f2_4a8e_86c6_74a6ae2a8a84,
           (char *)this + 536);
    if ( v6 < 0 )
    {
      v7 = 63LL;
      goto LABEL_3;
    }
    v9 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 68);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v9)(
           a2,
           &GUID_55fa44d3_fe5d_40c3_bc17_14db2012770a,
           &GUID_55fa44d3_fe5d_40c3_bc17_14db2012770a,
           (char *)this + 544);
    if ( v6 < 0 )
    {
      v7 = 64LL;
      goto LABEL_3;
    }
    v10 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 73);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v10)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
           (char *)this + 584);
    if ( v6 < 0 )
    {
      v7 = 65LL;
      goto LABEL_3;
    }
    v11 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 74);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v11)(
           a2,
           &GUID_5f563eea_a82c_4693_96ab_44f7c4a1262c,
           &GUID_5f563eea_a82c_4693_96ab_44f7c4a1262c,
           (char *)this + 592);
    if ( v6 < 0 )
    {
      v7 = 66LL;
      goto LABEL_3;
    }
    v12 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 69);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v12)(
           a2,
           &GUID_1258a377_0646_40fd_b5fc_b642b81befba,
           &GUID_1258a377_0646_40fd_b5fc_b642b81befba,
           (char *)this + 552);
    if ( v6 < 0 )
    {
      v7 = 68LL;
      goto LABEL_3;
    }
    v13 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 70);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v13)(
           a2,
           &GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90,
           &GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90,
           (char *)this + 560);
    if ( v6 < 0 )
    {
      v7 = 69LL;
      goto LABEL_3;
    }
    v14 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 71);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v14)(
           a2,
           &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd,
           &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd,
           (char *)this + 568);
    if ( v6 < 0 )
    {
      v7 = 70LL;
      goto LABEL_3;
    }
    v15 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 72);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v15)(
           a2,
           &GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b,
           &GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b,
           (char *)this + 576);
    if ( v6 < 0 )
    {
      v7 = 71LL;
      goto LABEL_3;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 74) + 40LL))(
           *((_QWORD *)this + 74),
           ((unsigned __int64)this + 96) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 72) >> 64));
    if ( v6 < 0 )
    {
      v7 = 73LL;
      goto LABEL_3;
    }
    v34 = 0LL;
    v16 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v5;
    v17 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v5;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
    v18 = v17(v16, &GUID_371e4246_3f0a_4ec6_a471_4d35f63b1164, &v34);
    v6 = v18;
    if ( v18 < 0 )
    {
      v19 = 82LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v18);
LABEL_39:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
      return (unsigned int)v6;
    }
    v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 24LL))(v34);
    v6 = v18;
    if ( v18 < 0 )
    {
      v19 = 83LL;
      goto LABEL_26;
    }
    v32 = 0LL;
    v20 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
    v21 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v20)(
            a2,
            &IID_IImmersiveApplicationNotificationService,
            &GUID_7860c098_fb29_49aa_a512_adacc0ffee84,
            &v32);
    v6 = v21;
    if ( v21 >= 0 )
    {
      v21 = SmartCookie::Register<IImmersiveApplicationNotificationService,long (IImmersiveApplicationNotificationService::*)(IImmersiveApplicationNotification *,unsigned long *),long (IImmersiveApplicationNotificationService::*)(unsigned long),CApplicationViewManager *>(
              (__int64)this + 328,
              v32,
              v22,
              v23,
              (unsigned __int64)this - 72);
      v6 = v21;
      if ( v21 >= 0 )
      {
        v33 = 0LL;
        v25 = a2->lpVtbl->QueryService;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
        v26 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v25)(
                a2,
                &GUID_f42f750a_64a8_4190_951d_c6f7ef4e4ba1,
                &GUID_f8a6c78c_9f19_4417_aaf5_c9807f8aee4f,
                &v33);
        v6 = v26;
        if ( v26 >= 0 )
        {
          v26 = SmartCookie::Register<IEnterpriseIdChangeNotificationProvider,long (IEnterpriseIdChangeNotificationProvider::*)(IEnterpriseIdChangeNotification *,unsigned long *),long (IEnterpriseIdChangeNotificationProvider::*)(unsigned long),CApplicationViewManager *>(
                  (__int64)this + 200,
                  v33,
                  v27,
                  v28,
                  (unsigned __int64)this - 72);
          v6 = v26;
          if ( v26 >= 0 )
          {
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
            v6 = 0;
            goto LABEL_39;
          }
          v29 = 102LL;
        }
        else
        {
          v29 = 97LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v29,
          (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v26);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
        goto LABEL_30;
      }
      v24 = 92LL;
    }
    else
    {
      v24 = 87LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v21);
LABEL_30:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
    goto LABEL_39;
  }
  v7 = 62LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
