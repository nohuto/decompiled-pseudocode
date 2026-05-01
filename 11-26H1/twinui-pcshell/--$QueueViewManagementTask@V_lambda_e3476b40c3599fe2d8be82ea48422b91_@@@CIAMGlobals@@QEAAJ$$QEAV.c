/*
 * XREFs of ??$QueueViewManagementTask@V_lambda_e3476b40c3599fe2d8be82ea48422b91_@@@CIAMGlobals@@QEAAJ$$QEAV_lambda_e3476b40c3599fe2d8be82ea48422b91_@@@Z @ 0x18012A798
 * Callers:
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800A769C (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     ??1_lambda_e3476b40c3599fe2d8be82ea48422b91_@@QEAA@XZ @ 0x18012A848 (--1_lambda_e3476b40c3599fe2d8be82ea48422b91_@@QEAA@XZ.c)
 *     ??$QueueTask@V_lambda_e02303751d4e49a7e603e0304fd9978e_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_e02303751d4e49a7e603e0304fd9978e_@@@Z @ 0x18012B8D8 (--$QueueTask@V_lambda_e02303751d4e49a7e603e0304fd9978e_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 */

__int64 __fastcall CIAMGlobals::QueueViewManagementTask<_lambda_e3476b40c3599fe2d8be82ea48422b91_>(
        __int64 a1,
        _QWORD *a2)
{
  PSRWLOCK v2; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  PVOID Ptr; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( !CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
    return 2147943568LL;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&Ptr);
  Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(&v9, a2);
  Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(v10, a2 + 1);
  v7 = Windows::Internal::ComTaskPool::QueueTask<_lambda_e02303751d4e49a7e603e0304fd9978e_>(
         v6,
         v5,
         LODWORD(v2[15].Ptr),
         &Ptr);
  _lambda_e3476b40c3599fe2d8be82ea48422b91_::~_lambda_e3476b40c3599fe2d8be82ea48422b91_((_lambda_e3476b40c3599fe2d8be82ea48422b91_ *)&v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&Ptr);
  return v7;
}
