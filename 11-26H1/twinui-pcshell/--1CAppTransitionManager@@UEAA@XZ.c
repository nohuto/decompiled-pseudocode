/*
 * XREFs of ??1CAppTransitionManager@@UEAA@XZ @ 0x1801B7BF0
 * Callers:
 *     ??_ECAppTransitionManager@@UEAAPEAXI@Z @ 0x1801B7BB4 (--_ECAppTransitionManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180092088 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarke_ea_180092088.c)
 *     ?RemoveAll@?$CTSimpleArray@UAppSpecialInfo@CAppTransitionManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UAppSpecialInfo@CAppTransitionManager@@@@V?$CSimpleArrayStandardCompareHelper@UAppSpecialInfo@CAppTransitionManager@@@@V?$CSimpleArrayStandardMergeHelper@UAppSpecialInfo@CAppTransitionManager@@@@@@QEAAXXZ @ 0x1801B7C88 (-RemoveAll@-$CTSimpleArray@UAppSpecialInfo@CAppTransitionManager@@$0PPPPPPPO@V-$CTPolicyCoTaskMe.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAppTransitionManager::~CAppTransitionManager(CAppTransitionManager *this)
{
  CTSimpleArray<CAppTransitionManager::AppSpecialInfo,4294967294,CTPolicyCoTaskMem<CAppTransitionManager::AppSpecialInfo>,CSimpleArrayStandardCompareHelper<CAppTransitionManager::AppSpecialInfo>,CSimpleArrayStandardMergeHelper<CAppTransitionManager::AppSpecialInfo>>::RemoveAll((char *)this + 232);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 28);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 27);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 22);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 21);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 3);
  *((_DWORD *)this + 29) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,CImmersiveShellComponent>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,CImmersiveShellComponent>((__int64)this);
}
