/*
 * XREFs of ?SplitView@CAppViewManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplication@@PEAPEAU3@@Z @ 0x1802F3C40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180043234 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18005F6F4 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ??0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z @ 0x1801B96AC (--0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z.c)
 *     ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801CAFF0 (-AcquireExclusive@CIAMGlobals@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     ??1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ @ 0x1802C34E4 (--1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1SplitView@CAppViewManagerTelemetry@@QEAA@XZ @ 0x1802F0064 (--1SplitView@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@SplitView@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1802F4104 (-StartActivity@SplitView@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAppViewManager::SplitView(
        CAppViewManager *this,
        HWND a2,
        __int64 (__fastcall ***a3)(struct IImmersiveApplication *, GUID *, __int64 *),
        struct IImmersiveApplication **a4)
{
  void (__fastcall ***v8)(_QWORD, GUID *, struct IIAMServiceProvider **); // rdi
  void (__fastcall *v9)(_QWORD, GUID *, struct IIAMServiceProvider **); // rbx
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(struct IImmersiveApplication *, GUID *, __int64 *); // rbx
  int v12; // ebx
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, HWND, __int64, _QWORD, __int64 *); // rbx
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  struct IIAMServiceProvider *v18; // [rsp+40h] [rbp-C0h] BYREF
  RTL_SRWLOCK *v19; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v20[16]; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v21[42]; // [rsp+60h] [rbp-A0h] BYREF

  *a4 = 0LL;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v21,
    (__int64)"SplitView");
  v21[0] = (volatile signed __int32 *)&CAppViewManagerTelemetry::SplitView::`vftable';
  CAppViewManagerTelemetry::SplitView::StartActivity((CAppViewManagerTelemetry::SplitView *)v21);
  v18 = 0LL;
  v8 = (void (__fastcall ***)(_QWORD, GUID *, struct IIAMServiceProvider **))*((_QWORD *)this + 10);
  v9 = **v8;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
  v9(v8, &GUID_5f75d642_3fd3_46f6_86d3_a4aee3c0ffee, &v18);
  CAutoApplicationCreationResourceGuarantee::CAutoApplicationCreationResourceGuarantee(
    (CAutoApplicationCreationResourceGuarantee *)v20,
    v18);
  v16 = 0LL;
  CIAMGlobals::AcquireExclusive(v10, &v19);
  v17 = 0LL;
  v11 = **a3;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  v12 = v11((struct IImmersiveApplication *)a3, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v17);
  if ( v12 >= 0 )
  {
    v13 = *((_QWORD *)this + 10);
    v14 = *(__int64 (__fastcall **)(__int64, HWND, __int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 88LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    v12 = v14(v13, a2, v17, 0LL, &v16);
    if ( v12 >= 0 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 368LL))(v16, 2LL);
      v12 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IImmersiveApplication **))v16)(
              v16,
              &GUID_8b14e88b_5663_4caf_b196_c31479262831,
              a4);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v19);
  if ( v12 >= 0 )
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 10) + 152LL))(
            *((_QWORD *)this + 10),
            v16,
            0LL,
            0LL,
            0LL);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v21, v12);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  CAutoApplicationCreationResourceGuarantee::~CAutoApplicationCreationResourceGuarantee((CAutoApplicationCreationResourceGuarantee *)v20);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
  CAppViewManagerTelemetry::SplitView::~SplitView(v21);
  return (unsigned int)v12;
}
