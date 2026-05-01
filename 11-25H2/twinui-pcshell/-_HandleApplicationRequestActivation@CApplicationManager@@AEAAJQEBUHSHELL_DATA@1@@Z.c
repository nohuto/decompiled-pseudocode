/*
 * XREFs of ?_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z @ 0x1802ECD3C
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x18003D6F0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180022890 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18003E32C (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800402F4 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     WPP_SF_qd @ 0x180041A80 (WPP_SF_qd.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136308 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180169D88 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??1HandleApplicationRequestActivation@CAppManagerTelemetry@@QEAA@XZ @ 0x1802E4318 (--1HandleApplicationRequestActivation@CAppManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@HandleApplicationRequestActivation@CAppManagerTelemetry@@QEAAXXZ @ 0x1802EBBEC (-StartActivity@HandleApplicationRequestActivation@CAppManagerTelemetry@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::_HandleApplicationRequestActivation(
        CApplicationManager *this,
        const struct CApplicationManager::HSHELL_DATA *const a2)
{
  int First; // ebx
  __int64 v6; // [rsp+20h] [rbp-E0h]
  IUnknown *punk; // [rsp+40h] [rbp-C0h] BYREF
  void *ppv; // [rsp+48h] [rbp-B8h] BYREF
  int v9; // [rsp+50h] [rbp-B0h]
  signed __int64 v10; // [rsp+58h] [rbp-A8h] BYREF
  int v11; // [rsp+60h] [rbp-A0h]
  _QWORD v12[42]; // [rsp+70h] [rbp-90h] BYREF

  v10 = ((unsigned __int64)this + 392) & -(__int64)(this != 0LL);
  v11 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v10, 1);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v12,
    (__int64)"HandleApplicationRequestActivation");
  v12[0] = &CAppManagerTelemetry::HandleApplicationRequestActivation::`vftable';
  CAppManagerTelemetry::HandleApplicationRequestActivation::StartActivity((CAppManagerTelemetry::HandleApplicationRequestActivation *)v12);
  punk = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
  ppv = (void *)*((_QWORD *)a2 + 1);
  v9 = 0;
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(
            (__int64)this,
            (__int64 *)&ppv,
            &punk,
            0LL);
  if ( First >= 0 )
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
    First = IUnknown_GetSite(punk, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &ppv);
    if ( First >= 0 )
      First = (*(__int64 (__fastcall **)(void *, IUnknown *, _QWORD, _QWORD, int, _QWORD))(*(_QWORD *)ppv + 48LL))(
                ppv,
                punk,
                *((_QWORD *)a2 + 1),
                0LL,
                5,
                0LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  }
  if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    LODWORD(v6) = First;
    WPP_SF_qd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0xFu,
      &WPP_f6ee133fdd7237af69330c831a71ad41_Traceguids,
      *((_QWORD *)a2 + 1),
      v6);
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v12, First);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
  CAppManagerTelemetry::HandleApplicationRequestActivation::~HandleApplicationRequestActivation((CAppManagerTelemetry::HandleApplicationRequestActivation *)v12);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v10);
  return (unsigned int)First;
}
