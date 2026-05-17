/*
 * XREFs of LdrpAppxEtwGenericIntegrityFailure @ 0x180137A98
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800C1AB0 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x18000F380 (EtwpEventWriteFull.c)
 *     EtwEventRegister @ 0x180057A10 (EtwEventRegister.c)
 *     EtwEventUnregister @ 0x18006D820 (EtwEventUnregister.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpAppxEtwGenericIntegrityFailure(int a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+50h] [rbp-28h] BYREF
  _QWORD v3[2]; // [rsp+58h] [rbp-20h] BYREF
  int v4; // [rsp+80h] [rbp+8h] BYREF

  v4 = a1;
  v3[1] = 4LL;
  v3[0] = &v4;
  v2 = 0LL;
  result = EtwEventRegister(&AppModelRuntimeProviderId, 0LL, 0LL, (unsigned __int64 *)&v2);
  if ( !(_DWORD)result )
  {
    EtwpEventWriteFull(v2, &AppModelGenericLibraryLoadFailureNoTermination, 0LL, 0, 0, 0LL, 0LL, 1, (__int64)v3);
    return EtwEventUnregister(v2);
  }
  return result;
}
