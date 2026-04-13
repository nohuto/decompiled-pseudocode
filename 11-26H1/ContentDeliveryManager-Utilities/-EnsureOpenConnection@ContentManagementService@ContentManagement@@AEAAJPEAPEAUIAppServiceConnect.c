/*
 * XREFs of ?EnsureOpenConnection@ContentManagementService@ContentManagement@@AEAAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x18004F668
 * Callers:
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x180057E00 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     ??0_lambda_62158d46a05af21ae3d227fe228597be_@@QEAA@PEAVPinWebsiteToTaskbarService@Actions@CreativeFramework@@@Z @ 0x1800236BC (--0_lambda_62158d46a05af21ae3d227fe228597be_@@QEAA@PEAVPinWebsiteToTaskbarService@Actions@Creati.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180033C00 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800448A8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::AppService::AppServiceConnection___Windows::ApplicationModel::AppService::IAppServiceConnection____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::AppService::AppServiceClosedEventArgs___Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs_____::_)(Windows::ApplicationModel::AppService::IAppServiceConnection___Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::AppService::AppServiceConnection___Windows::ApplicationModel::AppService::AppServiceClosedEventArgs____Microsoft::WRL::FtmBase___lambda_43d5cd0ad306fdb22566dc3fe2fed53d__&__1_Windows::ApplicationModel::AppService::IAppServiceConnection___Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs_____lambda_43d5cd0ad306fdb22566dc3fe2fed53d__&_ @ 0x180046FA4 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--.c)
 *     ?OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x180054FB8 (-OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@Applica.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVAppServiceConnection@AppService@ApplicationModel@Windows@@PEAVAppServiceClosedEventArgs@234@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800569F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$Implements@U-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ContentManagement::ContentManagementService::EnsureOpenConnection(
        ContentManagement::ContentManagementService *this,
        struct Windows::ApplicationModel::AppService::IAppServiceConnection **a2)
{
  __int64 *v4; // rdi
  struct Windows::ApplicationModel::AppService::IAppServiceConnection *v5; // rax
  __int64 v6; // rax
  struct Windows::ApplicationModel::AppService::IAppServiceConnection **v7; // rdx
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64, char *); // r12
  _lambda_62158d46a05af21ae3d227fe228597be_ *v13; // rax
  __int64 *v14; // rax
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  __int64 v19; // [rsp+70h] [rbp+40h] BYREF
  __int64 v20; // [rsp+78h] [rbp+48h] BYREF
  PSRWLOCK SRWLock; // [rsp+80h] [rbp+50h] BYREF
  char v22; // [rsp+88h] [rbp+58h] BYREF

  v4 = (__int64 *)((char *)this + 128);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)this + 16);
  v5 = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)*v4;
  *a2 = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)*v4;
  if ( v5 )
    return 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&SRWLock, (RTL_SRWLOCK *)this + 15);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v4);
  v6 = *v4;
  *a2 = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)*v4;
  if ( v6 )
  {
LABEL_17:
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return 0LL;
  }
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
  v8 = ContentManagement::OpenAndValidateConnection((ContentManagement *)&v19, v7);
  if ( v8 >= 0 )
  {
    v11 = v19;
    v12 = *(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v19 + 112LL);
    v13 = _lambda_62158d46a05af21ae3d227fe228597be_::_lambda_62158d46a05af21ae3d227fe228597be_(
            (_lambda_62158d46a05af21ae3d227fe228597be_ *)&v22,
            this);
    v14 = Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::AppService::AppServiceConnection___Windows::ApplicationModel::AppService::IAppServiceConnection____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::AppService::AppServiceClosedEventArgs___Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs_____::___Windows::ApplicationModel::AppService::IAppServiceConnection___Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::AppService::AppServiceConnection___Windows::ApplicationModel::AppService::AppServiceClosedEventArgs____Microsoft::WRL::FtmBase___lambda_43d5cd0ad306fdb22566dc3fe2fed53d_____1_Windows::ApplicationModel::AppService::IAppServiceConnection___Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs_____lambda_43d5cd0ad306fdb22566dc3fe2fed53d____(
            &v20,
            v13);
    v15 = *v14;
    *v14 = 0LL;
    v16 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection *,Windows::ApplicationModel::AppService::AppServiceClosedEventArgs *>,Microsoft::WRL::FtmBase>>::Release(v16);
    }
    v8 = v12(v11, v15, (char *)this + 136);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v8 < 0 )
    {
      v9 = 670LL;
      goto LABEL_5;
    }
    v17 = v19;
    if ( *v4 != v19 )
    {
      v20 = v19;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v20);
      v20 = *v4;
      *v4 = v17;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
    }
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v4);
    *a2 = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)*v4;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
    goto LABEL_17;
  }
  v9 = 657LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)v8);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return (unsigned int)v8;
}
