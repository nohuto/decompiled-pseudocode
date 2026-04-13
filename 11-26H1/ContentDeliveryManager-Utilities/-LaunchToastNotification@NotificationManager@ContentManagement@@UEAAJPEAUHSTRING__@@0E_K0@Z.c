/*
 * XREFs of ?LaunchToastNotification@NotificationManager@ContentManagement@@UEAAJPEAUHSTRING__@@0E_K0@Z @ 0x1800347D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ContentManagement::NotificationManager::LaunchToastNotification(
        ContentManagement::NotificationManager *this,
        HSTRING a2,
        HSTRING a3,
        __int64 a4,
        unsigned __int64 a5,
        HSTRING string)
{
  HRESULT Instance; // eax
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, const WCHAR *, PCWSTR, _QWORD); // r14
  PCWSTR StringRawBuffer; // rax
  int v14; // eax
  const char *v15; // r9
  __int64 result; // rax
  int ppv; // [rsp+20h] [rbp-A8h]
  __int64 v18; // [rsp+98h] [rbp-30h] BYREF
  LPVOID v19[2]; // [rsp+A0h] [rbp-28h] BYREF
  int v20; // [rsp+B0h] [rbp-18h]
  unsigned __int64 v21; // [rsp+B4h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v19[0] = 0LL;
  Instance = CoCreateInstance(
               &GUID_0c9281f9_6da1_4006_8729_de6e6b61581c,
               0LL,
               0x17u,
               &GUID_df8e9480_ca73_448e_b8f0_da000f581428,
               v19);
  try
  {
    if ( Instance < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xE7,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)Instance,
        ppv);
    v18 = 0LL;
    v9 = *(_QWORD *)v19[0];
    v18 = 0LL;
    v10 = (*(__int64 (__fastcall **)(LPVOID, __int64 *))(v9 + 24))(v19[0], &v18);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xEA,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v10,
        ppv);
    WindowsGetStringRawBuffer(a3, 0LL);
    v11 = v18;
    v12 = *(__int64 (__fastcall **)(__int64, const WCHAR *, PCWSTR, _QWORD))(*(_QWORD *)v18 + 64LL);
    WindowsGetStringRawBuffer(a2, 0LL);
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v20 = 1;
    v21 = a5;
    v14 = v12(v11, L"Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy", StringRawBuffer, 0LL);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x103,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v14,
        1);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v18);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)v19);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x106,
                           (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                           v15);
  }
  return result;
}
