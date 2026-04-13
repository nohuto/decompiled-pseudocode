/*
 * XREFs of ?SendMessageToAppServiceConnection@ContentManagement@@YAJPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@PEAUIPropertySet@Collections@Foundation@5@@Z @ 0x1800581C8
 * Callers:
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x180057E00 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18003A558 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180048C74 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVAppServiceResponse@AppService@Applic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::SendMessageToAppServiceConnection(
        ContentManagement *this,
        struct Windows::ApplicationModel::AppService::IAppServiceConnection *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  __int64 (__fastcall *v5)(ContentManagement *, struct Windows::ApplicationModel::AppService::IAppServiceConnection *, _QWORD); // rbx
  int v6; // eax
  int v7; // ebx
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rdi
  int v9; // edx
  char *v10; // r8
  int v11; // eax
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  char *v15; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  char *v17; // [rsp+50h] [rbp+20h] BYREF
  __int64 v18; // [rsp+60h] [rbp+30h] BYREF
  int (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp+38h] BYREF

  v19 = 0LL;
  v5 = *(__int64 (__fastcall **)(ContentManagement *, struct Windows::ApplicationModel::AppService::IAppServiceConnection *, _QWORD))(*(_QWORD *)this + 88LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  v6 = v5(this, a2, &v19);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v18 = 0LL;
    v8 = v19;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
    v7 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceResponse *>>(
           v8,
           v9,
           v10);
    if ( v7 < 0
      || (v7 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v8)[8])(v8, &v18),
          v7 < 0) )
    {
      v12 = (unsigned int)v7;
      v13 = 234LL;
    }
    else
    {
      LODWORD(v17) = 0;
      v11 = (*(__int64 (__fastcall **)(__int64, char **))(*(_QWORD *)v18 + 56LL))(v18, &v17);
      v7 = v11;
      if ( v11 >= 0 )
      {
        if ( !(_DWORD)v17 )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
          v7 = 0;
          goto LABEL_13;
        }
        LODWORD(v15) = (_DWORD)v17;
        v7 = -2147023269;
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)0xEE,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)0x8007065BLL,
          (unsigned __int64)"AppServiceResponseStatus: %d",
          v15);
LABEL_12:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
        goto LABEL_13;
      }
      v12 = (unsigned int)v11;
      v13 = 236LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)v12);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE6,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)v6);
LABEL_13:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  return (unsigned int)v7;
}
