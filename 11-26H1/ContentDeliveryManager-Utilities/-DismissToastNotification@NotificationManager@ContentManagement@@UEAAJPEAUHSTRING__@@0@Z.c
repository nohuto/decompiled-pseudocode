/*
 * XREFs of ?DismissToastNotification@NotificationManager@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z @ 0x18002E540
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E084 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::NotificationManager::DismissToastNotification(
        ContentManagement::NotificationManager *this,
        HSTRING a2,
        HSTRING a3)
{
  __int64 v5; // rbx
  int ActivationFactory; // eax
  unsigned int v7; // ebx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64 *); // rdi
  int v10; // eax
  int v12; // eax
  int v13; // [rsp+20h] [rbp-50h]
  __int64 v14; // [rsp+30h] [rbp-40h] BYREF
  __int64 v15; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v17; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v15 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.UI.Notifications.ToastNotificationManager",
    0x32u,
    0x31u);
  v5 = v17;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  ActivationFactory = RoGetActivationFactory(v5, &GUID_7ab93c52_0e48_4750_ba9d_1a4113981847, &v15);
  v7 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10B,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v13);
LABEL_5:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
    return v7;
  }
  v14 = 0LL;
  v8 = v15;
  v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 48LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  v10 = v9(v8, &v14);
  v7 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10E,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v10,
      v13);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
    goto LABEL_5;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, HSTRING, HSTRING, HSTRING))(*(_QWORD *)v14 + 64LL))(v14, a2, a2, a3);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x111,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v12,
      v13);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  return 0LL;
}
