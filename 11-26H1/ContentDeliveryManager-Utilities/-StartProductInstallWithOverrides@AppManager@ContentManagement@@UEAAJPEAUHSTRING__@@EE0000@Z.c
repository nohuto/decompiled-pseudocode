/*
 * XREFs of ?StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z @ 0x1800771A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIAppInstallManagerInternal2@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@?$ComPtr@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppInstallManagerInternal2@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180073534 (--$As@UIAppInstallManagerInternal2@Internal@InstallControl@Preview@Store@ApplicationModel@Window.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1800741C8 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVAppInstallItem@Ins.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x180075A28 (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ContentManagement::AppManager::StartProductInstallWithOverrides(
        RTL_SRWLOCK *this,
        HSTRING a2,
        char a3,
        char a4,
        HSTRING a5,
        HSTRING a6,
        HSTRING a7,
        HSTRING a8)
{
  int AppInstallManager; // eax
  int v13; // ebx
  int v14; // eax
  _QWORD *v15; // rbx
  __int64 v16; // rax
  __int64 (__fastcall *v17)(_QWORD *, HSTRING, HSTRING, HSTRING, HSTRING, char, char, char, char, HSTRING, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v18; // eax
  __int64 v19; // rdx
  __int64 (__fastcall *v20)(_QWORD *, PVOID, HSTRING, HSTRING, HSTRING, HSTRING, char, char, char, char, HSTRING, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // rdi
  HRESULT v22; // edx
  __int64 v23; // r8
  char v25; // [rsp+28h] [rbp-51h]
  char v26; // [rsp+30h] [rbp-49h]
  char v27; // [rsp+30h] [rbp-49h]
  char v28; // [rsp+38h] [rbp-41h]
  char v29; // [rsp+38h] [rbp-41h]
  char v30; // [rsp+40h] [rbp-39h]
  char v31; // [rsp+40h] [rbp-39h]
  char v32; // [rsp+48h] [rbp-31h]
  _QWORD *v33; // [rsp+70h] [rbp-9h] BYREF
  __int64 v34; // [rsp+78h] [rbp-1h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v35[2]; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+3Fh]
  __int64 (__fastcall ***v37)(_QWORD, GUID *, __int64 *); // [rsp+C0h] [rbp+47h] BYREF

  v35[0] = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v35);
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(this - 6, v35);
  v13 = AppInstallManager;
  if ( AppInstallManager >= 0 )
  {
    v33 = 0LL;
    v14 = Microsoft::WRL::ComPtr<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::As<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal2>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v35,
            (__int64 *)&v33);
    v13 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v14);
LABEL_16:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
      goto LABEL_17;
    }
    v37 = 0LL;
    v15 = v33;
    v16 = *v33;
    if ( this[4].Ptr )
    {
      v20 = *(__int64 (__fastcall **)(_QWORD *, PVOID, HSTRING, HSTRING, HSTRING, HSTRING, char, char, char, char, HSTRING, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v16 + 64);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v37);
      v32 = 0;
      v31 = a4;
      v29 = a3;
      v27 = 0;
      v18 = v20(v15, this[4].Ptr, a2, a6, a7, a5, v27, v29, v31, v32, a8, 0LL, &v37);
      v13 = v18;
      if ( v18 < 0 )
      {
        v19 = 303LL;
        goto LABEL_8;
      }
    }
    else
    {
      v17 = *(__int64 (__fastcall **)(_QWORD *, HSTRING, HSTRING, HSTRING, HSTRING, char, char, char, char, HSTRING, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v16 + 56);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v37);
      v30 = 0;
      v28 = a4;
      v26 = a3;
      v25 = 0;
      v18 = v17(v15, a2, a6, a7, a5, v25, v26, v28, v30, a8, 0LL, &v37);
      v13 = v18;
      if ( v18 < 0 )
      {
        v19 = 287LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v18);
LABEL_15:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v37);
        goto LABEL_16;
      }
    }
    v34 = 0LL;
    v21 = v37;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
    v13 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *> *>>(
            v21,
            v22,
            v23);
    if ( v13 >= 0 )
    {
      v13 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v21)[8])(
              v21,
              &v34);
      if ( v13 >= 0 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v37);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
        v13 = 0;
        goto LABEL_17;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x133,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v13);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10C,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
    (const char *)(unsigned int)AppInstallManager);
LABEL_17:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v35);
  return (unsigned int)v13;
}
