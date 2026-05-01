/*
 * XREFs of ?RegisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJPEAUIHolographicCoreExperienceExecutor@Holographic@Shell@Internal@Windows@@@Z @ 0x18037D5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18037B454 (--0-$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1EM_RegisterHolographicExecutor@ToastCenterTelemetry@@QEAA@XZ @ 0x18037BB44 (--1EM_RegisterHolographicExecutor@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ?OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ @ 0x18037D14C (-OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?StartActivity@EM_RegisterHolographicExecutor@ToastCenterTelemetry@@QEAAXXZ @ 0x18037DEE0 (-StartActivity@EM_RegisterHolographicExecutor@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18037E0F0 (-Stop@-$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CToastCenterExperienceManager::RegisterHolographicExecutor(
        CToastCenterExperienceManager *this,
        struct Windows::Internal::Shell::Holographic::IHolographicCoreExperienceExecutor *a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  LPVOID v7; // rbx
  __int64 (__fastcall *v8)(LPVOID, GUID *, GUID *, char *); // rsi
  unsigned __int64 v9; // r9
  CToastCenterExperienceManager *v10; // r14
  int v11; // eax
  enum Windows::Internal::Shell::Holographic::UserDisplayContext *v12; // rdx
  LPVOID ppv; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v16[42]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  wil::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v16,
    (__int64)"EM_RegisterHolographicExecutor");
  v16[0] = &ToastCenterTelemetry::EM_RegisterHolographicExecutor::`vftable';
  ToastCenterTelemetry::EM_RegisterHolographicExecutor::StartActivity((ToastCenterTelemetry::EM_RegisterHolographicExecutor *)v16);
  if ( *((struct Windows::Internal::Shell::Holographic::IHolographicCoreExperienceExecutor **)this + 85) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::Holographic::IHolographicCoreExperienceExecutor *))(*(_QWORD *)a2 + 8LL))(a2);
    v15 = *((_QWORD *)this + 85);
    *((_QWORD *)this + 85) = a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  }
  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  v4 = CoCreateInstance(&CLSID_ImmersiveShell, 0LL, 0x404u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &ppv);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1829LL;
LABEL_9:
    v9 = (unsigned int)v4;
    goto LABEL_10;
  }
  v7 = ppv;
  v8 = *(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, char *))(*(_QWORD *)ppv + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 87);
  v4 = v8(
         v7,
         &GUID_f33ef83f_9d1b_4603_914d_abc4895248b5,
         &GUID_f33ef83f_9d1b_4603_914d_abc4895248b5,
         (char *)this + 696);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1830LL;
    goto LABEL_9;
  }
  v10 = (CToastCenterExperienceManager *)((char *)this - 56);
  v11 = RtlSubscribeWnfStateChangeNotification(
          (char *)v10 + 368,
          WNF_HOLO_USER_DISPLAY_CONTEXT,
          0LL,
          CToastCenterExperienceManager::DisplayContextChangedCallback);
  v5 = v11 | 0x10000000;
  if ( v11 >= 0 )
  {
    CToastCenterExperienceManager::OnDisplayContextChanged(v10, v12);
    wil::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v16);
    v5 = 0;
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x476,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)v5);
  v9 = v5;
  v6 = 1832LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)v9);
LABEL_14:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  ToastCenterTelemetry::EM_RegisterHolographicExecutor::~EM_RegisterHolographicExecutor((ToastCenterTelemetry::EM_RegisterHolographicExecutor *)v16);
  return v5;
}
