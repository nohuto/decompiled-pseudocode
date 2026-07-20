/*
 * XREFs of SmpCreateInitialSession @ 0x140019050
 * Callers:
 *     <none>
 * Callees:
 *     SmpStartCsr @ 0x140004120 (SmpStartCsr.c)
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 *     SmpTerminate @ 0x14001913C (SmpTerminate.c)
 *     SmpUnhandledExceptionFilter @ 0x140019234 (SmpUnhandledExceptionFilter.c)
 *     memset_0 @ 0x14001EFBF (memset_0.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

__int64 SmpCreateInitialSession()
{
  __int64 result; // rax
  int v1; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-190h] BYREF
  unsigned __int64 Parameters[3]; // [rsp+38h] [rbp-180h] BYREF
  _BYTE v4[8]; // [rsp+50h] [rbp-168h] BYREF
  __int64 v5; // [rsp+58h] [rbp-160h]
  int v6; // [rsp+78h] [rbp-140h]
  int v7; // [rsp+80h] [rbp-138h]
  int v8; // [rsp+84h] [rbp-134h]

  memset_0(v4, 0, 0x148uLL);
  DestinationString = 0LL;
  v7 = -1;
  v8 = 0;
  v6 = 5;
  v5 = SmpUniqueProcessId;
  result = SmpStartCsr((__int64)v4);
  v1 = result;
  if ( (int)result < 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Session Manager Core Session failure");
    Parameters[0] = (unsigned __int64)&DestinationString;
    Parameters[1] = v1;
    SmpLogFailure((__int64)"SmpCreateInitialSession", 823, v1);
    SmpTerminate(Parameters, 1u, 2u);
    __debugbreak();
  }
  return result;
}
