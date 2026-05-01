/*
 * XREFs of ?PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1804EB6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800580B4 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ?GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x1800613B0 (-GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800614C8 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18006F71C (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007903C (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?StartActivity@PresentationRequested@ShellPositionerTelemetry@@QEAAXXZ @ 0x1802171B4 (-StartActivity@PresentationRequested@ShellPositionerTelemetry@@QEAAXXZ.c)
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1PEAUIPresentationRequestedArgs@@W4SHELL_POSITIONER_TYPE@@3@Z @ 0x180296454 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonit.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$query@U?$IVectorView@I@Collections@Foundation@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IVectorView@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1804EA654 (--$query@U-$IVectorView@I@Collections@Foundation@Windows@@@-$com_ptr_t@UIInspectable@@Uerr_excep.c)
 *     ??$query@UIPresentationRequestedArgs@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIPresentationRequestedArgs@@Uerr_exception_policy@wil@@@1@XZ @ 0x1804EA6AC (--$query@UIPresentationRequestedArgs@@@-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wi.c)
 *     ??1PresentationRequested@ShellPositionerTelemetry@@QEAA@XZ @ 0x1804EA898 (--1PresentationRequested@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ?UpdatePositionerPriorityForPresentation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIInspectable@@@Z @ 0x1804ED1AC (-UpdatePositionerPriorityForPresentation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriori.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall ShellPositionerManager::PresentationRequested(
        ShellPositionerManager *this,
        struct IApplicationView *a2,
        struct IInspectable *a3)
{
  struct IInspectable *v3; // rsi
  int PositionerPriorityForView; // eax
  unsigned int v7; // ebx
  int v8; // r12d
  __int64 (__fastcall *v9)(struct IApplicationView *, IUnknown **); // rbx
  int v10; // eax
  _QWORD *v11; // rax
  char v12; // r14
  __int64 v13; // rbx
  int (__fastcall *v14)(__int64, __int64 *); // rdi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, _QWORD, __int64 *); // rbx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, _QWORD, struct IImmersiveMonitor **); // rdi
  unsigned int v23; // esi
  __int64 v24; // rdi
  __int64 (__fastcall *v25)(__int64, _QWORD, __int64 *); // rbx
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, _QWORD, struct IImmersiveMonitor **); // rdi
  int PositionerForMonitor; // eax
  __int64 v29; // rdx
  struct IShellPositionerPriority *v30; // rbx
  __int64 (__fastcall *v31)(struct IShellPositionerPriority *, struct IShellPositionerPriority **); // rdi
  int updated; // eax
  ShellPositionerManager *v33; // rcx
  __int64 v34; // rdx
  int v35; // edi
  int v36; // eax
  __int64 v37; // rdx
  struct IImmersiveMonitor *v39; // [rsp+40h] [rbp-C0h] BYREF
  IUnknown *v40; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v42; // [rsp+58h] [rbp-A8h] BYREF
  struct IShellPositionerPriority *v43; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+68h] [rbp-98h] BYREF
  void *v45; // [rsp+70h] [rbp-90h] BYREF
  __int64 v46; // [rsp+78h] [rbp-88h] BYREF
  void *v47; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v48; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v49; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v50; // [rsp+90h] [rbp-70h] BYREF
  struct IShellPositionerPriority *v51; // [rsp+98h] [rbp-68h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-60h]
  _QWORD v53[42]; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]

  v3 = a3;
  v43 = (struct IShellPositionerPriority *)a3;
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v53,
    (__int64)"PresentationRequested");
  v53[0] = &ShellPositionerTelemetry::PresentationRequested::`vftable';
  ShellPositionerTelemetry::PresentationRequested::StartActivity((ShellPositionerTelemetry::PresentationRequested *)v53);
  v51 = 0LL;
  v52 = (__int64)this - 128;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v51);
  PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(
                                (ShellPositionerManager *)((char *)this - 128),
                                a2,
                                &v51);
  v7 = PositionerPriorityForView;
  if ( PositionerPriorityForView >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v51 + 24LL))(v51);
    v40 = 0LL;
    v9 = *(__int64 (__fastcall **)(struct IApplicationView *, IUnknown **))(*(_QWORD *)a2 + 80LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v40);
    v10 = v9(a2, &v40);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2BF,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_5:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v40);
      goto LABEL_57;
    }
    v11 = wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
            &v47,
            (__int64)v3);
    wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<IPresentationRequestedArgs>(
      (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))v11,
      &v42);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v47);
    v39 = (struct IImmersiveMonitor *)v40;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v39);
    v12 = 0;
    v41 = 0LL;
    v13 = v42;
    v14 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v42 + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v41);
    if ( v14(v13, &v41) >= 0 )
    {
      wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
        &v47,
        v41);
      wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Foundation::Collections::IVectorView<unsigned int>>(
        (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v47,
        &v46);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v47);
      v50 = 0;
      v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v46 + 56LL))(v46, &v50);
      v7 = v15;
      if ( v15 < 0 )
      {
        v16 = 716LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v15);
LABEL_10:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v46);
LABEL_11:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v41);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v39);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
        goto LABEL_5;
      }
      if ( v50 )
      {
        v12 = 1;
        if ( v50 > 1 )
        {
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v46);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v41);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v39);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v40);
          v7 = -2147024809;
          goto LABEL_57;
        }
        v48 = 0;
        v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v46 + 48LL))(v46, 0LL, &v48);
        v7 = v15;
        if ( v15 < 0 )
        {
          v16 = 723LL;
          goto LABEL_9;
        }
        v44 = 0LL;
        v49 = 0;
        if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v42 + 40LL))(v42, &v49) < 0 )
        {
          if ( v8 == 6 )
          {
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v44);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v46);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v41);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v39);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v40);
            v7 = -2147467263;
            goto LABEL_57;
          }
          v23 = (*((_DWORD *)this + 4) == 1) + 1;
          v24 = *((_QWORD *)this + 6);
          v25 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v24 + 32LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v44);
          v19 = v25(v24, v23, &v44);
          v7 = v19;
          if ( v19 < 0 )
          {
            v20 = 744LL;
            goto LABEL_20;
          }
          v26 = v44;
          v27 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IImmersiveMonitor **))(*(_QWORD *)v44 + 88LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v39);
          v19 = v27(v26, v48, &v39);
          v7 = v19;
          if ( v19 < 0 )
          {
            v20 = 745LL;
            goto LABEL_20;
          }
          v3 = (struct IInspectable *)v43;
        }
        else
        {
          v17 = *((_QWORD *)this + 6);
          v18 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v17 + 40LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v44);
          v19 = v18(v17, v49, &v44);
          v7 = v19;
          if ( v19 < 0 )
          {
            v20 = 729LL;
LABEL_20:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v20,
              (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
              (const char *)(unsigned int)v19);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v44);
            goto LABEL_10;
          }
          v21 = v44;
          v22 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IImmersiveMonitor **))(*(_QWORD *)v44 + 88LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v39);
          v19 = v22(v21, v48, &v39);
          v7 = v19;
          if ( v19 < 0 )
          {
            v20 = 730LL;
            goto LABEL_20;
          }
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v44);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v46);
    }
    v45 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v45);
    PositionerForMonitor = ShellPositionerManager::GetPositionerForMonitor(
                             v8,
                             v40,
                             &GUID_ee010e17_919a_4068_868b_675acf787303,
                             &v45);
    v7 = PositionerForMonitor;
    if ( PositionerForMonitor < 0 )
    {
      v29 = 752LL;
LABEL_33:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v29,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)PositionerForMonitor);
LABEL_34:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v45);
      goto LABEL_11;
    }
    if ( (!v12 || !v8 || v8 == 7)
      && (*(unsigned int (__fastcall **)(void *, struct IApplicationView *, struct IInspectable *))(*(_QWORD *)v45 + 72LL))(
           v45,
           a2,
           v3) )
    {
      PositionerForMonitor = (*(__int64 (__fastcall **)(void *, struct IApplicationView *, struct IInspectable *))(*(_QWORD *)v45 + 80LL))(
                               v45,
                               a2,
                               v3);
      v7 = PositionerForMonitor;
      if ( PositionerForMonitor < 0 )
      {
        v29 = 763LL;
        goto LABEL_33;
      }
LABEL_56:
      wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v53);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v45);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v41);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v39);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v40);
      v7 = 0;
      goto LABEL_57;
    }
    v43 = 0LL;
    v30 = v51;
    v31 = *(__int64 (__fastcall **)(struct IShellPositionerPriority *, struct IShellPositionerPriority **))(*(_QWORD *)v51 + 64LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v43);
    updated = v31(v30, &v43);
    v7 = updated;
    if ( updated >= 0 )
    {
      updated = ShellPositionerManager::UpdatePositionerPriorityForPresentation(v33, v43, a2, v39, v3);
      v7 = updated;
      if ( updated >= 0 )
      {
        v35 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v43 + 24LL))(v43);
        v47 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v47);
        v36 = ShellPositionerManager::GetPositionerForMonitor(
                v35,
                (IUnknown *)v39,
                &GUID_ee010e17_919a_4068_868b_675acf787303,
                &v47);
        v7 = v36;
        if ( v36 >= 0 )
        {
          v36 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IShellPositionerPriority *))(*(_QWORD *)a2 + 272LL))(
                  a2,
                  v43);
          v7 = v36;
          if ( v36 >= 0 )
          {
            v36 = ShellPositionerManager::PerformPositionerHandoff(v52, a2, (__int64)v40, (__int64)v39, v42, v8, v35);
            v7 = v36;
            if ( v36 >= 0 )
            {
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v47);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v43);
              goto LABEL_56;
            }
            v37 = 787LL;
          }
          else
          {
            v37 = 783LL;
          }
        }
        else
        {
          v37 = 780LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v37,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v36);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v47);
LABEL_45:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v43);
        goto LABEL_34;
      }
      v34 = 775LL;
    }
    else
    {
      v34 = 772LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v34,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)updated);
    goto LABEL_45;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2BA,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)PositionerPriorityForView);
LABEL_57:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v51);
  ShellPositionerTelemetry::PresentationRequested::~PresentationRequested((ShellPositionerTelemetry::PresentationRequested *)v53);
  return v7;
}
