/*
 * XREFs of HalpNotifyIommuDomainPolicyChange @ 0x140511660
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuInvokeInterfaceStateChangeCallbacks @ 0x14051167C (HalpIommuInvokeInterfaceStateChangeCallbacks.c)
 */

__int64 __fastcall HalpNotifyIommuDomainPolicyChange(__int64 a1)
{
  return HalpIommuInvokeInterfaceStateChangeCallbacks(a1, 1LL);
}
