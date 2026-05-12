/*
 * XREFs of WaitForNVMeCommandComplete @ 0x1400C6F10
 * Callers:
 *     NvmeControllerProcessCommandSync @ 0x1400448F8 (NvmeControllerProcessCommandSync.c)
 * Callees:
 *     WaitForNVMeCommandCompleteWithCustomTimeout @ 0x140031CB4 (WaitForNVMeCommandCompleteWithCustomTimeout.c)
 *     Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledDeviceUsageNoInline @ 0x14005D160 (Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall WaitForNVMeCommandComplete(volatile signed __int32 *SystemArgument2, __int64 a2, char a3)
{
  Feature_Servicing_StorNVMeDriverTimeoutOverride__private_IsEnabledDeviceUsageNoInline();
  return WaitForNVMeCommandCompleteWithCustomTimeout(SystemArgument2, a2, a3);
}
