/*
 * XREFs of ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x1803898FC
 * Callers:
 *     ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18038B5C0 (-OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 *     ?PopulateDelayLoadedContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@PEAUIContact@Contacts@ApplicationModel@Windows@@@Z @ 0x18038BC10 (-PopulateDelayLoadedContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@PEAUIContact@Contac.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801362A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0f768bc8971e0bee1fc73f6126b3910e_____lambda_0f768bc8971e0bee1fc73f6126b3910e___ @ 0x180388A7C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0f768bc8971e0.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c080f31e4a013481e3d9e91b0ac65f7c_____lambda_c080f31e4a013481e3d9e91b0ac65f7c___ @ 0x180388B64 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c080f31e4a013.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180388ED0 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_180388ED0.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180388F8C (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_180388F8C.c)
 *     _lambda_0f768bc8971e0bee1fc73f6126b3910e_::__lambda_0f768bc8971e0bee1fc73f6126b3910e_ @ 0x1803891D4 (_lambda_0f768bc8971e0bee1fc73f6126b3910e_--__lambda_0f768bc8971e0bee1fc73f6126b3910e_.c)
 *     _lambda_c080f31e4a013481e3d9e91b0ac65f7c_::__lambda_c080f31e4a013481e3d9e91b0ac65f7c_ @ 0x18038920C (_lambda_c080f31e4a013481e3d9e91b0ac65f7c_--__lambda_c080f31e4a013481e3d9e91b0ac65f7c_.c)
 *     ??1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ @ 0x1803893C4 (--1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@ApplicationModel@Windows@@PEAPEAU2345@@Z @ 0x180389D2C (-CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@Ap.c)
 *     ?Split@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA?AV12@XZ @ 0x18038C430 (-Split@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA-AV12@XZ.c)
 *     ?StartActivity@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAAXXZ @ 0x18038C4C4 (-StartActivity@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18038CA64 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CQuickConnectExperienceManager::CheckAndPopulateContact(CQuickConnectExperienceManager *this)
{
  __int64 v2; // rbx
  __int64 *v3; // r15
  __int64 v4; // rdi
  char v5; // r12
  CQuickConnectExperienceManager *v6; // rcx
  int v7; // eax
  int v8; // r14d
  volatile signed __int32 **v9; // rax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rcx
  volatile signed __int32 **v12; // rcx
  __int64 *v13; // r15
  volatile signed __int32 *v14; // rbx
  __int64 v15; // rdi
  volatile signed __int32 **v16; // rax
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rcx
  __int64 v20; // [rsp+30h] [rbp-D0h] BYREF
  struct Windows::ApplicationModel::Contacts::IContactCardOptions *v21; // [rsp+38h] [rbp-C8h] BYREF
  volatile signed __int32 *v22; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int32 *v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  struct Windows::ApplicationModel::Contacts::IContactCardOptions *v26; // [rsp+60h] [rbp-A0h] BYREF
  char v27; // [rsp+68h] [rbp-98h]
  void **v28; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v29[42]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v30[336]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE v31[336]; // [rsp+460h] [rbp+360h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+5E8h] [rbp+4E8h]

  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v29,
    (__int64)"ExperienceManager_CheckAndPopulateContact");
  v29[0] = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
  QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::StartActivity((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v29);
  v2 = *((_QWORD *)this + 40);
  if ( !v2 )
    goto LABEL_27;
  v3 = (__int64 *)((char *)this + 328);
  if ( !*((_QWORD *)this + 41) )
  {
LABEL_13:
    if ( *((_BYTE *)this + 364) )
    {
      v13 = (__int64 *)((char *)this + 368);
      if ( *((_QWORD *)this + 46) )
      {
        v14 = (volatile signed __int32 *)*((_QWORD *)this + 40);
        v22 = v14;
        if ( v14 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        v15 = *v13;
        v20 = *v13;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
        QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::Split(v29, v31);
        v24 = (__int64)v14;
        if ( v14 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        v25 = v15;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v25);
        wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
          (struct wil::details::IFailureCallback *)&v26,
          (__int64)v31);
        v26 = (struct Windows::ApplicationModel::Contacts::IContactCardOptions *)&QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
        v16 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c080f31e4a013481e3d9e91b0ac65f7c_____lambda_c080f31e4a013481e3d9e91b0ac65f7c___(
                &v23,
                (volatile signed __int32 *)&v24);
        v17 = *v16;
        *v16 = 0LL;
        v18 = v23;
        if ( v23 )
        {
          v23 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v18);
        }
        v8 = SHTaskPoolQueueTask(3LL, 2LL, (unsigned int)this);
        if ( v17 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        lambda_c080f31e4a013481e3d9e91b0ac65f7c_::__lambda_c080f31e4a013481e3d9e91b0ac65f7c_(&v24);
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x443,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
            (const char *)(unsigned int)v8);
          QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v31);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
          v12 = &v22;
          goto LABEL_25;
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 46);
        QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v31);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
      }
    }
LABEL_27:
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v29);
    v8 = 0;
    goto LABEL_28;
  }
  v23 = (volatile signed __int32 *)*((_QWORD *)this + 40);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v4 = *v3;
  v20 = *v3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
  v5 = *((_BYTE *)this + 364);
  v21 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
  v7 = CQuickConnectExperienceManager::CopyContactCardOptions(
         v6,
         *((struct Windows::ApplicationModel::Contacts::IContactCardOptions **)this + 42),
         &v21);
  v8 = v7;
  if ( v7 >= 0 )
  {
    QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::Split(v29, v30);
    v24 = v2;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v25 = v4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v25);
    v26 = v21;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26);
    v27 = v5;
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)&v28,
      (__int64)v30);
    v28 = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
    v9 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0f768bc8971e0bee1fc73f6126b3910e_____lambda_0f768bc8971e0bee1fc73f6126b3910e___(
           &v22,
           (__int64)&v24);
    v10 = *v9;
    *v9 = 0LL;
    v11 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v11);
    }
    v8 = SHTaskPoolQueueTask(3LL, 2LL, (unsigned int)this);
    if ( v10 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
    lambda_0f768bc8971e0bee1fc73f6126b3910e_::__lambda_0f768bc8971e0bee1fc73f6126b3910e_(&v24);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x425,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v30);
      goto LABEL_11;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 41);
    QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v30);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x410,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
  v12 = &v23;
LABEL_25:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v12);
LABEL_28:
  QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v29);
  return (unsigned int)v8;
}
