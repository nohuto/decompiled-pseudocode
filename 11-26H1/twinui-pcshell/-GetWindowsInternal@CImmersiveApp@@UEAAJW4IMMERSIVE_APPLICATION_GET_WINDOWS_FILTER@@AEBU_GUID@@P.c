/*
 * XREFs of ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x180045C10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x18004589C (-CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800463AC (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800464B8 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Attach@?$ComPtr@VPositionerPriority@@@WRL@Microsoft@@QEAAXPEAVPositionerPriority@@@Z @ 0x180165384 (-Attach@-$ComPtr@VPositionerPriority@@@WRL@Microsoft@@QEAAXPEAVPositionerPriority@@@Z.c)
 *     ?_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@PEA_K@Z @ 0x1802BCFC8 (-_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CImmersiveApp::GetWindowsInternal(_QWORD *a1, unsigned int a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  signed int Instance; // edi
  bool v10; // r14
  unsigned __int64 v11; // rdi
  Microsoft::WRL::FtmBase *v12; // rax
  Microsoft::WRL::FtmBase *v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  char v17; // al
  unsigned __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct ITaskWindow *v21; // rbx
  char v22; // r15
  __int64 v23; // r8
  __int64 v24; // rax
  _QWORD *v25; // rdi
  __int64 v26; // r14
  Microsoft::WRL::FtmBase *v27; // rax
  Microsoft::WRL::FtmBase *v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  struct ITaskWindow *v33; // rcx
  __int64 v34; // rcx
  void *v35; // rcx
  struct ITaskWindow *v37; // r8
  const struct _GUID *v38; // rdx
  int v39; // ecx
  __int64 v40; // rax
  __int64 v41; // rax
  HWND v42; // r15
  __int64 v43; // rax
  void **v44; // rax
  const struct _GUID *v45; // rdx
  unsigned __int64 v46; // rdx
  struct ITaskWindow *v47; // [rsp+20h] [rbp-50h] BYREF
  __int64 v48; // [rsp+28h] [rbp-48h] BYREF
  __int64 v49; // [rsp+30h] [rbp-40h] BYREF
  void *v50; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v51; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v52; // [rsp+48h] [rbp-28h] BYREF
  HWND v53; // [rsp+50h] [rbp-20h] BYREF
  __int64 v54; // [rsp+58h] [rbp-18h] BYREF
  char v55; // [rsp+60h] [rbp-10h]

  *a4 = 0LL;
  v50 = 0LL;
  v48 = 0LL;
  v47 = 0LL;
  v7 = *a3 - *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1;
  if ( *a3 == *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1 )
    v7 = a3[1] - *(_QWORD *)GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data4;
  if ( v7 )
  {
    v8 = *a3 - *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1;
    if ( *a3 == *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1 )
      v8 = a3[1] - *(_QWORD *)GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data4;
    if ( v8 )
    {
      v40 = *a3 - *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
      if ( *a3 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1 )
        v40 = a3[1] - *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
      if ( v40 )
      {
        Instance = -2147467262;
        goto LABEL_64;
      }
      Instance = (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 408LL))(a1) == 0 ? 0x8007139F : 0;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 408LL))(a1) || a2 == 5 )
    {
      Instance = 0;
    }
    else
    {
      Instance = -2147019873;
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v50);
    Instance = CEnumerableObjectCollection::CreateInstance(v39, v38, &v50);
  }
  if ( Instance < 0 )
    goto LABEL_64;
  v10 = a2 != 3;
  if ( a2 - 2 > 1 )
  {
    if ( a2 == 4 || a2 == 5 )
    {
      v10 = 0;
      v51 = 0LL;
      Instance = (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64 *))(*a1 + 496LL))(a1, &v51);
      if ( Instance >= 0 )
      {
        v52 = 0LL;
        Instance = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64 *))(*(_QWORD *)v51 + 24LL))(v51, &v52);
        if ( Instance >= 0 )
        {
          v11 = v52;
          v49 = 0LL;
          v12 = (Microsoft::WRL::FtmBase *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
          v13 = v12;
          if ( v12 )
          {
            Microsoft::WRL::FtmBase::FtmBase(v12);
            *((_DWORD *)v13 + 11) = 1;
            *(_QWORD *)v13 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
            *((_QWORD *)v13 + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
            if ( Microsoft::WRL::Details::ModuleBase::module_ )
              (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
            *(_QWORD *)v13 = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
            *((_QWORD *)v13 + 4) = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
            *((_QWORD *)v13 + 6) = v11;
            Instance = (**(__int64 (__fastcall ***)(Microsoft::WRL::FtmBase *, GUID *, __int64 *))v13)(
                         v13,
                         &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                         &v49);
          }
          else
          {
            v13 = 0LL;
            Instance = -2147024882;
          }
          if ( v13 )
            (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)v13 + 16LL))(v13);
          if ( Instance >= 0 )
          {
            v14 = v49;
            v49 = 0LL;
            if ( v48 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
            v48 = v14;
          }
          v15 = v49;
          if ( v49 )
          {
            v49 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          }
        }
      }
      if ( a2 == 4 && (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 408LL))(a1) && Instance < 0 )
      {
        Instance = 0;
        a2 = 0;
        v10 = 1;
      }
      v16 = v51;
      if ( v51 )
      {
        v51 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
    goto LABEL_30;
  }
  v42 = (HWND)a1[38];
  if ( !v42 )
    goto LABEL_30;
  v43 = *a3 - *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
  if ( *a3 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1 )
    v43 = a3[1] - *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
  if ( v43 )
  {
    v51 = 0LL;
    v44 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v51);
    Instance = CImmersiveApplicationWindow_CreateInstance(v42, v45, v44);
    if ( Instance >= 0 )
    {
      v46 = v51;
      v51 = 0LL;
      Microsoft::WRL::ComPtr<PositionerPriority>::Attach(&v48, v46);
      v10 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v51);
LABEL_30:
    if ( v10 )
    {
      v17 = 1;
      v51 = a1[43];
      v18 = 0LL;
      v52 = 0LL;
      if ( v51 )
      {
        v19 = *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
        v20 = *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
        while ( 1 )
        {
          if ( !v17 )
            goto LABEL_55;
          v21 = *(struct ITaskWindow **)(a1[42] + 8 * v18);
          v22 = 1;
          v23 = a2;
          if ( a2 && (v23 = a2 - 1, (unsigned int)v23 >= 2) )
          {
            Instance = -2147418113;
          }
          else
          {
            v24 = *a3 - v20;
            if ( *a3 == v20 )
              v24 = a3[1] - v19;
            if ( v24 )
            {
              v49 = 0LL;
              v25 = (_QWORD *)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v49);
              v26 = (*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v21 + 32LL))(v21);
              *v25 = 0LL;
              v27 = (Microsoft::WRL::FtmBase *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
              v28 = v27;
              if ( v27 )
              {
                Microsoft::WRL::FtmBase::FtmBase(v27);
                *((_DWORD *)v28 + 11) = 1;
                *(_QWORD *)v28 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
                *((_QWORD *)v28 + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
                if ( Microsoft::WRL::Details::ModuleBase::module_ )
                  (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
                *(_QWORD *)v28 = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
                *((_QWORD *)v28 + 4) = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
                *((_QWORD *)v28 + 6) = v26;
                Instance = (**(__int64 (__fastcall ***)(Microsoft::WRL::FtmBase *, GUID *, _QWORD *))v28)(
                             v28,
                             &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                             v25);
              }
              else
              {
                v28 = 0LL;
                Instance = -2147024882;
              }
              if ( v28 )
                (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)v28 + 16LL))(v28);
              if ( Instance >= 0 )
              {
                if ( v50 )
                {
                  Instance = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v50 + 40LL))(v50, v49);
                }
                else
                {
                  v29 = v49;
                  v49 = 0LL;
                  if ( v48 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
                  v48 = v29;
                  v22 = 0;
                }
              }
              v30 = v49;
              if ( v49 )
              {
                v49 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
              }
              if ( v22 && Instance >= 0 )
              {
                v17 = 1;
                v19 = *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
                v20 = *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
                goto LABEL_54;
              }
              v19 = *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
              v20 = *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
            }
            else if ( v47 != v21 )
            {
              if ( v21 )
              {
                (*(void (__fastcall **)(struct ITaskWindow *, __int64, __int64))(*(_QWORD *)v21 + 8LL))(v21, v19, v23);
                v19 = *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
                v20 = *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
              }
              v37 = v47;
              v47 = v21;
              if ( v37 )
              {
                (*(void (__fastcall **)(struct ITaskWindow *, __int64))(*(_QWORD *)v37 + 16LL))(v37, v19);
                v19 = *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
                v20 = *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
              }
            }
          }
          v17 = 0;
LABEL_54:
          v18 = v52 + 1;
          v52 = v18;
          if ( v18 >= v51 )
            goto LABEL_55;
        }
      }
    }
    v19 = *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
    v20 = *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
LABEL_55:
    if ( Instance < 0 )
      goto LABEL_64;
    goto LABEL_56;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v47);
  v53 = v42;
  v54 = 0LL;
  v55 = 0;
  v52 = 0LL;
  CImmersiveApp::CImmersiveWindowCollection::_GetWindow(
    (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 22),
    (const struct CTaskWindowFinder *)&v53,
    &v47,
    &v52);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v54);
  v19 = *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
  v20 = *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
LABEL_56:
  v31 = *a3 - *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1;
  if ( *a3 == *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1 )
    v31 = a3[1] - *(_QWORD *)GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data4;
  if ( v31 )
  {
    v32 = *a3 - *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1;
    if ( *a3 == *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1 )
      v32 = a3[1] - *(_QWORD *)GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data4;
    if ( v32 )
    {
      v41 = *a3 - v20;
      if ( *a3 == v20 )
        v41 = a3[1] - v19;
      if ( !v41 )
      {
        if ( !v47 )
          goto LABEL_63;
        Instance = (**(__int64 (__fastcall ***)(struct ITaskWindow *, _QWORD *, _QWORD *))v47)(v47, a3, a4);
      }
    }
    else
    {
      if ( !v48 )
      {
LABEL_63:
        Instance = -2147019873;
        goto LABEL_64;
      }
      Instance = (**(__int64 (__fastcall ***)(__int64, _QWORD *, _QWORD *))v48)(v48, a3, a4);
    }
  }
  else
  {
    Instance = (**(__int64 (__fastcall ***)(void *, _QWORD *, _QWORD *))v50)(v50, a3, a4);
  }
LABEL_64:
  v33 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v33 + 16LL))(v33);
  }
  v34 = v48;
  if ( v48 )
  {
    v48 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  v35 = v50;
  if ( v50 )
  {
    v50 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v35 + 16LL))(v35);
  }
  return (unsigned int)Instance;
}
