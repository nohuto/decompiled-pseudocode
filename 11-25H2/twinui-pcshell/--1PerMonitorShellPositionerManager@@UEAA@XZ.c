/*
 * XREFs of ??1PerMonitorShellPositionerManager@@UEAA@XZ @ 0x180206ECC
 * Callers:
 *     ??_EPerMonitorShellPositionerManager@@UEAAPEAXI@Z @ 0x180206E90 (--_EPerMonitorShellPositionerManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1802D566C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall PerMonitorShellPositionerManager::~PerMonitorShellPositionerManager(
        PerMonitorShellPositionerManager *this)
{
  `eh vector destructor iterator'(
    (char *)this + 104,
    8uLL,
    0xBuLL,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>);
  *((_DWORD *)this + 25) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,CImmersiveShellComponent>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,CImmersiveShellComponent>((__int64)this);
}
