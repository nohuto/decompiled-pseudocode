/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIVirtualDesktopController3@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopControllerInternal@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x180480FA0
 * Callers:
 *     ?GetIids@VirtualDesktopController@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180481230 (-GetIids@VirtualDesktopController@@UEAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController3,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  int v3; // ecx

  v3 = *a2;
  *(GUID *)(a3 + 16LL * *a2) = GUID_f7ca31d5_c7f0_4d75_ae56_b3838417522f;
  *a2 = v3 + 1;
  return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>::FillArrayWithIid();
}
