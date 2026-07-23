/*
 * XREFs of RtlpGuardGrantSuppressedCallAccess @ 0x1800C48D4
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18007CFA0 (LdrGetProcedureAddressForCaller.c)
 *     AVrfCallAPILookupCallback @ 0x1800C353C (AVrfCallAPILookupCallback.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800C4120 (LdrpUnsuppressAddressTakenIat.c)
 *     AVrfpSnapDllImports @ 0x1800C4600 (AVrfpSnapDllImports.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x18010FFAC (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x180148080 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     ZwSetInformationVirtualMemory @ 0x180162450 (ZwSetInformationVirtualMemory.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpGuardGrantSuppressedCallAccess(__int64 a1, unsigned int a2)
{
  int v3; // [rsp+30h] [rbp-9h] BYREF
  _MEMORY_RANGE_ENTRY VirtualAddresses; // [rsp+38h] [rbp-1h] BYREF
  _QWORD VmInformation[5]; // [rsp+48h] [rbp+Fh] BYREF
  _QWORD v6[2]; // [rsp+70h] [rbp+37h] BYREF

  v3 = 0;
  VmInformation[3] = 0LL;
  VirtualAddresses.VirtualAddress = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
  v6[1] = a2;
  v6[0] = a1 & 0xFFF;
  VmInformation[1] = &v3;
  VmInformation[4] = 0LL;
  VmInformation[2] = v6;
  VirtualAddresses.NumberOfBytes = 4096LL;
  VmInformation[0] = 1LL;
  return ZwSetInformationVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           VmCfgCallTargetInformation,
           1uLL,
           &VirtualAddresses,
           VmInformation,
           0x28u);
}
