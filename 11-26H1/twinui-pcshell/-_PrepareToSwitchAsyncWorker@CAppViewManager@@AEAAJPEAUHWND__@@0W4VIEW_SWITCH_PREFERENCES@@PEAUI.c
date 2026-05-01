/*
 * XREFs of ?_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x1802F6958
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_c5bad73058b4167fadc00bcfc86ad84b___1_long_::Invoke @ 0x1802F2A00 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802F2A00.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180043234 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18005F6F4 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801CAFF0 (-AcquireExclusive@CIAMGlobals@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1PrepareToSwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ @ 0x1802F000C (--1PrepareToSwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@PrepareToSwitchAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1802F3FCC (-StartActivity@PrepareToSwitchAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x1802F6ACC (-_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransf.c)
 *     ?_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802F8510 (-_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertyS.c)
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z @ 0x1802F8B60 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppViewManager::_PrepareToSwitchAsyncWorker(
        CAppViewManager *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        struct IAsyncCallback *a5)
{
  __int64 v9; // rcx
  int v10; // ebx
  char v12; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v13[7]; // [rsp+41h] [rbp-BFh] BYREF
  struct IImmersiveApplicationInternal *v14; // [rsp+48h] [rbp-B8h] BYREF
  RTL_SRWLOCK *v15[2]; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v16[42]; // [rsp+60h] [rbp-A0h] BYREF

  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v16,
    (__int64)"PrepareToSwitchAsyncWorker");
  v16[0] = (volatile signed __int32 *)&CAppViewManagerTelemetry::PrepareToSwitchAsyncWorker::`vftable';
  CAppViewManagerTelemetry::PrepareToSwitchAsyncWorker::StartActivity((CAppViewManagerTelemetry::PrepareToSwitchAsyncWorker *)v16);
  v12 = 0;
  v13[0] = 0;
  v14 = 0LL;
  CIAMGlobals::AcquireExclusive(v9, v15);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  v10 = CAppViewManager::_PrepareToSwitchHelper(a1, a2, a3, a4, 0LL, &v14, &v12, v13);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v15);
  if ( v10 >= 0 && v12 )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[21].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[21].Ptr);
    CAppViewManager::_TrySwitchToApplication(a1, v14, 0LL);
  }
  if ( a5 )
    CAppViewManager::_s_QueueCallback(v14, a5, v10);
  if ( v10 >= 0 )
    v10 = v13[0] != 0;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v16, v10);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  CAppViewManagerTelemetry::PrepareToSwitchAsyncWorker::~PrepareToSwitchAsyncWorker(v16);
  return (unsigned int)v10;
}
