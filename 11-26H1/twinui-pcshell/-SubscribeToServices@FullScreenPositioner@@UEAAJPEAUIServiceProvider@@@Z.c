/*
 * XREFs of ?SubscribeToServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800860A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall FullScreenPositioner::SubscribeToServices(FullScreenPositioner *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  char *v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  HRESULT (__stdcall *v8)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v9; // eax
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v11; // eax
  HRESULT (__stdcall *v12)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v13; // eax
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 *v15; // rax
  int v16; // eax
  HRESULT (__stdcall *v17)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v18)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  char *v19; // rdi
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  __int64 v36; // [rsp+70h] [rbp+40h] BYREF
  __int64 v37; // [rsp+78h] [rbp+48h] BYREF
  __int64 v38; // [rsp+80h] [rbp+50h] BYREF

  QueryService = a2->lpVtbl->QueryService;
  v5 = (char *)this + 176;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 22);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &IID_IImmersiveApplicationManager,
         &GUID_bf63999f_7411_40da_861c_df72c0ffee84,
         v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCA,
      (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  v38 = 0LL;
  v8 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v38);
  v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v8)(
         a2,
         &IID_IActiveZBandNotificationForMonitorService,
         &GUID_0f019ffe_0388_4dcf_a2e2_f059a60a5704,
         &v38);
  v7 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCD,
      (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_47;
  }
  v36 = 0LL;
  v10 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
  v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v10)(
          a2,
          &SID_IImmersiveMonitorService,
          &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
          &v36);
  v7 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD0,
      (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v11);
    v28 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    v29 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
  }
  else
  {
    v37 = 0LL;
    v12 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
    v13 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v12)(
            a2,
            &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
            &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
            &v37);
    v7 = v13;
    if ( v13 >= 0 )
    {
      v14 = a2->lpVtbl->QueryService;
      v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)this + 21);
      v16 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v14)(
              a2,
              &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
              &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
              v15);
      v7 = v16;
      if ( v16 < 0 )
      {
        v34 = 213LL;
      }
      else
      {
        v17 = a2->lpVtbl->QueryService;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 28);
        v16 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v17)(
                a2,
                &GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425,
                &GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425,
                (char *)this + 224);
        v7 = v16;
        if ( v16 < 0 )
        {
          v34 = 214LL;
        }
        else
        {
          v18 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 29);
          v16 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v18)(
                  a2,
                  &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
                  &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
                  (char *)this + 232);
          v7 = v16;
          if ( v16 < 0 )
          {
            v34 = 215LL;
          }
          else
          {
            v19 = (char *)this - 32;
            v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v38 + 24LL))(
                    v38,
                    ((unsigned __int64)this + 104) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 32) >> 64),
                    (char *)this + 288);
            v7 = v20;
            if ( v20 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xD9,
                (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
                (const char *)(unsigned int)v20);
              v21 = v37;
              if ( v37 )
              {
                v37 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
              }
              v22 = v36;
              if ( v36 )
              {
                v36 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
              }
              v23 = v38;
              if ( v38 )
              {
                v38 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
              }
              return v7;
            }
            v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v36 + 24LL))(
                    v36,
                    ((unsigned __int64)this + 96) & ((unsigned __int128)-(__int128)(unsigned __int64)v19 >> 64),
                    (char *)this + 292);
            v7 = v16;
            if ( v16 < 0 )
            {
              v34 = 218LL;
            }
            else
            {
              v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 21) + 96LL))(
                      *((_QWORD *)this + 21),
                      ((unsigned __int64)this + 112) & ((unsigned __int128)-(__int128)(unsigned __int64)v19 >> 64),
                      (char *)this + 296);
              v7 = v16;
              if ( v16 >= 0 )
              {
                v30 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v37 + 72LL))(
                        v37,
                        ((unsigned __int64)this + 120) & -(__int64)(this != (FullScreenPositioner *)32),
                        (char *)this + 300);
                v7 = v30;
                if ( v30 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0xDC,
                    (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
                    (const char *)(unsigned int)v30);
                  v31 = v37;
                  if ( v37 )
                  {
                    v37 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
                  }
                  v32 = v36;
                  if ( v36 )
                  {
                    v36 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
                  }
                  v33 = v38;
                  if ( v38 )
                  {
                    v38 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
                  }
                  return v7;
                }
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
                v7 = 0;
LABEL_47:
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v38);
                return v7;
              }
              v34 = 219LL;
            }
          }
        }
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v34,
        (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v16);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
      goto LABEL_47;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD3,
      (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v13);
    v24 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    v25 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    v26 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
  }
  return v7;
}
