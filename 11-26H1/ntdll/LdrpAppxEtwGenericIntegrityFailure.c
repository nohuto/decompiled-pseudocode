/*
 * XREFs of LdrpAppxEtwGenericIntegrityFailure @ 0x180137808
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800BF760 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     EtwEventRegister @ 0x180041F90 (EtwEventRegister.c)
 *     EtwpEventWriteFull @ 0x18005AAB0 (EtwpEventWriteFull.c)
 *     EtwEventUnregister @ 0x18008DC70 (EtwEventUnregister.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall LdrpAppxEtwGenericIntegrityFailure(int a1)
{
  NTSTATUS result; // eax
  REGHANDLE RegHandle; // [rsp+50h] [rbp-28h] BYREF
  _QWORD v3[2]; // [rsp+58h] [rbp-20h] BYREF
  int v4; // [rsp+80h] [rbp+8h] BYREF

  v4 = a1;
  v3[1] = 4LL;
  v3[0] = &v4;
  RegHandle = 0LL;
  result = EtwEventRegister(&AppModelRuntimeProviderId, 0LL, 0LL, &RegHandle);
  if ( !result )
  {
    EtwpEventWriteFull(RegHandle, &AppModelGenericLibraryLoadFailureNoTermination, 0LL, 0, 0, 0LL, 0LL, 1, (__int64)v3);
    return EtwEventUnregister(RegHandle);
  }
  return result;
}
