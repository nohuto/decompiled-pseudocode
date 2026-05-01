/*
 * XREFs of ?MeetsRequirement@HardwareRequirements@Profile@System@WindowsUdk@winrt@@SA@AEBW4HardwareRequirement@2345@@Z @ 0x18056E844
 * Callers:
 *     ?IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ @ 0x18056E5DC (-IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ.c)
 * Callees:
 *     ??$call_factory@UHardwareRequirements@Profile@System@WindowsUdk@winrt@@UIHardwareRequirementsStatics@2345@V_lambda_7268e45c73438b7c97da070512f3e575_@@@impl@winrt@@YA?A_P$$QEAV_lambda_7268e45c73438b7c97da070512f3e575_@@@Z @ 0x18056C12C (--$call_factory@UHardwareRequirements@Profile@System@WindowsUdk@winrt@@UIHardwareRe_ea_18056C12C.c)
 */

char __fastcall winrt::WindowsUdk::System::Profile::HardwareRequirements::MeetsRequirement(
        const enum winrt::WindowsUdk::System::Profile::HardwareRequirement *a1)
{
  unsigned int *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = (unsigned int *)a1;
  return winrt::impl::call_factory<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics,_lambda_7268e45c73438b7c97da070512f3e575_>(&v2);
}
