/*
 * XREFs of ?EnsureMrtResourceMapInitialized@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x1800A862C
 * Callers:
 *     ?EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x1800A7D9C (-EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E084 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=15
void __fastcall CreativeFramework::NotificationManager::ToastHelpers::EnsureMrtResourceMapInitialized(
        CreativeFramework::NotificationManager::ToastHelpers *this)
{
  __int64 *v2; // r14
  int ActivationFactory; // eax
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, _QWORD, __int64 *); // rdi
  int v6; // eax
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, HSTRING *); // rdi
  int v15; // eax
  HRESULT v16; // eax
  LPVOID v17; // rbx
  __int64 (__fastcall *v18)(LPVOID, PCWSTR); // rdi
  PCWSTR StringRawBuffer; // rax
  int v20; // eax
  LPVOID v21; // rbx
  __int64 (__fastcall *v22)(LPVOID, GUID *, char *); // rsi
  int v23; // eax
  LPVOID v24; // rbx
  __int64 (__fastcall *v25)(LPVOID, GUID *, __int64 *); // rdi
  int v26; // eax
  int ppv; // [rsp+20h] [rbp-49h]
  int ppva; // [rsp+20h] [rbp-49h]
  int v29; // [rsp+30h] [rbp-39h] BYREF
  LPVOID v30; // [rsp+38h] [rbp-31h] BYREF
  HSTRING v31; // [rsp+40h] [rbp-29h] BYREF
  __int64 *v32; // [rsp+48h] [rbp-21h] BYREF
  __int64 v33; // [rsp+50h] [rbp-19h] BYREF
  __int64 v34; // [rsp+58h] [rbp-11h] BYREF
  __int64 *v35; // [rsp+60h] [rbp-9h] BYREF
  __int64 v36; // [rsp+68h] [rbp-1h] BYREF
  HSTRING string; // [rsp+70h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v2 = (__int64 *)((char *)this + 56);
  if ( !*((_QWORD *)this + 7) )
  {
    v36 = 0LL;
    if ( WindowsCreateStringReference(L"Windows.Internal.StateRepository.PackageFamily", 0x2Eu, &hstringHeader, &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    ActivationFactory = RoGetActivationFactory(string, &GUID_86f5b0ee_9560_4d76_a06a_ca4c8bfe4426, &v36);
    if ( ActivationFactory < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        364LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)ActivationFactory,
        ppv);
    v34 = 0LL;
    v4 = v36;
    v5 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v36 + 128LL);
    v34 = 0LL;
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      (HSTRING_HEADER *)&string,
      L"Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy",
      0x37u,
      0x36u);
    v6 = v5(v4, *(_QWORD *)&hstringHeader.Reserved.Reserved2[16], &v34);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        366LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v6,
        ppv);
    v35 = 0LL;
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      (HSTRING_HEADER *)&string,
      L"Windows.Internal.StateRepository.Package",
      0x29u,
      0x28u);
    v7 = RoGetActivationFactory(
           *(_QWORD *)&hstringHeader.Reserved.Reserved2[16],
           &GUID_0450ce77_af0d_40ac_93fd_1e5d48c89419,
           &v35);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        368LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v7,
        ppv);
    v32 = 0LL;
    v8 = *v35;
    v32 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 **))(v8 + 208))(v35, v34, &v32);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        370LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v9,
        ppv);
    v29 = 0;
    v10 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v32 + 56))(v32, &v29);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        373LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v10,
        ppv);
    if ( !v29 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        374LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)0x80070490LL,
        ppv);
    v33 = 0LL;
    v11 = *v32;
    v33 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v11 + 48))(v32, 0LL, &v33);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        376LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v12,
        ppv);
    v31 = 0LL;
    v13 = v33;
    v14 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v33 + 112LL);
    WindowsDeleteString(0LL);
    v31 = 0LL;
    v15 = v14(v13, &v31);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        378LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v15,
        ppv);
    v30 = 0LL;
    v16 = CoCreateInstance(
            &GUID_dbce7e40_7345_439d_b12c_114a11819a09,
            0LL,
            1u,
            &GUID_130a2f65_2be7_4309_9a58_a9052ff2b61c,
            &v30);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        382LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v16,
        ppva);
    v17 = v30;
    v18 = *(__int64 (__fastcall **)(LPVOID, PCWSTR))(*(_QWORD *)v30 + 40LL);
    StringRawBuffer = WindowsGetStringRawBuffer(v31, 0LL);
    v20 = v18(v17, StringRawBuffer);
    if ( v20 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        383LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v20,
        ppva);
    v21 = v30;
    v22 = *(__int64 (__fastcall **)(LPVOID, GUID *, char *))(*(_QWORD *)v30 + 72LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 8);
    v23 = v22(v21, &GUID_e3c22b30_8502_4b2f_9133_559674587e51, (char *)this + 64);
    if ( v23 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        385LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v23,
        ppva);
    v24 = v30;
    v25 = *(__int64 (__fastcall **)(LPVOID, GUID *, __int64 *))(*(_QWORD *)v30 + 56LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
    v26 = v25(v24, &GUID_6e21e72b_b9b0_42ae_a686_983cf784edcd, v2);
    if ( v26 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        386LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)(unsigned int)v26,
        ppva);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v30);
    WindowsDeleteString(v31);
    v31 = 0LL;
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v33);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v32);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v35);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v34);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v36);
  }
}
