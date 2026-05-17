/*
 * XREFs of RtlpGuardGrantSuppressedCallAccess @ 0x1800C7114
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180085C00 (LdrGetProcedureAddressForCaller.c)
 *     AVrfCallAPILookupCallback @ 0x1800C5D7C (AVrfCallAPILookupCallback.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800C6960 (LdrpUnsuppressAddressTakenIat.c)
 *     AVrfpSnapDllImports @ 0x1800C6E40 (AVrfpSnapDllImports.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x18011041C (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1801481D0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     ZwSetInformationVirtualMemory @ 0x180162550 (ZwSetInformationVirtualMemory.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpGuardGrantSuppressedCallAccess(__int64 a1, unsigned int a2)
{
  int v3; // [rsp+30h] [rbp-9h] BYREF
  _QWORD v4[2]; // [rsp+38h] [rbp-1h] BYREF
  _QWORD v5[5]; // [rsp+48h] [rbp+Fh] BYREF
  _QWORD v6[2]; // [rsp+70h] [rbp+37h] BYREF

  v3 = 0;
  v5[3] = 0LL;
  v4[0] = a1 & 0xFFFFFFFFFFFFF000uLL;
  v6[1] = a2;
  v6[0] = a1 & 0xFFF;
  v5[1] = &v3;
  v5[4] = 0LL;
  v5[2] = v6;
  v4[1] = 4096LL;
  v5[0] = 1LL;
  return ZwSetInformationVirtualMemory(-1LL, 2LL, 1LL, v4, v5, 40);
}
