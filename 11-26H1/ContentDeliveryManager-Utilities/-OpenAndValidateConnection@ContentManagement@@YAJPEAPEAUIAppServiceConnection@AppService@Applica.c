/*
 * XREFs of ?OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x180054FB8
 * Callers:
 *     ?EnsureOpenConnection@ContentManagementService@ContentManagement@@AEAAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x18004F668 (-EnsureOpenConnection@ContentManagementService@ContentManagement@@AEAAJPEAPEAUIAppServiceConnect.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18003A558 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$?0$0DJ@@StringReference@Internal@Windows@@QEAA@AEAY0DJ@$$CBG@Z @ 0x180045CC0 (--$-0$0DJ@@StringReference@Internal@Windows@@QEAA@AEAY0DJ@$$CBG@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180045D48 (--$ActivateInstance@V-$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@M.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180048DA0 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@W4AppServiceConnectionStatus@AppService@.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ContentManagement::OpenAndValidateConnection(
        ContentManagement *this,
        struct Windows::ApplicationModel::AppService::IAppServiceConnection **a2)
{
  __int64 *v3; // rax
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdx
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v12)(_QWORD, GUID *, __int64 *); // rdi
  int v13; // eax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, GUID *, _QWORD); // rdi
  int v16; // eax
  int v17; // edx
  char *v18; // r8
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  int (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall ***v22)(_QWORD, _QWORD, _QWORD); // rax
  char *v24; // [rsp+28h] [rbp-58h]
  __int64 v25; // [rsp+30h] [rbp-50h] BYREF
  int (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-48h] BYREF
  __int64 (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-40h] BYREF
  char *v28; // [rsp+48h] [rbp-38h] BYREF
  HSTRING string; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  *(_QWORD *)this = 0LL;
  v27 = 0LL;
  v3 = (__int64 *)Windows::Internal::StringReference::StringReference(
                    &string,
                    L"Windows.ApplicationModel.AppService.AppServiceConnection");
  v4 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::ApplicationModel::AppService::IAppServiceConnection>>(
         *v3,
         (__int64 *)&v27);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v27;
    v8 = (*v27)[7];
    WindowsCreateStringReference(L"microsoft-contentdeliverymanager", 0x20u, &hstringHeader, &string);
    v4 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD), HSTRING))v8)(v7, string);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 250LL;
      goto LABEL_5;
    }
    v9 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v27;
    v10 = (*v27)[9];
    if ( WindowsCreateStringReference(
           L"Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy",
           0x36u,
           &hstringHeader,
           &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    v4 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD), HSTRING))v10)(v9, string);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 251LL;
      goto LABEL_5;
    }
    v25 = 0LL;
    v11 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v27;
    v12 = **v27;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
    v13 = v12(v11, &GUID_65219584_f9cb_4ae3_81f9_a28a6ca450d9, &v25);
    v5 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFE,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v13);
LABEL_22:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
      goto LABEL_23;
    }
    v26 = 0LL;
    v14 = v25;
    v15 = *(__int64 (__fastcall **)(__int64, GUID *, _QWORD))(*(_QWORD *)v25 + 24LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
    v16 = v15(v14, &GUID_0d0e6663_2639_5a9a_9cbc_30d7d4ce533b, &v26);
    v5 = v16;
    if ( v16 >= 0 )
    {
      LODWORD(v28) = 0;
      v21 = v26;
      v5 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::ApplicationModel::AppService::AppServiceConnectionStatus>,Windows::Foundation::IAsyncOperation<enum Windows::ApplicationModel::AppService::AppServiceConnectionStatus>>(
             v26,
             v17,
             v18);
      if ( v5 >= 0 )
      {
        v5 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), char **))(*v21)[8])(v21, &v28);
        if ( v5 >= 0 )
        {
          if ( !(_DWORD)v28 )
          {
            v22 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v27;
            v27 = 0LL;
            *(_QWORD *)this = v22;
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
            v5 = 0;
            goto LABEL_23;
          }
          LODWORD(v24) = (_DWORD)v28;
          v5 = -2147483629;
          wil::details::in1diag3::Return_HrMsg(
            retaddr,
            (void *)0x105,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
            (const char *)0x80000013LL,
            (unsigned __int64)"AppServiceConnectionStatus: %d",
            v24);
          goto LABEL_21;
        }
      }
      v19 = (unsigned int)v5;
      v20 = 259LL;
    }
    else
    {
      v19 = (unsigned int)v16;
      v20 = 256LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)v19);
LABEL_21:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
    goto LABEL_22;
  }
  v6 = 249LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)v4);
LABEL_23:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
  return (unsigned int)v5;
}
