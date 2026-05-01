/*
 * XREFs of ?_GetAppForSwitch@CSwitchController@@AEAAJPEBGW4GET_VIEW_FOR_SWITCH_TYPE@@PEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z @ 0x1804D4850
 * Callers:
 *     ?_PrepareAppForActivation@CSwitchController@@AEAAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@AEAUActivationData@1@@Z @ 0x1804D4B98 (-_PrepareAppForActivation@CSwitchController@@AEAAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@AEAUActivatio.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSwitchController::_GetAppForSwitch(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        void *ppvOut)
{
  void *v9; // rdi
  HRESULT v10; // ebx

  v9 = ppvOut;
  *(_QWORD *)ppvOut = 0LL;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v10 = IUnknown_QueryService(
          *(IUnknown **)(a1 + 16),
          &IID_IAppViewManager,
          &GUID_f81a7068_dd6a_4e0f_89cb_c0040f4c5086,
          &ppvOut);
  if ( v10 >= 0 )
    v10 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64, __int64, void *))(*(_QWORD *)ppvOut + 56LL))(
            ppvOut,
            a3,
            a2,
            a4,
            v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v10;
}
